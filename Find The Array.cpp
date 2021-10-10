#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        int s;
        cin>>s;
        int count=0;
        int sum=0;
        int a=1;
      while(sum<s)
      {
          sum+=a;
          a+=2;
          count++;
      }
        cout<<count<<endl;
    }

}

