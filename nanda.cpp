#include<Turboc.h>
using namespace std;

//car 클래스 선언
class Car {
private:
	int num;
	double gas;
public:
	static int sum;
	Car();
	void setCar(int n, double g);
	void show();
	static void showSum();
};

//car 클래스 멤버 함수의 정의
Car::Car() {
	num = 0;
	gas = 0.0;
	sum++;
	printf("자동차가 만들어졌습니다. \n");
	//printf("차량번호를 %d 으로 연료량이  %.1f 인 지동차 생성.\n", n, g);
}

void Car::setCar(int n, double g) {
	num = n;
	gas = g;
	printf("차량번호를 %d 으로 연료량을  %.1f 으로 바꾸었음.\n", n, g);
}

void Car::showSum() {
	printf("차량번호 모두 %d대 있습니다..\n",sum);
}

void Car::show()
{
	printf("차량의 번호는 %d 입니다\n", num);
	printf("연료량은 %.1f 입니다\n", gas);
}

int Car::sum = 0;

//car 클래스 이용.
int main() {
	Car::showSum();

	Car car1;
	car1.setCar(1234, 20.5);

	Car::showSum();

	Car car2;
	car2.setCar(4567, 30.5);

	Car::showSum();

	return 0;
}