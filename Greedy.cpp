//'���� �� �տ� ���̴� ������ ��Ȳ���� �Ѵ� �˰���'
//����: ��� ���� ������ �ؿ� �ٻ��� ���� ������ ���� �� ����. 



#include <iostream>

using namespace std;

int n;
int result = 0;

int main() {
	cin >> n;
	result += n/500;
	n %= 500;
	result += n/100;
	n %= 100;
	result += n/50;
	n %= 50;
	result += n/10;
	n %= 10;
	cout << result;
	
}
