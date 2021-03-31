#include <cstdio>
#include <algorithm>
using namespace std;

long long fib[10005];

void recursion(int num) {
    fib[num] = fib[num-1] + fib[num-2];
}

int main() {

    int n;
    scanf("%d", &n);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 40; i++)
        recursion(i);
    
    for (int i = 0; i < n; i++) {
        long long l, r, cnt=0;
        scanf("%lld%lld", &l, &r);
        if (l > r) swap(l, r);
        for (int j = 0; j < 40; j++) {
            if((fib[j] >= l) && (fib[j] <= r)){
                printf("%lld\n", fib[j]);
                cnt++;
            }
        }
        printf("%lld\n", cnt);
        if(i!=n-1) printf("------\n");
    }

    return 0;
}