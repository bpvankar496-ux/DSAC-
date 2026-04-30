// ================================================================
//         DYNAMIC PROGRAMMING - COMPLETE THEORY NOTES
// ================================================================

// WHAT IS DP?
// -----------
// - Recursion + Memoization = DP
// - Overlapping subproblems ne ek vaar j solve karo
// - Results store karo jathi same problem baar baar na solve thay

// WHEN TO USE DP?
// ---------------
// - Optimal substructure hoy (problem ne chota parts ma todavi shakay)
// - Overlapping subproblems hoy (same subproblem baar baar aave)

// ================================================================
// TYPES OF DP
// ================================================================

// 1. MEMOIZATION (Top Down)
//    - Recursion + Caching
//    - Upar thi niche jaiye
//    - dp[] array ma results store karo
//    - if(dp[n] != -1) return dp[n]

// 2. TABULATION (Bottom Up)
//    - Iterative approach
//    - Niche thi upar jaiye
//    - Chota subproblems pehla solve karo
//    - No recursion stack overhead

// ================================================================
// DP PART 1 - FIBONACCI & CLIMBING STAIRS
// ================================================================

// FIBONACCI
// ---------
// Recursion:    O(2^n) time, O(n) space
// Memoization:  O(n) time,   O(n) space
// Tabulation:   O(n) time,   O(n) space

// BC: dp[0]=0, dp[1]=1
// Formula: dp[i] = dp[i-1] + dp[i-2]

// CLIMBING STAIRS
// ---------------
// BC: dp[0]=1, dp[1]=1
// Formula: dp[i] = dp[i-1] + dp[i-2]

// VARIATION (K steps):
// Formula: dp[i] = dp[i-1] + dp[i-2] + ... + dp[i-k]

// ================================================================
// DP PART 2 - KNAPSACK PROBLEMS
// ================================================================

// 0-1 KNAPSACK
// ------------
// - Har item ek j vaar le shakay
// - Include OR Exclude

// BC: dp[0][j] = 0, dp[i][0] = 0
// Formula:
//   if wt[i-1] <= j:
//     dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j])
//   else:
//     dp[i][j] = dp[i-1][j]

// Time: O(n*W)
// Space: O(n*W)

// TARGET SUM SUBSET
// -----------------
// - Subset chhe ke nahi je target sum bane

// BC: dp[i][0] = true
// Formula:
//   if arr[i-1] <= j:
//     dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j]
//   else:
//     dp[i][j] = dp[i-1][j]

// UNBOUNDED KNAPSACK
// ------------------
// - Same item multiple times le shakay

// Formula:
//   dp[j] = max(dp[j], val[i] + dp[j-wt[i]])

// ================================================================
// DP PART 3 - COIN CHANGE, ROD CUTTING, LCS
// ================================================================

// COIN CHANGE
// -----------
// - Minimum coins thi amount banavo

// BC: dp[0] = 0
// Formula:
//   dp[j] = min(dp[j], dp[j-coin] + 1)

// Return: dp[amount] == INT_MAX ? -1 : dp[amount]

// ROD CUTTING
// -----------
// - Rod ne cut karine maximum profit

// Formula:
//   if i <= j:
//     include = price[i-1] + dp[i][j-i]
//   exclude = dp[i-1][j]
//   dp[i][j] = max(include, exclude)

// LCS (Longest Common Subsequence)
// ---------------------------------
// BC: dp[0][j] = 0, dp[i][0] = 0
// Formula:
//   if s1[i-1] == s2[j-1]:
//     dp[i][j] = 1 + dp[i-1][j-1]
//   else:
//     dp[i][j] = max(dp[i-1][j], dp[i][j-1])

// ================================================================
// DP PART 4 - STRING PROBLEMS
// ================================================================

// LONGEST COMMON SUBSTRING
// -------------------------
// Formula:
//   if s1[i-1] == s2[j-1]:
//     dp[i][j] = 1 + dp[i-1][j-1]
//   else:
//     dp[i][j] = 0   // reset!

// Track maxLen separately

// LIS (Longest Increasing Subsequence)
// --------------------------------------
// BC: dp[i] = 1
// Formula:
//   if arr[j] < arr[i]:
//     dp[i] = max(dp[i], dp[j] + 1)

