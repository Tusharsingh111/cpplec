// #include <iostream>
// using namespace std;
 
// class GfG {
// public:
//     static int i;
 
//     GfG(){
//         // Do nothing
//     };
// };
//  int GfG :: i=1;
// int main()
// {
//     GfG obj1;
//     GfG obj2;
//     obj1.i = 2;
//     obj2.i = 3;
 
//     // prints value of i
//     cout << obj1.i << " " << obj2.i;
// }

// #include <iostream>
// using namespace std;
// class GfG{
//     int i;
//     public:
//     GfG(){
//         i = 0;
//         cout<<"Inside constructor\n";

//     }
//     ~GfG(){
//         cout<<"Inside Destructor\n";
//     }
// };
// int main(){
//     int x = 0;
//     if(x==0){
//         GfG obj;
//     }
//     cout<<"End of main\n";
// }
#include<iostream>
using namespace std;
class GfG{
    public:
    static void printMsg(){
        cout<<"Welcome to GfG!";
    }
};
int main(){
    GfG::printMsg();
}