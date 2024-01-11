[https://github.com/gibsjose/cpp-cheat-sheet/blob/master/Data Structures and Algorithms.md](https://github.com/gibsjose/cpp-cheat-sheet/blob/master/Data%20Structures%20and%20Algorithms.md)

https://www.programiz.com/cpp-programming/unordered-map

https://www.programiz.com/dsa/hash-table

https://blog.ilvokhin.com/libstdc++-std-unordered-map/

https://github.com/gcc-mirror/gcc/blob/b9b7981f3d6919518372daf4c7e8c40dfc58f49d/libstdc%2B%2B-v3/include/bits/hashtable.h#L177-L1153

### Linear Search

O(n)

N개의 원소를 하나씩 키와 비교해서 찾는다 

```cpp
LinearSearch(array, key)
  for each item in the array
    if item == value
      return its index
```

### Binary Search

O(log n)

N개의 원소 중에서 logN개의 원소를 하나씩 키와 비교해서 찾는다 

```cpp
do until the pointers low and high meet each other.
    mid = (low + high)/2
    if (x == arr[mid])
        return mid
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1
    else                       // x is on the left side
        high = mid - 1
```

### Hash Table

O(1)

Key를 Hashing 해서 값이 있는 메모리에 바로 접근한다 

```cpp
chainedHashSearch(T, k)
  return T[h(k)]
chainedHashInsert(T, x)
  T[h(x.key)] = x //insert at the head
chainedHashDelete(T, x)
  T[h(x.key)] = NIL
```

---

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/b33b7432-bd20-4010-95ca-0039cf60296b/f0f6bd4d-57d4-4b8e-bad0-e895e7cde586/Untitled.png)

### Hash Table - ****Linear Probing +**** ****Division Method****

```cpp
// Implementing hash table in C++

#include <iostream>
#include <list>
using namespace std;

class HashTable
{
  int capacity;
  list<int> *table;

public:
  HashTable(int V);
  void insertItem(int key, int data);
  void deleteItem(int key);

  int checkPrime(int n)
  {
  int i;
  if (n == 1 || n == 0)
  {
    return 0;
  }
  for (i = 2; i < n / 2; i++)
  {
    if (n % i == 0)
    {
    return 0;
    }
  }
  return 1;
  }
  int getPrime(int n)
  {
  if (n % 2 == 0)
  {
    n++;
  }
  while (!checkPrime(n))
  {
    n += 2;
  }
  return n;
  }

  int hashFunction(int key)
  {
  return (key % capacity);
  }
  void displayHash();
};
HashTable::HashTable(int c)
{
  int size = getPrime(c);
  this->capacity = size;
  table = new list<int>[capacity];
}
void HashTable::insertItem(int key, int data)
{
  int index = hashFunction(key);
  table[index].push_back(data);
}

void HashTable::deleteItem(int key)
{
  int index = hashFunction(key);

  list<int>::iterator i;
  for (i = table[index].begin();
   i != table[index].end(); i++)
  {
  if (*i == key)
    break;
  }

  if (i != table[index].end())
  table[index].erase(i);
}

void HashTable::displayHash()
{
  for (int i = 0; i < capacity; i++)
  {
  cout << "table[" << i << "]";
  for (auto x : table[i])
    cout << " --> " << x;
  cout << endl;
  }
}

int main()
{
  int key[] = {231, 321, 212, 321, 433, 262};
  int data[] = {123, 432, 523, 43, 423, 111};
  int size = sizeof(key) / sizeof(key[0]);

  HashTable h(size);

  for (int i = 0; i < size; i++)
  h.insertItem(key[i], data[i]);

  h.deleteItem(12);
  h.displayHash();
}
```

### Hash Function

key로 idx에 접근하는 값 만드는 함수 

### Collision Resolution

해시값이 같을 때 하나의 버킷에 데이터 또 쓰면 덮어써진다 충돌 발생했을 때 문제 해결하기 

### Separate Chaining

버킷 뒤에 데이터 쭉 연결시켜서 넣는다 

### Open Addressing

빈 곳 있을 때까지 찾아보고 넣는다

### Load Factor

