class Solution {
public:
void rec(string res,int st,int end,int n,vector<string> &ans){
    if(st==n && end==n){ans.push_back(res);return;}
    if(st<n){rec(res+'(',st+1,end,n,ans);}
    if(end<st){rec(res+')',st,end+1,n,ans);}
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans(0);
        rec("",0,0,n,ans);
        return ans;
    }
};