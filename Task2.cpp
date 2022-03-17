#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	float x_center, y_center, r, x_point, y_point, x, y, sq_xy, sq_r;
	int i = 0;
	string file_1, file_2, line;
	cout << "Hello! Please, enter name of file_1 along with format (e.g. - test.txt): ";
	cin >> file_1;
	cout << "Please, enter name of file_2 along with format (e.g. - test.txt): ";
	cin >> file_2;

	ifstream my_file1;
	my_file1.open(file_1);
	my_file1 >> x_center >> y_center >> r;
	my_file1.close();

	ifstream my_file2;
	my_file2.open(file_2);
	while (my_file2 >> x_point) {
		i++;
		my_file2 >> y_point;
		x = x_point - x_center;
		y = y_point - y_center;
		sq_xy = x * x + y * y;
		sq_r = r * r;
		if (sq_xy == sq_r) {
			cout << 0 << endl;
		}
		else {
			if (sq_xy < sq_r) {
				cout << 1 << endl;
			}
			else {
				cout << 2 << endl;
			}
		}
	}
	my_file2.close();

	return 0;
}
