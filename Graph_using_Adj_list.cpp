#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
vector<int> graph[N];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for(int i=0;i<=n;i++){
        cout<<i;
    for(auto child: graph[i])
        {
            cout<<"->"<<child;
        }
        cout<<endl;
    }

    int q,p;
    cin>>q>>p;
    for(auto child : graph[q]){
        if(child == p){
            cout<<"Edge exists here"<<endl;
        }
    }
    return 0;
}
// space compexity reduces to O( V+ E )
// mostly used in solving problems
