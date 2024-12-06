#include <iostream>
using namespace std;
int main() {
    cout<<"*******SIMPLE CALCULATOR*******"<<endl;
    float a,b;
    int o;
    cout<<"Enter a number= ";
    cin>>a;
    cout<<"Enter a number= ";
    cin>>b;
    while(true){
    cout<<"Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit"<<endl;
    cin>>o;
    if(o==1)
    cout<<"Sum= "<<a+b<<endl;
    else if(o==2)
    cout<<"Difference= "<<a-b<<endl;
    else if(o==3)
    cout<<"Product= "<<a*b<<endl;
    else if(o==4)
    cout<<"Quotient= "<<a/b<<endl;
    else
    break;}
    return 0;
}
