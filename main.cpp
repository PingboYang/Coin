#include <iostream>
using namespace std;

class Coin{
private:string side;
public:
        Coin(){
          srand(time(0));
          toss();
          
        }
        void toss(){
          int x=rand()%2;
          if(x==0){
          side="HEADS";
          }else{
          side="TAILS";
    }
        }
        string getSide(){
          return side;
        }
};

int main() {
  Coin myCoin;
  int countTails=0, countHeads=0;
  for(int i=1; i<=10;i++){
    myCoin.toss();
    if(myCoin.getSide()=="TAILS"){
      countTails++;
    }else{
      countHeads++;
    }
  }
  cout<<"\nTails ="<<countTails;
  cout<<"\nHeads ="<<countHeads;
  
  
}