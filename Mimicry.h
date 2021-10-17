//
// Created by ASUS on 14.10.2021.
//

#ifndef LAB_4_EX_1_VAR_11_CPP_MIMICRY_H
#define LAB_4_EX_1_VAR_11_CPP_MIMICRY_H
#include <iostream>
using namespace std;

class B1 {
private:
    string text_b1 = "text_b1";
public:
    B1(){
        cout<<"Викликано конструктор класа B1\n";
    }
    ~B1(){
        cout<<"Викликано деструктор класа B1\n";
    }
    void show(){
        cout << text_b1 << endl;
    }
};

class B2 {
private:
    string text_b2 = "text_b2";
public:
    B2(){
        cout<<"Викликано конструктор класа B2\n";
    }
    ~B2(){
        cout<<"Викликано деструктор класа B2\n";
    }
    void show(){
        cout << text_b2 << endl;
    }
};

class D1 : private B1, public B2 {
public:
    D1(){
        cout<<"Викликано конструктор класа D1\n";
    }
    ~D1(){
        cout<<"Викликано деструктор класа D1\n";
    }
};

class D2 : public B1, private B2{
public:
    D2(){
        cout<<"Викликано конструктор класа D2\n";
    }
    ~D2(){
        cout<<"Викликано деструктор класа D2\n";
    }
};

class D3 : private D1, public D2{
public:
    D3(){
        cout<<"Викликано конструктор класа D3\n";
    }
    ~D3(){
        cout<<"Викликано деструктор класа D3\n";
    }
};
#endif //LAB_4_EX_1_VAR_11_CPP_MIMICRY_H
