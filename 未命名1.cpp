#include <iostream>
using namespace std;

// �ݹ麯��ʵ�ֺ�ŵ���ƶ�����
void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        // ��ֻʣһ������ʱ��ֱ���ƶ�
        cout << "Move disk 1 from " << from_rod << " to " << to_rod << endl;
        return;
    }
    
    // ��n-1�����Ӵ�������ƶ���������������Ŀ������Ϊ������
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    
    // �ƶ���ǰ��������
    cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;
    
    // ��n-1�����ӴӸ������ƶ���Ŀ�����������������Ϊ������
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int disks;
    cout << "Enter the number of disks: ";
    cin >> disks;
    
    // ���ú�ŵ����������ʼ������
    // ��A���ƶ��������ӵ�C����B����Ϊ����
    hanoi(disks, 'A', 'C', 'B');
    
    return 0;
}
