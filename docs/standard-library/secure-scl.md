---
title: _SECURE_SCL | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _SECURE_SCL
dev_langs:
- C++
helpviewer_keywords:
- _SECURE_SCL
ms.assetid: 4ffbc788-cc12-4c6a-8cd7-490081675086
caps.latest.revision: 10
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 9e2bfb1095c28ea3592c5af2b89cb2fbeddcb60c
ms.openlocfilehash: f3712b4417c0fed972d9a20b6d82479561cce4b0
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="securescl"></a>_SECURE_SCL
  
Sostituita da [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), questa macro determina se gli [iteratori verificati](../standard-library/checked-iterators.md) sono abilitati. Per impostazione predefinita, gli iteratori verificati sono abilitati nelle build di debug e disabilitati nelle build per la vendita.  
  
> [!IMPORTANT]
> L'uso diretto della macro `_SECURE_SCL` è deprecato. In alternativa, usare `_ITERATOR_DEBUG_LEVEL` per controllare le impostazioni degli iteratori verificati. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).  
  
## <a name="remarks"></a>Note  
  
Quando gli iteratori verificati sono abilitati, l'uso dell'iteratore unsafe ha l'effetto di provocare un errore di runtime e il programma viene terminato. Per abilitare gli iteratori verificati, impostare `_ITERATOR_DEBUG_LEVEL` su 1 o 2. Ciò equivale all'impostazione di `_SECURE_SCL` su 1 ovvero all'abilitazione della macro:  
  
```  
#define _ITERATOR_DEBUG_LEVEL 1  
```  
  
Per disabilitare gli iteratori verificati, impostare `_ITERATOR_DEBUG_LEVEL` su 0. Ciò equivale all'impostazione di `_SECURE_SCL` su 0 ovvero alla disabilitazione della macro:  
  
```  
#define _ITERATOR_DEBUG_LEVEL 0  
```  
  
Per informazioni su come disabilitare gli avvisi relativi agli iteratori verificati, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).  
  
## <a name="see-also"></a>Vedere anche  
[_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)   
[Iteratori verificati](../standard-library/checked-iterators.md)   
[Supporto del debug degli iteratori](../standard-library/debug-iterator-support.md)   
[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)


