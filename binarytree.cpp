//
//  binarytree.cpp
//  Cmpt258
//
//  Created by Natalie McGovern on 12/7/18.
//  Copyright © 2018 Natalie McGovern. All rights reserved.
//

#include "binary_hw.hpp"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree()
{
    root = NULL;
}

BinaryTree::~BinaryTree()
{
    destroy(root);
}

bool BinaryTree::search(int data)
{
    return search(data, root);
}

void BinaryTree::insert(int data)
{
    insert(data, root);
}

void BinaryTree::traverseInOrder()
{
    traverseInOrder(root);
}

void BinaryTree::traversePreOrder()
{
    traversePreOrder(root);
}

void BinaryTree::traversePostOrder()
{
    traversePostOrder(root);
}

void BinaryTree::destroy(Node *tempNode)
{
    if (tempNode)
    {
        destroy(tempNode->left);
        destroy(tempNode->right);
        delete tempNode;
    }
}

bool BinaryTree::search(int data, Node *tempNode)
{
    if (!tempNode)
        return false;
    if (data == tempNode->data)
        return true;
    else if (data < tempNode->data)
        return search(data, tempNode->left);
    else
        return search(data, tempNode->right);
}

void BinaryTree::insert(int data, Node* &tempNode)
{
    if (!tempNode)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        tempNode = newNode;
    }
    else if (data < tempNode->data)
        insert(data, tempNode->left);
    else
        insert(data, tempNode->right);
}

void BinaryTree::traverseInOrder(Node *tempNode)
{
    if (tempNode)
    {
        traverseInOrder(tempNode->left); // left
        cout << tempNode->data << endl; // root
        traverseInOrder(tempNode->right);; // right
    }
}

void BinaryTree::traversePreOrder(Node *tempNode)
{
    if (tempNode)
    {
        cout << tempNode->data << endl; // root
        traversePreOrder(tempNode->left); // left
        traversePreOrder(tempNode->right);; // right
    }
}

void BinaryTree::traversePostOrder(Node *tempNode)
{
    if (tempNode)
    {
        traversePostOrder(tempNode->left); // left
        traversePostOrder(tempNode->right);; // right
        cout << tempNode->data << endl; // root
    }
}

int BinaryTree::count(Node *tempNode)
{
    if (!tempNode)
        return 0;
    
    int num = 1;
    num += count(tempNode->left);
    num += count(tempNode->right);
    
    return num;
}

int BinaryTree::count()
{
    return count(root);
}

int BinaryTree::countLeaf(Node *tempNode)
{
    if (!tempNode)
        return 0;
    else if (!tempNode->left && !tempNode->right)
        return 1;
    else
        return countLeaf(tempNode->left) + countLeaf(tempNode->right);
}

int BinaryTree::countLeaf()
{
    return countLeaf(root);
}

int BinaryTree::height(Node *tempNode)
{
    if (!tempNode)
        return 0;
    else
    {
        if (height(tempNode->left) > height(tempNode->right))
            return height(tempNode->left) + 1;
        else
            return height(tempNode->right) + 1;
    }
}

int BinaryTree::height()
{
    return height(root);
}

