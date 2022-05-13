#include"bits/stdc++.h"

using namespace std;

class animal{
  string breed;
  int legs = 4;
  bool horns;
public:
    void can_walk() {
      cout<<"animal can walk"<<endl;
    }
    void eat(){
      cout<<"animal can eat"<<endl;
    }
};


class dog: public animal{
public:
    void speak(){
      cout<<"can bark";
    }

};
class human : public animal{

}
int main()
{
  dog D;
  D.speak();
  
//  cout<<D.legs;
  D.can_walk();

}
