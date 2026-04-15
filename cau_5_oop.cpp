#include<bits/stdc++.h>
using namespace std;
class nguoi 
{
    string hoten;
    int tuoi;
    string cmnd;
public:
    nguoi(string h, int t, string c) : hoten(h), tuoi(t), cmnd(c) {}
    string laycmnd() { return cmnd; }
    void in() { cout << hoten << " " << tuoi << " " << cmnd << "\n"; }
};
class khachsan 
{
    struct phong 
    {
        int ngay;
        string loai;
        nguoi khach;
    };
    vector<phong> ds;
public:
    void them(int n, string l, nguoi k) { ds.push_back({n, l, k}); }
    void xoa(string cmnd)
    {
        for (auto it = ds.begin(); it != ds.end(); ++it) 
        {
            if (it->khach.laycmnd() == cmnd) { ds.erase(it); break; }
        }
    }
    int tinhtien(string cmnd) 
    {
        for (auto p : ds) 
        {
            if (p.khach.laycmnd() == cmnd) 
            {
                int gia = 0;
                if (p.loai == "a") gia = 500;
                else if (p.loai == "b") gia = 300;
                else if (p.loai == "c") gia = 100;
                return p.ngay * gia;
            }
        }
        return 0;
    }
};