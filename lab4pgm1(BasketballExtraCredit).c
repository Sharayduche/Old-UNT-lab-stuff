#include <iostream>



  //Basketball Stats

  int main() {

int Array[3];
int Array2[1];
int Array3[1];
int points, assists, rebounds; 
double sum, sum2, sum3;
double PA, AA, RA;

    cout << "Extra Credit. Basketball stats program for 5 games. Shawndre`Cheatham" << endl;

  

//do-while loop  
  do {  
    cout << endl;
    cout << "Points: "; cin >> points; 
    cout << "Assists: "; cin >> assists;
    cout << "Rebounds: "; cin >> rebounds;

//low level stats of a game
   if((points >= 0 && points <= 15) && (assists >= 0 && assists <= 5) && (rebounds >= 0 && rebounds <= 10))
     cout << "You had a decent game. " << endl;
    
//mid-level stats of a game    
    if((points >= 16 && points <= 50) && (assists >= 6 && assists <= 11) && (rebounds >= 11 && rebounds <= 16))
     cout << "You had a great..! " << endl;

//high level stats of a game
    if((points >= 51 && points <= 100) && (assists >= 12 && assists <= 20) && (rebounds >= 17 && rebounds <= 30))
     cout << "You had a monster game!!! " << endl;

//mixed level stats of game
     if((points >= 0 && points <= 15) && (assists >= 6 && assists <= 11) && (rebounds >= 11 && rebounds <= 16))
     cout << "You had a mixed stat game. " << endl;

     if((points >= 0 && points <= 15) && (assists >= 12 && assists <= 20) && (rebounds >= 17 && rebounds <= 30))
     cout << "You had a mixed stat game. " << endl;

     if((points >= 16 && points <= 50) && (assists >= 0 && assists <= 5) && (rebounds >= 11 && rebounds <= 16))
     cout << "You had a mixed stat game. " << endl;

    if((points >= 51 && points <= 100) && (assists >= 0 && assists <= 5) && (rebounds >= 17 && rebounds <= 30))
     cout << "You had a mixed stat game. " << endl;

     if((points >= 16 && points <= 50) && (assists >= 6 && assists <= 11) && (rebounds >= 0 && rebounds <= 10))
     cout << "You had a mixed stat game. " << endl;

     if((points >= 51 && points <= 100) && (assists >= 12 && assists <= 20) && (rebounds >= 0 && rebounds <= 10))
     cout << "You had a mixed stat game. " << endl;
     
     if((points >= 0 && points <= 15) && (assists >= 6 && assists <= 11) && (rebounds >= 17 && rebounds <= 30))
     cout << "You had a mixed stat game. " << endl;
     
     if((points >= 0 && points <= 15) && (assists >= 6 && assists <= 11) && (rebounds >= 0 && rebounds <= 10))
     cout << "You had a mixed stat game. " << endl;
    
     if((points >= 0 && points <= 15) && (assists >= 0 && assists <= 5) && (rebounds >= 11 && rebounds <= 16))
     cout << "You had a mixed stat game. " << endl;
  
     if((points >= 0 && points <= 15) && (assists >= 12 && assists <= 20) && (rebounds >= 11 && rebounds <= 16))
     cout << "You had a mixed stat game. " << endl;
 
     if((points >= 16 && points <= 50) && (assists >= 0 && assists <= 5) && (rebounds >= 0 && rebounds <= 10))
     cout << "You had a mixed stat game. " << endl;

     if((points >= 16 && points <= 50) && (assists >= 6 && assists <= 11) && (rebounds >= 17 && rebounds <= 30))
     cout << "You had a mixed stat game. " << endl;

     if((points >= 16 && points <= 50) && (assists >= 12 && assists <= 20) && (rebounds >= 0 && rebounds <= 10))
     cout << "You had a mixed stat game. " << endl;

     if((points >= 51 && points <= 100) && (assists >= 0 && assists <= 5) && (rebounds >= 0 && rebounds <= 10))
     cout << "You had a mixed stat game. " << endl;

     if((points >= 51 && points <= 100) && (assists >= 6 && assists <= 11) && (rebounds >= 0 && rebounds <= 10))
     cout << "You had a mixed stat game. " << endl;  
  
     if((points >= 16 && points <= 50) && (assists >= 12 && assists <= 20) && (rebounds >= 11 && rebounds <= 16))
     cout << "You had a mixed stat game. " << endl;  
  
  sum += points;
  sum2 += assists;
  sum3 += rebounds;
  
  PA = sum / 5;
  AA = sum2 / 5;
  RA = sum3 / 5;

    } while ((points > -1 && points < 101) && (assists > -1 && assists < 21) && (rebounds > -1 && rebounds < 31));
    
     cout << "Your stats are either record highs, record lows or uncategorizable." << endl;
 
  

  cout << endl << "Your point total for 5 games is " << int(sum) << endl;
  cout << "Your assists total for 5 games is " << int(sum2) << endl;
  cout << "Your rebound total for 5 games is " << int(sum3) << endl;
  
  cout << endl << "You averaged " << double(PA) << " points over 5 games " << endl;
  cout << "You averaged " << double(AA) << " assists over 5 games " << endl;
  cout << "You averaged " << double(RA) << " rebounds over 5 games " << endl;

  
  cout << endl << sum << endl;
  
  return 0; 
  

}
