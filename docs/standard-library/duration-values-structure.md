---
title: duration_values Structure | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- chrono/std::chrono::duration_values
- chrono/std::chrono::duration_values::max
- chrono/std::chrono::duration_values::min
- chrono/std::chrono::duration_values::zero
dev_langs:
- C++
ms.assetid: 7f66d2e3-1faf-47c3-b47e-08f2a87f20e8
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
ms.openlocfilehash: 71c90fc57ee4e7b6bb7628426401dd72ec3de20f
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="durationvalues-structure"></a>duration_values Structure
Provides specific values for the [duration](../standard-library/duration-class.md) template parameter `Rep`.  
  
## <a name="syntax"></a>Syntax  
  
```  
template <class Rep>  
struct duration_values;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[max](#max)|Static. Specifies the upper limit for a value of type `Rep`.|  
|[min](#min)|Static. Specifies the lower limit for a value of type `Rep`.|  
|[zero](#zero)|Static. Returns `Rep(0)`.|  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<chrono>  
  
 **Namespace:** std::chrono  
  
##  <a name="max"></a>  duration_values::max  
 Static method that returns the upper bound for values of type `Ref`.  
  
```  
static constexpr Rep max();
```  
  
### <a name="return-value"></a>Return Value  
 In effect, returns `numeric_limits<Rep>::max()`.  
  
### <a name="remarks"></a>Remarks  
 When `Rep` is a user-defined type, the return value must be greater than [duration_values::zero](#zero).  
  
##  <a name="min"></a>  duration_values::min  
 Static method that returns the lower bound for values of type `Ref`.  
  
```  
static constexpr Rep min();
```  
  
### <a name="return-value"></a>Return Value  
 In effect, returns `numeric_limits<Rep>::lowest()`.  
  
### <a name="remarks"></a>Remarks  
 When `Rep` is a user-defined type, the return value must be less than or equal to [duration_values::zero](#zero).  
  
##  <a name="zero"></a>  duration_values::zero  
 Returns `Rep(0)`.  
  
```  
static constexpr Rep zero();
```  
  
### <a name="remarks"></a>Remarks  
 When `Rep` is a user-defined type, the return value must represent the additive infinity.  
  
## <a name="see-also"></a>See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono>](../standard-library/chrono.md)


