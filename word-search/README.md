<h2><a href="https://leetcode.com/problems/word-search-ii/">212. Word Search II</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Hard-red" alt="Difficulty: Hard" />
<hr>

<p>Given an <code>m x n</code> <code>board</code> of characters and a list of strings <code>words</code>, return <strong>all words</strong> on the board.</p>

<p>Each word must be constructed from letters of <strong>sequentially adjacent cells</strong>, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once in a word.</p>

<h3>Example 1:</h3>
<pre>
Input: 
board = [["o","a","a","n"],
         ["e","t","a","e"],
         ["i","h","k","r"],
         ["i","f","l","v"]],
words = ["oath","pea","eat","rain"]

Output: ["eat","oath"]
</pre>

<h3>Example 2:</h3>
<pre>
Input:
board = [["a","b"],
         ["c","d"]],
words = ["abcb"]

Output: []
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>m == board.length</code></li>
  <li><code>n == board[i].length</code></li>
  <li><code>1 &lt;= m, n &lt;= 12</code></li>
  <li><code>board[i][j]</code> is a lowercase English letter.</li>
  <li><code>1 &lt;= words.length &lt;= 3 * 10<sup>4</sup></code></li>
  <li><code>1 &lt;= words[i].length &lt;= 10</code></li>
  <li><code>words[i]</code> consists of lowercase English letters.</li>
  <li>All the strings of <code>words</code> are unique.</li>
</ul>
