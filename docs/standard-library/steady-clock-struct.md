---
title: steady_clock struct | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- chrono/std::chrono::steady_clock
dev_langs:
- C++
ms.assetid: 970d12ec-fc80-4391-a2f7-b57b2aec668d
caps.latest.revision: 14
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
ms.openlocfilehash: 8332ccdd3349f52acb2c913f68fe5ced2805a848
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="steadyclock-struct"></a>steady_clock struct
Represents a `steady` clock.  
  
## <a name="syntax"></a>Syntax  
  
```  
struct steady_clock;  
```  
  
## <a name="remarks"></a>Remarks  
 On Windows, steady_clock wraps the QueryPerformanceCounter function.  
  
 A clock is *monotonic* if the value that is returned by a first call to `now()` is always less than or equal to the value that is returned by a subsequent call to `now()`.  
  
 A clock is *steady* if it is *monotonic* and if the time between clock ticks is constant.  
  
 High_resolution_clock is a typdef for steady_clock.  
  
## <a name="public-functions"></a>Public functions  
  
|Function|Description|  
|--------------|-----------------|  
|now|Returns the current time as a time_point value.|  
  
## <a name="public-constants"></a>Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|`system_clock::is_steady`|Holds `true`. A `steady_clock` is *steady*.|  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<chrono>  
  
 **Namespace:** std::chrono  
  
## <a name="see-also"></a>See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono>](../standard-library/chrono.md)   
 [system_clock Structure](../standard-library/system-clock-structure.md)

