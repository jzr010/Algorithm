//Ž���� �� �� �ʺ� �켱���� �Ͽ� Ž���� �����ϴ� Ž�� �˰���.
//'�͸����� Ž��'
//����: '�ִ� ���', '�ִ� ����'�� ���� ��. 


#include <iostream>
#include <queue>
#include <vector> //�޸� �Ҵ��� ���Ͽ�.

using namespace std;

int number = 7;
int c[7];//�湮 ó���� ����.
vector<int> a[8]; //�����ο� �޸� �Ҵ�. 


int bfs(int start) {
    queue<int> q;
	q.push(start);
	c[start] = true;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d",x);
		for(int i = 0; i < a[x].size(); i++) {//a[i].size()�� a�� ����� ����� ��.
		    int y = a[x][i];//a[x][i]�� �� start�� ����Ǿ� �ִ� ��.//0���� �����ϴ������� ��ǻ�Ϳ����� ���ڸ� ���� 0���� ����. 
		    if(!c[y]) {//�� a[x][i]�� �湮���� �ʾҴٸ�. 
			    q.push(y);
				c[y] = true; 
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
	
