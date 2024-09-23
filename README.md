# CISC2200 SLList Lab

In this lab we will implement some of the methods of SLList,
a singly linked list class.

## Programming Environment Setup

Follow the [Setup Tutorial](https://eecs280staff.github.io/tutorials/)
if you have not already.

### Devconatiner Setup

Alternatively, either:

- Follow the [VSCode Devcontainer Setup Guide](https://code.visualstudio.com/docs/devcontainers/containers)
and run using Docker locally
- Launch this repo in a GitHub Codespace, and copy your file into the auto grader...

## Programming Requirement

A code skeleton is given for this lab.

From your terminal (mac or WSL/Ubunto) window, you can use the
following command to download it:

```bash
git clone https://github.com/CISC2200-Fall-24-Fordham/SLList2.git
```

### TODOs

#### New for Part 2

1. Use `SLListTemplate` and `SLListInheritance` instead of `SLList` header.
1. Instantiate your own class, and store it in a SLList. Try additional data types.
1. Make your SLList class iterable with the `for(auto x : my_list)` syntax.
1. Override the `<<` operator for your class.
1. Override the `<<` operator for `SLList` (Template, Inheritance or otherwise).
1. Concatenate two SLLists together using all supported methods.
1. Implement remove duplicates for the `SLListTemplate` and `SLListInheritance` classes.

#### From Part 1

1. Get `SLList->size()` to return the correct value.
1. Implement `SLList->addLast()`
1. Implement `SLList->removeDuplicates()`
1. BONUS: Get `std::format` to work
