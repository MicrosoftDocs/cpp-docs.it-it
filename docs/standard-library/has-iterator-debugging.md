---
title: "_HAS_ITERATOR_DEBUGGING | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_HAS_ITERATOR_DEBUGGING"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_HAS_ITERATOR_DEBUGGING"
ms.assetid: 90077dbb-8a76-4963-83a6-29f4854007a8
caps.latest.revision: 7
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _HAS_ITERATOR_DEBUGGING
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce se la funzionalità di debug iteratori è abilitata in una build di debug.  Per impostazione predefinita, il debug di iteratore è abilitato.  Per ulteriori informazioni, vedere [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md).  
  
> [!IMPORTANT]
>  Utilizzo `_ITERATOR_DEBUG_LEVEL` controllare `_HAS_ITERATOR_DEBUGGING`.  Per ulteriori informazioni, vedere [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md).  
  
## Note  
 Per attivare il debug di iteratore nelle build di debug, impostare **\_HAS\_ITERATOR\_DEBUGGING** a 1:  
  
```  
#define _HAS_ITERATOR_DEBUGGING 1  
```  
  
 **\_HAS\_ITERATOR\_DEBUGGING** non può essere impostato su 1 nelle build per la vendita.  
  
 Per disabilitare il debug di iteratore nelle build di debug, impostare **\_HAS\_ITERATOR\_DEBUGGING** a 0:  
  
```  
#define _HAS_ITERATOR_DEBUGGING 0  
```  
  
## Vedere anche  
 [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md)   
 [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md)   
 [Iteratori verificati](../standard-library/checked-iterators.md)   
 [Librerie protette: libreria standard C\+\+](../standard-library/safe-libraries-cpp-standard-library.md)