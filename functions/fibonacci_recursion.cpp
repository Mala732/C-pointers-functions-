#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 1)
        return n;
    else
        return fibonacci(n-2)+fibonacci(n-1);
}


int main(){
    int N;
    cout << "Enter value of N: ";
    cin >> N;
    for (int i = 0; i < N; i++){
        cout << fibonacci(i) << " ";
    }
    return 0;
}