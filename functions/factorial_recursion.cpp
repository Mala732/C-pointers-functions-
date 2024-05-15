#include <iostream>

using namespace std;

int factorial(int n){
    int fact;
    // Base case: factorial of 0 and 1 is 1
    if (n == 0 || n == 1)
        return 1;
    // Recursive code: n! = n*(n-1)!
    else
        return(n*factorial(n-1));

}

int main(){
    int N,fact;
    cout << "Enter the value for N: ";
    cin >> N;
    fact = factorial(N);
    cout << "Factorial of "<< N << " is "<< fact << endl;
    return 0;
}