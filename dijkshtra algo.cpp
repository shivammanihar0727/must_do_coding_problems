#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > adj[100001];
int main()
{
	int n,m,a,b,w;
	cin>>n>>m;
	while(m--)
	{
		cin>>a>>b>>w;
		adj[a].push_back(make_pair(b,w));
		adj[b].push_back(make_pair(a,w));
	}
	priority_queue<pair<int,int> , vector<pair<int,int> > , greater<pair<int,int> > > pq;
	vector<int> dist(n+1,INT_MAX);
	pq.push(make_pair(0,1));
	dist[1]=0;
	while(!pq.empty())
	{
		int curr = pq.top().second;
		int curr_d = pq.top().first;
		pq.pop();
		for(pair<int,int> edge : adj[curr])
		{
			if(curr_d + edge.second < dist[edge.first])
			{
				dist[edge.first] = curr_d + edge.second;
				pq.push(make_pair(dist[edge.first],edge.first));
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<dist[i]<<" ";
	}
	return 0;
} 
