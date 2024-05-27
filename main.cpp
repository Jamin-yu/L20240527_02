//Circle, Rectangle, Triangle�� �迭�� ����?

#include <iostream>
#include <vector> //�����迭 ���� //TArray �˾Ƽ� �������� ������(�𸮾�)

using namespace std;

#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"


int main()
{
	//FShape* Shapes = new FShape[10]; - ���������Ͱ� ��...�̰� �������ڰ� vector�� �����״ϱ�
	vector<FShape*> Shapes;

	Shapes.push_back(new FTriangle()); //�ϳ� ���� ������ ������ ����
	Shapes.push_back(new FRectangle());
	Shapes.push_back(new FCircle());
	//��üȭ �Ǵ� ���̵鸸 ����� �ٿ���
	//Shapes.push_back(new FShape()); �� �ڵ带 �� �� ���� ���Ƴ��� �� (�߻� Ŭ����)

	for (int i = 0; i < Shapes.size(); ++i)
	{
		Shapes[i]->Draw(); //�ѹ��� �ݺ������� �����ϰ�
	}

	for (int i = 0; i < Shapes.size(); ++i)
	{
		delete Shapes[i]; //�ѹ��� �ݺ������� �����
	}

	return 0;
}
