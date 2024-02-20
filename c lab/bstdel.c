#include <stdio.h>
typedef struct node *N;
struct node
{
    int data;
    N right, left;
} *root = NULL;

N create(int a)
{
    N new = (N)malloc(sizeof(struct node));
    new->data = a;
    new->right = new->left = NULL;
    return new;
}

N insert(N node, int data)
{
    if (node == NULL)
        return create(data);
    if (data < node->data)
        node->left = insert(node->left, data);
    else
        node->right = insert(node->right, data);
    return node;
}
void inorder(N root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}

void preorder(N root)
{
    if (root != NULL)
    {
        printf("%d \n", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
N min(N node)
{
    N current = node;

    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}
N delete(N root, int data)
{
    if (root == NULL)
    {
        printf(" node not found\n ");

        return;
    }
    if (data < root->data)
    {
        root->left = delete (root->left, data);
    }
    else if (data > root->data)
    {
        root->right = delete (root->right, data);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL)
        {
            N temp = root->right;
            free(root);
            return (temp);
        }
        else if (root->right == NULL)
        {
            N temp = root->left;
            free(root);
            return (temp);
        }
        N temp = min(root->right);
        root->data = temp->data;
        root->right = delete (root->right, temp->data);
    }
    return root;
}
int main()
{
    int a,b,ch;
    printf("The choices are: \n1. Insert\n2. Print \n3. Exit\n 4. Delete \n");
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the element to be inserted : ");
            scanf("%d", &a);
            root = insert(root, a);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            exit(0);
        case 4:
            printf("\nEnter the element to be deleted : ");
            scanf("%d",&b);
            root = delete(root, b);
        default:
            printf("Wrong Choice!");
        }
    }
}