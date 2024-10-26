#include<bits/stdc++.h>
using namespace std;
struct Var{
    int x;
    int y;
};
int main(){
    Var a, b;
    scanf("%d %d %d %d",&a.x,&a.y,&b.x,&b.y);
    int diffY = a.y - b.y, diffX = a.x - b.x;
    if(diffY * -1 == 0){
        printf("%d %d ",a.x,a.y+abs(diffX));
        printf("%d %d ",b.x,b.y+abs(diffX));
    }else if(diffX * -1 == 0){
        printf("%d %d ",a.x + diffY,a.y);
        printf("%d %d ",b.x + diffY,b.y);
    }else if(a.y - b.y == a.x - b.x or a.y - b.y == b.x - a.x){
        printf("%d %d ",a.x ,b.y);
        printf("%d %d ",b.x ,a.y);
    }else{
        puts("-1");
    }
    return 0;
}