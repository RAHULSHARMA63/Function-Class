#include<iostream>
using namespace std;
class XYZ {
private:
   char ch='A';
   int num = 22;
public:
    friend class ABC;
};
class ABC {
public:
   void disp(XYZ obj){
      cout<<obj.ch<<"\n";
      cout<<obj.num<<"\n";
   }
};
int main() 
{
   ABC obj;
   XYZ obj2;
   obj.disp(obj2);
   return 0;
}
