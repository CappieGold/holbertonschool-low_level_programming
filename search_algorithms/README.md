# C - Search Algorithms

## Learning Objectives

At the end of this project, you are expected to be able to `explain to anyone`, without the help of Google:
- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

### What is a Search Algorithm?

A search algorithm is a method used to find a specific item among a collection of items. These algorithms vary in complexity and efficiency, and the choice of the best algorithm often depends on the nature of the data and your specific needs.

### What is Linear Search?

Linear search, or sequential search, is one of the simplest search algorithms. It involves going through each item in the list, one by one, until the sought-after item is found or the end of the list is reached.

#### Advantages:

- Simplicity.
- Works on unsorted lists.

#### Disadvantages:

- Inefficient on large lists, as it might require going through the entire list.

### What is Binary Search?

Binary search is a much faster method, but it requires that the data is pre-sorted. The algorithm repeatedly divides the search range in half, comparing the median item with the target item, until the item is found or the sublist becomes empty.

#### Advantages:

- Very efficient on sorted lists, especially if they are large.
- The time complexity is O(log n), which is much better than O(n) for linear search.

#### Disadvantages:

- Requires that the data is sorted.

### Which Search Algorithm Should You Use?

- `Sorted or Unsorted Data:` If your data is already sorted, binary search is usually the best choice. For unsorted data, linear search is an option.
- `Size of the Data:` For small collections, the performance difference between linear and binary search might be negligible. But for large collections, binary search is often preferable.
- `Frequency of Searches:` If you are performing searches frequently, it might be advantageous to sort the data first and use binary search.
- `Complexity of Implementation:` Linear search is easier to implement than binary search.

In summary, there's no "one-size-fits-all" search algorithm that is best in all cases. The context and specifics of your data play a crucial role in choosing the most suitable algorithm.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are only allowed to use the `printf` function of the standard library. Any call to another function like `strdup`, `malloc`, … is forbidden.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `search_algos.h`
- Don’t forget to push your header file
- All your header files should be include guarded