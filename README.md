Problem Description  
    Chicken and rabbit were closed in a cage (the chicken had 2 feet and the rabbit had 4 feet, no exception). Already know the cage The total number of feet in the child a, ask how many animals are in the cage, how many animals are there at most

Input data   
    Line 1 is the number n of test data, followed by n lines of input. Each set of test data occupies 1 line, including one positive The number a (a < 32768).

Output requirements  
    n lines, one output per line corresponds to one input. The output is two positive integers, the first is the minimum number of animals, and the second is The maximum number of animals, two positive integers separated by spaces. If no condition is met, 2 zeros are output.

Input sample  
2  
3  
20  
  
Output sample  
0  
0  
5  
10  

Problem solving   
    This problem can be described as giving an integer N. If N is an odd number, output 0 0, otherwise if N is 4 times Number, output N / 4 N / 2, if N is not a multiple of 4, output N/4+1 N/2. This is a general calculation question.As long as the corresponding judgment and output code is implemented. The title shows that the input integer is in a relatively small range.So you only need to consider integer arithmetic.

Common problems in implementation  
This is a mathematical calculation problem. There are several cases of error:  
1）Because the analysis of the problem is not clear, the wrong calculation formula is given;  
2）Without mathematical methods, try to solve the problem by enumerating the number of all chickens and rabbits, causing timeouts;  
3）Try to store all the inputs first, then output them, the open array is too small, and the factor group is out of bounds to generate a running error;
4）A newline is missing at the end of each line of output;  
Unfamiliar with the input and output syntax leads to infinite loops or grammatical errors.  
