#include <iostream>
#include <unordered_set>
using namespace std;

int longestsubstrung(string s){
    int n = s.length();
    int maxlen = 0;

    for(int i = 0; i < n; i++){
        unordered_set<char> st;

        for(int j = i; j < n; j++){
            if(st.find(s[j]) != st.end()){
                break;
            }

            st.insert(s[j]);
            maxlen = max(maxlen, j - i + 1);
        }
    }

    return maxlen; // ✅ correct place
}

int main() {
    cout << longestsubstrung("abcbabcbabcbabcabc");
    return 0;
}
