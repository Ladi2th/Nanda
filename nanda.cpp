#include<Turboc.h>
using namespace std;

//car Ŭ���� ����
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

//car Ŭ���� ��� �Լ��� ����
Car::Car() {
	num = 0;
	gas = 0.0;
	sum++;
	printf("�ڵ����� ����������ϴ�. \n");
	//printf("������ȣ�� %d ���� ���ᷮ��  %.1f �� ������ ����.\n", n, g);
}

void Car::setCar(int n, double g) {
	num = n;
	gas = g;
	printf("������ȣ�� %d ���� ���ᷮ��  %.1f ���� �ٲپ���.\n", n, g);
}

void Car::showSum() {
	printf("������ȣ ��� %d�� �ֽ��ϴ�..\n",sum);
}

void Car::show()
{
	printf("������ ��ȣ�� %d �Դϴ�\n", num);
	printf("���ᷮ�� %.1f �Դϴ�\n", gas);
}

int Car::sum = 0;

//car Ŭ���� �̿�.
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