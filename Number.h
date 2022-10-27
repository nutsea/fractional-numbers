#pragma once

class Number{
    private: 
        int a;
        int b;
        int c;
        int n;
    public:
        void setA(int);
        void setB(int);
        void setC(int);
        Number operator+(Number);
        Number operator-(Number);
        Number operator*(Number);
        Number operator/(Number);
        Number operator=(Number);
        bool operator==(Number);
        bool checkMinus();
        void changeSign();
        int nod();
        void incorrect();
        void correct();
        void reset();
        double getA();
        double getB();
        double getC();
        void show();
        Number(void);
        Number(int, int, int);
        ~Number(void);
};