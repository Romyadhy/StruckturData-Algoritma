#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insert(int insertId){
	root = insertRecursive(root, insertId);
}

Node *BinaryTree::insertRecursive(Node *currentRoot, int insertId){
	
	if(currentRoot == NULL){
		currentRoot = new Node();
		currentRoot->Id = insertId;
		return currentRoot;
	}
	
	if(insertId < currentRoot->Id){
		currentRoot->left = insertRecursive(currentRoot->left, insertId);
	}
	
	else if(insertId > currentRoot->Id){
		currentRoot->right = insertRecursive(currentRoot->right, insertId);
	}
	
	return currentRoot;
}

void BinaryTree::inOrder(){
	inOrderRecursive(root);
}

void BinaryTree::inOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		inOrderRecursive(currentRoot->left);
		cout<< currentRoot->Id<<", ";
		inOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::preOrder(){
	preOrderRecursive(root);
}

void BinaryTree::preOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		cout<<currentRoot->Id<<", ";
		preOrderRecursive(currentRoot->left);
		preOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::postOrder(){
	postOrderRecursive(root);
}

void BinaryTree::postOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		postOrderRecursive(currentRoot->left);
		postOrderRecursive(currentRoot->right);
		cout<<currentRoot->Id<<", ";
	}
}

Node *BinaryTree::searchVal(Node *node,int value){
	if(node == NULL || node->Id == value){
		return node;
	}
	
	if(value >  node->Id){
		return searchVal(node->right, value);
	}
	
	return searchVal(node->left, value);
	
}

Node *BinaryTree::search(int value){
	Node *find = searchVal(root, value);
	if(find == NULL){
		cout<<"Value with value: " << value << " , not found"<<endl;
	}
	else{
		cout<<"Value with value: " << value <<" , founded in tree"<<endl;
	}
	return find;
}

Node *BinaryTree::findMin(){
	Node *node = root;
	while(node != NULL && node->left != NULL){
		node = node->left;
	}
	
	if(node != NULL){
		cout << "The Minimum value in this tree is: "<< node->Id <<endl;
	}
	else{
		cout << "The tree is empty"<<endl;
	}
	return node;
}

Node *BinaryTree::findMax(){
	Node *node = root;
	while(node != NULL && node->right != NULL){
		node = node->right;
	}
	if(node != NULL){
		cout << "The Maximun value in this tree is: "<< node->Id <<endl;
	}
	else{
		cout <<"The tree is empty";
	}
	return node;
}


