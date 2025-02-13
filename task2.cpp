#include <iostream>

class Counter{
    private:
    int value;
    public:
    Counter (int value){
        this->value = value;
    };
    Counter (){
        value = 1;
    };
    int increase (int value){
        this->value=value;
        
        return value++;
    };
    int decrease (int value){
        this->value = value;
        
        return value--;
    };
    void printValue(int value){
        std::cout<<value<<std::endl;
    }
};

int main(){
    std::string userAnswer;
    std::string userChoice;
    int userNumber;
    Counter counter;
    std::cout<<"Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin>>userAnswer;
    if(userAnswer=="да"){
        std::cout<< "Введите начальное значение счётчика: ";
        std::cin>>userNumber;
        Counter counter (userNumber);
    }else{Counter counter;}
   do{ std::cout<<"Введите команду ('+', '-', '=' или 'x'): ";
    std::cin>>userChoice;
    if(userChoice=="+"){
        counter.increase(userNumber);
    }else if( userChoice=="-"){
        counter.decrease(userNumber);
    }else if(userChoice == "="){
        counter.printValue(userNumber);
    }else if (userChoice =="x"){
        std::cout<<"До свидания!";
    }else{
        std::cout<<"Неверный ввод!"<<std::endl;
    }
   }while(userChoice !="x");
}