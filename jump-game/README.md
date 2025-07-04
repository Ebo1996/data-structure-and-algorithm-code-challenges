<h2><a href="https://leetcode.com/problems/jump-game-ii/">45. Jump Game II</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-yellow" alt="Difficulty: Medium" />
<hr>

<p>You are given a <code>0-indexed</code> array of integers <code>nums</code> of length <code>n</code>. You are initially positioned at <code>nums[0]</code>.</p>

<p>Each element <code>nums[i]</code> represents the maximum length of a forward jump from index <code>i</code>. In other words, if you are at <code>nums[i]</code>, you can jump to any <code>nums[i + j]</code> where:</p>
<ul>
  <li><code>0 &lt;= j &lt;= nums[i]</code></li>
  <li><code>i + j &lt; n</code></li>
</ul>

<p>Return the <strong>minimum number of jumps</strong> to reach <code>nums[n - 1]</code>. The test cases are generated such that you can reach <code>nums[n - 1]</code>.</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [2,3,1,1,4]
<strong>Output:</strong> 2

<strong>Explanation:</strong> 
Jump 1 step from index 0 to 1, then 3 steps to the last index.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [2,3,0,1,4]
<strong>Output:</strong> 2

<strong>Explanation:</strong> 
Jump 1 step from index 0 to 1, then 3 steps to the last index.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
  <li><code>0 &lt;= nums[i] &lt;= 1000</code></li>
  <li>It is guaranteed that you can reach the last index.</li>
</ul>
