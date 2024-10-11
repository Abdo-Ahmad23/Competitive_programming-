#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int k;cin>>k;
    stack<char>st;
    string s;cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++)
        mp[s[i]]++;

    char ch='a';
    while(true){
        for(int i=0;i<n;i++){
            if(k==0){
                for(int i=0;i<n;i++){
                    if(s[i]!='*')
                        cout<<s[i];
                }
                return 0;
            }
            if(s[i]==ch){
                k--;
                mp[s[i]]--;
                s[i]='*';
            }
            if(k==0){
                for(int i=0;i<n;i++){
                    if(s[i]!='*')
                        cout<<s[i];
                }
                return 0;
            }
            if(mp[ch]==0)
                ch++;

        }
    }
    return 0;
}