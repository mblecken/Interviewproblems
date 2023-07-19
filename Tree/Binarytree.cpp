
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct node {
    char data;
    struct node* left;
    struct node* right;
};

struct node* newNode(char data)
{
    // Allocate memory for new node
    struct node* node
        = (struct node*)malloc(sizeof(struct node)); //malloc -  dynamic memory
 
    node->data = data;
 
    // Initialize left and
    // right children as NULL
    node->left = NULL;
    node->right = NULL;
    return (node);
}


//Write a method to check if a node exists in a binary tree or not. If the node exists then return true otherwise return false.

bool nodeExists(struct node* node, char node2){

    if(node != NULL){
        if(node->data == node2){
            return true;
        }
        //returns true but still goes back in the loop and continues on normally, why?
        nodeExists(node->left, node2);

        nodeExists(node->right, node2);
    }
    return false;
}

int Finddepth(node* node){ //root node
    if(node == NULL){
        return 0;
    }
    else{
         int leftdepth = Finddepth(node->left);

        int rightdepth = Finddepth(node->right);

        if(leftdepth > rightdepth){
            return leftdepth + 1;
        }
        else{
            return rightdepth + 1;
        }
    }
        
        
}

void TraverseTree(struct node* node){
    if(node != NULL){
        
        TraverseTree(node->left);
        cout << node->data << " ";
        TraverseTree(node->right);
    }
    else{
        cout << " ";
    }
}

int main(){

    struct node* root = newNode('A');
    root->left = newNode('B');
    root->right = newNode('C');

    root->left->left = newNode('D');
    root->left->right = newNode('E');
    root->right->left = newNode('F');
    root->left->left->right = newNode('G');

    
    cout << "Depth is :" << Finddepth(root) << ", Traversing tree: ";
    TraverseTree(root);

    cout << "Is Node D in the tree?: " << nodeExists(root, 'D') << " ";
    

    



}