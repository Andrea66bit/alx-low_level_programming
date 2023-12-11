Space Complexity: 

The term Space Complexity is misused for Auxiliary Space at many places. Following are the correct definitions of Auxiliary Space and Space Complexity. 

Auxiliary Space is the extra space or temporary space used by an algorithm.

The space Complexity of an algorithm is the total space taken by the algorithm with respect to the input size. Space complexity includes both Auxiliary space and space used by input. 


For example, if we want to compare standard sorting algorithms on the basis of space, then Auxiliary Space would be a better criterion than Space Complexity. Merge Sort uses O(n) auxiliary space, Insertion sort, and Heap Sort use O(1) auxiliary space. The space complexity of all these sorting algorithms is O(n) though. 

Space complexity is a parallel concept to time complexity. If we need to create an array of size n, this will require O(n) space. If we create a two-dimensional array of size n*n, this will require O(n2) space.

In recursive calls stack space also counts. 

Example : 

int add (int n){
    if (n <= 0){
        return 0;
    }
    return n + add (n-1);
}

Here each call add a level to the stack :

1.  add(4)
2.    -> add(3)
3.      -> add(2)
4.        -> add(1)
5.          -> add(0)

Each of these calls is added to call stack and takes up actual memory.
So it takes O(n) space.
However, just because you have n calls total doesn’t mean it takes O(n) space.

Look at the below function :

int addSequence (int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += pairSum(i, i+1);
    }
    return sum;
}

int pairSum(int x, int y){
    return x + y;
}

There will be roughly O(n) calls to pairSum. However, those 
calls do not exist simultaneously on the call stack,
so you only need O(1) space.
Note: It’s necessary to mention that space complexity depends on a variety of things such as the programming language, the compiler, or even the machine running the algorithm.

Feeling lost in the world of random DSA topics, wasting time without progress? It's time for a change! Join our DSA course, where we'll guide you on an exciting journey to master DSA efficiently and on schedule.
Ready to dive in? Explore our Free Demo Content and join our DSA course, trusted by over 100,000 geeks!
DSA in C++
DSA in Java
DSA in Python
DSA in JavaScript

Recommended Problems
Frequently asked DSA Problems
Solve Problems
Last Updated : 07 Sep, 2022

363

Previous
Sample Practice Problems on Complexity Analysis of Algorithms
Next
A Time Complexity Question
Similar Reads
Time Complexity and Space Complexity
What does Big O - O(N) complexity mean?
What does Constant Time Complexity or Big O(1) mean?
What is the difference between Auxiliary space and Space Complexity?
Find Harmonic mean using Arithmetic mean and Geometric mean
Check for balanced parentheses in an expression | O(1) space | O(N^2) time complexity
Time and Space Complexity Analysis of Binary Search Algorithm
Constant & Linear Space Complexity in Algorithms
Time and Space complexity analysis of Selection Sort
Time and Space Complexity Analysis of Bubble Sort
Complete Tutorials
