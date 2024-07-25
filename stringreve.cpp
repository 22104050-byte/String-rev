#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int i,j;
    cout<<"enter string";
    cin>>s;
    int n=s.length();
    for ( i = 0,j=n-1; i < n/2,j>n/2; i++,j--)
    {
        swap(s[i],s[j]);
    }
  cout<<s;
}
