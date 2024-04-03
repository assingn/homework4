#include<stdio.h> //표준입출력을 담당하고 있는 <stdio.h> 헤더파일 선언
#include<stdlib.h> //표준 라이브러리 함수에 대한 <stdlib.h> 헤더파일 선언

void main() //main문 시작
{
    printf("[----- [배정민] [2023041088] -----]\n");
    
    int **x; //이중 포인터 변수 x선언

    printf("sizeof(x) = %lu\n", sizeof(x)); //x의 메모리 영역 크기를 출력(vscode는 32bits 환경이므로 4bytes 출력)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x의 메모리 영역 크기를 출력(vscode는 32bits 환경이므로 4bytes 출력)
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x의 메모리 영역 크기를 출력.
}