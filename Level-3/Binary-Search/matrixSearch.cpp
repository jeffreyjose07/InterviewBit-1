// https://www.interviewbit.com/problems/matrix-search/

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int numOfRows = A.size();
    int numOfColumns = A[0].size();
    int low = 0, high = numOfRows*numOfColumns-1;
    int ans =0;
    
    while(low<=high){
        int lowX = low / numOfColumns;
        int lowY = low % numOfColumns;
        
        int highX = high / numOfColumns;
        int highY = high % numOfColumns;
        
        int mid = (low+high)/2;
        
        int midX = mid / numOfColumns;
        int midY = mid % numOfColumns;
        
        if(A[midX][midY]==B)
            return 1;
            
        else if(A[midX][midY]>B){
            high = mid-1;
        }
        
        else{
            low = mid+1;
        }
    
    }
    
    return 0;
}
