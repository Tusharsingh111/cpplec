#include <iostream>
using namespace std;
int max(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}
int main(){
    int a = 10;
    int b = 20;
    int m = max(a,b);
    cout<<"Maximum is : "<<m;
    return 0;
}