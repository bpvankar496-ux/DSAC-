//  Assignment Questions & Solutions

// Q(a) — Nested Loop Code
// cppint i, j, k = 0;
// for (i = n/2; i <= n; i++) {
//     for (j = 2; j <= n; j = j*2) {
//         k = k + n/2;
//     }
// }
// Answer: A → O(n log n)
// Outer loop i: n/2 to n → n/2 times = O(n)
// Inner loop j: j doubles (2,4,8..n) → O(log n)
// Total = O(n) × O(log n) = O(n log n)


// Q(b) — i*=k Loop
// cppfor(int i=0; i<n; i++) {
//     i *= k;
// }
// (Here k is constant)
// Answer: C → O(log_k n)

// i ni value: 1, k, k², k³ ... jyare k^t = n
// k^t = n → t = log_k(n)
// Time = O(log n base k)


//  Q(c) — True or False?

// "Algorithm A is O(n) and B is O(logn), so B always runs faster"
// Answer: B → False
// Big-O asymptotic che — large n mate
// Nana n mate A faster hoi shake
// Example: n < n₀ mate A faster hoi shake


// Q(d) — floorSqrt Function
// cppint floorSqrt(int x) {
//     if (x==0 || x==1) return x;
//     int i=1, result=1;
//     while (result <= x) {
//         i++;
//         result = i*i;
//     }
//     return i-1;
// }
// Time Complexity: O(√n)
// Loop i=1,2,3... jyare i² > x → i ≈ √x
// Space Complexity: O(1)
// No extra space, sirf i & result variables


// Q(e) — Nested Loop
// cppint a = 0;
// for (int i=0; i<n; ++i) {
//     for (int j=n; j>i; --j) {
//         a = a + i + j;
//     }
// }
// Time Complexity: O(n²)
// Outer: n times
// Inner: n, n-1, n-2 ... = n(n+1)/2 ≈ O(n²)
// Space Complexity: O(1)
// Sirf a variable, no extra array/space
