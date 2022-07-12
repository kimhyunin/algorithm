#include <iostream>
using namespace std;

int main() {
	int caseCount;
	int studentCount;
	int score[1000];
	int totalscore;
	int avg;
	int count;
	double result;

	cin >> caseCount;
	for (int i = 0; i < caseCount; i++) {
		cin >> studentCount;
		totalscore = 0;
		avg = 0;
		count = 0;
		result = 0;
		for (int j = 0; j < studentCount; j++) {
			cin >> score[j];
			totalscore = totalscore + score[j];
		}
		avg = totalscore / studentCount;
		for (int k = 0; k < studentCount; k++) {
			if (score[k] > avg)
				count++;
		}
		result = ((double)count / studentCount) * 100;
		cout << fixed;
		cout.precision(3);
		cout << result << "%" << endl;
		
		
	}
}