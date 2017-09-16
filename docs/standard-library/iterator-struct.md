---
title: iterator Struct | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- xutility/std::iterator
dev_langs:
- C++
helpviewer_keywords:
- iterator class
- iterator struct
ms.assetid: c74c8000-8b18-4829-9b71-6103c4229b74
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: c634a769384b34fde401a8089ac00c6ba5a2c664
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="iterator-struct"></a>iterator Struct
An empty base struct used to ensure that a user-defined iterator class works properly with **iterator_trait**s.  
  
## <a name="syntax"></a>Syntax  
```    
struct iterator {
   typedef Category iterator_category;
   typedef Type value_type;
   typedef Distance difference_type;
   typedef Distance distance_type;
   typedef Pointer pointer;
   typedef Reference reference;
   };  
```    
## <a name="remarks"></a>Remarks  
 The template struct serves as a base type for all iterators. It defines the member types  
  
- `iterator_category` (a synonym for the template parameter `Category`).  
  
- `value_type` (a synonym for the template parameter **Type**).  
  
- `difference_type` (a synonym for the template parameter `Distance`).  
  
- `distance_type` (a synonym for the template parameter `Distance`)  
  
- `pointer` (a synonym for the template parameter `Pointer`).  
  
- `reference` (a synonym for the template parameter `Reference`).  
  
 Note that `value_type` should not be a constant type even if **pointer** points at an object of const **Type** and reference designates an object of const **Type**.  
  
## <a name="example"></a>Example  
 See [iterator_traits](../standard-library/iterator-traits-struct.md) for an example of how to declare and use the types in the iterator base class.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<iterator>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [\<iterator>](../standard-library/iterator.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)




