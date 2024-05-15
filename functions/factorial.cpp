#include <iostream>

using namespace std;

int factorial(int n){
    int fact;
    for (int i = 0; i <= n; i++){
        if (i == 0)
            fact = 1;

        else
            fact = fact*i;
    }
    return fact;
}

int main(){
    int N,fact;
    cout << "Enter the value for N: ";
    cin >> N;
    fact = factorial(N);
    cout << "Factorial of "<< N << " is "<< fact << endl;
    return 0;
}