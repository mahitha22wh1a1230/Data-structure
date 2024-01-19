#include <stdio.h>
#include <stdlib.h>

// Define the structure for a BST node
struct Node {
int data;
struct Node* left;
struct Node* right;
};

// Function to create a new node
struct Node* createNode(int key) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = key;
newNode->left = newNode->right = NULL;
return newNode;
}

// Function to insert a key into the BST
struct Node* insert(struct Node* root, int key) {
if (root == NULL) {
return createNode(key);
}

if (key < root->data) {
root->left = insert(root->left, key);
} else if (key > root->data) {
root->right = insert(root->right, key);
}

return root;
}

struct Node* findMin(struct Node* node)
{
while(node->left !=NULL)
{
node = node->left;
}
return node;
}
/*
struct Node* insertNode(struct Node* root, int key)
{
if (root==NULL)
return root;
}
if (key < root->data)
{
root->left = insertNode(root->left, key);

}
else (key > root->data)
{
root->right = insertNode(root->right, key);

}
else {
return root;
} */
void inorderTraversal(struct Node* root) {
if (root != NULL) {
inorderTraversal(root->left);
printf("%d ", root->data);
inorderTraversal(root->right);
}
}

int main() {
struct Node* root = NULL;
int n, key;

// Get the number of nodes from the user
printf("Enter the number of nodes: ");
scanf("%d", &n);

// Insert nodes into the BST based on user input
printf("Enter the key values:\n");
for (int i = 0; i < n; ++i) {
scanf("%d", &key);
root = insert(root, key);
}


struct Node* result = insert(root, key);
printf("Enter the key to insert: ");
scanf("%d", &key);

printf("Inorder Traversal before insertin: ");
inorderTraversal(root);
printf("\n");

root = insert(root, key);

printf("Inorder Traversal after insertion of %d: ", key);
inorderTraversal(root);
printf("\n");

return 0;
}
