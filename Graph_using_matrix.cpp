#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
int graph[N][N];
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// but in this approach , there is a problem
// as we know that we can define array of size N =10^5 only , and if define
// 2D array of N x N then it's size will be 10^5 x 10^5 which is not possible
// second problem is that it has it has O( N*N ) space complexity 
