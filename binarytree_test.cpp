//
//  binarytree_test.cpp
//  Cmpt258
//
//  Created by Natalie McGovern on 12/7/18.
//  Copyright © 2018 Natalie McGovern. All rights reserved.
//

#include "binarytree.hpp"
#include <iostream>
using namespace std;

int main()
{
    BinaryTree tree;
    
    tree.insert(10);
    tree.insert(2);
    tree.insert(5);
    tree.insert(19);
    tree.insert(13);
    tree.insert(8);
    tree.insert(3);
    tree.insert(7);

    cout << "Traverse In Order:" << endl;
    tree.traverseInOrder();
    cout << endl;

    cout << "Traverse Pre Order:" << endl;
    tree.traversePreOrder();
    cout << endl;

    cout << "Traverse Post Order:" << endl;
    tree.traversePostOrder();
    cout << endl;
    
    cout << "Node Count: " << tree.count() << endl;
    cout << "Leaf Count: " << tree.countLeaf() << endl;
    cout << "Height: " << tree.height() << endl;
}
