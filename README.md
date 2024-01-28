2023-1, C++을 공부하면서 만든 타자연습 프로그램 + 미니게임 토이 프로젝트이다.

[프로그램 기능 설명]

*************************************타자 연습 프로그램 기능*********************************************************

<main 함수>
[1]
1. 게임 시작
2. 데이터 추가/수정/삭제
3. 프로그램 종료

[2]
1. 게임 시작 옵션
->1.1 낱말 게임
->1.2 짧은글 게임
-->1.3 긴 글 게임
(게임 종료 후 [1]화면으로 복귀)

[3]
2. 데이터 추가/수정/삭제 옵션
->2.1 데이터 추가
->2.2 데이터 수정
->2.3 데이터 삭제
(다음 세부 옵션 [4]로 이동)

[4]
2.1 데이터 추가
->2.1.1 낱말 데이터 추가
->2.1.2 짧은글 데이터 추가
->2.1.3 긴 글 데이터 추가
(데이터 추가 후 [1] 화면으로 복귀)

[5]
2.1 데이터 수정
->2.1.1 낱말 데이터 수정
->2.1.2 짧은글 데이터 수정
->2.1.3 긴 글 데이터 수정
(데이터 수정 후 [1] 화면으로 복귀)

[6]
2.1 데이터 삭제
->2.1.1 낱말 데이터 삭제
->2.1.2 짧은글 데이터 삭제
->2.1.3 긴 글 데이터 삭제
(데이터 삭제 후 [1] 화면으로 복귀)


		<작동 흐름>
			[1]
	[2]				[3]
->1로 복귀	     [4][5][6]
				->1로 복귀
		
	


<>



*******************************미니게임 구현 기능*********************************************

덧셈왕 게임은 타자연습 프로그램 낱말 게임에서 "덧셈왕" 키워드가 입력되면 
바로 <덧셈왕 게임> 미니게임이 실행되는 형식으로 작동하도록 구현했다.


<덧셈왕 게임 작동방식>
-한 문제당 5개씩 숫자 비가 하늘에서 내려오는 모양새로 숫자 출력
-1.3초 간격으로 내려오는 숫자들의 총합을 암산하여 정답 입력
-정답을 3번 틀리면 덧셈왕 게임 종료(목숨 3개)
-한 문제 맞출 때마다 게임 레벨 1씩 중가

1)레벨 분류 파트
int random(int min, int max); ->min~max 범위의 랜덤 난수를생성하는 함수 이용
레벨이 1씩 증가함에 따라 min~max의 값을 조금씩 늘려 점차 더할 숫자의 크기가 커지도록 조정함.

2) 숫자가 비처럼 내려오는 출력 형식
// 숫자 비처럼 내려오는 출력 형식

        <<로직>> 

        arr[i] = randomNum;
        answer += arr[i];
        for (int j = 0; j < arr[i]; j++)
        {
            cout << " ";
        }
        Sleep(1300);
        cout << arr[i] << endl;

생성되는 랜덤 난수들을 담는 int arr[] 배열.
arr[i](=randomNum)번 만큼 space바를 출력한 후 arr[i]값 출력
->마치 비가 내리는 형식같이 출력

3) 게임 실행 로직
5개의 숫자 비가 내릴때마다 해당 값들의 합에 대해 사용자 입력 받기
int 변수 answer에 5개의 숫자의 합 누적하여 사용자 입력과 비교

for (int i = 0; i <50 ; i++)->랜덤 난수 총 50번 생성 (레벨 10단계까지 있음.)
{

    <레벨 조정 작업 파트>
    숫자를 5개씩 끊어서 랜덤 난수 값의 범위 조정
    if(i<5)이면, random(0,5)->0~5 범위의 랜덤 난수 생성
    else if(i<10)이면, random(5,10)->5~10 범위의 랜덤 난수 생성
    (숫자 범위의 크기가 커질 수록 암산하기 어려워지므로)
    ...
    ...
    ...

    if ((i + 1) % 5 == 0)
    {
        정답 입력 받기
        만약 정답이라면) "정답!"출력 후 다음 레벨 게임 진행
        정답이 아니라면)"틀렸습니다." 출력 후 life값 1 감소
                            life==0이 되면 게임 종료(break;)
    }
}


[프로그램 동작 화면]
1. 시작 화면
   ![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/58b87f63-1a96-4345-94bf-070483b1fae8)

2. 옵션 선택 화면
2-1) 타자게임 진행 화면
   ![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/97c69eb7-3007-49ae-9cf2-82a2dc6eff4c)

   ![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/aa65a363-7deb-40c6-999f-c841e01e8799)

2-2) 데이터 추가/수정/삭제 화면
![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/d0f8f84f-587f-45e0-b751-609eac6fe29a)
![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/f5218d91-dc76-4b76-ba44-6fba371a700b)
![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/8846e1e3-a9c1-476b-af96-433c80eda0ed)
![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/82b7221c-72fe-4139-b744-cdc0b55b7ed6)

3. "덧셈왕 게임" 실행 화면
   ->타자연습게임에서 "덧셈왕" 키워드를 입려하면 숨겨져있던 이스터에그 미니게임 실행!
   ![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/2e2046da-cb0f-42cd-934f-96c3a0b426c7)
   ->하늘에서 1초 간격으로 숫자비가 내려옴. level 1~10까지 존재. 목숨은 총 10개이고, 레벨이 높아질 수록 덧셈 수의 범위가 높아짐.
   ![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/25ed7f8f-baf8-4a2d-8145-8f427033bb26)


   ![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/6d064953-afdd-4622-88d9-01c52762f888)

4. 프로그램 종료 화면
   ![image](https://github.com/seulgib/TypingGameProgram/assets/126848494/faa4b2e9-1d7c-4bb2-b12d-e83ea5d0842d)

