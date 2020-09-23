//'당장 눈 앞에 보이는 최적의 상황만을 쫓는 알고리즘'
//장점: 어느 정도 최적의 해에 근사한 값을 빠르게 구할 수 있음. 



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
