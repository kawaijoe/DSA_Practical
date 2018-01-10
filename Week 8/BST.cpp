//
// Created by Joe Kawai on 10/1/18.
//

#include <iostream>
#include "BST.h"

using namespace std;

BST::BST() {
    root = NULL;
}

BinaryNode *BST::search(ItemType target) {
    return search(root, target);
}

BinaryNode *BST::search(BinaryNode *t, ItemType target) {
    if(t == NULL) {
        return NULL;
    } else {
        if(t->item == target) {
            return t;
        } else if(target < t->item) {
            return search(t->left, target);
        } else {
            return search(t->right, target);
        }
    }
}

void BST::insert(ItemType item) {
    insert(root, item);
}

void BST::insert(BinaryNode *&t, ItemType item) {
    if(t == NULL) {
        BinaryNode *newNode = new BinaryNode;
        newNode->item = item;
        newNode->left = NULL;
        newNode->right = NULL;
        t = newNode;
    } else if(item < t->item) {
        insert(t->left, item);
    } else {
        insert(t->right, item);
    }
}

void BST::remove(ItemType target) {
    remove(root, target);
}

void BST::remove(BinaryNode *&t, ItemType target) {

    BinaryNode *current = t;
    BinaryNode *parent = NULL;
    bool isLeftChild = false;
    bool found = false;
    while(( !found ) && ( current != NULL )) {
        if(target == current->item) {
            found = true;
        } else {
            parent = current;
            if(target < current->item) {
                current = current->left;
                isLeftChild = true;
            } else {
                current = current->right;
                isLeftChild = false;
            }
        }
    }

    if(found) {
        // case 1 : node is a leaf
        if(current->left == NULL && current->right == NULL) {
            if(current == t) {
                t = NULL;
            } else if(isLeftChild) {
                parent->left = NULL;
            } else {
                parent->right = NULL;
            }
        } else {
            // case 2 : node has only 1 child
            if(current->left == NULL) {
                if(isLeftChild) {
                    parent->left = current->right;
                } else {
                    parent->right = current->right;
                }
            } else if(current->right == NULL) {
                if(isLeftChild) {
                    parent->left = current->left;
                } else {
                    parent->right = current->left;
                }
            } else {
                // case 3 : node has 2 children
                BinaryNode *successor = current->left;
                while(successor->right != NULL)
                    successor = successor->right;
                int n = successor->item;
                remove(t, n);
                current->item = n;
            }
        }
    }
}

void BST::inorder() {
    if(isEmpty()) {
        cout << "No item found" << endl;
    } else {
        inorder(root);
    }
}

void BST::inorder(BinaryNode *t) {
    if(t != NULL) {
        inorder(t->left);
        cout << t->item << endl;
        inorder(t->right);
    }
}

void BST::preorder() {
    if(isEmpty()) {
        cout << "No item found" << endl;
    } else {
        preorder(root);
    }
}

void BST::preorder(BinaryNode *t) {
    if(t != NULL) {
        cout << t->item << endl;
        preorder(t->left);
        preorder(t->right);
    }
}

void BST::postorder() {
    if(isEmpty()) {
        cout << "No item found" << endl;
    } else {
        postorder(root);
    }
}

void BST::postorder(BinaryNode *t) {
    if(t != NULL) {
        postorder(t->left);
        postorder(t->right);
        cout << t->item << endl;
    }
}

int BST::getHeight() {
    return getHeight(root);
}

int BST::getHeight(BinaryNode *t) {
    if(t == NULL) {
        return 0;
    } else {
        return 1+max(getHeight(t->left), getHeight(t->right));
    }
}

int BST::countNodes() {
    return countNodes(root);
}

int BST::countNodes(BinaryNode *t) {
    if(t == NULL) {
        return 0;
    } else {
        return 1+countNodes(t->left)+countNodes(t->right);
    }
}

bool BST::isBalanced() {
    return isBalanced(root);
}

bool BST::isBalanced(BinaryNode *t) {
    if(t != NULL) {
        if(getHeight(t) < 4) {
            int leftHeight = getHeight(t->left);
            int rightHeight = getHeight(t->right);

            if(abs(leftHeight-rightHeight) <= 1) {
                return true;
            } else {
                return false;
            }
        } else {
            return ( isBalanced(t->left) && isBalanced(t->right));
        }
    } else {
        return true;
    }
}

bool BST::isEmpty() {
    return root == NULL;
}
