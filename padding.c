#include <stdio.h> //표준입출력을 담당하고 있는 <stdio.h> 헤더파일 선언

struct student { //구조체 student 선언
char lastName[13]; /* 13 bytes */ //char형 문자 배열 lastName[13] 선언
int studentId; /* 4 bytes */ //int형 변수 studentId 선언
short grade; /* 2 bytes */ //short형 변수 grade 선언
};

int main() //main함수 시작
{
    printf("[----- [배정민] [2023041088] -----]\n");

    struct student pst; //구조체 변수 pst 선언
    printf("size of student = %ld\n", sizeof(struct student)); //구조체 student의 크기 출력
    printf("size of int = %ld\n", sizeof(int)); //int의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short의 크기 출력
    
    return 0; //0값 반환.
}