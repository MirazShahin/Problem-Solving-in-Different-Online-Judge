vll          prime;;
const int    N = 1e7;
bitset<N + 3>marked;
void Sieve() {
    for(int i = 4; i <= N; i+=2) {
        marked[i] = 1;
    }
    for(int i = 3; i * i <= N; i+= 2) {
        if(!marked[i])
        for(int j = i * i; j <= N; j += (i << 1)) {
            marked[j] = 1;
        }
    }
    prime.push_back(2);
    for(int i = 3; i <= N; i+=2) {
        if(!marked[i]) {
            prime.push_back(i);
        }
    }
}
void solve() {
    int n;
    cin >> n;
    int divisor_counter = 1;
    for(int i = 0; prime[i] * prime[i] <= n; i++) {
        int counter = 1;
        if(n % prime[i] == 0) {
          while(n % prime[i] == 0) {
            counter++;
            n /= prime[i];
          }
        }
        divisor_counter *= counter;
    }
    if(n > 1) {
        divisor_counter *= 2;
    }
    cout << divisor_counter - 1<< nn;

}
