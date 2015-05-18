#allocator
*注意：是空间配置器而非内存配置器*

##src
	/*
	**空间配置器，以变量数目为单位分配
	*/
	template<class T>
	class allocator{
	public:
		typedef T			value_type;
		typedef T*			pointer;
		typedef const T*	const_pointer;
		typedef T&			reference;
		typedef const T&	const_reference;
		typedef size_t		size_type;
		typedef ptrdiff_t	difference_type;
	public:
		static T *allocate();
		static T *allocate(size_t n);
		static void deallocate(T *ptr);
		static void deallocate(T *ptr, size_t n);

		static void construct(T *ptr);
		static void construct(T *ptr, const T& value);
		static void destroy(T *ptr);
		static void destroy(T *first, T *last);
	};

	template<class T>
	T *allocator<T>::allocate(){
		return static_cast<T *>(alloc::allocate(sizeof(T)));
	}
	template<class T>
	T *allocator<T>::allocate(size_t n){
		if (n == 0) return 0;
		return static_cast<T *>(alloc::allocate(sizeof(T) * n));
	}
	template<class T>
	void allocator<T>::deallocate(T *ptr){
		alloc::deallocate(static_cast<void *>(ptr), sizeof(T));
	}
	template<class T>
	void allocator<T>::deallocate(T *ptr, size_t n){
		if (n == 0) return;
		alloc::deallocate(static_cast<void *>(ptr), sizeof(T)* n);
	}

	template<class T>
	void allocator<T>::construct(T *ptr){
		new(ptr)T();
	}
	template<class T>
	void allocator<T>::construct(T *ptr, const T& value){
		new(ptr)T(value);
	}
	template<class T>
	void allocator<T>::destroy(T *ptr){
		ptr->~T();
	}
	template<class T>
	void allocator<T>::destroy(T *first, T *last){
		for (; first != last; ++first){
			first->~T();
		}
	}


#iterator
iterator 是C++标准程序库中的一个头文件，定义了C++ STL标准中的一些迭代器模板类 ，这些类都是以std::iterator为基类派生出来的。

迭代器模拟了C++中的指针，可以有++运算，用*（解引用算符，deference）或->算符来访问容器中的元素。容器中元素如果改变了所用内存，也不影响绑定的迭代器指向正确的位置。因此，迭代器实际上更像是句柄（handler）。

STL的迭代器实现了设计模式中的“迭代器模式”。即顺序访问一个聚合中的元素，又不暴露聚合的实现细节。

迭代器支持以不同方法遍历聚合类型。例如，对一颗树数据类型，可以有前序、中序、后序遍历的迭代器。同一个聚合类型的对象上，可以同时有多个迭代器，各自保持不同的遍历状态。在不同的聚合类型上实现的迭代器具有标准的对外接口，这给STL中的算法使用迭代器提供了可能。熟练掌握这些迭代器的构造、用法，是基于STL的模板元编程的基础。
##迭代器的分类与接口
所有迭代器都应该实现自增算符：`iter++`、`++iter`

Input迭代器：

* `iter` 解引用后只能用作右值
* `iter->member ` 解引用访问当前对象的成员数据
* `iter=iter1` 迭代器赋给另一个迭代器
* `iter==iter1` 迭代器相等比较
* `iter!=iter1` 迭代器不等比较

Output迭代器：

* `iter` 解引用后只能用作左值
* `iter=iter1` 迭代器赋给另一个迭代器

Forward迭代器：具有输入迭代器、输出迭代器的所有功能，且可以反复遍历操作。支持对同一个元素的多次读写。可复制前向迭代器来记录序列中的一个位置，以便将来返回此处。


Bidirectional迭代器：是在前向迭代器的基础上，多了单步向后遍历的能力
        
* `--iter`
* `iter--`


    Random Access迭代器：在双向迭代器基础上，具有直接访问各数据元素的能力。随机迭代器增加了“迭代器算术运算”：
* `iter+=i` 迭代器递增i位
* `iter-=i` 迭代器递减i位
*         `iter+i` 加i位后的迭代器
*                `iter-i` 减i位后的迭代器
*                       `iter[i]` 加i位后的迭代器的解引用
*                              `iter<iter1` 如果迭代器iter的位置在iter1前，返回true，否则返回false
*                                      `iter<=iter1` 如果iter的位置在iter1的前面或同一位置时返回true，否则返回false
*                                              `iter>iter1` 如果迭代器iter的位置在iter1后，返回true，否则返回false
*                                                      `iter>=iter1` 如果iter的位置在iter1的后面或同一位置时返回true，否则返回false

在STL定义的容器中，string，vector与deque提供了随机访问迭代器，list、set、multiset、map、multimap提供了双向迭代器。