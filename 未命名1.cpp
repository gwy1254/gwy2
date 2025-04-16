#include <iostream>
using namespace std;

// 递归函数实现汉诺塔移动步骤
void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        // 当只剩一个盘子时，直接移动
        cout << "Move disk 1 from " << from_rod << " to " << to_rod << endl;
        return;
    }
    
    // 将n-1个盘子从起点柱移动到辅助柱（借助目标柱作为辅助）
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    
    // 移动当前最大的盘子
    cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;
    
    // 将n-1个盘子从辅助柱移动到目标柱（借助起点柱作为辅助）
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int disks;
    cout << "Enter the number of disks: ";
    cin >> disks;
    
    // 调用汉诺塔函数，初始参数：
    // 从A柱移动所有盘子到C柱，B柱作为辅助
    hanoi(disks, 'A', 'C', 'B');
    
    return 0;
}
