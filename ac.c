/*
Agitated Chandan
Max. Marks: 100
Tweet

Chandan is a horrendous murderer and he wants to kill Arjit just because he's lazy. Chandan is following the trail of Arjit's shoes. The trail is in the form of a k-ary tree. Arjit is lazy, sure, but he's smart. So, he magically moves away from Chandan as far as he can go.

Chandan doesn't know the way out, but he knows that Arjit has managed to travel the maximum distance he can. Help Chandan find out the maximum distance he would have to travel to find Arjit. And also tell him how much will he have to pay to travel so far. The travel rates are:

    If maximum distance is <100, cost = 0.
    If maximum distance is > 100, cost = 100.
    If maximum distance is > 1000, cost = 1000.
    If maximum distance is > 10000, cost = 10000.

Input format:
First line contains the total number of test cases. Then, the next line contains the number of nodes. The the next n lines contain three integers - the first two denote an edge between a and b, the third integer denotes the weight of that edge.

Output format:
You've to print the money Chandan will pay and the maximum distance he will have to travel.

Constraints:
1 <= Test Cases <= 10
2 <= n <= 100000
1 <= a, b <= n
1 <= weight <= 100
Sample Input (Plaintext Link)

1
5
1 2 4
3 2 3
2 5 2
4 1 1

Sample Output (Plaintext Link)

0 8

Time Limit: 2 sec(s) for each input file.
Memory Limit: 256 MB
Source Limit: 1024 KB
Marking Scheme: Marks are awarded if any testcase passes.
Allowed languages: C, C++, Clojure, Go, Haskell, C#, Java, JavaScript, Objective-C, Perl, PHP, Python, Ruby */