해시 테이블에서 차 있는 버킷 수 / 전체 버킷 수

---

### GCC's libstdc++ implementation

### _HashTable

### Nodes

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/b33b7432-bd20-4010-95ca-0039cf60296b/70bc0acc-bdb7-4e9d-a7fb-7c6d3635a240/Untitled.png)

### Hash Table

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/b33b7432-bd20-4010-95ca-0039cf60296b/17a8cb51-f0da-4bf4-84e9-e1001887ac61/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/b33b7432-bd20-4010-95ca-0039cf60296b/8ef50b1c-6370-4cab-9fa2-c4cfb91148a4/Untitled.png)

### Data Layout

```cpp
*  Each _Hashtable data structure has:
   *
   *  - _Bucket[]       _M_buckets
   *  - _Hash_node_base _M_before_begin
   *  - size_type       _M_bucket_count
   *  - size_type       _M_element_count
   *
   *  with _Bucket being _Hash_node_base* and _Hash_node containing:
   *
   *  - _Hash_node*   _M_next
   *  - Tp            _M_value
   *  - size_t        _M_hash_code if cache_hash_code is true
   *
   *  In terms of Standard containers the hashtable is like the aggregation of:
   *
   *  - std::forward_list<_Node> containing the elements
   *  - std::vector<std::forward_list<_Node>::iterator> representing the buckets
   *
   *  The non-empty buckets contain the node before the first node in the
   *  bucket. This design makes it possible to implement something like a
   *  std::forward_list::insert_after on container insertion and
   *  std::forward_list::erase_after on container erase
   *  calls. _M_before_begin is equivalent to
   *  std::forward_list::before_begin. Empty buckets contain
   *  nullptr.  Note that one of the non-empty buckets contains
   *  &_M_before_begin which is not a dereferenceable node so the
   *  node pointer in a bucket shall never be dereferenced, only its
   *  next node can be.
   *
   *  Walking through a bucket's nodes requires a check on the hash code to
   *  see if each node is still in the bucket. Such a design assumes a
   *  quite efficient hash functor and is one of the reasons it is
   *  highly advisable to set __cache_hash_code to true.
   *
   *  The container iterators are simply built from nodes. This way
   *  incrementing the iterator is perfectly efficient independent of
   *  how many empty buckets there are in the container.
   *
   *  On insert we compute the element's hash code and use it to find the
   *  bucket index. If the element must be inserted in an empty bucket
   *  we add it at the beginning of the singly linked list and make the
   *  bucket point to _M_before_begin. The bucket that used to point to
   *  _M_before_begin, if any, is updated to point to its new before
   *  begin node.
   *
   *  On erase, the simple iterator design requires using the hash
   *  functor to get the index of the bucket to update. For this
   *  reason, when __cache_hash_code is set to false the hash functor must
   *  not throw and this is enforced by a static assertion.
   *
   *  Functionality is implemented by decomposition into base classes,
   *  where the derived _Hashtable class is used in _Map_base,
   *  _Insert, _Rehash_base, and _Equality base classes to access the
   *  "this" pointer. _Hashtable_base is used in the base classes as a
   *  non-recursive, fully-completed-type so that detailed nested type
   *  information, such as iterator type and node type, can be
   *  used. This is similar to the "Curiously Recurring Template
   *  Pattern" (CRTP) technique, but uses a reconstructed, not
   *  explicitly passed, template pattern.
```

### _Hash_node_base

```cpp
/**
   *  struct _Hash_node_base
   *
   *  Nodes, used to wrap elements stored in the hash table.  A policy
   *  template parameter of class template _Hashtable controls whether
   *  nodes also store a hash code. In some cases (e.g. strings) this
   *  may be a performance win.
   */
  struct _Hash_node_base
  {
    _Hash_node_base* _M_nxt;

    _Hash_node_base() noexcept : _M_nxt() { }

    _Hash_node_base(_Hash_node_base* __next) noexcept : _M_nxt(__next) { }
  };
```

### _Hash_node_value_base

