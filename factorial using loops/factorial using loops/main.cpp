//
//  main.cpp
//  factorial using loops
//
//  Created by Nisha Ramprasath on 28/10/23.
//
#include<iostream>
using namespace std;

void Factorial(int n) {
    int fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    
    cout << fact;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    Factorial(n); // Call the Factorial function to calculate and display the factorial.
    
    return 0;
}
