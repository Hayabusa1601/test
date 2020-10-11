
#include<algorithm>
#include<numeric>
#include<iterator>
#include<vector>
#include<random>
#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)

inline void Rand(){
  srand((unsigned int)time(NULL));
}

inline int nines(){
  return rand() % 9 + 1;
}//この二つで乱数を設定する。

int makeans(int* ans){
  while(1){
    FOR(i,0,3){
    ans[i] = nines();
  }
    if(ans[0] != ans[1] && ans[1] != ans[2] &&ans[0] != ans[2]){
      break;
    }else{
      continue;
    }
  }
  return 
}//三つの乱数を持ってきてかぶったらやりなおしする。

int main (){
  int diffe, chance;//難易度別
  int ans[3];//ポインタで紐づけしてる
  int tans[3];//ansをコピーして判別に使う変数
  int ya[3];//入力を入れる変数
  Rand();
  
  makeans(ans);
  FOR(i,0,3){
    tans[i] = ans[i];
  }//ansをtansにコピー

  
  while(1){
  cout << "難易度を選択してね" << endl;
  cout << "easy = 1, normal = 2, hard = 3" << endl;
  cin >> diffe;
  if(diffe == 1){
    chance = 12;
    break;
  }else if(diffe == 2){
    chance = 8;
    break;
  }else if(diffe == 3){
    chance = 5;
    break;
  }else{
    continue;
  }//難易度選択。１，２，３以外を選ぶと終わる
 
  }

   cout << "1~9の三桁のかぶりのない数字を当てるゲームだよ" << endl;
 cout << "数字とその位置が会っていたらeat、数字はあっているが位置が違う場合はbitと言うよ"<< endl;


  int eat,bit;
  while(1){
    if(chance == 0){
      cout << "残念、gameoverだ。" << endl;
      printf("答えは%d%d%dだよ。\n",tans[0],tans[1],tans[2]);
      break;
    }//gameoverの判定
    eat=0;
    bit=0;
    FOR(i,0,3){
    printf("%dケタ目の整数を入力してね>>", i+1);
    cin >> ya[i];

  }//入力
    if(tans[0] == ya[0] && tans[1] == ya[1] && tans[2]== ya[2]){
      cout << "3eat! 君の勝ちだ！！" << endl;
      break;//勝利判定
    }else{
      FOR(i,0,3){
       if(tans[i] == ya[i]){
         eat++;//eatの判定。bitの判定は二重ループなのでそこに入れ込んだ。
       }
         FOR(j,0,3){
           if(tans[i] == ya[j]){
             bit++;//bitの判定
           }}
      }
      bit -= eat;
      chance--;//挑戦権を減らす
      printf("%deat %dbit! あと%d回！\n\n", eat,bit,chance);
    }
    }

    return 0;

  }



  
 
