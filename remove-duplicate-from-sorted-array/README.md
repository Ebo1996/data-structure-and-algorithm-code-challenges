<h2><a href="https://leetcode.com/problems/remove-duplicates-from-sorted-array/">26. Remove Duplicates from Sorted Array</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<p>Given an integer array <code>nums</code> sorted in non-decreasing order, remove the duplicates <strong>in-place</strong> such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in <code>nums</code>.</p>

<p>Consider the number of unique elements of <code>nums</code> to be <code>k</code>. To get accepted, you need to do the following things:</p>
<ul>
  <li>Change the array <code>nums</code> such that the first <code>k</code> elements of <code>nums</code> contain the unique elements in the order they were present in <code>nums</code> initially.</li>
  <li>The remaining elements of <code>nums</code> are not important as well as the size of <code>nums</code>.</li>
  <li>Return <code>k</code>.</li>
</ul>

<h3>Custom Judge:</h3>
<p>The judge will test your solution with the following code:</p>

<pre>
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
</pre>

<p>If all assertions pass, then your solution will be accepted.</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [1,1,2]
<strong>Output:</strong> 2, nums = [1,2,_]

<strong>Explanation:</strong> 
Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [0,0,1,1,1,2,2,3,3,4]
<strong>Output:</strong> 5, nums = [0,1,2,3,4,_,_,_,_,_]

<strong>Explanation:</strong> 
Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
  <li><code>-100 &lt;= nums[i] &lt;= 100</code></li>
  <li><code>nums</code> is sorted in non-decreasing order.</li>
</ul>
