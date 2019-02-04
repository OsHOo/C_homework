/*
	To. 서우

			실습 E2를 짤 때 조금 복잡해 보이지만, 사실 나중에 하게 될 실습 26과 굉장히 흡사한 구조를 가지고 있어.
			아래 써 있는 check_size 함수는 실습 26에서 digit을 구하는 함수와 동일해.
			그리고 일단 이 프로그램의 전체적인 구조는 다음과 같아.
			main함수 내에서는 굉장히 간단하지. 숫자를 입력받고, rev 함수를 이용해 한번에 뒤집혀진 숫자를 출력해.
			rev 함수 내의 구조는 다음과 같아.
			일단 새로운 new_num = 0 변수를 정의하고
			만약 Input이 12345 라면 첫번째 반복문에서는 num1 = 5, num2 = 1 을 저장해.
			그리고	new_num 에다가 5 * 10000 과 1 * 1 을 더해서 저장해. 그러면 new_num = 50001 이 되겠지.
			그리고 두번째 반복문에서는 num1 = 4, num2 = 2 를 저장해.
			그리고 new_num 에다가 4 * 1000 과 2 * 10 을 더해서 저장해. 그러면 new_num = 54021 이 되겠지.
			그리고 세번째 반복문에서는 num1 = 3, num2 = 3 을 저장해.
			그런데 이때는 3 * 100 만 더해야 하므로 if문을 통해서 예외처리를 해줄꺼야. 이 부분 때문에 처음에 입력받은 num의 자릿수가 홀수개인지 짝수개인지 알아야 해.
			그래서 rev 함수 내부를 보면 짝수와 홀수를 if-else 문을 통해서 구분해 놓은 부분이 있어.
			그렇게 최종적으로 new_num = 54321 이 저장되게 되고, 그 값을 리턴하는 구조야.
			rev 함수내에 있는 복잡한 수식들은 직접 스스로 예시 숫자를 생각해서 과정을 따라가봐. 그러면 이해가 빠를거야. 
			한줄 한줄 각 코드가 어떤 과정을 거치는지 써주고 싶지만 그렇게 되면 네가 파일을 제출할 때 한줄씩 주석을 다 지워야 하는 번거로움이 있을 것 같아서
			이렇게 통째로 주석을 달았어. 밑에 check_size 함수만 따로 주석을 더 달았구.
			하다가 이해가 안되는 부분이 있으면 전화줘요. 서우 화이팅.
																													
																											From. 긴친
*/
#include <stdio.h>
int rev(int);
int check_size(int);
void main(void)
{
	int num;
	scanf("%d", &num);
	num = rev(num);
	printf("%d\n", num);
}
int rev(int num)
{
	int size, dx, num1, num2, tmp, new_num;
	size = check_size(num);
	tmp = size * size;
	new_num = 0;
	if (size == 1)
		new_num = num;
	else
	{
		if (num < tmp * 10) // 이게 바로 num의 자릿수가 홀수 인 경우야.
		{
			for (dx = 1; dx <= size; dx *= 10) //이런 for문은 처음 볼 수도 있어. 이 경우, 한번 반복문이 돌때마다 dx의 값에 10씩 곱해져.(dx *= 10) 또 그래서 시작이 dx = 1 인거구.
			{
				num1 = (num % (dx * 10) - num % dx) / dx;
				num2 = (num % (tmp / dx * 10) - num % (tmp / dx)) / (tmp / dx);
				if (dx != size)
				{
					new_num += (num1 * tmp / dx);
					new_num += (num2 * dx);
				}
				else
				{
					new_num += (num1 * dx);
				}
			}
		}
		else
		{
			for (dx = 1; dx <= size; dx *= 10)
			{
				num1 = (num % (dx * 10) - num % dx) / dx;
				num2 = (num % (tmp * 10 / dx * 10) - num % (tmp * 10 / dx)) / (tmp * 10 / dx);
				new_num += (num1 * tmp * 10 / dx);
				new_num += (num2 * dx);
			}
		}
	}
	return new_num;
}

/*
	check_size 함수는 나중에 실습 26에서도 쓰게 될꺼야. 실습 26파일을 보면 알 수 있겠지만,
	12345 의 경우, 
	1과 5에 digit 1
	2와 4에  digit 10
	3에 digit 100
	을 부여하고 가장 큰 digit = 100 값을 리턴하는 함수야.
*/
int check_size(int num)
{
	int dx, rlt;
	if (num == 1)
		return 1;
	else
	{
		for (dx = 1; dx < num; dx *= 10) // 12345 의 경우 1*1, 10*10, 100*100 은 모두 12345보다 작으므로 rlt = 100 이 저장되어 있다.
										 // 그런데 1000*1000 은 12345보다 크므로, else 문으로 들어가게 되고, for문을 벗어나게 된다.
										 // 따라서 리턴하는 rlt = 100 이다.
		{
			if (dx*dx <= num)
				rlt = dx;
			else
				break;
		}
		return rlt;
	}
}