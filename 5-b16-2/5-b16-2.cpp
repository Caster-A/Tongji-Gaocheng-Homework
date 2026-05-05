/*2451454 电信 杨翰卓*/
#include <iostream>
#include <string>
using namespace std;
void input(string id[], string name[], int score[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "请输入第" << i + 1 << "个人的学号、姓名、成绩" << endl;
		cin >> id[i] >> name[i] >> score[i];
	}
}
void rank1(string id[], string name[], int score[])
{

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (score[j] > score[j + 1]) {
				string tmpid;
				tmpid = id[j];
				id[j] = id[j + 1];
				id[j + 1] = tmpid;

				string tmpname;
				tmpname = name[j];
				name[j] = name[j + 1];
				name[j + 1] = tmpname;

				int tmpscore[10];
				tmpscore[j] = score[j];
				score[j] = score[j + 1];
				score[j + 1] = tmpscore[j];
			}
		}
	}
}
void output(string id[], string name[], int score[])
{
	cout << "不及格名单(成绩升序):" << endl;
	for (int i = 0; i < 10; i++) {
		if (score[i] < 60)
			cout << name[i] <<' ' << id[i]<<' ' << score[i] << endl;
	}
}
int main()
{
	string id[10], name[10];
	int score[10];
	input(id, name, score);
	rank1(id, name, score);
	cout << endl;
	output(id, name, score);
	return 0;
}