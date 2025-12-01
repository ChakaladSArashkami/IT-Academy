#include <iostream>
#include <thread>
#include <mutex>
#include <random>

const int size{ 100 };
int sum{}, max_num{ 0 }, min_num{ size + 1 };
std::mutex mutex_sum, mutex_max, mutex_min;

int random_int(int min, int max);
void int_sum(const int arr[], int size);
void int_max(const int arr[], int size);
void int_min(const int arr[], int size);



int main()
{
    int numbers[size]{};

    for (int i = 0;i < 100;++i)
    {
        numbers[i] = random_int(1, size);
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    std::thread threadSum(int_sum, numbers, size);
    std::thread threadMax(int_max, numbers, size);
    std::thread threadMin(int_min, numbers, size);

    threadSum.join();
    threadMax.join();
    threadMin.join();

    std::cout << "Sum: " << sum << std::endl
              << "Max: " << max_num << std::endl
              << "Min: " << min_num << std::endl;
}



int random_int(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

void int_sum(const int arr[], int size)
{
    int func_sum{};
    for (int i = 0;i < size;++i)
        func_sum += arr[i];

    std::lock_guard<std::mutex> lock(mutex_sum);
    sum = func_sum;
}

void int_max(const int arr[], int size)
{
    int func_max{ 0 };
    for (int i = 0;i < size;++i)
        if (func_max < arr[i])func_max = arr[i];

    std::lock_guard<std::mutex> lock(mutex_min);
    max_num = func_max;
}

void int_min(const int arr[], int size)
{
    int func_min{ size + 1 };
    for (int i = 0;i < size;++i)
        if (func_min > arr[i])func_min = arr[i];

    std::lock_guard<std::mutex> lock(mutex_min);
    min_num = func_min;
}