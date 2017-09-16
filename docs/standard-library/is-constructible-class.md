---
title: is_constructible Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::is_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_constructible
ms.assetid: 7cdec5ff-73cf-4f78-a9db-ced2e9c0fd7f
caps.latest.revision: 14
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
ms.openlocfilehash: ff196d901e749bcd1a2b2813de409237bcbda672
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="isconstructible-class"></a>is_constructible Class
Tests whether a type is constructible when the specified argument types are used.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class T, class... Args>  
struct is_constructible;
```  
  
#### <a name="parameters"></a>Parameters  
 `T`  
 The type to query.  
  
 `Args`  
 The argument types to match in a constructor of `T`.  
  
## <a name="remarks"></a>Remarks  
 An instance of the type predicate holds true if the type `T` is constructible by using the argument types in `Args`, otherwise it holds false. Type `T` is constructible if the variable definition `T t(std::declval<Args>()...);` is well-formed. Both `T` and all the types in `Args` must be complete types, `void`, or arrays of unknown bound.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)




