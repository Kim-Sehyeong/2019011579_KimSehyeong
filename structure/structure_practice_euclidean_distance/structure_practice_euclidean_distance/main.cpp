#include <stdio.h>
#include <math.h>

// 구조체 선언: 3차원 점
struct point{
    double x;
    double y;
    double z;
};
typedef struct point cor_point; //형 재정의(구조체 이름: point, 새 자료형 이름: cor_point) 

// 함수 선언: 두 점 사이의 거리 계산
double calc_distance(cor_point p1, cor_point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

int main(void) 
{
    double distance = 0.0;
    cor_point p1, p2; // 재정의 형 사용

    printf("Input the coordinate of point 1 (x y z) : "); // 두 점의 좌표값 입력받기
    scanf_s("%lf %lf %lf", &p1.x, &p1.y, &p1.z);

    printf("Input the coordinate of point 2 (x y z) : ");
    scanf_s("%lf %lf %lf", &p2.x, &p2.y, &p2.z);

    distance = calc_distance(p1, p2); // 두 점 사이의 거리를 계산하는 함수 호출

    printf("\nDistance between two points: %.2lf\n", distance); // 두 점 사이의 거리 출력

    return 0;
}
