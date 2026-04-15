#include<bits/stdc++.h>
using namespace std;

// ==========================================
// 1. Xây dựng lớp CongDan                                                              
// ==========================================
class CongDan 
{
private:
    string hoTen;
    int tuoi;
    string cccd;
    string diaChi;

public:
    CongDan() {}
    CongDan(string _hoTen, int _tuoi, string _cccd, string _diaChi)
        : hoTen(_hoTen), tuoi(_tuoi), cccd(_cccd), diaChi(_diaChi) {}

    string getCCCD() const { return cccd; }
    string getHoTen() const { return hoTen; }
};

// ==========================================
// 2. Xây dựng lớp PhieuTiem 
// ==========================================
class PhieuTiem 
{
private:
    string maPhieu;
    string cccd; 
    string loaiVaccine;
    int soMui;
    string trangThai;

public:
    PhieuTiem() {}
    PhieuTiem(string _maPhieu, string _cccd, string _loaiVaccine, int _soMui)
        : maPhieu(_maPhieu), cccd(_cccd), loaiVaccine(_loaiVaccine), soMui(_soMui) 
        {
        trangThai = "Chua tiem"; // Mặc định trạng thái ban đầu
        }

    string getCCCD() const { return cccd; }
    string getLoaiVaccine() const { return loaiVaccine; }
    int getSoMui() const { return soMui; }
    string getTrangThai() const { return trangThai; }
    
    void setTrangThai(string _trangThai) { trangThai = _trangThai; }
    
    void inThongTin() const 
    {
        cout << "- Phieu: " << maPhieu << " | CCCD: " << cccd 
             << " | Vaccine: " << loaiVaccine << " | So mui: " << soMui 
             << " | Trang thai: " << trangThai << endl;
    }
};

// ==========================================
// 3. Xây dựng lớp HeThongTiemChung 
// ==========================================
class HeThongTiemChung 
{
private:
    vector<CongDan> danhSachCongDan;
    vector<PhieuTiem> danhSachPhieuTiem;

public:
    // a. Thêm mới một phiếu đăng ký tiêm
    void themPhieuTiem(const CongDan& cd, const PhieuTiem& pt) 
    {
        danhSachCongDan.push_back(cd);
        danhSachPhieuTiem.push_back(pt);
        cout << "[+] Da them phieu dang ky cho: " << cd.getHoTen() << " (CCCD: " << cd.getCCCD() << ")" << endl;
    }

    // b. Xoá phiếu đăng ký theo số CCCD
    void xoaPhieuTiem(string cccd) 
    {
        bool found = false;
        for (auto it = danhSachPhieuTiem.begin(); it != danhSachPhieuTiem.end(); ) 
        {
            if (it->getCCCD() == cccd) 
            {
                it = danhSachPhieuTiem.erase(it);
                found = true;
            }
            else 
            {
                ++it;
            }
        }
        if(found) cout << "[-] Da xoa cac phieu tiem cua CCCD: " << cccd << endl;
        else cout << "[!] Khong tim thay phieu tiem voi CCCD: " << cccd << endl;
    }

    // c. Đánh dấu trạng thái "Đã tiêm"
    void danhDauDaTiem(string cccd) 
    {
        bool found = false;
        for (auto& pt : danhSachPhieuTiem) 
        {
            if (pt.getCCCD() == cccd) 
            {
                pt.setTrangThai("Da tiem");
                found = true;
            }
        }
        if(found) cout << "[v] Cap nhat thanh cong: CCCD " << cccd << " da duoc tiem." << endl;
        else cout << "[!] Khong tim thay phieu tiem voi CCCD: " << cccd << endl;
    }

    // d. Tính tổng chi phí tiêm chủng
    void tinhChiPhi(string cccd) 
    {
        long long tongChiPhi = 0;
        bool found = false;

        for (const auto& pt : danhSachPhieuTiem) 
        {
            if (pt.getCCCD() == cccd) 
            {
                found = true;
                long long donGia = 0;
                string loaiVac = pt.getLoaiVaccine();
                
                if (loaiVac == "Pfizer") donGia = 300000;
                else if (loaiVac == "Moderna") donGia = 250000;
                else if (loaiVac == "AstraZeneca") donGia = 200000;
                
                tongChiPhi += donGia * pt.getSoMui();
                cout << "[$] Chi phi CCCD " << cccd << " (" << loaiVac << " x " << pt.getSoMui() << " mui): " << donGia * pt.getSoMui() << " VND" << endl;
            }
        }
        if (!found) cout << "[!] Khong co du lieu de tinh chi phi cho CCCD: " << cccd << endl;
    }
    
    void inDanhSach() const 
    {
        cout << "\n--- DANH SACH DANG KY TIEM ---" << endl;
        for (const auto& pt : danhSachPhieuTiem) pt.inThongTin();
        cout << "------------------------------\n";
    }
};

// ==========================================
// 4. Viết hàm main() kiểm thử 
// ==========================================
signed main() 
{
    HeThongTiemChung heThong;

    cout << "--- THEM NGUOI DAN VA PHIEU TIEM ---" << endl;
    CongDan cd1("Nguyen Van A", 30, "012345", "Ha Noi");
    PhieuTiem pt1("P01", "012345", "Pfizer", 2);

    CongDan cd2("Tran Thi B", 45, "056789", "Hai Phong");
    PhieuTiem pt2("P02", "056789", "AstraZeneca", 1);
    
    CongDan cd3("Le Van C", 22, "099999", "Da Nang");
    PhieuTiem pt3("P03", "099999", "Moderna", 2);

    heThong.themPhieuTiem(cd1, pt1);
    heThong.themPhieuTiem(cd2, pt2);
    heThong.themPhieuTiem(cd3, pt3);
    
    heThong.inDanhSach();

    cout << "\n--- TINH CHI PHI TIEM CHUNG ---" << endl;
    heThong.tinhChiPhi("012345"); 
    heThong.tinhChiPhi("056789"); 

    cout << "\n--- CAP NHAT TRANG THAI ---" << endl;
    heThong.danhDauDaTiem("012345");
    heThong.inDanhSach();

    cout << "\n--- XOA PHIEU DANG KY ---" << endl;
    heThong.xoaPhieuTiem("099999");
    heThong.inDanhSach();

    return 0;
}