#include <iostream>
using namespace std;

// a��2�{�ɂ���
int nibai(int a);

void Run(){
	int value;
	cout << "���͂����l���{�ɂ����I�I" << endl;
	cin >> value;
	cout << "��{�ɂ�����" << nibai(value) << "�ɂȂ��[�[" << endl;
}

int main(){
	char c;
	do{
		Run();
		cout << "================" << endl;
		cout << "������x����H(y/n): " << endl;
		cin >> c;
	}while(c == 'y');
	return 0;
}

int nibai(int a){
	// ������
}
