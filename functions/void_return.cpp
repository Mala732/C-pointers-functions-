#include <iostream>

using namespace std;

void factorial(int n){
    int fact;
    for (int i = 0; i <= n; i++){
        if (i == 0)
            fact = 1;

        else
            fact = fact*i;
    }
    cout << fact;
}

int main(){
    int m = 10;
    factorial(m);
    return 0; 
}