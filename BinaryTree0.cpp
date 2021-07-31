#include<iostream>
using namespace std;
struct node {
	node* leftChild;
	int data;
	node* rightChild;
};

class binaryTree {
private:
	node* root;
	unsigned long int level;
	inline void createNode(node&);
public:
	binaryTree();
	~binaryTree();
	void input(int, int[]);	
};

binaryTree::binaryTree() {
	root = NULL;
	level = 0;
}

binaryTree::~binaryTree() {
	
}

inline void binaryTree::createNode(node& n) {
	n = new node;
	n->leftChild = NULL;
	n->rightChild = NULL;
}

//Take values from sorted array and arrange them in binary tree.....

void binaryTree::input(int s, int a[]) {
	createNode(root);
	node* current = root;
	for(int i = 0; i < s;i++) {
		
	}
	root->data = a[s/2];
}

