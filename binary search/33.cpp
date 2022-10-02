#include<bits/stdc++.h>
using namespace std;

	void calculate(int n,int m)
	{
	
	
	 vector<int> rati(n,0);
    for(int i=0;i<n;i++){
        cin>>rati[i];
    }
	vector<vector<int> > stats(n,vector<int> (m,0));
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        cin>>stats[i][j];
	    }
	}
	
	vector<vector<int> > ratings(n,vector<int> (m,0));
	vector<vector<int> > rankings(n,vector<int> (m,0));
	
	for(int j=0;j<m;j++){
	    vector<int> temp(n,0);
	    for(int i=0;i<n;i++){
	        ratings[i][j]=rati[i]+stats[i][j];
	        temp[i]=ratings[i][j];
	        rati[i]=ratings[i][j];
	    }
	
	    vector<int> temp_ranks(n,0);
	    priority_queue <pair<int,int> > q;
	    for(int i=0;i<n;i++){
	        q.push({temp[i],i});
	    }
	
	    auto prev=q.top();
	    q.pop();
	    int curr_rank=1;
	    int cnt=1;
	    temp_ranks[prev.second]=curr_rank;
	
	    while(!q.empty()){
	        auto curr=q.top();
	        q.pop();
	        if(curr.first==prev.first){
	            temp_ranks[curr.second]=curr_rank;
	            cnt++;
	        }else{
	            temp_ranks[curr.second]=cnt+1;
	            prev=curr;
	            cnt++;
	            curr_rank=cnt;
	        }
	    }
	
	    for(int i=0;i<n;i++){
	        rankings[i][j]=temp_ranks[i];
	    }
	}
	
	int ans=0;
	for(int i=0;i<n;i++){
	    int peak_rate=max_element(ratings[i].begin(),ratings[i].end())- ratings[i].begin();
	    int peak_rank=min_element(rankings[i].begin(),rankings[i].end())- rankings[i].begin();
	
	    if(peak_rank!=peak_rate){
	        ans++;
	    }
	}
	
	cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,m;
		calculate(n,m);
		
	}
}
