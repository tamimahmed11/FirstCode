#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int l1,l2,l3;
        cin>>l1>>l2>>l3;
        if((l1==l2 && l3%2==0)||(l2==l3 && l1%2==0)|| (l3==l1 && l2%2==0) ||(l1+l2==l3)||(l2+l3==l1) || (l1+l3==l2))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}