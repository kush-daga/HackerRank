#include <bits/stdc++.h>

using namespace std;

// Complete the stringConstruction function below.
int stringConstruction(string s) {    
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(),s.end()),s.end());
        return s.size();
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));
        //??

    int q;
    cin >> q;n
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = stringConstruction(s);

        cout << result << "\n";
    }

    return 0;
}
