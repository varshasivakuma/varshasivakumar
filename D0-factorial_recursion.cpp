#include <iostream>
using namespace std;
int fact(int n) {
   if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);
}
int main() {
   cout<<"Factorial of 5 is "<<fact(5)<<endl;
   cout<<"Factorial of 3 is "<<fact(3)<<endl;
   cout<<"Factorial of 7 is "<<fact(7)<<endl;
   return 0;
}
