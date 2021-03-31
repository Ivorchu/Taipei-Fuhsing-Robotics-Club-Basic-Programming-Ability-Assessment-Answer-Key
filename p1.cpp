#include <cstdio>
#include <algorithm>
using namespace std;

int score[25];

int main() {

    int n;
    int best = -1;
    int worst = 101;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &score[i]);

    sort(score, score+n);
    for(int i = 0; i < n; i++){
        if(score[i] < 60 && best < score[i])
            best = score[i];
        else if(score[i] >= 60 && worst > score[i])
            worst = score[i];
    }
    for(int i = 0; i < n; i++)
        printf("%d ", score[i]);
    printf("\n");
    if(best == -1)
        printf("best case\n");
    else
        printf("%d\n", best);

    if(worst == 101)
        printf("worst case\n");
    else
        printf("%d\n", worst);

    return 0;
}