```cpp
/**
   *  struct _Hash_node_value_base
   *
   *  Node type with the value to store.
   */
  template<typename _Value>
    struct _Hash_node_value_base
    {
      typedef _Value value_type;

      __gnu_cxx::__aligned_buffer<_Value> _M_storage;

      _Value*
      _M_valptr() noexcept
      { return _M_storage._M_ptr(); }

      const _Value*
      _M_valptr() const noexcept
      { return _M_storage._M_ptr(); }

      _Value&
      _M_v() noexcept
      { return *_M_valptr(); }

      const _Value&
      _M_v() const noexcept
      { return *_M_valptr(); }
    };
```

### _Hash_node_code_cache

해시 값 캐싱 로직 

```cpp
/**
   *  Primary template struct _Hash_node_code_cache.
   */
  template<bool _Cache_hash_code>
    struct _Hash_node_code_cache
    { };

  /**
   *  Specialization for node with cache, struct _Hash_node_code_cache.
   */
  template<>
    struct _Hash_node_code_cache<true>
    { std::size_t  _M_hash_code; };
```

### Hash Table

```cpp
private:
      __buckets_ptr		_M_buckets		= &_M_single_bucket;
      size_type			_M_bucket_count		= 1;
      __node_base		_M_before_begin;
      size_type			_M_element_count	= 0;
      _RehashPolicy		_M_rehash_policy;

      // A single bucket used when only need for 1 bucket. Especially
      // interesting in move semantic to leave hashtable with only 1 bucket
      // which is not allocated so that we can have those operations noexcept
      // qualified.
      // Note that we can't leave hashtable with 0 bucket without adding
      // numerous checks in the code to avoid 0 modulus.
      __node_base_ptr		_M_single_bucket	= nullptr;
```

```cpp
		*  In terms of Standard containers the hashtable is like the aggregation of:
   *
   *  - std::forward_list<_Node> containing the elements
   *  - std::vector<std::forward_list<_Node>::iterator> representing the buckets
```

---

### Insert

### _M_insert_unique

```cpp
// Insert v if no element with its key is already present.
  template<typename _Key, typename _Value, typename _Alloc,
	   typename _ExtractKey, typename _Equal,
	   typename _Hash, typename _RangeHash, typename _Unused,
	   typename _RehashPolicy, typename _Traits>
    template<typename _Kt, typename _Arg, typename _NodeGenerator>
      auto
      _Hashtable<_Key, _Value, _Alloc, _ExtractKey, _Equal,
		 _Hash, _RangeHash, _Unused, _RehashPolicy, _Traits>::
      _M_insert_unique(_Kt&& __k, _Arg&& __v,
		       const _NodeGenerator& __node_gen)
      -> pair<iterator, bool>
      {
	if (size() <= __small_size_threshold())
	  for (auto __it = begin(); __it != end(); ++__it)
	    if (this->_M_key_equals_tr(__k, *__it._M_cur))
	      return { __it, false };

	__hash_code __code = this->_M_hash_code_tr(__k);
	size_type __bkt = _M_bucket_index(__code);

	if (size() > __small_size_threshold())
	  if (__node_ptr __node = _M_find_node_tr(__bkt, __k, __code))
	    return { iterator(__node), false };

	_Scoped_node __node {
	  __node_builder_t::_S_build(std::forward<_Kt>(__k),
				     std::forward<_Arg>(__v),
				     __node_gen),
	  this
	};
	auto __pos
	  = _M_insert_unique_node(__bkt, __code, __node._M_node);
	__node._M_node = nullptr;
	return { __pos, true };
      }
```

### _M_insert_unique - iterator

```cpp
template<typename _Key, typename _Value, typename _Alloc,
	   typename _ExtractKey, typename _Equal,
	   typename _Hash, typename _RangeHash, typename _Unused,
	   typename _RehashPolicy, typename _Traits>
    auto
    _Hashtable<_Key, _Value, _Alloc, _ExtractKey, _Equal,
	       _Hash, _RangeHash, _Unused, _RehashPolicy, _Traits>::
    _M_insert_unique_node(size_type __bkt, __hash_code __code,
			  __node_ptr __node, size_type __n_elt)
    -> iterator
    {
      const __rehash_state& __saved_state = _M_rehash_policy._M_state();
      std::pair<bool, std::size_t> __do_rehash
	= _M_rehash_policy._M_need_rehash(_M_bucket_count, _M_element_count,
					  __n_elt);

      if (__do_rehash.first)
	{
	  _M_rehash(__do_rehash.second, __saved_state);
	  __bkt = _M_bucket_index(__code);
	}

      this->_M_store_code(*__node, __code);

      // Always insert at the beginning of the bucket.
      _M_insert_bucket_begin(__bkt, __node);
      ++_M_element_count;
      return iterator(__node);
    }
```

