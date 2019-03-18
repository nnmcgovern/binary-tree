//
//  binarytree.hpp
//  Cmpt258
//
//  Created by Natalie McGovern on 12/7/18.
//  Copyright © 2018 Natalie McGovern. All rights reserved.
//

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class BinaryTree
{
private:
    Node *root;
    void destroy(Node*);
    bool search(int, Node*);
    void insert(int, Node*&);
    void traverseInOrder(Node*);
    void traversePreOrder(Node*);
    void traversePostOrder(Node*);
    int count(Node*);
    int countLeaf(Node*);
    int height(Node*);
public:
    BinaryTree();
    ~BinaryTree();
    bool search(int);
    void insert(int);
    void traverseInOrder();
    void traversePreOrder();
    void traversePostOrder();
    int count();
    int countLeaf();
    int height();
};
