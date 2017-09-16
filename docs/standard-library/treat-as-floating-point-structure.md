---
title: treat_as_floating_point Structure | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- chrono/std::chrono::treat_as_floating_point
dev_langs:
- C++
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
caps.latest.revision: 13
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
ms.openlocfilehash: 6cbf8b77c47fb62e29da5ab3d298dbad8e178517
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="treatasfloatingpoint-structure"></a>treat_as_floating_point Structure
Specifies whether `Rep` can be treated as a floating-point type.  
  
## <a name="syntax"></a>Syntax  
  
```  
template <class Rep>  
struct treat_as_floating_point : is_floating_point<Rep>;  
```  
  
## <a name="remarks"></a>Remarks  
 `Rep` can be treated as a floating-point type only when the specialization `treat_as_floating_point<Rep>` is derived from [true_type](../standard-library/type-traits-typedefs.md#true_type). The template class can be specialized for a user-defined type.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<chrono>  
  
 **Namespace:** std::chrono  
  
## <a name="see-also"></a>See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono>](../standard-library/chrono.md)


