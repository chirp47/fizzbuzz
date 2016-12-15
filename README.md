# fizzbuzz
## My first attempt at fizzbuzz

I'd heard that FizzBuzz is considered an elementary test to see if you grok some basic concepts and wanted to try it out. 

I figured out an initial way (fizzbuzz.c in this repo), then refactored to make it cleaner (fizzbuzz-update.c, also in this repo).

The first version (fizzbuzz.c) used a boolean flag to mark when we needed to print a number instead of Fizz and/or Buzz:

Pseudocode:  
>  Within a for loop (1-100):  
>>    set flag to 1;  
>>    if i is divisible by 3, then print "Fizz" and set flag to 0;  
>>    if i is divisible by 5, then print "Buzz" and set flag to 0;  
>>    if flag is 1, then print the integer value of i;  
>>    (new line);  
      
It seemed like the flag was a crutch to get around something wrong with the if statements, so I refactored it into fizzbuzz-update, which looks like this:  

Pseudocode:  
>  Within a for loop (1-100):  
>>    if i is divisible by 3, then print "Fizz";  
>>    if i is divisible by 5, then print "Buzz";  
>>    if i is not divisible by 3 && if i is not divisible by 5, then print the integer value of i;  
>>    (new line);  
    
Happier with the new version!  

PS I wrote, tested, and ran this code in the CS50 virtual IDE, an amenity of the Harvard CS50 course I'm completing on EdX.
