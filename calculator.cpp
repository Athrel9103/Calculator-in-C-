#include <iostream>
#include "calculator.h"

using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    char c;
    cin >> c;

    int result;
    
    switch(c){
    case '+':
        result = add(a,b);
        cout << result << endl;
        break;
    case '-':
        result = subtract(a,b);
        cout << result << endl;
        break;
    case '*':
        result = multiply(a,b);
        cout << result << endl;
        break;
    case '/':
        result = divide(a,b);
        cout << result << endl;
        break;
    default:
        cout << "Inputs not valid" << endl;
    }
    
}