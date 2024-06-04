#include<iostream>
using namespace std;
int main(){
    //si = prt/100;
    float p;
    float r;
    float t;
    cin>>p;
    cin>>r;
    cin>>t;
    float si = (p*r*t)/100;
    cout<<"the si is: "<<si;
}