#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, tammax = 0,cases = 0;
    string p;
    vector <string> str;
    while (1){
        cin >> n;
        if (n == 0){
            break;
        }
        if (cases == 1) {cases =0;cout<< endl;}
        cin.ignore();
        for (int i = 0; i < n; i++){
            getline(cin, p);
            str.push_back(p);
            if (tammax < static_cast<int>(p.length())) {
                tammax = p.length();
            }
        }
        for (int i = 0; i < static_cast <int> (str.size()); i++){
             cout << setw(tammax) << str[i] << endl;
        }
        tammax = 0; str.clear();
        cases = 1;
    }
    return 0;
}
