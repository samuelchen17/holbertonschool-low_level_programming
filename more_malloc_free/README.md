# More malloc, free

Write a function that concatenates two strings.

The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2
if NULL is passed, treat it as an empty string

```c
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
// initialise variables
// check if s1 and s2 null,
// find length of s1 and s2
// if len2 > n, len2 = n
// arr = malloc len1 + len2 + 1
// if (!arr), return null
// iterate through s1 and copy to arr
// iterate through s2, i < len 2, copy to arr
// add null op at end
}
```
