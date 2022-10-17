
#include <iostream>
using namespace std;
int optimized(int n)
{
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    return (n*(n+1))/2;   // in single turn
}   //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
int naturalnum_sum(int n)
{   int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int main() {
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<"sum is "<< naturalnum_sum(n)<<"\n output with optimal solution"<<optimized(n);

return 0;
    
}
