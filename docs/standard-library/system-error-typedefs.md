---
title: '&lt;system_error&gt; typedefs | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- system_error/std::generic_errno
ms.assetid: 28cf9f7d-9c28-4baa-a297-67c8260b07fb
caps.latest.revision: 11
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 232bf91ef75f62047162111745534a9cdbdbb5ac
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltsystemerrorgt-typedefs"></a>&lt;system_error&gt; typedefs
||  
|-|  
|[generic_errno](#generic_errno)|  
  
##  <a name="generic_errno"></a>  generic_errno  
 A type that represents the enumeration that provides the symbolic names for all the error-code macros defined by Posix in `<errno.h>`.  
  
```
typedef errc generic_error;
```  
  
### <a name="remarks"></a>Remarks  
 The type is a synonym for [errc](../standard-library/system-error-enums.md#errc).  
  
## <a name="see-also"></a>See Also  
 [<system_error>](../standard-library/system-error.md)




