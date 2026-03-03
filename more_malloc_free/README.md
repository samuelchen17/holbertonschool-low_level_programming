# More malloc, free

## 1.

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

## 2.

Write a function that allocates memory for an array, using malloc.

The calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then calloc returns NULL
If malloc fails, then calloc returns NULL
FYI: The standard library provides a different function: calloc. Run man calloc to learn more.

```c
void *_calloc(unsigned int nmemb, unsigned int size)
{
// if nmemb or size <= 0, return NULL
// arr = malloc size of (nmemb * size)
// if !arr, return NULL
// iterate through and allocate 0
}
```

## 3.

Write a function that creates an array of integers.

The array created should contain all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array
If min > max, return NULL
If malloc fails, return NULL

```c
// int *arr;
// int i, n = 0;
// if min > max, return NULL
// n = max - min
// arr = malloc(sizeof(int * n))
// if !arr, return null
// fill memory starting from min number to max
```
