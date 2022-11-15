#include<bits/stdc++.h>
using namespace std;

typedef long long int              ll;

#define inp(a, n)                  for(int Ele=0; Ele<(n); Ele++)std::cin>>a[Ele]
#define inps(a, n, sum)            for(int Ele=0; Ele<(n); Ele++){std::cin>>a[Ele]; sum += a[Ele];}
#define out(a, n)                  for(int Ele=0; Ele<(n); Ele++)std::cout<<a[Ele]<<endl
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]


#define mem(x,i) memset((x),(i),sizeof((x)))

struct node {
	int data;
	node* left;
	node* right;
};


//Creating new node
node* createNode(int val) {
	node* newNode = new node();
	if (!newNode) {
		cout << "Memory error" << endl;
		return NULL;
	}

	newNode->data = val;
	newNode->right = newNode->left = NULL;
	return newNode;

}

//Traversing Tree

//Pre-order
void preorder(node *newNode) {
	if (newNode == NULL)
		return;

	cout << newNode->data << endl;
	preorder(newNode->left);
	preorder(newNode->right);

}

//Post-order
void postOrder(node* newNode) {
	if (newNode == NULL)
		return;

	postOrder(newNode->left);
	postOrder(newNode->right);
	cout << newNode->data << endl;
}

//In-order
void inOrder(node* newNode) {
	if (newNode == NULL)
		return;

	inOrder(newNode->left);
	cout << newNode->data;
	inOrder(newNode->right);
}


//Inserting new node
node* insertNode() {

}

void solve() {


}

int main() {
	solve();
	return 0;
}

