---
title: _HAS_ITERATOR_DEBUGGING | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _HAS_ITERATOR_DEBUGGING
dev_langs:
- C++
helpviewer_keywords:
- _HAS_ITERATOR_DEBUGGING
ms.assetid: 90077dbb-8a76-4963-83a6-29f4854007a8
caps.latest.revision: 7
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
ms.openlocfilehash: 509b189610f4bdc682951205c468274c517f0cf9
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="hasiteratordebugging"></a>_HAS_ITERATOR_DEBUGGING  
  
Superseded by [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), this macro defines whether the iterator debugging feature is enabled in a debug build. By default, iterator debugging is enabled in Debug builds and disabled in Retail builds. For more information, see [Debug Iterator Support](../standard-library/debug-iterator-support.md).  
  
> [!IMPORTANT]
> Direct use of the `_HAS_ITERATOR_DEBUGGING` macro is deprecated. Instead, use `_ITERATOR_DEBUG_LEVEL` to control iterator debug settings. For more information, see [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).  
  
## <a name="remarks"></a>Remarks  
To enable iterator debugging in debug builds, set `_ITERATOR_DEBUG_LEVEL` to 2. This is equivalent to a `_HAS_ITERATOR_DEBUGGING` setting of 1, or enabled:  
  
```  
#define _ITERATOR_DEBUG_LEVEL 2  
```  
  
`_ITERATOR_DEBUG_LEVEL` cannot be set to 2 (and `_HAS_ITERATOR_DEBUGGING` cannot be set to 1) in retail builds.  
  
To disable debug iterators in debug builds, set `_ITERATOR_DEBUG_LEVEL` to 0 or 1. This is equivalent to a `_HAS_ITERATOR_DEBUGGING` setting of 0, or disabled:  
  
```  
#define _ITERATOR_DEBUG_LEVEL 0  
```  
  
## <a name="see-also"></a>See Also  
 [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)   
 [Debug Iterator Support](../standard-library/debug-iterator-support.md)   
 [Checked Iterators](../standard-library/checked-iterators.md)   
 [Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md)


