#include <iostream>
using namespace std;

int main() {
	int caseCount;
	int studentCount;
	float divscore[1000] = {};
	int score[1000];
	int totalscore;
	int avg;

	cin >> caseCount;
	for (int i = 0; i < caseCount; i++) {
		cin >> studentCount;
		totalscore = 0;
		avg = 0;
		for (int j = 0; j < studentCount; j++) {
			cin >> score[j];
			totalscore = totalscore + score[j];
		}
		avg = totalscore / studentCount;
		cout << avg << endl;
		cout.precision(3);
		cout.fixed;
	}

	return 0;

}