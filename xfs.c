/*Xsquare and A Fantastic Sequence
Max. Marks: 100
Tweet

Xsquare loves to play with the strings very much. This time, he has two strings named as S1 and S2 along with the M pairs of integers where ith pair of integers is denoted by Li , Ri. Each of the two strings S1 and S2 consists of N lower case letters.

In one move, Xsquare can select one pair of integers out of the available M pairs of integers. Let the chosen pair of integers is xth one. So accordingly Xsquare can modify the string S1 by swapping its Lxth and Rxth characters .

Xsquare can apply the above move as many times as he wants on the string S1 in order to maximise the length of Fantastic Sequence between the string S1 and S2.

Definition

Here A Fantastic Sequence of length K between the two strings S1 and S2 is defined as the sequence of K integers say    
I1 < I2 < I3 < I4 .... .. .IK-1 < IK
such that S1[Ix] = S2[Ix] for all x where 1 ≤ x ≤ K .

Xsquare knows that finding the solution of this problem will definately take too much time which offcourse Xsquare does not have as he is the most busy person in this world. So he asked you to help him in accomplishing this task.
INPUT

First line of input contains a single integer T denoting the number of test cases. Each test case consists of several lines. First line of each test case contains two space separated integers N and M denoting the length of each string and number of pairs respectively. Next two lines of each test case contains two strings denoting string S1 and string S2 respectively. Next M lines of each test case contains a pair of integers where ith pair of integers is present in the ith line.
OUTPUT

For each test case, print two lines.

    First line contains an integer denoting the length of longest Fantastic Sequence between the modified string S1 and string S2
    Second line contains the modified string S1.


NOTE
If there is more than one possible answer, print the lexicographical smallest modified string S1.

CONSTRAINTS

1 ≤ T ≤ 105

1 ≤ N ≤ 105

1 ≤ M ≤ 105

1 ≤ Li,Ri ≤ N

Sum of N and M over all the test cases will not exceed 5*105 .

All the test data is strictly according to constraints.
Sample Input (Plaintext Link)

2
2 1
ts
ss
1 2
2 1
sa
ss
1 2

Sample Output (Plaintext Link)

1
st
1
as

Explanation
Test 1 :
1. Maximum possible length of the fantastic sequence is 1.
2. There are two possible modified strings S1 "st" and "ts" such that length of the fantastic sequence is 1 but we always have to choose the lexographically smallest one. Therefore the answer is "st" .

Test 2 :
1. Maximum possible length of the fantastic sequence is 1.
2. There are two possible modified strings S1 "sa" and "as" such that length of the fantastic sequence is 1 but we always have to choose the lexographically smallest one. Therefore the answer is "as" .
Time Limit: 1 sec(s) for each input file.
Memory Limit: 256 MB
Source Limit: 1024 KB
Marking Scheme: Marks are awarded if any testcase passes.
Allowed languages: C, C++, Clojure, Go, Haskell, C#, Java, JavaScript, Objective-C, Perl, PHP, Python, Ruby 
*/