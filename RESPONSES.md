# CISC230 - Levi P

## factorial2.cpp

- input/parameter impacting number of calls
The function calls itself once for each decrement of n until it reaches 0.
So the larger the input n, the more recursive calls.

- 3 specific examples of input/parameter and number of calls
  3 examples
  n = 0 is 1 call
  n = 2 is 3 calls
  n = 4 is 5 calls

- number of recursive calls when input/parameter is *n*
  total function calls when input/parameter is n is n+1

## ireverse2.cpp

- input/parameter impacting number of calls
The total number of calls is determined by the number’s digits. The function handles one digit per call and ends once the value reaches 0
- 3 specific examples of input/parameter and number of calls
   n = 0 is 0 calls
   n = 5 is 1 call
   n = 1004 is 4 calls 

- number of recursive calls when input/parameter is *n*
d recursive calls

## sreverse2.cpp

- input/parameter impacting number of calls
The value of s, which is the legnth of the input string

- 3 specific examples of input/parameter and number of calls
z = 1 call
book - 4 calls
hi = 2 calls

- number of recursive calls when input/parameter is *n*
If the string has n characters, the function makes n recursive calls
n characters = n calls

## permute.cpp

- input/parameter impacting number of calls
The number of recursive calls depends entirely on the length of the string

- 3 specific examples of input/parameter and number of calls
x = 1 call
AB = 3 calls
CAT = 9 calls

- number of recursive calls when input/parameter is *n*

## tower.cpp

- input/parameter impacting number of calls
The number of recursive calls depends on the number of disks

- 3 specific examples of input/parameter and number of calls
1 = 1 call
2 = 3 calls
3 = 7 calls

- number of recursive calls when input/parameter is *n*
the # of recursive calls = 2^n -1

## fibonacci2.cpp (presented in video lesson)

- input/parameter impacting number of calls
The number of recursive calls depends on the input n

- 3 specific examples of input/parameter and number of calls
7 = 8 calls
10 = 11 calls
15 = 16 calls

- number of recursive calls when input/parameter is *n*
n + 1
