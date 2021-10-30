#include<bits/stdc++.h>
using namespace std;
class DSU{
   private: 
    vector<int>parent;
    vector<int>size;
   public:
  DSU(int n){
      for(int i=0;i<n+1;i++){
          parent.push_back(i);
          size.push_back(1);
      }
  }
 
  int findPar(int a){
      if(parent[a]==a)return a;
     return parent[a]= findPar(parent[a]);
  }

  void unionNode(int a,int b){
      int pA= findPar(a);
      int pB= findPar(b);
      if(pA==pB) return;

      if(size[pA]>size[pB]){
          parent[pB]=pA;
          size[pA]+=size[pB];
      }
      else{
          parent[pA]=pB;
          size[pB]+=size[pA];
      }
  }

};