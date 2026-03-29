#include<bits/stdc++.h>
using namespace std;

class point
{
	private:
		int x, y;

	public:
		point()
		{
			x = 0;
			y = 1;
		}

		point(int x, int y)
		{
			this->x = x;
			this->y = y;
		}

		void read()
		{
			cin >> x >> y;
		}

		void print()
		{
			cout << "(" << x << ", " << y << ")" << endl;
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

		double distance()
		{
			return sqrt(x * x + y * y);
		}

		double distance(point p)
		{
			int dx = p.x - x;
			int dy = p.y - y;
			return sqrt(dx * dx + dy * dy);
		}
};

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	point A(3, 4);
	A.print();

	point B;
	B.read();
	B.print();

	point C(-B.getx(), -B.gety());
	C.print();

	cout << B.distance() << '\n';
	cout << A.distance(B);

	return 0;
}