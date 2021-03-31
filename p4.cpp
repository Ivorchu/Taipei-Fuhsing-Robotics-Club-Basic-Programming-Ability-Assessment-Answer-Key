#include <cstdio>
#include <utility>
#include <algorithm>
using namespace std;

pair<int, int> seg[100005];

int main() {

    int n, len = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &seg[i].first, &seg[i].second);
    
    sort(seg, seg+n);

    int l = seg[0].first;
    int r = seg[0].second;
    for (int i = 1; i < n; i++) {
        if(seg[i].first <= r) {
            if(seg[i].second > r)
                r = seg[i].second;
        } else{
            len += r - l;
            l = seg[i].first;
            r = seg[i].second;
        }
    }
    len += r-l;
    printf("%d\n", len);

    return 0;
}