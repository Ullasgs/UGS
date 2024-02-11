#include <iostream>
using namespace std;

class def
{
    int x, y;

public:
    def();
    def(int, int);
    
    void show();
};

def::def()
{
    x = 0;
    y = 0;
}
def::def(int a, int b)
{
    x = a;
    y = b;
}
void def::show()
{
    cout << "x = " << x << " y = " << y << endl;
}
int main()
{
    def q, w(2, 4);
    q.show();
    w.show();
}