#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    while(num!=0){
        int ld = num%10;
        num=num/10;
        sum+=ld;
    }
    cout<<sum;
}