#Vector (STL)
-------------------

Vector 是C++标准程序库中的一个类，可视为会自动扩展容量的数组，以循序(Sequential)的方式维护变数集合。vector的特色有支持随机存取，在集合尾端增删元素很快，但是在集合中间增删元素比较费时。vector是C++标准程序库中的众多容器（container）之一。 vector以模板(泛型)方式实现，可以保存任意类型的变数，包括用户自定义的数据型态，例如：它可以是放置整数（int）型态的 vector、也可以是放置字符串（string）型态的 vector、或者放置用户自定类（user-defined class）的 vector。

##成员函数概观

vector 类是以容器（Container） 模式为基准设计的，也就是说，基本上它有 begin()，end()，size()，max_size()，empty() 以及 swap() 这几个方法。

### 访问元素的方法
* vec[i] - 访问索引值为 i 的元素引用。 (索引值从零起算，故第一个元素是vec[0]。)
* 
vec.at(i) - 访问索引值为 i 的元素的引用，以 at() 访问会做数组边界检查，如果访问越界将会抛出一个例外，这是与operator[]的唯一差异。
* 
vec.front() - 回传 vector 第一个元素的引用。
* 
vec.back() - 回传 vector 最尾元素的引用。

###新增或移除元素的方法
* vec.push_back() - 新增元素至 vector 的尾端，必要时会进行存储器配置。
* 
vec.pop_back() - 删除 vector 最尾端的元素。
* 
vec.insert() - 插入一个或多个元素至 vector 内的任意位置。
* 
vec.erase() - 删除 vector 中一个或多个元素。
* 
vec.clear() - 清空所有元素。
###获取长度/容量
* vec.size() - 获取 vector 目前持有的元素个数。
* vec.empty() - 如果 vector 内部为空，则传回 true 值。
* vec.capacity() - 获取 vector 目前可容纳的最大元素个数。这个方法与存储器的配置有关，它通常只会增加，不会因为元素被删减而随之减少。
###重新配置／重置长度
* vec.reserve() - 如有必要，可改变 vector 的容量大小（配置更多的存储器）。在众多的 STL 实做，容量只能增加，不可以减少。
* vec.resize() - 改变 vector 目前持有的元素个数。
迭代 (Iterator)
* vec.begin() - 回传一个Iterator，它指向 vector 第一个元素。
* vec.end() - 回传一个Iterator，它指向 vector 最尾端元素的下一个位置（请注意：它不是最末元素）。
* vec.rbegin() - 回传一个反向Iterator，它指向 vector 最尾端元素的。
* vec.rend() - 回传一个Iterator，它指向 vector 的第一个元素。

#List (STL)
-----------
List 是C++标准程式库中的一个类，可以简单视之为双向连结串列，以线性列的方式管理物件集合。list 的特色是在集合的任何位置增加或删除元素都很快，但是不支持随机存取。list 是C++标准程式库提供的众多容器（container）之一，除此之外还有vector、set、map、…等等。list 以模板方式实现(即泛型)，可以处理任意型别的变数，包括使用者自定义的资料型态，例如：它可以是一个放置整数（int）型态的 list、也可以是放置字串（char 或 string）型态的 list、或者放置使用者自定类别（user-defined class）的 list。

##成员函数概观

###Iterators:
        list.begin() 回传指向第一个元素的 Iterator。
        list.end() 回传指向最末元素的下一个位置的 Iterator。
        list.rbegin() 回传指向最末个元素的反向 Iterator。
        list.rend() 回传指向第一个元素的前一个位置的反向 Iterator。

###Capacity/Size:
        list.empty() 若list内部为空，则回传true值。
        list.size() 回传list内实际的元素个数。
        list.resize() 重新分派list的长度。

###Element Access
        list.front() 存取第一个元素。
        list.back() 存取最末个元素。

###Modify methods
        list.push_front() 增加一个新的元素在 list 的前端。
        list.pop_front() 删除 list 的第一个元素。
        list.push_back() 增加一个新的元素在 list 的尾端。
        list.pop_back() 删除 list 的最末个元素。



#Deque(STL)
双端队列（deque，全名double-ended queue）是一种具有队列和栈性质的数据结构。双端队列中的元素可以从两端弹出，插入和删除操作限定在队列的两边进行。



