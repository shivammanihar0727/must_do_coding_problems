string convert(string A, int B) {
    int n = A.size();
    if(n==1 || B==1)return A;
    string s = A;
    int index = 0;
    int j = 2*(B-1);
    
    for(int k = 0; k<n; k = k+j){
        s[index] = A[k];
        index++;
    }    
            
    for(int i =1;i<B-1;i++){
        int l = 2*(B-1-i);
        s[index] = A[i];
        index++;
        int t = i + l;
        for(int k = t; k<n; k = k+l){
            
            s[index] = A[k];
            k = k + abs(j - l);
            
            if(k<n){
                index++;
                s[index] = A[k];
            }
            
            index++;
            
        }
    }
    for(int k = B-1; k<n; k = k+j){
        s[index] = A[k];
        index++;
    } 
    return s;
}
