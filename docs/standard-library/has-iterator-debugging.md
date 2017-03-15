---
title: _HAS_ITERATOR_DEBUGGING | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translationtype: Machine Translation
ms.sourcegitcommit: 9e2bfb1095c28ea3592c5af2b89cb2fbeddcb60c
ms.openlocfilehash: 97d899ead2c556a39118dd49bf1f6ac7ef8a9b04
ms.lasthandoff: 02/24/2017

---
# <a name="hasiteratordebugging"></a>_HAS_ITERATOR_DEBUGGING  
  
Sostituita da [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), questa macro definisce se la funzionalità di debug degli iteratori è abilitata in una build di debug. Per impostazione predefinita, il debug degli iteratori è abilitato nelle build di debug e disabilitato nelle build per la vendita. Per altre informazioni, vedere [Supporto del debug degli iteratori](../standard-library/debug-iterator-support.md).  
  
> [!IMPORTANT]
> L'uso diretto della macro `_HAS_ITERATOR_DEBUGGING` è deprecato. Usare invece `_ITERATOR_DEBUG_LEVEL` per controllare le impostazioni di debug degli iteratori. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).  
  
## <a name="remarks"></a>Note  
Per abilitare il debug degli iteratori nelle build di debug, impostare `_ITERATOR_DEBUG_LEVEL` su 2. Ciò equivale a impostare `_HAS_ITERATOR_DEBUGGING` su 1 ovvero ad abilitarla:  
  
```  
#define _ITERATOR_DEBUG_LEVEL 2  
```  
  
Non è possibile impostare `_ITERATOR_DEBUG_LEVEL` su 2 (e `_HAS_ITERATOR_DEBUGGING` su 1) nelle build per la vendita.  
  
Per disabilitare il debug degli iteratori nelle build di debug, impostare `_ITERATOR_DEBUG_LEVEL` su 0 o 1. Ciò equivale a impostare `_HAS_ITERATOR_DEBUGGING` su 0 ovvero a disabilitarla:  
  
```  
#define _ITERATOR_DEBUG_LEVEL 0  
```  
  
## <a name="see-also"></a>Vedere anche  
 [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)   
 [Supporto del debug degli iteratori](../standard-library/debug-iterator-support.md)   
 [Iteratori verificati](../standard-library/checked-iterators.md)   
 [Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)


