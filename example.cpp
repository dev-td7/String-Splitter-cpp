#include "String splitter.cpp"
#include<iostream>
#include<string>

int main(){

    string str = "My + Name - is * Tejas /";

    //split_s(string_to_be_split,delimiters,return_delimiters?,return_spaces?)
    split_s s(str,"+-*/",false,false);

    cout<<"-- ";
    while(s.has_more()){
        string str = s.next();
        cout<<str<<" ";
    }
    cout<<" --";
}

/*
Output:

-- My Name is Tejas  --

*/
