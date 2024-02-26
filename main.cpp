#include<iostream>
using namespace std;

int main(){
    int a = 6,b = 9;
    cout<< "Before Swapping: a = "<< a << ", b = " << b <<"\n";
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<< "After Swapping: a = "<< a << ", b = " << b << endl;
}