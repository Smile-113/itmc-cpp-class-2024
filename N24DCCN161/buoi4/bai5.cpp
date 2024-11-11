#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (b>a){
        a=b;
    }
    if(c>a){
        a=c;
    }
    if (d>a){
        a=d;
    }
    cout<<"MAX:"<<a<<endl;
    return 0;
}