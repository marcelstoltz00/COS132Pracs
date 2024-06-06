#include "BinaryTree.h"
using namespace std;

    void BinaryTree::insertNode(int data)
    {
        Node *newN = new Node(data);
        if (root == NULL)
        {
            root = newN;
        }
        else
        {
            BinaryTree::recursiveInsert(root, newN);
        }
    };
    void BinaryTree::recursiveInsert(Node *curr, Node *newNode)
    {

        if (newNode->data == curr->data)
        {//lets change this 
        
            cout << "No duplicate insertions are permitted." << endl;
            return;
        }
        if (newNode->data < curr->data)
        {
            if (curr->left == NULL) // we check if we need a new node
            {
                curr->left = newNode;
            }
            else
            {
                BinaryTree::recursiveInsert(curr->left, newNode); // else read rest
            }
        }
        else
        {
            if (curr->right == NULL)
            {
                curr->right = newNode;
            }
            else
            {
                BinaryTree::recursiveInsert(curr->right, newNode); // read rest
            }
        }
    };
    bool BinaryTree::searchNode(int data)
    {

        if (root == NULL)
        {
            cout << "Tree is empty." << endl; // print and then return false
            return false;
        }
        return (BinaryTree::recursiveSearch(root, data));
    };
    bool BinaryTree::recursiveSearch(Node *curr, int data)
    {
        if (curr == NULL)
        {
            cout << "Data not found." << endl;
            return false;
        }
        else
        {
            if (curr->data == data)
            {
                cout << "Current Node value is: " << curr->data << ", the required value is: " << data << endl;
                return true;
            }
            else
            {
                cout << "Current node value is: " << curr->data << "."<<endl;//rest
                if (data < curr->data)
                {
                    cout << "The desired data is less than the current node's value, searching down the left child..." <<endl;

                    return BinaryTree::recursiveSearch(curr->left, data);
                }
                else
                {
                    cout << "The desired data is greater than the current node's value, searching down the right child..." << endl;

                    return BinaryTree::recursiveSearch(curr->right, data);
                }
            }
        }
        return false;//final false
    };
