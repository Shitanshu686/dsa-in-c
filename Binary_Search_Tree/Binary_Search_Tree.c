#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the BST
struct Node *insert(struct Node *root, int value)
{
    // If the tree/subtree is empty, return a new node
    if (root == NULL)
    {
        return createNode(value);
    }

    // Otherwise, recur down the tree
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }

    // Return the unchanged node pointer
    return root;
}

// Function to search for a value in the BST
struct Node *search(struct Node *root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key)
    {
        return root;
    }

    // Key is smaller than root's data
    if (key < root->data)
    {
        return search(root->left, key);
    }

    // Key is greater than root's data
    return search(root->right, key);
}

// Helper function to find the minimum value node in a subtree
struct Node *findMin(struct Node *root)
{
    struct Node *current = root;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

// Function to delete a node from the BST
struct Node *deleteNode(struct Node *root, int value)
{
    if (root == NULL)
    {
        return root;
    }

    // Traverse to locate the target node
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        // Node found: handle the 3 deletion cases

        // Case 1 & 2: Node has no children or only 1 child
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        // Case 3: Node has two children
        // Get the inorder successor (smallest in the right subtree)
        struct Node *temp = findMin(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Function to print the tree in sorted order (In-order traversal)
void inorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Driver code to demonstrate the operations
int main()
{
    struct Node *root = NULL;

    // 1. Insert values
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("In-order traversal (sorted values): ");
    inorderTraversal(root);
    printf("\n");

    // 2. Search a value
    int target = 40;
    struct Node *searchResult = search(root, target);
    if (searchResult != NULL)
    {
        printf("Element %d found in the BST.\n", target);
    }
    else
    {
        printf("Element %d not found in the BST.\n", target);
    }

    // 3. Delete a value
    printf("Deleting 20 from the tree...\n");
    root = deleteNode(root, 20);
    printf("In-order traversal after deletion: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
