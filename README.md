# Moodle Multilang Span Generator
A simple C++ program that helps you generate multilang text for moodle with ease. 

Demo
-------------------

Use Case 
---------------
If you want to make your moodle content multilang, the text added to moodle editor needs to be in a specific format as below:
```
<span lang="en" class="multilang">This is an example</span><span lang="ar" class="multilang">هذا مثال</span>
```

The above uses multilang span tags to adapt the moodle text content to two different languages, English and Arabic. 
The language codes for them are as below:

- Language Code 1: en
- Language Code 2: ar

The language text for them are as below:

- Language 1 text: This is an example
- Language 2 text: ا مثال

Result text area: Display’s an appropriate combination of both of the above

Unicode support 
----------------
To allow unicode character support in cmd you need to set the code page for the language you are after.
This is done with
```chcp CodePageNumber```

From: https://stackoverflow.com/questions/40749843/how-to-read-arabic-input-from-cmd
 
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

If you have a C++ IDE Environment setup, E.g CodeBlocks, you can open the .cpp file and run using the IDE.
