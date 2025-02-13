#include <iostream>

class Calculator{
private:
    double num1;
    double num2;
public:
Calculator(double num1, double num2){
this->num1 = num1;
this->num2 = num2;
}
double add (double num1, double num2){
    return num1+num2;  
};
double multiply (double num1, double num2){
    return num1*num2;
};
double subtract_1_2(double num1, double num2){
    return num1-num2;
};
double subtract_2_1(double num2, double num1){
    return num2-num1;
};
double divide_1_2(double num1, double num2){
    return num1/num2;
};
double divide_2_1(double num1, double num2){ 
    return num2/num1;
};
bool set_num1(double num1){if (num1 !=0)this->num1 = num1; return true;};
bool set_num2(double num2){if (num2!=0)this ->num2 = num2; return true;};
};

int main (){
    do {
    double usernum1 = 0;
    double usernum2 = 0;
    std::cout<<"Введите num1 (или закройте консоль для выхода из программы): ";
    std::cin>>usernum1;
    std::cout<<"Введите num2: ";
    std::cin >>usernum2;
    Calculator calculator (usernum1, usernum2);
    double sum = calculator.add(usernum1, usernum2);
    std::cout<<"num1 + num2 = "<<sum<<std::endl;
    double mult = calculator.multiply(usernum1, usernum2);
    std::cout<<"num1 * num2 = "<<mult<<std::endl;
    double sub1 = calculator.subtract_1_2(usernum1, usernum2);
    std::cout<<"num1 - num2 = "<<sub1<<std::endl;
    double sub2 = calculator.subtract_2_1(usernum2, usernum1);
    std::cout<<"num2 - num1 = "<<sub2<<std::endl;
    double div1 = calculator.divide_1_2(usernum1,usernum2);
    std::cout<<"num1 / num2 = "<<div1<<std::endl;
    double div2 = calculator.divide_2_1(usernum1,usernum2);
    std::cout<<"num2 / num1 = "<<div2<<std::endl;
    } while (true);
}