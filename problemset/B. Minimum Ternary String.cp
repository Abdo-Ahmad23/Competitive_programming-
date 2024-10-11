#include <bits/stdc++.h>

using namespace std;
void strong1()
{
  cin.tie(NULL);cout.tie(NULL);
  ios_base::sync_with_stdio(false);

}
int main()
{
    string d;cin>>d;
    vector<char>d0,d1,d2;
//    for(int i=0;i<a.size();i++)
//        d.at(i)=a[i];

    bool ok=1;
    for(int i=0;i<d.size();i++){
        if(d[i]=='0' and ok){
            d0.push_back(d.at(i));
            d[i]='*';


        }
        else if(d[i]=='1'){
            d1.push_back(d.at(i));
            d[i]='*';
        }
        else{
            d2.push_back(d.at(i));
            d[i]='*';
            ok=0;
        }
    }
    for(int i=0;i<d0.size();i++)
        cout<<d0.at(i);
    for(int i=0;i<d1.size();i++)
        cout<<d1.at(i);
    for(int i=0;i<d2.size();i++)
        cout<<d2.at(i);

        //cout<<d;
    return 0;
}