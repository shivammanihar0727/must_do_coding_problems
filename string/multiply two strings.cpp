string multiply(string A, string B) {
    int m = A.size();
    int n = B.size();
    if(A=="0" || B== "0")return "0";
    
    string s = "";
    vector<int>v(m+n,0);
    for(int i = n-1; i>=0; i--){
        for(int j = m-1; j>=0; j--){
            v[i+j+1] += (A[j]-'0')*(B[i]-'0');
        }
    }
    
    for(int i= m+n-1;i>0;i--){
        if(v[i]>=10){
            v[i-1] += v[i]/10;
            v[i] = v[i]%10;
        }
    }
    
    
    int cont = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0 && i==cont){
            cont++;
        }else s += (v[i]+'0');
    }
    return s;
}