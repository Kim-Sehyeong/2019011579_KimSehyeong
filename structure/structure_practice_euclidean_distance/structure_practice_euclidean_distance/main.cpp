#include <stdio.h>
#include <math.h>

// ����ü ����: 3���� ��
struct point{
    double x;
    double y;
    double z;
};
typedef struct point cor_point; //�� ������(����ü �̸�: point, �� �ڷ��� �̸�: cor_point) 

// �Լ� ����: �� �� ������ �Ÿ� ���
double calc_distance(cor_point p1, cor_point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

int main(void) 
{
    double distance = 0.0;
    cor_point p1, p2; // ������ �� ���

    printf("Input the coordinate of point 1 (x y z) : "); // �� ���� ��ǥ�� �Է¹ޱ�
    scanf_s("%lf %lf %lf", &p1.x, &p1.y, &p1.z);

    printf("Input the coordinate of point 2 (x y z) : ");
    scanf_s("%lf %lf %lf", &p2.x, &p2.y, &p2.z);

    distance = calc_distance(p1, p2); // �� �� ������ �Ÿ��� ����ϴ� �Լ� ȣ��

    printf("\nDistance between two points: %.2lf\n", distance); // �� �� ������ �Ÿ� ���

    return 0;
}
