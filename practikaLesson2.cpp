#include <iostream>
#include <vector>
#include <stdexcept>
#include <memory>
using namespace std;

int mm(const vector<int>& mas) {
	int imax = mas[0];
	for (int i = 1; i < mas.size(); ++i) {
		if (imax < mas[i]){
			imax = mas[i];
		}
	}
	return imax;
}

int main() {
	vector<int> mas = {3, 5, 2, 1, 7, 9};
	cout << mm(mas);
	return 0;
}
