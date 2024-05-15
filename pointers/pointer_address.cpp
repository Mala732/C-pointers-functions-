#include <bits/stdc++.h>
using namespace std;

int main(){
    int var = 100;

    int* ptr1;

    int** ptr2;

    ptr1 = &var; //stores address of var

    ptr2 = &ptr1; //stores address of the variable storing the address of var(ptr1)

    cout << "value of var: " << var << endl;
    cout << "value of var using single pointer: " << *ptr1 << endl;
    cout << "value of var using double pointer: " << **ptr2 << endl;

    return 0;

}