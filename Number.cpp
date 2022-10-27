#include "Number.h"
#include <iostream>
#include <cmath>
using namespace std;

Number::Number(void){

}

Number::Number(int a, int b, int c){
    this -> a = a;
    this -> b = b;
    this -> c = c;
}

Number::~Number(void){

}

void Number::setA(int a){
    this -> a = a;
}

void Number::setB(int b){
    this -> b = b;
}

void Number::setC(int c){
    this -> c = c;
}

Number Number::operator+(Number N){
    Number temp;
    if (c != N.c){ 
        int q;
        b *= N.c;
        q = c;
        c *= N.c;
        N.b *= q;
        N.c *= q;
    }
    temp.a = 0;
    temp.b = b + N.b;
    temp.c = c;
    return temp;
}

Number Number::operator-(Number N){
    Number temp;
    if (c != N.c){
        int q;
        b *= N.c;
        q = c;
        c *= N.c;
        N.b *= q;
        N.c *= q;
    }
    temp.a = 0;
    temp.b = b - N.b;
    temp.c = c;
    return temp;
}

Number Number::operator*(Number N){
    Number temp;
    temp.a = 0;
    temp.b = b * N.b;
    temp.c = c * N.c;
    if (temp.b < 0 && temp.c < 0){
        temp.b = abs(temp.b);
        temp.c = abs(temp.c);
    }
    if (temp.b > 0 && temp.c < 0){
        temp.b = -temp.b;
        temp.c = abs(temp.c);
    }
    return temp;
}

Number Number::operator/(Number N){
    Number temp;
    temp.a = 0;
    temp.b = b * N.c;
    temp.c = c * N.b;
    if (temp.b < 0 && temp.c < 0){
        temp.b = abs(temp.b);
        temp.c = abs(temp.c);
    }
    if (temp.b > 0 && temp.c < 0){
        temp.b = -temp.b;
        temp.c = abs(temp.c);
    }
    return temp;
}

Number Number::operator=(Number N){
    a = N.a;
    b = N.b;
    c = N.c;
    return *this;
}

bool Number::operator==(Number N){
    if (a == N.a && b == N.b && c == N.c) return true;
    else return false;
}

bool Number::checkMinus(){
    if (a != 0 && a < 0) return true;
    if (a == 0 && b < 0) return true;
    else return false;
}

void Number::changeSign(){
    if (getA() != 0) setA(-(getA()));
    else setB(-(getB()));
}

int Number::nod(){
    int temp = 0;
    int temp2 = abs(b);
    for (int i = temp2; i > 0; i--){
        if (temp == 0){
            if (temp2 % i == 0 && c % i == 0) 
            temp = i;
        }
    }
    return temp;
}

void Number::incorrect(){
    if (c < 0){
        if (b > 0){
            if (a != 0) a = -a;
            else b = -b;
        }
        else b = -b;
        c = abs(c);
    }
    if (a > 0) b = b + (a * c);
    if (a < 0) b = - (b + (abs(a) * c));
    a = 0;
}

void Number::correct(){
    int temp, temp2, temp3;
    if (b != 0 && c != 0){
        temp = b / c;
        a = temp;
    }
    if (a != 0){
        temp2 = c * a;
        b -= temp2;
        b = abs(b);
    }
    if (b != 0){
        temp3 = nod();
        b /= temp3;
        c /= temp3;
    }
}

void Number::reset(){
    a = 0;
    b = 0;
    c = 0;
}

double Number::getA(){
    return a;
}

double Number::getB(){
    return b;
}

double Number::getC(){
    return c;
}

void Number::show(){
    if (b != 0 && c != 0){
        if (a != 0) cout << a << " целых ";
        cout << b << "/" << c << endl << endl;
    }
    else cout << a << endl << endl;
}