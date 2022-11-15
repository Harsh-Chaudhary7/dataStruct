
node* createNode() {
	node* newNode = new node();
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

//Traversing Tree

//Pre-order
void preOrder(node *newNode) {
	if (newNode == NULL)
		return;

	cout << newNode->data << " ";
	preOrder(newNode->left);
	preOrder(newNode->right);

}

//Post-order
void postOrder(node* newNode) {
	if (newNode == NULL)
		return;

	postOrder(newNode->left);
	postOrder(newNode->right);
	cout << newNode->data << " ";
}

//In-order
void inOrder(node* newNode) {
	if (newNode == NULL)
		return;

	inOrder(newNode->left);
	cout << newNode->data << " ";
	inOrder(newNode->right);
}

//BFS Breadth-First Search
void bfs(node* newNode) {
	if (newNode == NULL)
		return;

	queue<node*> q;

	q.push(newNode);

	while (!q.empty()) {

		node* N = q.front();
		cout << N->data << " ";
		q.pop();

		if (N->left != NULL)
			q.push(N->left);
		if (N->right != NULL)
			q.push(N->right);

	}

}

//Inserting new node
node* insertNode() {
	node* temp = createNode();
	int val;
	cin >> val;
	if (val == -1)
		return 0;
	temp->data = val;
	// cout << "Enter left of" << val << ": " << endl;
	temp->left = insertNode();
	// cout << "Enter right of" << val << ": " << endl;
	temp->right = insertNode();
	return temp;
}