---
title: "_SECURE_SCL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_SECURE_SCL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_SECURE_SCL"
ms.assetid: 4ffbc788-cc12-4c6a-8cd7-490081675086
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# _SECURE_SCL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce se [Iteratori verificati](../standard-library/checked-iterators.md) è abilitato.  Se definito come 1, utilizzare unsafe iteratori causa un errore di runtime e il programma verrà terminato.  Se definito come 0, gli iteratori verificati sono disabilitati.  In modalità di debug, il valore predefinito per **\_SECURE\_SCL** è 1, per indicare che gli iteratori verificati sono abilitati.  In modalità di rilascio, il valore predefinito per `_SECURE_SCL` è 0.  
  
> [!IMPORTANT]
>  Utilizzo `_ITERATOR_DEBUG_LEVEL` controllare `_SECURE_SCL`.  Per ulteriori informazioni, vedere [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md).  
  
## Note  
 Per abilitare ha archiviato gli iteratori, impostare **\_SECURE\_SCL** a 1:  
  
```  
#define _SECURE_SCL 1  
```  
  
 Per disabilitare ha archiviato gli iteratori, impostare **\_SECURE\_SCL** a 0:  
  
```  
#define _SECURE_SCL 0  
```  
  
 Per informazioni su come disattivare gli avvisi relativi agli iteratori verificati, vedere [\_SCL\_SECURE\_NO\_WARNINGS](../standard-library/scl-secure-no-warnings.md).  
  
## Vedere anche  
 [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md)   
 [Iteratori verificati](../standard-library/checked-iterators.md)   
 [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md)   
 [Librerie protette: libreria standard C\+\+](../standard-library/safe-libraries-cpp-standard-library.md)