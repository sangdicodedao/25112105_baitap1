#include<bits/stdc++.h>
using namespace std;
class loi : public exception 
{
    string msg;
public:
    loi(string m) : msg(m) {}
    const char* what() const noexcept override { return msg.c_str(); }
};
class bangcap 
{
public:
    string id, ten, loai, ngay;
    bangcap(string i, string t, string l, string n) : id(i), ten(t), loai(l), ngay(n) {}
};
class nhanvien 
{
protected:
    string id, hoten, ngaysinh, sdt, email;
    int loai;
    vector<bangcap> bang;
public:
    static int dem;
    nhanvien(string i, string h, string n, string s, string e, int l) : id(i), hoten(h), ngaysinh(n), sdt(s), email(e), loai(l) { dem++; }
    virtual void in() { cout << id << " " << hoten << " " << loai << "\n"; }
    string layid() { return id; }
    int layloai() { return loai; }
};
int nhanvien::dem = 0;
class kinhnghiem : public nhanvien 
{
    int sonam; string kynang;
public:
    kinhnghiem(string i, string h, string n, string s, string e, int sn, string kn) : nhanvien(i, h, n, s, e, 0), sonam(sn), kynang(kn) {}
};
class moimora : public nhanvien 
{
    string tntg, xeploai, truong;
public:
    moimora(string i, string h, string n, string s, string e, string tg, string xl, string tr) : nhanvien(i, h, n, s, e, 1), tntg(tg), xeploai(xl), truong(tr) {}
};
class thuctap : public nhanvien 
{
    string chuyennganh, truong; int hocky;
public:
    thuctap(string i, string h, string n, string s, string e, string cn, int hk, string tr) : nhanvien(i, h, n, s, e, 2), chuyennganh(cn), hocky(hk), truong(tr) {}
};
class quanly 
{
    vector<nhanvien*> ds;
public:
    void them(nhanvien* nv) { ds.push_back(nv); }
    void tim(int l) 
    {
        for (auto nv : ds) if (nv->layloai() == l) nv->in();
    }
};