#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int i = 0, j = 0;
	float x = 0, y, steps = 0;
    string file_name, line;
    cout << "Hello! Please, enter file name along with format (e.g. - test.txt): ";
    cin >> file_name;
	ifstream my_file;

	my_file.open(file_name);
	while (my_file >> y) {
		i++;
	}
	my_file.close();

	my_file.open(file_name);
	float* arr = new float[i];
	while (my_file >> y) {
		arr[j] = y;
		j++;
		x += y;
	}
	x = x / i;
	x = round(x);
	my_file.close();

	for (int k=0; k<i; k++) {
		if (arr[k] == x) {
			continue;
		}
		else {
			if (arr[k] > x) {
				steps += arr[k] - x;
			}
			else {
				steps += x - arr[k];
			}
		}
	}
	steps = round(steps);
	cout << steps;

	return 0;
}