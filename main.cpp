#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int* calcGrades(string grades[][], int cases){
int scores[cases];
for (int row = 0; row < cases; row++){
int score = 0;
if(grades[row][1] == "T"){
  score += 5;
}
if(grades[row][2] == "T"){
  score += 5;
}
if(grades[row][3] == "F"){
  score += 5;
}
if(grades[row][4] == "F"){
  score += 5;
}
if(grades[row][5] == "T"){
  score += 5;
}
}
return scores;
}
  
int main() {
  string grades[6][6] = { {"Test 1:", "T", "F", "T", "T", "T"},
                          {"Test 2:", "T", "T", "T", "T", "T"},
                          {"Test 3:", "T", "T", "F", "F", "T"},
                          {"Test 4:", "F", "T", "F", "F", "F"},
                          {"Test 5:", "F", "F", "F", "F", "F"},
                          {"Test 6:", "T", "T", "F", "T", "F"} };
  int cases = 6;

  int* scores = new int[cases];
  scores = calcGrades(grades, cases);
  cout << *scores << endl;
  cout << *(scores + 1) << endl;
  cout << *(scores + 2) << endl;
  cout << *(scores + 3) << endl;
  cout << *(scores + 4) << endl;
  cout << *(scores + 5) << endl;

}