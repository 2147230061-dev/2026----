#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    string color;  
    int number;     
public:
    Car(string c, int n)
    {
        color = c;
        number = n;
    }
    ~Car(){    
    }
    void display()
    {
    cout << "车辆颜色：" << color << "，车牌号：" << number << endl;
    }
};

int main()
{
    Car car1("黑色", 8899);
    Car car2("蓝色", 6666);
    car1.display();
    car2.display();
    return 0;
}

