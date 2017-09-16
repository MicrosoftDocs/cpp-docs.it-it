---
title: is_nothrow_copy_assignable Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::is_nothrow_copy_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_nothrow_copy_assignable
ms.assetid: baa8abd6-4f53-489f-abba-8d5d5c53bbbc
caps.latest.revision: 23
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
ms.openlocfilehash: 3515b7c881d55df77724c093d66f5870ec2e185f
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="isnothrowcopyassignable-class"></a>is_nothrow_copy_assignable Class
Tests whether type has a copy assignment operator that is known to the compiler not to throw.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class T>
struct is_nothrow_copy_assignable;
```  
  
#### <a name="parameters"></a>Parameters  
 `T`  
 The type to query.  
  
## <a name="remarks"></a>Remarks  
 An instance of the type predicate holds true for a referenceable type `T` where `is_nothrow_assignable<T&, const T&>` holds true; otherwise it holds false.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_nothrow_assignable Class](../standard-library/is-nothrow-assignable-class.md)   






