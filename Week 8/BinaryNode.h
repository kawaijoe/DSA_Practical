//
// Created by Joe Kawai on 10/1/18.
//

#ifndef WEEK_8_BINARYNODE_H
#define WEEK_8_BINARYNODE_H

typedef int ItemType;

struct BinaryNode {
    ItemType   item;	// data item
    BinaryNode *left;	// pointer pointing to left subtree
    BinaryNode *right;	// pointer pointing to right subtree
};

#endif //WEEK_8_BINARYNODE_H
