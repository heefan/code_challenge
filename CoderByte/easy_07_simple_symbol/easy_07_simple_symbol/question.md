have the function SimpleSymbols(str) take the str parameter being passed 
and determine if it is an acceptable sequence by either returning the string true or false. 

The str parameter will be composed of + and = symbols with several letters between them (ie. ++d+===+c++==a) 
and for the string to be true each letter must be surrounded by a + symbol. 
So the string to the left would be false. 
The string will not be empty and will have at least one letter.


TEST CASE:
++++a++++b++++   true
+d===+a+   false
+d+  true
+a=  false
+z+z+z+  true
2+a+a+ true
+a++  true
+z+z+==+a+ true
2+a+a+  true



中文：
给定一个函数SimpleSymbols(str), 判定str，结果返回bool。
判定方法：
传入参数是+和=，以及一些字母组合，字母在+与=之间。比如，++d+===+c++==a

如果每个字母都是被+号包围，那么返回true，其余为fasle。

传入参数一定不会空，且至少一个字符。