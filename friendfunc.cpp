#include<iostream>
using namespace std;
class B;
class A{
    public:
    int a=10;
    int b=11;
    int c;
    friend void swap(A &t);
    void display(){
    cout<<"Value of a="<<a;
    cout<<"value of b="<<b;
}
};
void swap(A &t){
        t.c=t.a;
        t.a=t.b;
        t.b=t.c;
    }
int main(){
    A t;
    swap(t);
    t.display();
    return 0;
}
