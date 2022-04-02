#include <iostream>
using namespace std;

int sum = 0;

void HanoiMove(int num, int from, int by, int to) {

	if (num == 1) {
		cout << from << " " << to << endl;
	}
	else {
		HanoiMove(num - 1, from, to, by);
		cout << from << " " << to << endl;
		HanoiMove(num - 1, by, from, to);
	}

}
void HanoiMove_num(int num, int from, int by, int to) {

	if (num == 1);
	else {
		HanoiMove_num(num - 1, from, to, by);
		HanoiMove_num(num - 1, by, from, to);

	}
	sum++;
}


int main(void) {
	int num = 0;
	while (num < 1 || num>20)
		cin >> num;
	HanoiMove_num(num, 1, 2, 3);
	cout << sum << endl;
	HanoiMove(num, 1, 2, 3);
	return 0;
}