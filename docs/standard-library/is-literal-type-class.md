---
title: is_literal_type Class | Microsoft Docs
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
- type_traits/std::is_literal_type
dev_langs:
- C++
helpviewer_keywords:
- is_literal_type
ms.assetid: a03a4ebb-ee66-48d6-91bb-41cf72b2401f
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
ms.openlocfilehash: b16c25274dc9713e49dd035d4dc61d481b988b4a
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="isliteraltype-class"></a>is_literal_type Class
Tests whether a type can be used as a `constexpr` variable or be constructed, used by, or returned from `constexpr` functions.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class T>  
struct is_literal_type;
```  
  
#### <a name="parameters"></a>Parameters  
 `T`  
 The type to query.  
  
## <a name="remarks"></a>Remarks  
 An instance of the type predicate holds true if the type `T` is a *literal type*, otherwise it holds false. A literal type is either `void`, a scalar type, a reference type, an array of literal type, or a literal class type. A literal class type is a class type that has a trivial destructor, is either an aggregate type or has at least one non-move, non-copy `constexpr` constructor, and all of its base classes and non-static data members are non-volatile literal types. While the type of a literal is always a literal type, the concept of a literal type includes anything that the compiler can evaluate as a `constexpr` at compile time.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)




