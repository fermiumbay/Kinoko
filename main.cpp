#include <iostream>
using namespace std;

// aを2倍にする
int nibai(int a);

void Run(){
	int value;
	cout << "入力した値を二倍にするよ！！" << endl;
	cin >> value;
	cout << "二倍にしたら" << nibai(value) << "になるわーー" << endl;
}

int main(){
	char c;
	do{
		Run();
		cout << "================" << endl;
		cout << "もう一度する？(y/n): " << endl;
		cin >> c;
	}while(c == 'y');
	return 0;
}

int nibai(int a){
	// 未実装
}
