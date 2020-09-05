#include <iostream>
#include <queue>
#include <vector>//vector �� array���� �������� �����Ҵ�.ũ�⸦ ���� �������� �ʾƵ� �ȴ�/ 

using namespace std;

int number = 7;
int c[8];
vector<int> a[8]; //8���� ���Ͱ� �� �迭�� ����.


void bfs(int start){
	queue<int> q;
	q.push(start);
	c[start]=true;
	while(!q.empty()){
		int x= q.front();
		q.pop();
		printf("%d",x);
		for(int i=0;i<a[x].size();i++){//���� q���� ���� ������ ���. //a[x].size() �ڿ� push.back�� ��������. 
			int y=a[x][i];
			if(!c[y]){
				q.push(y);
				c[y]=true;
			}
		}
	}
	
}

int main(void){
	a[1].push_back(2);
	a[2].push_back(1);
	
	a[1].push_back(3);
	a[3].push_back(1);
	
	a[2].push_back(3);
	a[3].push_back(2);
	
	a[2].push_back(4);
	a[4].push_back(2);
	
	a[2].push_back(5);
	a[5].push_back(2);
	
	a[5].push_back(4);
	a[4].push_back(5);
	
	a[3].push_back(6);
	a[6].push_back(3);
	
	a[3].push_back(7);
	a[7].push_back(3);
	
	a[6].push_back(7);
	a[7].push_back(6);

	bfs(1);
	
	return 0; 
	
	
}
