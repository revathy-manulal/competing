/*
Lalit and Kundu
Max. Marks: 100
Tweet

Little Lalit is an extremely good competitive coder. But recently, he was challenged by another fellow competitive programmer called Little Kundu. Lalit decides to challenge Kundu to prove that he's better than him.

After a tough grueling competitive fight, Lalit manages to beat Kundu. Let us give you some statistics from the contest. Lalit managed to solve only a problems, while Kundu solved b problems.

But, Lalit is not just satisfied with his victory over Kundu now. Lalit wants to know the probability that his number of questions solved in the contest were strictly more than Kundu throughout the contest.

Help Lalit in finding the probability for the same.

Input format:
The first line contains the number of test cases. Then, every single line will contain two integers a and b, denoting the number of problems solved by Lalit and Kundu.

Output format:
For each test case print the required probability. The answer will be considered correct if its absolute or relative error doesn't exceed 10-6.

Constraints:
1 ≤ Test Cases ≤ 1000
1 ≤ A ≤ 105
1 ≤ B < A
Sample Input (Plaintext Link)

2
3 2
2 1

Sample Output (Plaintext Link)

0.200000000000
0.333333333333

Explanation
Let's consider the second case. Lalit solved two problems, Kundu solved one. Here are the three ways by which this might have happened:

1. KLL
2. LKL
3. LLK

So, there's only one case where Lalit would be strictly ahead of Kundu. So, the answer would be 1/3, i.e., 0.333333333333.
Time Limit: 1 sec(s) for each input file.
Memory Limit: 256 MB
Source Limit: 1024 KB
Marking Scheme: Marks are awarded if any testcase passes.
Allowed languages: C, C++, Clojure, Go, Haskell, C#, Java, JavaScript, Objective-C, Perl, PHP, Python, Ruby 
*/