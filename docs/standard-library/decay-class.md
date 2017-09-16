---
title: decay Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::decay
dev_langs:
- C++
helpviewer_keywords:
- decay class
ms.assetid: 96baa2fd-c8e0-49af-be91-ba375ba7f9dc
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.openlocfilehash: 2fd24a6f493cce88804abedf275c8038d0e05067
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="decay-class"></a>decay Class
Produces the type as passed by value. Makes the type non-reference, non-const, non-volatile, or makes a pointer to the type from a function or an array type.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class T>
struct decay;

template <class T>  
using decay_t = typename decay<T>::type;
```  
  
#### <a name="parameters"></a>Parameters  
 `T`  
 The type to modify.  
  
## <a name="remarks"></a>Remarks  
 Use the decay template to produce the resulting type as if the type was passed by value as an argument. The template class member typedef `type` holds a modified type that is defined in the following stages:  
  
-   The type `U` is defined as `remove_reference<T>::type`.  
  
-   If `is_array<U>::value` is true, the modified type `type` is `remove_extent<U>::type *`.  
  
-   Otherwise, if `is_function<U>::value` is true, the modified type `type` is `add_pointer<U>::type`.  
  
-   Otherwise, the modified type `type` is `remove_cv<U>::type`.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)




