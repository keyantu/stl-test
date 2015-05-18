#STL(Standard Template Library)

The STL achieves its results through the use of templates.
The STL was created as the first library of generic algorithms and data structures for C++.

STL可分为容器(containers)、迭代器(iterators)、空间配置器(allocator)、配接器(adapters)、算法(algorithms)、仿函数(functors)六个部分。

##container
###Simple containers
* pair
###Sequences 
* vector
* list
* slist
* deque
###Container adaptors
* queue
* priority queue
* stack
###Associative containers
* set
* multiset
* map
* multimap
* hash_set
* hash_multiset
* hash_map
* hash_multimap

##iterators
The STL implements five different types of iterators. These are input iterators (that can only be used to read a sequence of values), output iterators (that can only be used to write a sequence of values), forward iterators (that can be read, written to, and move forward), bidirectional iterators (that are like forward iterators, but can also move backwards) and random access iterators (that can move freely any number of steps in one operation).

##algorithms

A large number of algorithms to perform activities such as searching and sorting are provided in the STL, each implemented to require a certain level of iterator (and therefore will work on any container that provides an interface by iterators). Searching algorithms like binary_search and lower_bound use binary search and like sorting algorithms require that the type of data must implement comparison operator < or custom comparator function must be specified; such comparison operator or comparator function must guarantee strict weak ordering.

##functors

The STL includes classes that overload the function call operator (operator()). Instances of such classes are called functors or function objects. Functors allow the behavior of the associated function to be parameterized (e.g. through arguments passed to the functor's constructor) and can be used to keep associated per-functor state information along with the function. Since both functors and function pointers can be invoked using the syntax of a function call, they are interchangeable as arguments to templates when the corresponding parameter only appears in function call contexts.


