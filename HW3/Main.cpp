/*
ДЗ 3

Тема: классы

ВАРИАНТЫ ЗАДАНИЙ

Реализуйте классы «Комплексное число», «Вектор», «Круг».
*/

#include <iostream>
class Vec3 {
public:
	Vec3(float x, float y, float z) :x(x), y(y), z(z) {};
	float lenght() { return sqrt(x * x + y * y + z * z); }
	float x;
	float y;
	float z;
};

class Circle {
public:
	Circle(float radius): radius(radius) {}
	float area() { return 3.14 * radius * radius; }
private:
	float radius = 0.;
};

// Реализацию комплексного числа см. в первой домашке

int main(){
	
}