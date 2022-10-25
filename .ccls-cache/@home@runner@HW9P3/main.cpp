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

}