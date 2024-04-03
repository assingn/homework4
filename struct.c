#include <stdio.h> //표준입출력을 담당하고 있는 <stdio.h> 헤더파일 선언

struct student1 { //student1 구조체 선언
    char lastName; //char형 변수 lastName 선언
    int studentId; //int형 변수 studentsId 선언
    char grade; //char형 변수 grade 선언
};

typedef struct { //typedef를 이용해 student2 구조체 선언
    char lastName; //char형 변수 lastName 선언
    int studentId; //int형 변수 studentsId 선언
    char grade; //char형 변수 grade 선언
} student2;

int main() { //main문 시작

    printf("[----- [배정민] [2023041088] -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; //구조체 변수 st1 선언 후, 초기화
    printf("st1.lastName = %c\n", st1.lastName); //구조체 st1의 멤버 변수 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); //구조체 st1의 멤버 변수 studentId 출력
    printf("st1.grade = %c\n", st1.grade); //구조체 st1의 멤버 변수 grade 출력
    student2 st2 = {'B', 200, 'B'}; //구조체 변수 st2 선언 후, 초기화
    printf("\nst2.lastName = %c\n", st2.lastName); //구조체 st2의 멤버 변수 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); //구조체 st2의 멤버 변수 studentId 출력
    printf("st2.grade = %c\n", st2.grade); //구조체 st2의 멤버 변수 grade 출력
    student2 st3; //구조체 변수 st3 선언
    st3 = st2; //구조체 st2의 멤버 변수 값은 구조체 st3로 복사
    printf("\nst3.lastName = %c\n", st3.lastName); //구조체 st3의 멤버 변수 lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); //구조체 st3의 멤버 변수 studentId 출력
    printf("st3.grade = %c\n", st3.grade); //구조체 st3의 멤버 변수 grade 출력
    /* equality test */
    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) //구조체 멤버 변수끼리 비교
        printf("equal\n");
    else
        printf("not equal\n");

    return 0; //0값 반환.
}