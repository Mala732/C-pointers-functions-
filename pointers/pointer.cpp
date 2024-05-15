//#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string pet = "cat";
    string* ptr = &pet;

    cout << pet << "\n";

    cout << ptr << "\n"; //returns the address stored in the pointer

    cout << *ptr << "\n"; // returns the value stored at the address stored in the pointer variable

    cout << &ptr << "\n"; // returns address of the pointer
    printf("%s",pet);
    *ptr = "Dog";

    cout << *ptr << "\n";
    
    return 0;

}
