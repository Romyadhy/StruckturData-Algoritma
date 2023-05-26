#include <iostream>
#include <string>
using namespace std;

class Node{
	public:
	int 	Id;
	string	name;
	Node 	*left;
	Node 	*right;
	
	Node(){
		left = right = NULL; 
	}
};

class BinaryTree{
	public:
		Node *root;
		
		void insert(int);
		Node *insertRecursive(Node*, int);// to return the subTree 
		
		void deleteNode(int);
		
		//PREORDER
		void preOrder();
		void preOrderRecursive(Node *currentRoot);
		
		//INORDER
		void inOrder();
		void inOrderRecursive(Node *currentRoot);
		
		//POSTORDER
		void postOrder();
		void postOrderRecursive(Node *currentRoot);
		
		Node *searchVal(Node*, int value);
		Node *search(int);
		
		
		Node *findMin();
		Node *findMax();
		
		BinaryTree(){
			root = NULL;
		}
};