// Time: O(n^2)

// EDIT DISTANCE
// -------------
// Operations: Insert, Delete, Replace

// BC: dp[i][0] = i, dp[0][j] = j
// Formula:
//   if s1[i-1] == s2[j-1]:
//     dp[i][j] = dp[i-1][j-1]
//   else:
//     dp[i][j] = 1 + min(dp[i-1][j],        // delete
//                        dp[i][j-1],        // insert
//                        dp[i-1][j-1])      // replace

// ================================================================
// DP PART 5 - CATALAN NUMBER & WILDCARD
// ================================================================

// WILDCARD MATCHING
// -----------------
// '?' = any single char
// '*' = any sequence (including empty)

// BC: dp[0][0] = true
//     dp[0][j] = dp[0][j-1] if p[j-1]=='*'
// Formula:
//   if p[j-1] == '*':
//     dp[i][j] = dp[i-1][j] || dp[i][j-1]
//   elif p[j-1]=='?' || s[i-1]==p[j-1]:
//     dp[i][j] = dp[i-1][j-1]

// NTH CATALAN NUMBER
// ------------------
// C(0)=1, C(1)=1
// Formula: C(n) = sum of C(i)*C(n-1-i) for i=0 to n-1

// Applications:
// - Count BSTs from N nodes
// - Mountain Ranges
// - Valid Parentheses combinations

// ================================================================
// DP PART 6 - MCM & PARTITIONING
// ================================================================

// MATRIX CHAIN MULTIPLICATION (MCM)
// ----------------------------------
// - Matrices multiply karva minimum operations

// Formula:
//   for k = i to j-1:
//     cost = dp[i][k] + dp[k+1][j] + arr[i-1]*arr[k]*arr[j]
//     dp[i][j] = min(dp[i][j], cost)

// BC: dp[i][i] = 0

// Time: O(n^3)

// MINIMUM PARTITIONING
// --------------------
// - Array ne 2 parts ma divide karo minimum difference sathe
// - Target Sum Subset j chhe — sum/2 target rakho

// Formula: minDiff = sum - 2*j
//          (j = largest j <= sum/2 jya dp[n][j] == true)

// ================================================================
// ASSIGNMENT QUESTIONS CONCEPTS
// ================================================================

// TRIBONACCI:     dp[i] = dp[i-1]+dp[i-2]+dp[i-3]
// STOCK+FEE:      buy = max(buy, sell-price), sell = max(sell, buy+price-fee)
// HOUSE ROBBER:   dp[i] = max(dp[i-1], nums[i]+dp[i-2])
// LPS:            LCS of s and reverse(s)
// EQUAL SUBSET:   Target Sum with target = sum/2
// LIS+LDS:        Bitonic Subsequence = lis[i]+lds[i]-1
// BOX STACKING:   LIS variation with 3D dimensions
// PALINDROME PART:Backtracking + isPalindrome check

// ================================================================
// TIME & SPACE COMPLEXITY SUMMARY
// ================================================================

// Fibonacci:          O(n)   / O(n)
// Climbing Stairs:    O(n)   / O(n)
// 0-1 Knapsack:       O(n*W) / O(n*W)
// Unbounded Knapsack: O(n*W) / O(W)
// Coin Change:        O(n*W) / O(W)
// LCS:                O(m*n) / O(m*n)
// LIS:                O(n^2) / O(n)
// Edit Distance:      O(m*n) / O(m*n)
// MCM:                O(n^3) / O(n^2)
// Catalan:            O(n^2) / O(n)

// ================================================================
// KEY RULES TO REMEMBER
// ================================================================

// 1. Recursion -> Memoization: bas dp[] add karo
// 2. Memoization -> Tabulation: recursion ne loop ma convert karo
// 3. Include/Exclude pattern: 0-1 Knapsack, Subset problems
// 4. String problems: 2D dp table use karo
// 5. LCS variant: Substring ma dp=0 reset, Subsequence ma max()
// 6. MCM pattern: i to j range, k thi split karo
// 7. Catalan pattern: C(n) = sum of C(i)*C(n-1-i)

// ================================================================

//total 413 files 411 class and assignment question 2 graph and dp theory