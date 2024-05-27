#pragma once
//추상 클래스

class FShape
{
public:
	FShape();
	virtual ~FShape();

	//순수 가상 함수 
		//자식 클래스에서 무조건 구현해라, 이 클래스는 인스턴스가 못됨, 포인터로 사용 = 추상클래스
		//강제 - 자식클래스에 없으면 컴파일 안된다
		//순수 가상 함수가 하나라도 있으면 추상 클래스
		//인터페이스를 상속받아서 만든다
	virtual void Draw() = 0;

	void Do();
	
};

