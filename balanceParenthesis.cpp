#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.length();
    stack<char> st;
    bool ok = true;
    for (int i = 0; i < l; ++i)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ok = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ok = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ok = false;
                break;
            }
        }
    }
    if (ok == true)
    {
        cout << "Parenthesis is Balanced";
    }
    else
    {
        cout << "Parenthesis is Unbalanced";
    }

    return 0;
}