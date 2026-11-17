# cis165-lab8-lottery

Required test cases
| Test / data | Expected result | Actual result | Match or correction |
| -------- | -------- | -------- | -------- |
| Fixed winning [7,4,9,1,3]; player [4,2,9,7,3] | 2 matches. | 2 matches. | Match |
| Fixed winning [7,4,9,1,3]; player [7,4,9,1,3] | 5 matches. | 5 matches. | Match |
| Fixed winning [7,4,9,1,3]; player [0,0,0,0,0] | 0 matches. | 0 matches. | Match |
| Fixed winning [1,1,2,2,3]; player [1,2,2,3,3] | 3 matches. | 3 matches. | Match |
| Fixed winning [5,2,9,7,1]; player [4,2,9,7,3] | 3 matches. | 3 matches. | Match |
| Final random-generation run; player [5,3,7,8,4]<br>Winning [6,0,2,3,1]; correct [-1,-1,-1,-1,-1] | Accurate number of matches | 0 correct matches | Match |

<br>

Loop trace
| Step | Winning Digits | Player Digits | Correct Player Digits | Match Count |
| -------- | -------- | -------- | -------- | -------- |
| 1 | [5,2,9,7,1] | [4,2,9,7,3] | [-1,-1,-1,-1,-1] | 0 |
| 2 | [5,2,9,7,1] | [4,2,9,7,3] | [-1,2,-1,-1,-1] | 1 |
| 3 | [5,2,9,7,1] | [4,2,9,7,3] | [-1,2,9,-1,-1] | 2 |
| 4 | [5,2,9,7,1] | [4,2,9,7,3] | [-1,2,9,7,-1] | 3 |
| 5 | [5,2,9,7,1] | [4,2,9,7,3] | [-1,2,9,7,-1] | 3 |

<br>

How does the random expression keep every digit between 0 and 9?<br>I use rand() % 10 to generate a random number between 0 and 9 inclusive..<br><br>
Why does a matching digit in another position not count?<br>The code is meant to check if a number in a position of the array of the player's chosen digits matches a number in the same position of the winning numbers array.<br><br>
Why do array loops stop before SIZE, and what did your fixed tests establish?<br>Since arrays start at 0, the loop must also start at 0. Because of this, the loops must end before SIZE or else it will go out of bounds causing an error. The fixed tests established that the program compares digits in corresponding positions only, digits appearing in different positions do not count, the match counter increases when corresponding digits are equal, and the program correctly counts the total number of matches.<br><br>

The code can be ran using OnlineGD. Upload the .cpp file, select C++17, and click run.
