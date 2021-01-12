#include <bits/stdc++.h>

using namespace std;

int love_sum (string s){
    int l_sum = 0;
    for (size_t i = 0; i < s.size(); ++i){
        if (s[i] >= 'a' && s[i] <= 'z')
            l_sum += s[i] - 'a' + 1;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            l_sum += s[i] - 'A' + 1;
    }
    if (l_sum % 9 ==0)
        return 9;
    else
        return l_sum % 9;


}

int main(){

    string s1, s2;

    while (getline(cin, s1)){

        getline(cin, s2);
        int l_sum1 = love_sum(s1), l_sum2 = love_sum(s2);
        double ratio = min((double)l_sum1/l_sum2, (double)l_sum2/l_sum1);

        cout << setprecision(2)
             << setiosflags(ios_base::fixed)
             << ratio * 100.0
             << " %"
             << endl;
    }
    return 0;
}