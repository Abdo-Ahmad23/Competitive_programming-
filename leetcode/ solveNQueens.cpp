class Solution {
public:
vector<string>chess,tst;
vector<vector<string>>ans;
bool check(int row, int col,int n){
bool check(int row, int col,int n){
    // Test For Row
    for(int i = row,j = 0;j<tst[0].size();j++)
        if(tst[i][j] == 'Q')
            return false;

    // Test For Col
    for(int i = 0,j = col;i<tst[0].size();i++)
        if(tst[i][j] == 'Q')
            return false;

    // Test From Left Diagnol
    for(int i = row,j = col;i>=0&&j>=0;i--,j--)
        if(tst[i][j] == 'Q')
            return false;
    // Test From Right Diagnol
    for(int i = row,j = col;i < tst.size()&&j>=0;i++,j--)
        if(tst[i][j] == 'Q')
            return false;
    
    return true;
       
}
void solve(int numQ,int n){
    if(numQ == n)
    {
        ans.push_back(tst);
        return;
    }
    for(int i=0;i<n;i++)
        if(check(i,numQ,n)){
            tst[i][numQ] = 'Q';
            solve(numQ + 1,n);
            tst[i][numQ] = '.';
        }

}
    vector<vector<string>> solveNQueens(int n) {
        for(int i=0;i<n;i++)
        {
            string row(n,'.');
            tst.push_back(row);
        }
    solve(0,n);
    return ans;
    }
};