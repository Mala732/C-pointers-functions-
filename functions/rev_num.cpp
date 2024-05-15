#include <iostream>
using namespace std;

int main(){
    int N, rev = 0, digit;
    cout << "Enter number : ";
    cin >> N;

    while( N != 0){
        digit = N % 10;
        N = N / 10;
        rev = rev*10 + digit;
        //cout << N;
    }
    cout << rev;
    
}