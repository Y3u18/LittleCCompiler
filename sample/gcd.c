#include "lclib.h"

// ���Լ��
int gcd(int a, int b)
{
    // if b equals 0, return a
    // else return gcd(b,a%b)
    return b ? gcd(b, a % b) : a;
}

// ��С������
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

void main()
{
    // �������������Լ��
    printnum(gcd(12, 20));
    printstr("\n");

    // ������������С������
    printnum(lcm(8, 17));
    printstr("\n");
}
