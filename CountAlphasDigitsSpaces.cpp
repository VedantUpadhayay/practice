#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int cnt(int a,int d,int s)
{
    char ch;
    cout<<"Enter the string :"<<endl;
    ch=cin.get();
    while(ch!='\n')
    {
        if(ch>='0' and ch<='9')
        d++;
        else if((ch>='a' or ch>='A') and (ch<='z' or ch<='Z'))
        a++;
        else if(ch==' ' or ch=='\t')
        s++;
        ch=cin.get();
    }
    cout<<"The number of alphabets are :"<<a<<endl;
    cout<<"The number of digits are :"<<d<<endl;
    cout<<"The number of spaces are :"<<s<<endl;
  return 0;
}
int main()
{
    int a=0;
    int d=0;
    int s=0;
    cnt(a,d,s);
    return 0;
}