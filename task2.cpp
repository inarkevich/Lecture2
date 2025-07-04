#include <iostream>
#include <Windows.h>
#include <string> //добавила кириллицу


class Counter{
    private:
    int value;
    public:
    Counter (int value){
        this->value = value;
    }
    void increase (){ value++;}
    void decrease (){ value--;}
    void printValue(){std::cout<<value<<std::endl;}
};
int main(){
   SetConsoleCP(1251); 
   SetConsoleOutputCP(1251);
    std::string userAnswer;
    std::string userChoice;
    int userNumber;
    Counter* сounter = nullptr;
    std::cout<<"Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin>>userAnswer;
    if(userAnswer=="да"){
        std::cout<< "Введите начальное значение счётчика: ";
        std::cin>>userNumber;
        сounter = new Counter(userNumber);
    }else{сounter = new Counter (1);}
   do{ std::cout<<"Введите команду ('+', '-', '=' или 'x'): ";
    std::cin>>userChoice;
    if(userChoice=="+"){
        сounter->increase();
    }else if( userChoice=="-"){
        сounter->decrease();
    }else if(userChoice == "="){
        сounter->printValue();
    }else if (userChoice =="x"){
        std::cout<<"До свидания!";
    }else{
        std::cout<<"Неверный ввод!"<<std::endl;
    }
   }while(userChoice !="x");
   delete сounter;
}