---
title: '&lt;hash_set&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <hash_set>", "std::<hash_set>
dev_langs:
- C++
helpviewer_keywords:
- hash_set header
ms.assetid: 6b556967-c808-4869-9b4d-f9e030864435
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 5fc42ca0fd781a4ab074d3290b5eac510f2459fd
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="lthashsetgt"></a>&lt;hash_set&gt;
> [!NOTE]
>  This header is obsolete. The alternative is [<unordered_set>](../standard-library/unordered-set.md).  
  
 Defines the container template classes hash_set and hash_multiset and their supporting templates.  
  
## <a name="syntax"></a>Syntax  
  
```  
#include <hash_set>  
  
```  
  
## <a name="remarks"></a>Remarks  
  
### <a name="operators"></a>Operators  
  
|Hash_set version|Hash_multiset version|Description|  
|-----------------------|----------------------------|-----------------|  
|[operator!= (hash_set)](../standard-library/hash-set-operators.md#op_neq)|[operator!= (hash_multiset)](../standard-library/hash-set-operators.md#op_neq)|Tests if the hash_set or hash_multiset object on the left side of the operator is not equal to the hash_set or hash_multiset object on the right side.|  
|[operator== (hash_set)](../standard-library/hash-set-operators.md#op_eq_eq)|[operator== (hash_multiset)](../standard-library/hash-set-operators.md#op_eq_eq)|Tests if the hash_set or hash_multiset object on the left side of the operator is equal to the hash_set or hash_multiset object on the right side.|  
  
### <a name="specialized-template-functions"></a>Specialized Template Functions  
  
|Hash_set version|Hash_multiset version|Description|  
|-----------------------|----------------------------|-----------------|  
|[swap (hash_set)](../standard-library/hash-set-functions.md#swap)|[swap (hash_multiset)](../standard-library/hash-set-functions.md#swap_hash_multiset)|Exchanges the elements of two hash_sets or hash_multisets.|  
  
### <a name="classes"></a>Classes  
  
|||  
|-|-|  
|[hash_compare Class](../standard-library/hash-compare-class.md)|Describes an object that can be used by any of the hash associative containers — hash_map, hash_multimap, hash_set, or hash_multiset — as a default **Traits** parameter object to order and hash the elements they contain.|  
|[hash_set Class](../standard-library/hash-set-class.md)|Used for the storage and fast retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values.|  
|[hash_multiset Class](../standard-library/hash-multiset-class.md)|Used for the storage and fast retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values.|  
  
## <a name="see-also"></a>See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)




