# moodle-multilang-span-generator
A program that helps you generate multilang text with ease

Thought Process
---------------


Given 2 text parahs in two different languages, combine both of them separated by the appropriate language span tags. 

Language Code 1: en
Language Code 2: ar

Language 1 text: This is an example
Language 2 text: ا مثال

Result text area: Display’s an appropriate combination of both of the above
 
Generated output example
-------------------------
```
<span lang="en" class="multilang">This is an example</span><span lang="ar" class="multilang">هذا مثال</span>
```

Which is interpreted as:
- In English lang: 
    > This is an example 
- In Arabic lang:
    > ذا مثال

Tweaking to specific languages
------------------------------
Instead of taking the language code as input, replace the first few lines with the below snippet:
```
    string lang1 = "en";
    string lang2=  "ar";
```
The language code itself could be different.

Running the program
-------------------
If you do not have experience running a C++ program before, the easiest way to run this would be to go to http://cpp.sh/ and paste the code in the IDE.

Once pasted, press run and type the inputs in the 'Execution' window displayed on screen. 
