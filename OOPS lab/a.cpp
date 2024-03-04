#include <iostream>
using namespace std;
class ex
{
    int **ptr;

public:
    ex()
    {
        ptr = new int *[5];
        for (int i = 0; i < 5; i++)
            ptr[i] = new int[5];
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                ptr[i][j] = 5; // initializing
    }
    void display()
    {
        cout << "Value at newly allocated memory is\n";
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
                cout << ptr[i][j] << "\t";
            cout << "\n";
        }
    }
};
int main()
{
    ex e1;
    e1.display();
}