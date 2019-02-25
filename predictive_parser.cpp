#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string,string>, string> parseTable;
    //id
    parseTable[ make_pair("E","id") ] = "E => TE`";
    parseTable[ make_pair("E`","id") ] = "";
    parseTable[ make_pair("T","id") ] = "T => FT`";
    parseTable[ make_pair("T`","id") ] = "";
    parseTable[ make_pair("F","id") ] = "F => id";
    //+
    parseTable[ make_pair("E","+") ] = "";
    parseTable[ make_pair("E`","+") ] = "E => +TE`";
    parseTable[ make_pair("T","+") ] = "synch";
    parseTable[ make_pair("T`","+") ] = "T`=>e";
    parseTable[ make_pair("F","+") ] = "synch";
    //*
    parseTable[ make_pair("E","*") ] = "";
    parseTable[ make_pair("E`","*") ] = "";
    parseTable[ make_pair("T","*") ] = "";
    parseTable[ make_pair("T`","*") ] = "T`=>*FT`";
    parseTable[ make_pair("F","*") ] = "synch";
    //(
    parseTable[ make_pair("E","(") ] = "E => TE`";
    parseTable[ make_pair("E`","(") ] = "";
    parseTable[ make_pair("T","(") ] = "T => FT`";
    parseTable[ make_pair("T`","(") ] = "";
    parseTable[ make_pair("F","(") ] = "F=>(E)";
    //)
    parseTable[ make_pair("E",")") ] = "synch";
    parseTable[ make_pair("E`",")") ] = "E => e";
    parseTable[ make_pair("T",")") ] = "synch";
    parseTable[ make_pair("T`","()") ] = "T`=>e";
    parseTable[ make_pair("F",")") ] = "synch";
    //$
    parseTable[ make_pair("E","$") ] = "synch";
    parseTable[ make_pair("E`","$") ] = "E => e";
    parseTable[ make_pair("T","$") ] = "synch";
    parseTable[ make_pair("T`","$") ] = "T`=>e";
    parseTable[ make_pair("F","$") ] = "synch";

    string nonTerminal,Terminal;
    while(cin>>nonTerminal>>Terminal)
    {
       cout<<nonTerminal<<'.'<<Terminal<<": "<<parseTable[ make_pair(nonTerminal,Terminal) ]<<endl;

    }



    return 0;
}

