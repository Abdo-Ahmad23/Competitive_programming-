#include <bits/stdc++.h>

using namespace std;

    int const N=2e5+1;
    char s[N];
    stack<char>st;

int main()
{
    cin.tie(NULL);cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
#endif
    ///stack_solution
    scanf("%s",s);
    ///=============================
    int ln=strlen(s);///ln=s.size() in c++ and in c strlen(s);
    for(int i=0;i<ln;i++){
        if(!st.empty()&& st.top()==s[i])
            st.pop();
        else
            st.push(s[i]);
    }
    ///=====================================
    string res="";
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    printf("%s\n",res.c_str());
    return 0;
}