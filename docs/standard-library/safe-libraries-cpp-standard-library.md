---
title: "Librerie protette: libreria standard C++ | Microsoft Docs"
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
  - "_SCL_SECURE_NO_DEPRECATE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "librerie protette"
  - "librerie protette, libreria C++ standard"
  - "libreria C++ standard protetta"
ms.assetid: 3993340f-1f29-4d81-b3f5-52a52bc8e148
caps.latest.revision: 10
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Librerie protette: libreria standard C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sono stati apportati diversi miglioramenti alle librerie fornite con Visual C\+\+, inclusa la libreria standard C\+\+, in modo da renderle più sicure.  
  
 Nella libreria standard C\+\+ sono stati identificati vari metodi come potenzialmente non sicuri perché potrebbero causare un sovraccarico buffer o altri problemi relativi al codice. L'uso di questi metodi è sconsigliato, mentre sono stati creati in sostituzione metodi nuovi e più sicuri. Questi metodi terminano tutti in `_s`.  
  
 Sono stati apportati anche vari miglioramenti per rendere gli iteratori e gli algoritmi più sicuri. Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md), [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md) e [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md).  
  
## Note  
 La tabella seguente elenca i metodi della libreria standard C\+\+ che sono potenzialmente non sicuri, nonché il relativo equivalente più sicuro:  
  
|Metodo potenzialmente non sicuro|Equivalente più sicuro|  
|--------------------------------------|----------------------------|  
|[basic\_string::copy](../Topic/basic_string::copy.md)|[basic\_string::\_Copy\_s](../Topic/basic_string::_Copy_s.md)|  
|[char\_traits::copy](../Topic/char_traits::copy.md)|[char\_traits::\_Copy\_s](../Topic/char_traits::_Copy_s.md)|  
  
 Se si chiama uno dei metodi potenzialmente non sicuro elencato qui sopra o se si usano gli iteratori in modo non corretto, il compilatore genererà [Avviso del compilatore \(livello 3\) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). Per informazioni su come disabilitare questi avvisi, vedere [\_SCL\_SECURE\_NO\_WARNINGS](../standard-library/scl-secure-no-warnings.md).  
  
## Contenuto della sezione  
 [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md)  
  
 [\_SCL\_SECURE\_NO\_WARNINGS](../standard-library/scl-secure-no-warnings.md)  
  
 [Iteratori verificati](../standard-library/checked-iterators.md)  
  
 [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md)  
  
## Vedere anche  
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)