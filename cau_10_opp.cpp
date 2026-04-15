#include<bits/stdc++.h>
using namespace std;
class vanban 
{
    string st;
public:
    vanban() : st("") {}
    vanban(string s) : st(s) {}
    int demtu() 
    {
        int d = 0; bool kt = true;
        for (char c : st) 
        {
            if (c == ' ') kt = true;
            else if (kt) { d++; kt = false; }
        }
        return d;
    }
    int dema() 
    {
        int d = 0;
        for (char c : st) if (c == 'a' || c == 'a') d++; 
        return d;
    }
    void chuanhoa() 
    {
        string kq = ""; bool kt = false;
        int d = 0, c = st.length() - 1;
        while (d < st.length() && st[d] == ' ') d++;
        while (c >= 0 && st[c] == ' ') c--;
        for (int i = d; i <= c; i++) 
        {
            if (st[i] == ' ') 
            {
                if (!kt) { kq += ' '; kt = true; }
            } 
            else { kq += st[i]; kt = false; }
        }
        st = kq;
    }
};