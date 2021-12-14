#define MOD 1000000007
long long binpow(long long a, long long b) {
   long long res = 1;
   while (b > 0) {
      if (b % 2 == 1)
         res = (res % MOD * a % MOD) % MOD;
      a = a % MOD * a % MOD;
      b /= 2;
   }
   return res % MOD;
}
