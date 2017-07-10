void permuteUnique(vector<vector<int>> &result, vector<int> &res,vector<int> num,vector<bool> &duplicated, int n){
    
    if(n==0) {
        result.push_back(res);
        return;
    }
    
    for(int i=0;i<num.size();i++) {
        if(duplicated[i]==true|| (i!=0 && num[i]==num[i-1] && duplicated[i-1] == true))
            continue;
        duplicated[i] = true;
        res.push_back(num[i]);
        permuteUnique(result,res,num,duplicated,n-1);
        res.pop_back();
        duplicated[i]=false;
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size() <=0) {
        return vector<vector<int>>();
    }
    vector<vector<int>> result;
    vector<int> res;
    vector<bool> duplicated(A.size(),false);
    sort(A.begin(), A.end());
    permuteUnique(result,res,A,duplicated,A.size());
    return result;
    
}
