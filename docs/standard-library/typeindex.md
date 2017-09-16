---
title: '&lt;typeindex&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <typeindex>
dev_langs:
- C++
ms.assetid: a9551137-f74b-4f02-af64-ff00214cea1f
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
ms.openlocfilehash: f905b11372ce0c2b57e57fb4916467d50f839e91
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="lttypeindexgt"></a>&lt;typeindex&gt;
Include the standard header \<typeindex> to define a class and function that support the indexing of objects of class [type_info](../cpp/type-info-class.md).  
  
## <a name="syntax"></a>Syntax  
  
```cpp  
#include <typeindex>  
```  
  
## <a name="remarks"></a>Remarks  
 The [hash Structure](../standard-library/hash-structure.md) defines a `hash function` that's suitable for mapping values of type [type_index](../standard-library/type-index-class.md) to a distribution of index values.  
  
 The `type_index` class wraps a pointer to a `type_info` object to assist in indexing.  
  
## <a name="see-also"></a>See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)




