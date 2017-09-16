---
title: '&lt;thread&gt; operators | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- thread/std::operator!=
- thread/std::operator&gt;
- thread/std::operator&gt;=
- thread/std::operator&lt;
- thread/std::operator&lt;&lt;
- thread/std::operator&lt;=
- thread/std::operator==
dev_langs:
- C++
ms.assetid: e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac
caps.latest.revision: 11
manager: ghogen
helpviewer_keywords:
- std::operator!= (thread)
- std::operator&gt; (thread)
- std::operator&gt;= (thread)
- std::operator&lt; (thread)
- std::operator&lt;&lt; (thread)
- std::operator&lt;= (thread)
- std::operator== (thread)
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 7db631d96612a3463a543d063092f0c16b4a7dc0
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltthreadgt-operators"></a>&lt;thread&gt; operators
||||  
|-|-|-|  
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;=](#op_gt_eq)|  
|[operator&lt;](#op_lt)|[operator&lt;&lt;](#op_lt_lt)|[operator&lt;=](#op_lt_eq)|  
|[operator==](#op_eq_eq)|  
  
##  <a name="op_gt_eq"></a>  operator&gt;=  
 Determines whether one `thread::id` object is greater than or equal to another.  
  
```cpp  
bool operator>= (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### <a name="return-value"></a>Return Value  
 `!(Left < Right)`  
  
### <a name="remarks"></a>Remarks  
 This function does not throw any exceptions.  
  
##  <a name="op_gt"></a>  operator&gt;  
 Determines whether one `thread::id` object is greater than another.  
  
```cpp  
bool operator> (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### <a name="return-value"></a>Return Value  
 `Right < Left`  
  
### <a name="remarks"></a>Remarks  
 This function does not throw any exceptions.  
  
##  <a name="op_lt_eq"></a>  operator&lt;=  
 Determines whether one `thread::id` object is less than or equal to another.  
  
```cpp  
bool operator<= (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### <a name="return-value"></a>Return Value  
 `!(Right < Left)`  
  
### <a name="remarks"></a>Remarks  
 This function does not throw any exceptions.  
  
##  <a name="op_lt"></a>  operator&lt;  
 Determines whether one `thread::id` object is less than another.  
  
```cpp  
bool operator<(
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### <a name="return-value"></a>Return Value  
 `true` if `Left` precedes `Right` in the total ordering; otherwise, `false`.  
  
### <a name="remarks"></a>Remarks  
 The operator defines a total ordering on all `thread::id` objects. These objects can be used as keys in associative containers.  
  
 This function does not throw any exceptions.  
  
##  <a name="op_neq"></a>  operator!=  
 Compares two `thread::id` objects for inequality.  
  
```cpp  
bool operator!= (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### <a name="return-value"></a>Return Value  
 `!(Left == Right)`  
  
### <a name="remarks"></a>Remarks  
 This function does not throw any exceptions.  
  
##  <a name="op_eq_eq"></a>  operator==  
 Compares two `thread::id` objects for equality.  
  
```cpp  
bool operator== (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### <a name="parameters"></a>Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### <a name="return-value"></a>Return Value  
 `true` if the two objects represent the same thread of execution or if neither object represents a thread of execution; otherwise, `false`.  
  
### <a name="remarks"></a>Remarks  
 This function does not throw any exceptions.  
  
##  <a name="op_lt_lt"></a>  operator&lt;&lt;  
 Inserts a text representation of a `thread::id` object into a stream.  
  
```cpp  
template <class Elem, class Tr>
basic_ostream<Elem, Tr>& operator<<(
    basic_ostream<Elem, Tr>& Ostr, thread::id Id);
```  
  
### <a name="parameters"></a>Parameters  
 `Ostr`  
 A [basic_ostream](../standard-library/basic-ostream-class.md) object.  
  
 `Id`  
 A `thread::id` object.  
  
### <a name="return-value"></a>Return Value  
 `Ostr`.  
  
### <a name="remarks"></a>Remarks  
 This function inserts `Id` into `Ostr`.  
  
 If two `thread::id` objects compare equal, the inserted text representations of those objects are the same.  
  
## <a name="see-also"></a>See Also  
 [\<thread>](../standard-library/thread.md)




