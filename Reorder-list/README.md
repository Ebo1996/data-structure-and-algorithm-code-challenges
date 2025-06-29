<h2><a href="https://leetcode.com/problems/reorder-list/">143. Reorder List</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-yellow" alt="Difficulty: Medium" />
<hr>

<p>You are given the head of a singly linked list. The list can be represented as:</p>
<pre>
L₀ → L₁ → … → Lₙ₋₁ → Lₙ
</pre>

<p>Reorder the list to be on the following form:</p>
<pre>
L₀ → Lₙ → L₁ → Lₙ₋₁ → L₂ → Lₙ₋₂ → …
</pre>

<p><strong>Note:</strong> You may not modify the values in the list’s nodes. Only nodes themselves may be changed.</p>

<h3>Example 1:</h3>
<pre>
Input: head = [1,2,3,4]
Output: [1,4,2,3]
</pre>
<img src="https://assets.leetcode.com/uploads/2021/03/04/reorder1linked-list.jpg" alt="Example 1 image" />

<h3>Example 2:</h3>
<pre>
Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]
</pre>
<img src="https://assets.leetcode.com/uploads/2021/03/04/reorder2linked-list.jpg" alt="Example 2 image" />

<h3>Constraints:</h3>
<ul>
  <li>The number of nodes in the list is in the range <code>[1, 5 * 10⁴]</code></li>
  <li><code>1 &lt;= Node.val &lt;= 1000</code></li>
</ul>
