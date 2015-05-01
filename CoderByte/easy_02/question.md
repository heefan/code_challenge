>
Have the function FirstFactorial(num) take the num parameter being passed
and return the factorial of it (ie. if num = 4, return (4 * 3 * 2 * 1)).
For the test cases, the range will be between 1 and 18.

Use the Parameter Testing feature in the box below to test your code with different arguments.


Answer：

1. Noted the range of input number is [1,18]
that means, you have to use unsigned long, as when input number is 12, the range will over int/ unsinged int range.

2. when I check other people's work, I found most of them ignore the range, but system still conside it's right.
