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
int main()
{
    int a, ch;
    printf("The choices are: \n1. Insert\n2. Print \n3. Exit\n");
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
        default:
            printf("Wrong Choice!");
        }
    }
}