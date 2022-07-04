#include <bits/stdc++.h>
using namespace std;
bool compare(int *p, int *q)
{
	return (p[0] < q[0]) ? p > q : p < q;
}
int main(int argc, char const *argv[])
{
	int num;
	while (cin >> num)
	{
		int **student = new int*[num], total = 0;
		for (int i = 0; i < num; ++i) {student[i] = new int [2]; cin >> student[i][0] >> student[i][1]; total += student[i][0];}
		sort(student, student + num, compare);
		cout << "Highest: number " << student[num-1][1] << ", score: " << student[num-1][0] << "\n";
		cout << "Lowest: number " << student[0][1] << ", score: " << student[0][0] << "\n";
		cout << "Total: " <<  total << ", average: " << total / num << "\n";
	}
	return 0;
}