#include<iostream>
#include<string.h>
using namespace std;
string arrageString(string inp_str){
    string ans = inp_str;
    for(int i = 0; i < inp_str.size(); i++){
        if(inp_str[i] >= 'a' and inp_str[i] <= 'z' || inp_str[i] >= 'A' and inp_str[i] <= 'Z'){
            if(inp_str[i] == 'z'){
                ans[i] = 'a';
            }
            else if(inp_str[i] == 'Z'){
                ans[i] = 'A';
            }
            else ans[i] = inp_str[i] + 1;
        }
    }
    return ans;
}
string modify_string(string inp_string){
    string mod_string = arrageString(inp_string);
    for(int i = 0; i < mod_string.size(); i++){
        if(mod_string[i]  == 'a' || mod_string[i]  == 'e' ||mod_string[i]  == 'i' ||mod_string[i]  == 'o' || mod_string[i] == 'u'){
            mod_string[i] = mod_string[i] - 32;
        }
    }
    return mod_string;
}
int main(){
    string ans = modify_string("xobin^bootcamp");
    cout<<ans;
}