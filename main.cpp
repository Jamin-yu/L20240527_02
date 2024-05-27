//Circle, Rectangle, Triangle을 배열에 저장?

#include <iostream>
#include <vector> //동적배열 갖춤 //TArray 알아서 지워져서 빨라짐(언리얼)

using namespace std;

#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"


int main()
{
	//FShape* Shapes = new FShape[10]; - 이중포인터가 됨...이거 하지말자고 vector가 해줄테니까
	vector<FShape*> Shapes;

	Shapes.push_back(new FTriangle()); //하나 누를 때마다 포인터 생성
	Shapes.push_back(new FRectangle());
	Shapes.push_back(new FCircle());
	//실체화 되는 아이들만 만들어 붙여라
	//Shapes.push_back(new FShape()); 이 코드를 할 수 없게 막아놓은 것 (추상 클래스)

	for (int i = 0; i < Shapes.size(); ++i)
	{
		Shapes[i]->Draw(); //한번에 반복문으로 생성하고
	}

	for (int i = 0; i < Shapes.size(); ++i)
	{
		delete Shapes[i]; //한번에 반복문으로 지우기
	}

	return 0;
}
