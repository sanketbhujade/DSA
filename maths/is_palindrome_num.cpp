#include<bits/stdc++.h>
using namespace std;
bool is_pal_num(int j)
{
    int rev=0;
    int n=j;
    while(n>0)
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }
    return (rev==j);

}
int main()
{   int n;
    cout<<"enter number\n"<<endl;
    cin>>n;
    cout<<is_pal_num(n); //0 means not and 1 means palindrome
    return 0;
}
