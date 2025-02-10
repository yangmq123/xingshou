#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int verity(char a[], char b[]) {
    int s = 0;
    for (int i = 0; i < 5; i++) {
        if (a[i] == b[i]) {
            s++;
        }
    }
    return s;
}
int main()
{
    char ans[] = { 'a','b','c','d','e'};
    
    char s[5];

    double res0 = 0, res1 = 0, res2 = 0, res3 = 0, res4 = 0, res5 = 0;
    int t = 0;
    vector <char>v{ 'a','b','c','d','e','f','g' };
    sort(v.begin(), v.end());
    do
    {
        next_permutation(v.begin(), v.end());
        
        for (int i = 0;i < 5;i++) {
            s[i] = v[i];

        }
        double res = verity(ans, s);
        if (res == 0)res0++;
        if (res == 1)res1++;
        if (res == 2)res2++;
        if (res == 3)res3++;
        if (res == 4)res4++;
        if (res == 5)res5++;
    }while (next_permutation(v.begin(), v.end()));
    cout << "全错 :" << res0 << "/" << 2520 << "\t" <<"概率为"  << res0 / 2520 << "%" << endl;
    cout << "对一个:" << res1 << "/" << 2520 << "\t" <<"概率为" << res1 / 2520 << "%" << endl;
    cout << "对两个:" << res2 << "/" << 2520 << "\t" <<"概率为" << res2 / 2520 << "%" << endl;
    cout << "对三个:" << res3 << "/" << 2520 << "\t" <<"概率为" << res3 / 2520 << "%" << endl;
    cout << "对四个:" << res4 << "/" << 2520 << "\t" <<"概率为" << res4 / 2520 << "%" << endl;
    cout << "对五个:" << res5 << "/" << 2520 << "\t" <<"概率为" << res5 / 2520 << "%" << endl;
    cout << "数学期望为:" << (res1 / 2520) * 5 + (res2 / 2520) * 10 + (res3 / 2520) * 15 + (res4 / 2520) * 20 + (res5 / 2520) * 25 << "分" << endl;
    return 0;
}





