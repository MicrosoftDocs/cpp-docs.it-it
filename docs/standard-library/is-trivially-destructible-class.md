---
title: is_trivially_destructible Class | Microsoft Docs
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
- type_traits/std::is_trivially_destructible
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_destructible
ms.assetid: 3f7a787d-2448-40c5-ac51-a228318e02ce
caps.latest.revision: 13
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
ms.openlocfilehash: f19c2da258fda90e73b247105131a5a45b8418bc
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="istriviallydestructible-class"></a>is_trivially_destructible Class
Tests whether the type is trivially destructible.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class T>  
struct is_trivially_destructible;
```  
  
#### <a name="parameters"></a>Parameters  
 `T`  
 The type to query.  
  
## <a name="remarks"></a>Remarks  
 An instance of the type predicate holds true if the type `T` is a destructible type, and the destructor is known to the compiler to use no non-trivial operations. Otherwise, it holds false.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)




