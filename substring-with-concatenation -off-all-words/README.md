<h2><a href="https://leetcode.com/problems/substring-with-concatenation-of-all-words/">30. Substring with Concatenation of All Words</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Hard-red" alt="Difficulty: Hard" />
<hr>

<p>You are given a string <code>s</code> and an array of strings <code>words</code>. All the strings of <code>words</code> are of the same length.</p>

<p>A <strong>concatenated string</strong> is a string that exactly contains all the strings of any permutation of <code>words</code> concatenated.</p>

<p>For example, if <code>words = ["ab","cd","ef"]</code>, then the following are concatenated strings:
"abcdef", "abefcd", "cdabef", "cdefab", "efabcd", and "efcdab".  
"acdbef" is <strong>not</strong> a concatenated string because it is not the concatenation of any permutation of words.</p>

<p>Return an array of the starting indices of all the concatenated substrings in <code>s</code>. You can return the answer in any order.</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> s = "barfoothefoobarman", words = ["foo","bar"]
<strong>Output:</strong> [0,9]

<strong>Explanation:</strong> 
The substring starting at 0 is "barfoo". It is the concatenation of ["bar","foo"].
The substring starting at 9 is "foobar". It is the concatenation of ["foo","bar"].
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> s = "wordgoodgoodgoodbestword", words = ["word","good","best","word"]
<strong>Output:</strong> []

<strong>Explanation:</strong> 
There is no concatenated substring.
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> s = "barfoofoobarthefoobarman", words = ["bar","foo","the"]
<strong>Output:</strong> [6,9,12]

<strong>Explanation:</strong> 
The substring starting at 6 is "foobarthe".
The substring starting at 9 is "barthefoo".
The substring starting at 12 is "thefoobar".
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
  <li><code>1 &lt;= words.length &lt;= 5000</code></li>
  <li><code>1 &lt;= words[i].length &lt;= 30</code></li>
  <li><code>s</code> and <code>words[i]</code> consist of lowercase English letters.</li>
</ul>
