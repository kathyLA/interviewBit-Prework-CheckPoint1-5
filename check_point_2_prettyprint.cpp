//Pretty Print .cpp
vector<vector<int> > Solution::prettyPrint(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int dimension = (A * 2) - 1;

    vector<vector<int>> array(dimension, vector<int>(dimension));
	    for(int i=0 ; i< dimension ; i++) {
	       for(int j=0; j<dimension; j++) {
	          int v1 = abs(A-1-j) ; 
	          int v2 = abs(A-1-i) ;
	          array[i][j] = max(v1,v2)+1;
	       }
	    }
    return array;
}

