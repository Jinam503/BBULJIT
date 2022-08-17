#define 정수 int
#define 출력 printf
#define 이다 ;
#define 해라 ;
#define 만약 if
#define 반환 return
#define 입력 scanf
#define 소수 float
#define 빈 void
#define 무한반복 while
#define 하나증가 ++
#define 는 =
#define 가 ==
#define 메인 main
#define 또는 &&
#define 문자 char
#define 그만 break
#define 닌텐도 switch
#define 경우 case
#define 더하기 +
#define 곱하기 *
#define 빼기 -
#define 나누기 /
#include <stdio.h>

정수 메인() {
  출력("계산기\n")
    해라 출력("끝내려면 기호자리에 !를 넣으세요\n") 해라 출력(
        "계산하려는 수식(예 : 10+20)을 입력하세요.\n") 해라
  문자 기호 이다 정수 첫번째숫자, 두번째숫자 이다 무한반복(1) {
    입력("%d%c%d", &첫번째숫자, &기호, &두번째숫자) 해라
    만약(기호 가 '!') 그만 해라
    닌텐도(기호) {
      경우 '+' : 출력("%d + %d = %d\n\n", 첫번째숫자, 두번째숫자,
                첫번째숫자 더하기 두번째숫자) 해라 그만 해라 경우 '-'
          : 출력("%d - %d = %d\n\n", 첫번째숫자, 두번째숫자,
                 첫번째숫자 빼기 두번째숫자) 해라 그만 해라 경우 '/'
          : 출력("%d % %d = %d\n\n", 첫번째숫자, 두번째숫자,
                 첫번째숫자 나누기 두번째숫자) 해라 그만 해라 경우 '*'
          : 출력("%d x %d = %d\n\n", 첫번째숫자, 두번째숫자,
                 첫번째숫자 곱하기 두번째숫자) 해라 그만 해라 기본
          : 출력("다시 입력하세요구르트\n\n") 해라 그만 해라
    }
  }
  반환 0 해라
}