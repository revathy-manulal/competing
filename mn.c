/*
Mozart numbers
Max. Marks: 100
Tweet

Let us look at the close relative of Fibonacci numbers, called the Phibonacci numbers. They work exactly like Fibonacci numbers. F (1) = 0, F(1) = 1, F(2) = 1, and then F (n) = F ( n - 1 ) + F ( n - 2 ). In number theory, the nth Pisano period, written as ? (n), is the period with which the sequence of Fibonacci numbers, modulo n repeats.

Anyway. The question is extremely simple: you're given two integers A, and B - you've to find out the sum of all the such Phibonacci numbers in the given range A and B which have no new prime divisor that does not divide any earlier Phibonacci number. For clarity and for the sake of ease, 1 is NOT considered as such a number.

Input format:
The first line contains the number of test cases. Followed by two integers A and B. Both A and B are inclusive.

Input format:
You've to print the sum of all such required numbers modulo 109 + 7.

Constraints:
1 <= Test Cases <= 103
1 <= B <= 10 6
1 <= A < B
Sample Input (Plaintext Link)

2
6 9
12 14

Sample Output (Plaintext Link)

8
144

Explanation
Let's make a list of the first few Phibonacci numbers.

0 - 1st - Not considered.
1 - 2nd - Not considered.
1 - 3rd - Not considered.
2 - 4th - 1 x 2
3 - 5th - 1 x 3
5 - 6th - 1 x 5
8 - 7th - 2 x 2 x 2
13 - 8th - 1 x 13
21 - 9th - 3 x 7

Now, let us look at our first test case: A = 6, B = 9. Let ans = 0.
6th Phibonacci is 5 - has a new prime divisor 5.
7th Phibonacci is 8 - has no new prime divisors. So, ans = ans + F(n).
8th Phibonacci is 13 - has a new prime divisor 13.
9th Phibonacci is 21 - has a new prime divisor 7.

Time Limit: 2 sec(s) for each input file.
Memory Limit: 256 MB
Source Limit: 1024 KB
Marking Scheme: Marks are awarded if any testcase passes.
Allowed languages: C, C++, Clojure, Go, Haskell, C#, Java, JavaScript, Objective-C, Perl, PHP, Python, Ruby 
*/