---

### 해시 테이블 버킷 수는 소수

```cpp
// Return a prime no smaller than n.
  std::size_t
  _Prime_rehash_policy::_M_next_bkt(std::size_t __n) const
  {
    // Optimize lookups involving the first elements of __prime_list.
    // (useful to speed-up, eg, constructors)
    static const unsigned char __fast_bkt[]
      = { 2, 2, 2, 3, 5, 5, 7, 7, 11, 11, 11, 11, 13, 13 };

    if (__n < sizeof(__fast_bkt))
      {
	if (__n == 0)
	  // Special case on container 1st initialization with 0 bucket count
	  // hint. We keep _M_next_resize to 0 to make sure that next time we
	  // want to add an element allocation will take place.
	  return 1;

	_M_next_resize =
	  __builtin_floor(__fast_bkt[__n] * (double)_M_max_load_factor);
	return __fast_bkt[__n];
      }

    // Number of primes (without sentinel).
    constexpr auto __n_primes
      = sizeof(__prime_list) / sizeof(unsigned long) - 1;

    // Don't include the last prime in the search, so that anything
    // higher than the second-to-last prime returns a past-the-end
    // iterator that can be dereferenced to get the last prime.
    constexpr auto __last_prime = __prime_list + __n_primes - 1;

    const unsigned long* __next_bkt =
      std::lower_bound(__prime_list + 6, __last_prime, __n);

    if (__next_bkt == __last_prime)
      // Set next resize to the max value so that we never try to rehash again
      // as we already reach the biggest possible bucket number.
      // Note that it might result in max_load_factor not being respected.
      _M_next_resize = size_t(-1);
    else
      _M_next_resize =
	__builtin_floor(*__next_bkt * (double)_M_max_load_factor);

    return *__next_bkt;
  }
```

---

### Find

### 숫자 작을 때 - linear search

```cpp
if (size() <= __small_size_threshold())
	{
	  for (auto __it = begin(); __it != end(); ++__it)
	    if (this->_M_key_equals(__k, *__it._M_cur))
	      return __it;
	  return end();
	}
```

### 숫자 클 때 - bucket search

```cpp
__hash_code __code = this->_M_hash_code(__k);
      std::size_t __bkt = _M_bucket_index(__code);
      return const_iterator(_M_find_node(__bkt, __k, __code));
```

### _M_find_node

```cpp
__node_ptr
      _M_find_node(size_type __bkt, const key_type& __key,
		   __hash_code __c) const
      {
	__node_base_ptr __before_n = _M_find_before_node(__bkt, __key, __c);
	if (__before_n)
	  return static_cast<__node_ptr>(__before_n->_M_nxt);
	return nullptr;
      }
```

### _M_find_before_node

```cpp
// Find the node before the one whose key compares equal to k in the bucket
  // bkt. Return nullptr if no node is found.
  template<typename _Key, typename _Value, typename _Alloc,
	   typename _ExtractKey, typename _Equal,
	   typename _Hash, typename _RangeHash, typename _Unused,
	   typename _RehashPolicy, typename _Traits>
    auto
    _Hashtable<_Key, _Value, _Alloc, _ExtractKey, _Equal,
	       _Hash, _RangeHash, _Unused, _RehashPolicy, _Traits>::
    _M_find_before_node(size_type __bkt, const key_type& __k,
			__hash_code __code) const
    -> __node_base_ptr
    {
      __node_base_ptr __prev_p = _M_buckets[__bkt];
      if (!__prev_p)
	return nullptr;

      for (__node_ptr __p = static_cast<__node_ptr>(__prev_p->_M_nxt);;
	   __p = __p->_M_next())
	{
	  if (this->_M_equals(__k, __code, *__p))
	    return __prev_p;

	  if (!__p->_M_nxt || _M_bucket_index(*__p->_M_next()) != __bkt)
	    break;
	  __prev_p = __p;
	}

      return nullptr;
    }
```

