#include<bits/stdc++.h>
using namespace std;
int errFlag,i;
string s;
char nextToken;

void F()
{
    if(nextToken == 'i')
        nextToken=s[++i];
    else if(nextToken == 'n')
        nextToken=s[++i];

    else errFlag++;
}

void T()
{
    F();
    while(1)
    {
        if(nextToken=='*')
        {
            nextToken=s[++i];
            F();
        }
        else if(nextToken=='/')
        {
            nextToken=s[++i];
            F();
        }
        else return;
    }
}
void E()
{
    T();
    while(1)
    {
        if(nextToken=='+')
        {
            nextToken=s[++i];
            F();
        }
        else if(nextToken=='-')
        {
            nextToken=s[++i];
            F();
        }
        else return;
    }
}

int main()
{
    cin>>s;

    nextToken=s[i];
    E();
    int s_len=s.length();
    if(i==s_len && errFlag==0)
        cout<<"Accepted"<<endl;
    else
        cout<<"Not Accepted"<<endl;

    return 0;
}
