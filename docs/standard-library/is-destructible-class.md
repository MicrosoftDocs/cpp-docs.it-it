---
title: is_destructible Class | Microsoft Docs
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
- type_traits/std::is_destructible
dev_langs:
- C++
helpviewer_keywords:
- is_destructible
ms.assetid: 3bb9b718-1ad5-49ae-93cc-92b93b546b4d
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- es-es
- pl-pl
- pt-br
- tr-tr
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 243d93b7ed17d977baaa04222dd871cd0c892a12
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="isdestructible-class"></a>is_destructible Class
Tests whether the type is destructible.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class T>  
struct is_destructible;
```  
  
#### <a name="parameters"></a>Parameters  
 `T`  
 The type to query.  
  
## <a name="remarks"></a>Remarks  
 An instance of the type predicate holds true if the type `T` is a destructible type, otherwise it holds false. Destructible types are reference types, object types, and types where for some type `U` equal to `remove_all_extents_t<T>` the unevaluated operand `std::declval<U&>.~U()` is well-formed. Other types, including incomplete types, `void`, and function types, are not destructible types.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)




