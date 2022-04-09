//Program to demonstrate the concept of constructor overloading
#include<iostream>
using namespace std;

class overloading {
    public :
    int sum(int a){
        return a;
    }
    int sum(int a, int b){
        return a+b;
    }
    int sum(float a, float b, float c){
        return a+b+c;
    }
};
int main(){
    overloading O;
    cout<<O.sum(10)<<endl;
    cout<<O.sum(10,20)<<endl;
    cout<<O.sum(2.5, 4.5, 5.5);
    return 0;
}
