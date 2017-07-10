//find Kth Smallest

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int left, int right) {
    int pivot = array[right], i = left;
    for (int j = left; j <= right - 1; j++) {
        if (array[j] <= pivot) {
            swap(&array[i], &array[j]);
            i++;
        }
    }
    
    swap(&array[i], &array[right]);
    return i;
}


int kthSmall(int array[], int index, int left, int right) {
    int n = (right - left) + 1 ;
    if (index > 0 && index <= n) {
        int p = partition(array, left, right);
        
        if (p - left == index - 1)
            return array[p];
        if (p - left > (index - 1) )
            return kthSmall(array, index, left, p-1);
        
        return kthSmall(array,  (index - p + left - 1), p + 1 , right);
    }
    
    return INT_MAX;
}

int Solution::kthsmallest(const vector<int> &A, int k) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int *res  = new int [A.size()];
    copy(A.begin(), A.end(), res);
    return kthSmall(res, k, 0, A.size() -1 );
    //vector<a>
    /*
     multiset<int> mset;
     multiset<int>::iterator it;
     int n = A.size();
     for (int i = 0; i < n; i++) {
     mset.insert(A[i]);
     }
     
     int i = 1 ;
     for(it=mset.begin(); i< k; it++) {
     i++;
     }
     return (*it);
     */
    
}


