#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to check grade";
    cin>>num;
    if(num<0||num>100){
        cout<<"WRONG NUMBER";
    }else if(num>=0&&num<50){
        cout<<"FAIL";
    }else if(num>=50 && num<60){
        cout<<"D Grade";
    }else if(num>=80 && num<90){
        cout<<"B Grade";
    }
}