#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;

class split_s{
    private:
        string s,delim;
        int i;
        bool more,sp_ret,delim_return;
    public:
        split_s(string str,string lim,bool lim_return,bool spaces_return){
            s = str;
            delim = lim;
            delim_return = lim_return;
            sp_ret = spaces_return;

            i=0;
            more = true;
        }

        split_s(string str,string lim,bool lim_return){
            s = str;
            delim = lim;
            delim_return = lim_return;
            sp_ret = true;

            i=0;
            more = true;
        }

        split_s(string str,string lim){
            s = str;
            delim = lim;
            delim_return = true;
            sp_ret = true;

            i=0;
            more = true;
        }

        split_s(string str){
            s = str;
            delim = "";
            delim_return = true;
            sp_ret = true;

            i=0;
            more = true;
        }

        split_s(string str, bool spaces_return){
            s = str;
            delim = "";
            delim_return = " \t";
            sp_ret = spaces_return;

            i=0;
            more = true;
        }

        string next(){
            string nextstr="";
            bool start = false;
            for(;i<s.size();i++){
                if(delim.find(s[i])!=string::npos){
                    if(delim_return == true){
                        if(nextstr == ""){
                            if((s.at(i) == ' ' || s.at(i) == '\t') && sp_ret==false) continue;
                            nextstr += s[i];
                        }
                        else i--;
                        i++;
                        return nextstr;
                    }
                    else{
                        start=true;
                        continue;
                    }
                }
                else if(start==true && delim.find(s[i])==string::npos){
                    start=false;
                    return nextstr;
                }
                if((s.at(i) == ' ' || s.at(i) == '\t') && sp_ret==false) continue;
                nextstr += s[i];
            }
            more = false;
            return nextstr;
        }

        bool has_more(){
            if(delim_return == false)
                for(;i<s.size();i++){
                    if(delim.find(s[i]) == string::npos){
                        if((s.at(i) == ' ' || s.at(i) == '\t') && sp_ret==false) continue;
                        more = true;
                        break;
                    }
                    if(i==s.size()-1) more = false;
                }
            return more;
        }
};
