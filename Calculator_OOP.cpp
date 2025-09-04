#include<iostream>
using namespace std;
enum enOperationType {None, Add, Subtract,Divide,Multiply};
class clsCalculator
{
  private:

  int _calc=0;
  int _Lastnum=0;
  enOperationType _lastOP=None;
  public:
  int Clear()
  {
     _lastOP=enOperationType::None;
    return _calc=0;
  }
  
  int Add(int num)
  {
    _Lastnum=num;
    _lastOP=enOperationType::Add;
    return _calc+=_Lastnum;
  }
  
  int Subtract(int num)
  {
    _Lastnum=num;
    _lastOP=enOperationType::Subtract;
    return _calc-=_Lastnum;
  }
  int Divide(int num)
  {
    if(num ==0)
    {
      num =1;
    }
    _Lastnum=num;
    _lastOP=enOperationType::Divide;
    return _calc/=_Lastnum;
  }
  int Multiply(int num)
  {
    _Lastnum=num;
    _lastOP=enOperationType::Multiply;
    return _calc*=_Lastnum;
  }
  void PrintResult()
  {
    if(_lastOP==enOperationType::Add)
    {
       cout<<"Result After Adding "<<_Lastnum<<" is: "<<_calc<<endl;
    }
    if(_lastOP==enOperationType::Subtract)
    {
       cout<<"Result After Subtracting "<<_Lastnum<<" is: "<<_calc<<endl;
    }
     if(_lastOP==enOperationType::Divide)
    {
       cout<<"Result After Dividing "<<_Lastnum<<" is: "<<_calc<<endl;
    }
    if(_lastOP==enOperationType::Multiply)
    {
       cout<<"Result After Multipling "<<_Lastnum<<" is: "<<_calc<<endl;
    }
    if(_lastOP==enOperationType::None)
    {
       cout<<"Result After Clear "<<"0"<<" is: "<<_calc<<endl;
    }
  }
};

int main()
{
  clsCalculator Calculator1;
  Calculator1.Clear();

  Calculator1.Add(10);
  Calculator1.PrintResult();

  Calculator1.Add(100);
  Calculator1.PrintResult();
  
  Calculator1.Subtract(20);
  Calculator1.PrintResult();

  Calculator1.Divide(0);
  Calculator1.PrintResult();

  Calculator1.Divide(2);
  Calculator1.PrintResult();

  Calculator1.Multiply(3);
  Calculator1.PrintResult();

  Calculator1.Clear();
  Calculator1.PrintResult();
}
