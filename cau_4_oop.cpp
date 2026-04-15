#include<bits/stdc++.h>
using namespace std;
class nguoi 
{
    string hoten;
    int tuoi;
    string nghenghiep;
    string cmnd;
public:
    nguoi(string h, int t, string nn, string c) : hoten(h), tuoi(t), nghenghiep(nn), cmnd(c) {}
    void in() { cout << hoten << " " << tuoi << " " << nghenghiep << " " << cmnd << "\n"; }
};
class hogiadinh 
{
    int sothanhvien;
    string sonha;
    vector<nguoi> ds;
public:
    hogiadinh(int s, string sn) : sothanhvien(s), sonha(sn) {}
    void them(nguoi n) { ds.push_back(n); }
    void in() 
    {
        cout << sonha << " " << sothanhvien << "\n";
        for (auto n : ds) n.in();
    }
};
class khupho 
{
    vector<hogiadinh> ds;
public:
    void them(hogiadinh h) { ds.push_back(h); }
    void in() { for (auto h : ds) h.in(); }
};