#pragma once
#include <iostream>

enum class TreeType
{
    OAK,
    MAPLE,
    PINE,
    BIRCH,
    WILLOW
};

class Tree
{
public:
    Tree(std::string name, TreeType type) :_tree_name(name), _tree_type(type), _tree_id(++_tree_counter) {}
    Tree(const Tree& t) : _tree_name(t._tree_name), _tree_type(t._tree_type), _tree_id(++_tree_counter) {}

    std::string get_name() const
    {
        return _tree_name;
    }
    int get_id() const
    {
        return _tree_id;
    }

    void wind();
private:
    std::string _tree_name{};
    TreeType _tree_type{};
    int _tree_id{};
    static inline int _tree_counter{};
};