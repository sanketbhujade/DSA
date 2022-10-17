#include <iostream>
using namespace std;
long long digitinnums(long long n)
{
   long long dig=1;           //>>>>>>>>>>>>long long is used to widen range
   for(long long i=n;i>9;i/=10)
     dig++;
     
     return dig;
}

int main() {
    long long n;
   cout<<"enter number"<<endl;
   cin>>n;
   cout<<"digits in number are="<<digitinnums(n);

    return 0;
}