---

### Erase

### 숫자 작을 때 - linear search

```cpp
if (size() <= __small_size_threshold())
	{
	  __prev_n = _M_find_before_node(__k);
	  if (!__prev_n)
	    return 0;

	  // We found a matching node, erase it.
	  __n = static_cast<__node_ptr>(__prev_n->_M_nxt);
	  __bkt = _M_bucket_index(*__n);
	}
```

### 숫자 클 때 - bucket search

```cpp
else
  { 
   __hash_code __code = this->_M_hash_code(__k);
   __bkt = _M_bucket_index(__code);

   // Look for the node before the first matching node.
   __prev_n = _M_find_before_node(__bkt, __k, __code);
   if (!__prev_n)
     return 0;

   // We found a matching node, erase it.
   __n = static_cast<__node_ptr>(__prev_n->_M_nxt);
  }
```

### _M_erase

```cpp
template<typename _Key, typename _Value, typename _Alloc,
	   typename _ExtractKey, typename _Equal,
	   typename _Hash, typename _RangeHash, typename _Unused,
	   typename _RehashPolicy, typename _Traits>
    auto
    _Hashtable<_Key, _Value, _Alloc, _ExtractKey, _Equal,
	       _Hash, _RangeHash, _Unused, _RehashPolicy, _Traits>::
    _M_erase(true_type /* __uks */, const key_type& __k)
    -> size_type
    {
      __node_base_ptr __prev_n;
      __node_ptr __n;
      std::size_t __bkt;
      if (size() <= __small_size_threshold())
	{
	  __prev_n = _M_find_before_node(__k);
	  if (!__prev_n)
	    return 0;

	  // We found a matching node, erase it.
	  __n = static_cast<__node_ptr>(__prev_n->_M_nxt);
	  __bkt = _M_bucket_index(*__n);
	}
      else
	{
	  __hash_code __code = this->_M_hash_code(__k);
	  __bkt = _M_bucket_index(__code);

	  // Look for the node before the first matching node.
	  __prev_n = _M_find_before_node(__bkt, __k, __code);
	  if (!__prev_n)
	    return 0;

	  // We found a matching node, erase it.
	  __n = static_cast<__node_ptr>(__prev_n->_M_nxt);
	}

      _M_erase(__bkt, __prev_n, __n);
      return 1;
    }
```

### _M_erase - iterator

```cpp
template<typename _Key, typename _Value, typename _Alloc,
	   typename _ExtractKey, typename _Equal,
	   typename _Hash, typename _RangeHash, typename _Unused,
	   typename _RehashPolicy, typename _Traits>
    auto
    _Hashtable<_Key, _Value, _Alloc, _ExtractKey, _Equal,
	       _Hash, _RangeHash, _Unused, _RehashPolicy, _Traits>::
    _M_erase(size_type __bkt, __node_base_ptr __prev_n, __node_ptr __n)
    -> iterator
    {
      if (__prev_n == _M_buckets[__bkt])
	_M_remove_bucket_begin(__bkt, __n->_M_next(),
	  __n->_M_nxt ? _M_bucket_index(*__n->_M_next()) : 0);
      else if (__n->_M_nxt)
	{
	  size_type __next_bkt = _M_bucket_index(*__n->_M_next());
	  if (__next_bkt != __bkt)
	    _M_buckets[__next_bkt] = __prev_n;
	}

      __prev_n->_M_nxt = __n->_M_nxt;
      iterator __result(__n->_M_next());
      this->_M_deallocate_node(__n);
      --_M_element_count;

      return __result;
    }
```

---

### Cache Unfriendliness

RAM에 메모리가 불연속적으로 올라와 있다

노드가 쓸 공간을 각자 힙에 잡고 포인터로 연결만 해두었다 

### reference and iterator stability

standard에서 호환되어야 한다 

### Separate chaining

각 버킷에 쭉 데이터 연결하는 방식으로 쓴다
