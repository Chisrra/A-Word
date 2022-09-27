# A. Bear and Big Brother

- <h6> <center> Time limit per test 2 second </center> </h6>
- <h6> <center> Memory limit per test 256 megabytes </center> </h6>
- <h6> <center> inputstandard input </center> </h6>
- <h6> <center>outputstandard output </center> </h6>

Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. 
That's why he decided to invent an extension for his favorite browser that would change the letters' 
register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. 
At that as little as possible letters should be changed in the word. For example, the word `HoUse` must be replaced with `house`, and 
the word `ViP` — with `VIP`. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with 
lowercase ones. For example, `maTRIx` should be replaced by `matrix`. Your task is to use the given method on one given word.

<h5>Input</h5>

The first line contains a word *s* — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.


<h5>Output</h5>

Print the corrected word *s*. If the given word *s* has strictly more uppercase letters, make the word written in the uppercase register, 
otherwise - in the lowercase one.


<h5>Example 1</h5>

<h6>Input</h6>

>HoUse

<h6>Output</h6>

>house

<h5>Example 2</h5>

<h6>Input</h6>

>ViP

<h6>Output</h6>

>VIP 


<h5>Example 3</h5>

<h6>Input</h6>

>maTRIx

<h6>Output</h6>

>matrix
