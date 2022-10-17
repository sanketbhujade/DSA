// factorial of 5 = 5*4*3*2*1=120  factorial of 0 is 1
#include<bits/stdc++.h>
using namespace std;
int fact_recursive(int n)
{
    if(n==0)
    return 1;
    
    return n*(fact_recursive(n-1));
}////////////////////////////////////////WITH RECURSIVE APPROACH
int fact_normal(int n)
{
    int factorial=1;
    for(int i=n;i>0;i--)
    {
        factorial*=i;
    }
    
    return factorial;
}////////////////////////////////////////WITH NORMAL APPROACH
int main()
{   int n;
    cout<<"enter number\n"<<endl;
    cin>>n;
    cout<<fact_recursive(n); 
    cout<<"\n"<<fact_normal(n);
    return 0;
}
