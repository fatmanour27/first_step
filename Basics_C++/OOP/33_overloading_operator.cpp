//* unary operators: ++ --
//* Arithmetic: + - / * %
//* Relational: < <= > >= == !=
//* logical: && || !
//* bitwise:& | << >> ~ ^
//* assignment: = += -= *= /= %=
//* ternary/conditional: ? :

/*#include <iostream>

using namespace std;
//When the '+' operator is used with two objects of class, this overloaded function is called
class Number
{
    public:
    int num;
    
    Number(int set_num)   //*Number is a constructor that recieve one integer parameter
    {
        num = set_num;
    }
    //operator overloading
    Number operator +(const Number &numA)  //*operator func: overload the plus binary operator(+), allowing the addition two objects of class, this func take parameter(&numA) of type opf const Number
    {
        return Number(this->num + numA.num);
    }
};

int main()
{
    Number a(5);   //* this->num
    Number b(10);  //* numA.num
    Number c = a + b;
    
    cout<<"sum = "<<c.num<<"\n";
    
    return 0;
}*/
//*******************************************************************************************************************************************************************************************************************************
#include <iostream>
using namespace std;

class Result{    //overloading operator +
    private:
        int feet, inches;
    public:
    void result(float f, float i)
    {
        feet = f;
        inches = i;
    }
        Result():feet(0), inches(0)
        {}
        Result(int f, int i):feet(f), inches(i)
        {}
        Result operator + (Result d2)
        {                                   //counter d2 : it's an object
            int res1 = feet + d2.feet;
            int res2 = inches + d2.inches;
            return Result (res1, res2);
        }
        void getinfo()
        {
            cout << feet << endl << inches << endl;
        }
};

int main()
{
    Result o1(1, 2);
    Result o2(3, 4);
    Result o3 = o1 + o2;
    o3.getinfo();
    
    
    
    return 0;
}