---
title: is_trivially_move_assignable Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::is_trivially_move_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_move_assignable
ms.assetid: 374f7322-0706-4bc1-a1a5-4191d0315e28
caps.latest.revision: 11
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
ms.openlocfilehash: 781412d18bb786a1c7b03f855f38dfbfc8b34e3f
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="istriviallymoveassignable-class"></a>is_trivially_move_assignable Class
Tests whether the type has a trivial move assignment operator.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class Ty>
struct is_trivially_move_assignable;
```  
  
#### <a name="parameters"></a>Parameters  
 `Ty`  
 The type to query.  
  
## <a name="remarks"></a>Remarks  
 An instance of the type predicate holds true if the type `Ty` is a class that has a trivial move assignment operator, otherwise it holds false.  
  
 A move assignment operator for a class `Ty` is trivial if:  
  
 it is implicitly provided  
  
 the class `Ty` has no virtual functions  
  
 the class `Ty` has no virtual bases  
  
 the classes of all the non-static data members of class type have trivial move assignment operators  
  
 the classes of all the non-static data members of type array of class have trivial move assignment operators  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)




