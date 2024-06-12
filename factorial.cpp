#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER THE NUMBER";
    cin>>num;
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;

    }
    cout<<fact;
}