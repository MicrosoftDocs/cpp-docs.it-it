---
title: is_nothrow_constructible Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- type_traits/std::is_nothrow_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_nothrow_constructible
ms.assetid: 8be3f927-283e-4d67-95a5-8bf5dc4e7a3d
caps.latest.revision: 12
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
ms.openlocfilehash: 07552a8a7222cbd00f4375ea7fa1771b96c4a5b4
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="isnothrowconstructible-class"></a>is_nothrow_constructible Class
Tests whether a type is constructible and is known not to throw when the specified argument types are used.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class T, class... Args>  
struct is_nothrow_constructible;
```  
  
#### <a name="parameters"></a>Parameters  
 `T`  
 The type to query.  
  
 `Args`  
 The argument types to match in a constructor of `T`.  
  
## <a name="remarks"></a>Remarks  
 An instance of the type predicate holds true if the type `T` is constructible by using the argument types in `Args`, and the constructor is known by the compiler not to throw; otherwise it holds false. Type `T` is constructible if the variable definition `T t(std::declval<Args>()...);` is well-formed. Both `T` and all the types in `Args` must be complete types, `void`, or arrays of unknown bound.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)




