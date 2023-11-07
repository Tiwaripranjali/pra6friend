#include<iostream>
using namespace std;

class swap{
    public:
    swap(int a[],int b[]){
        n1=a[5];
        n2=b[5];
    void swap(){
      int temp=n1;
      n1=n2;
      n2=temp;
    }
    private:
    int n1,n2;
    void display(){
    cout<<"Before Swapping:"<<endl;
    cout<<"a[]="
    for(int i=0;i<6;i++){
        cout<<a[i];
    }
    cout<<endl<<"b[]="<<endl;
    for(int i=0;i<6;i++){
        cout<<b[i];
    }
    swap(s1,s2);
    cout<<"Before Swapping:"<<endl;
    cout<<"a[]="
    for(int i=0;i<6;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl<<"b[]="<<endl;
    for(int i=0;i<6;i++){
        cout<<b[i]<<endl;
        
    }
    }
    
    friend void swap(swap &s1,swap &s2);
};
int main(){
    int a[]={1,89,89,9,50};
    int b[]={45,1 20,69,40};
    void swap(swap &s1, swap &s2){
    int temp=s1.n1;
    s1.n1=s1.n2;
    s1.n2=temp;
    
    temp=s2.n1;
    s2.n1=s2.n2;
    s2.n2=temp;
    }
    
    return 0;
}
}
