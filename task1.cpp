#include <iostream>

class Calculator{
private:
    double num1;
    double num2;
public:
Calculator(){
num1 = 1;
num2 = 1;
}
double add (){
    return num1+num2;  
};
double multiply (){
    return num1*num2;
};
double subtract_1_2(){
    return num1-num2;
};
double subtract_2_1(){
    return num2-num1;
};
double divide_1_2(){
    return num1/num2;
};
double divide_2_1(){ 
    return num2/num1;
};
bool set_num1(double num1){
    if (num1!=0){this->num1 = num1; return true;} 
    std::cout<<"Неверный ввод!"<<std::endl;
    return false;};
bool set_num2(double num2){
    if (num2!=0){this ->num2 = num2; return true;}
    std::cout<<"Неверный ввод!"<<std::endl;
    return false;};
};

int main (){
Calculator calculator;
double usernum1 = 0;
double usernum2 = 0;
while(true){ 
    do {
    std::cout<<"Введите num1: ";
    std::cin>>usernum1;} while (!calculator.set_num1(usernum1));
    do {std::cout<<"Введите num2: ";
    std::cin >>usernum2;}while(!calculator.set_num2(usernum2));
    double sum = calculator.add();
    std::cout<<"num1 + num2 = "<<sum<<std::endl;
    double mult = calculator.multiply();
    std::cout<<"num1 * num2 = "<<mult<<std::endl;
    double sub1 = calculator.subtract_1_2();
    std::cout<<"num1 - num2 = "<<sub1<<std::endl;
    double sub2 = calculator.subtract_2_1();
    std::cout<<"num2 - num1 = "<<sub2<<std::endl;
    double div1 = calculator.divide_1_2();
    std::cout<<"num1 / num2 = "<<div1<<std::endl;
    double div2 = calculator.divide_2_1();
    std::cout<<"num2 / num1 = "<<div2<<std::endl;
    std::cout << "Закройте консоль для выхода." << std::endl;  
}
}