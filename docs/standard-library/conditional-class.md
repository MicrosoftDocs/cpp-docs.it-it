---
title: conditional Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::conditional
dev_langs:
- C++
helpviewer_keywords:
- conditional class
- conditional
ms.assetid: ece9f539-fb28-4e26-a79f-3264bc984493
caps.latest.revision: 22
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
ms.openlocfilehash: ac4654577ee1869050a2750587bdef36f170432e
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="conditional-class"></a>conditional Class
Selects one of two types, depending on the specified condition.  
  
## <a name="syntax"></a>Syntax  
  
```
template <bool B, class T1, class T2>  
struct conditional;

template <bool _Test, class _T1, class _T2>  
using conditional_t = typename conditional<_Test, _T1, _T2>::type;
```  
  
#### <a name="parameters"></a>Parameters  
 `B`  
 The value that determines the selected type.  
  
 `T1`  
 The type result when B is true.  
  
 `T2`  
 The type result when B is false.  
  
## <a name="remarks"></a>Remarks  
 The template member typedef `conditional<B, T1, T2>::type` evaluates to `T1` when `B` evaluates to `true`, and evaluates to `T2` when `B` evaluates to `false`.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)




