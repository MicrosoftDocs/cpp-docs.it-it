---
title: '&lt;scoped_allocator&gt; operators | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- scoped_allocator/std::operator!=
- scoped_allocator/std::operator==
dev_langs:
- C++
ms.assetid: 4dfe0805-cc6e-479f-887f-a1c164f73837
caps.latest.revision: 10
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: af5874764e574a8c7f9b4812448914859e376b2b
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltscopedallocatorgt-operators"></a>&lt;scoped_allocator&gt; operators
|||  
|-|-|  
|[operator!=](#op_neq)|[operator==](#op_eq_eq)|  
  
##  <a name="op_neq"></a>  operator!=  
 Tests two `scoped_allocator_adaptor` objects for inequality.  
  
```cpp  
template <class Outer, class... Inner>  
bool operator!=(
    const scoped_allocator_adaptor<Outer, Inner...>& left,  
    const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;  
```  
  
### <a name="parameters"></a>Parameters  
 `left`  
 The left `scoped_allocator_adaptor` object.  
  
 `right`  
 The right `scoped_allocator_adaptor` object.  
  
### <a name="return-value"></a>Return Value  
 `!(left == right)`  
  
##  <a name="op_eq_eq"></a>  operator==  
 Tests two `scoped_allocator_adaptor` objects for equality.  
  
```cpp  
template <class Outer, class... Inner>  
bool operator==(
    const scoped_allocator_adaptor<Outer, Inner...>& left,  
    const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;  
```  
  
### <a name="parameters"></a>Parameters  
 `left`  
 The left `scoped_allocator_adaptor` object.  
  
 `right`  
 The right `scoped_allocator_adaptor` object.  
  
### <a name="return-value"></a>Return Value  
 `left.outer_allocator() == right.outer_allocator() && left.inner_allocator() == right.inner_allocator()`  
  
## <a name="see-also"></a>See Also  
 [<scoped_allocator>](../standard-library/scoped-allocator.md)


