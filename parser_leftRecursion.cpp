#include<bits/stdc++.h>
using namespace std;
int errFlag,i;
string s;
char nextToken;

void F()
{
    if(nextToken == 'i')
    {
        nextToken=s[++i];
        cout<<"i: "<<i<<endl;
        cout<<"nextToken: "<<nextToken<<endl;
    }
    else if(nextToken == 'n')
    {
        nextToken=s[++i];
        cout<<"i: "<<i<<endl;
        cout<<"nextToken: "<<nextToken<<endl;
    }

    else
    {
        errFlag++;
        cout<<"ERROR"<<endl;
    }
}

void T()
{
    F();
    while(1)
    {
        if(nextToken=='*')
        {
            nextToken=s[++i];
            cout<<"i: "<<i<<endl;
            cout<<"nextToken: "<<nextToken<<endl;
            F();
        }
        else if(nextToken=='/')
        {
            nextToken=s[++i];
            cout<<"i: "<<i<<endl;
            cout<<"nextToken: "<<nextToken<<endl;
            F();
        }
        else
            return;
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
            cout<<"i: "<<i<<endl;
            cout<<"nextToken: "<<nextToken<<endl;
            F();
        }
        else if(nextToken=='-')
        {
            nextToken=s[++i];
            cout<<"i: "<<i<<endl;
            cout<<"nextToken: "<<nextToken<<endl;
            F();
        }
        else
            return;
    }
}

int main()
{
    cin>>s;

    int s_len=s.length();

    cout<<"s_len: "<<s_len<<endl<<endl;
    nextToken=s[i];

    cout<<"i: "<<i<<endl;
    cout<<"nextToken: "<<nextToken<<endl;
        E();
    if(i==s_len && errFlag==0)
        cout<<"Accepted"<<endl;
    else
        cout<<"Not Accepted"<<endl;

    return 0;
}
