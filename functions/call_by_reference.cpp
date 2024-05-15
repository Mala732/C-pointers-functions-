#include <iostream>

using namespace std;

void swapx(int&, int&);

int main(){
    int a = 10, b = 20;

    swapx(a,b);

    cout<< "In the caller:\n";
    cout <<"a = "<< a << " b = " << b << endl;

    return 0;
}

void swapx(int& x, int& y)
{
    int t;

    t = x;
    x = y;
    y = t;

    cout << "In the function:\n";
    cout <<"x = "<< x << " y = "<< y << endl;


}