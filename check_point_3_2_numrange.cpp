int Solution::numRange(vector<int> &A, int B, int C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ans = 0 , result =0;
    for(int i =0; i< A.size(); i++){
        result = A[i];
        if( result >= B && result <= C){
            ans++;
        }
        int k = i+1;
        while(k< A.size()){
            result = result + A[k];
            if( result >= B && result <= C){
                ans ++;
            }
            else if( result > C){
                break;
            }
            k++;
        }
    }
    return ans;
}
