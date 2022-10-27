#include "Number.h"
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    Number Result(0, 0, 0);
    int a, b, c;
    cout << endl << "First num: " << endl;
    cout << "Integer part = ";
    cin >> a;
    cout << "Numerator = ";
    cin >> b;
    cout << "Denominator = ";
    cin >> c;
    while (c == 0){
        cout << "\nDenominator can't be 0\nNew value = ";
        cin >> c;
    }
    cout << endl;
    Number First(a, b, c);
    cout << "Second num: " << endl;
    cout << "Integer part = ";
    cin >> a;
    cout << "Numerator = ";
    cin >> b;
    cout << "Denominator = ";
    cin >> c;
    while (c == 0){
        cout << "\nDenominator can't be 0\nNew value = ";
        cin >> c;
    }
    cout << endl;
    Number Second(a, b, c);
    First.incorrect();
    Second.incorrect();
    if (First == Second) cout << "Nums are equal\n\n";
    else cout << "Nums are not equal\n\n";
    cout << "Add: ";
    Result = First + Second;
    Result.correct();
    Result.show();
    Result.reset();
    cout << "Subtract: ";
    Result = First - Second;
    Result.correct();
    Result.show();
    Result.reset();
    cout << "Multiply: ";
    Result = First * Second;
    Result.correct();
    Result.show();
    Result.reset();
    if (a != 0 || b != 0){
    cout << "Divide: ";
        Result = First / Second;
        Result.correct();
        Result.show();
        Result.reset();
    }
    else cout << "You can't divide by 0\n\n";
    First.~Number();
    Second.~Number();
    Result.~Number();
}