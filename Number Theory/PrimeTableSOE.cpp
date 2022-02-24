vector<bool> SOE(int n){
   vector<bool>SOETable(n+1,true);
    SOETable[0]=false;
    SOETable[1]=false;
    for(int i=2;i*i<=n;i++){
         if(SOETable[i]){
            for(int j=i*i;j<=n;j+=i){
                SOETable[j]=false;
            }
         }
    }
   return SOETable;
}
