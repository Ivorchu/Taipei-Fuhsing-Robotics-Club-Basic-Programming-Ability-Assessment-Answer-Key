#include <cstdio>
using namespace std;

class CMath
{
public:
    int getMax(int a, int b) {
        if (a > b) return a;
        else return b;
    }
};

class SonCMath : public CMath 
{
public:
    int getFactorial(int a) {
        int ans = 1;
        for (int i = 2; i <= a; i++)
            ans *= i;
        return ans;
    }
};

class GrandSonCMath : public SonCMath
{
public:
    float getAverage(float a, float b) {
        return (a+b)/2;
    }
};

int main() {

    SonCMath math1;
    printf("%d\n", math1.getMax(10, 20));
    printf("%d\n", math1.getFactorial(5));

    GrandSonCMath math2;
    printf("%d\n", math2.getMax(20, 30));
    printf("%d\n", math2.getFactorial(6));
    printf("%f\n", math2.getAverage(12, 34));

    return 0;
}