#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), s.end());
    return s == t;
}

int main()
{
    string s, t;
    cin >> s >> t;
    cout << (isAnagram ? "true" : "false");
}