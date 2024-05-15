#include <iostream>
using namespace std;

int fibonacci(int n, int &prev, int &curr){
    if(n == 0){
        return;
    }
    int next = prev + curr;
    cout << next
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