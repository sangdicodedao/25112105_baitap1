/*
Bài 1.1 – Lớp Point (trang 1/2)
Cài đặt lớp Point biểu diễn các điểm trong không gian 2 chiều gồm các thuộc tính và phương thức sau:
	Thuộc tính:
		x, y: kiểu số nguyên (int), kiểu truy cập private
			Các phương thức: kiểu truy cập public
		Hàm xây dựng mặc định: Point()
			Gán x = 0, y = 1
		Hàm xây dựng có 2 tham số: Point(int x, int y)
			Gán hai tham số tương ứng cho x và y.
		Nhập tọa độ cho điểm từ bàn phím: read()
			Đọc 2 số nguyên từ bàn phím và lưu vào x và y.
			Dữ liệu đầu vào có dạng: x y, ví dụ -50 100
		Hiển thị dữ liệu ra màn hình: print()
			Hiển thị tọa độ của điểm theo dạng (x, y), ví dụ: (-50, 100)
			Chú ý: sau dấu phẩy có 1 khoảng trắng, in xong, xuống dòng.
		Dời điểm đi 1 độ dời (dx, dy): move(int dx, int dy)
			Di chuyển tọa độ của điểm đến vị trí mới cách chỗ cũ một khoảng (dx, dy).
			Sau khi di chuyển, toạ độ mới của điểm là (x + dx, y + dy).
		Lấy ra giá trị hoành độ của điểm: getX()
			Trả về tọa độ x của điểm
		Lấy ra giá trị tung độ của điểm: getY()
			Trả về tọa độ y của điểm
		Tính khoảng cách từ điểm đó đến gốc tọa độ: distance()
			Trả về khoảng cách từ điểm đang xét (this) đến gốc tọa độ
		Tính khoảng cách từ điểm đó đến 1 điểm khác: distance(Point P)
			Trả về khoảng cách từ điểm đang xét (this) đến điểm P.
		
Chú ý: Chỉ cài đặt lớp Point, không viết thêm lớp khác, không viết hàm main() trong lớp này.
Gợi ý:
Công thức tính khoảng cách giữa hai điểm A(xA, yA) và B(xB, yB) là:
		dA, B= xB-xA2+yB-yA2 
Sử dụng hàm sqrt() trong thư viện math để tính căn bậc 2.

*/

#include<bits/stdc++.h>
using namespace std;
class point
{
	private : 
		int x, y;
	public :
		point()
		{
			x = 0;
			y = 1;
		}
		poinnt(int x, int y)
		{
			this-> x = x;
			this-> y = y;
		}
		void read()
		{
			cin >> x >> y;
		}
		void print()
		{
			cout << "toa do : " << x "," << y ;
		}
		void move(int dx, int dy)
		{
			x += dx;
			y += dy;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
		double distance() {
        return sqrt(x * x + y * y);
    	}

    	double distance(point p) {
        int dx = p.x - x;
        int dy = p.y - y;
        return sqrt(dx * dx + dy * dy);
    	}
}
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	return 0;
}