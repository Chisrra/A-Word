#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int lower=0, upper=0;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){
            lower++;
        }else{
            upper++;
        }
    }
    if( lower < upper ){
        for(int i = 0; i < s.size(); i++){
            s[i] = toupper(s[i]);
        }
    }else{
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<"\n\r";
    return 0;
}
