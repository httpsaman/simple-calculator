#include<iostream>
using namespace std;
int main(){
    char op;
    float num1,num2;
cout<<"enter an operator:+,-,*,/";
cin>>op;
cout<<"enter two variables";
cin>>num1>>num2;
switch(op){
case '+':
cout<<num1<<"+"<<num2<<"="<<num1+num2;
break;
case '-':
cout<<num1<<"-"<<num2<<"="<<num1-num2;
break;
case '*':
cout<<num1<<"*"<<num2<<"="<<num1*num2;
break;
case '/':
cout<<num1<<"/"<<num2<<"="<<num1*num2;
break;
default:
cout<<"show error";
break;
}
return 0;
}
