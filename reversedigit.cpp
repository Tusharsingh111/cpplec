#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    while(num!=0){
        int ld = num%10;
        sum*=10;
        sum+=ld;
        num=num/10;
    }
    cout<<sum;
}