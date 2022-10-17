#include <iostream>
using namespace std;
long long digitinnums(long long n)
{
   long long dig=1;           //>>>>>>>>>>>>long long is used to widen range
   for(long long i=n;i>9;i/=10)
     dig++;
     
     return dig;
}
long long dignum_RECURSIVE(long long n) //with recursive code
{
   if(n<9)
   return 1;
   else return 1+digitinnums(n/10);
}
int main() {
    long long n;
   cout<<"enter number"<<endl;
   cin>>n;
   cout<<"digits in number are="<<digitinnums(n);

    return 0;
}
