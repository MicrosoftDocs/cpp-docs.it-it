---
title: "&lt;typeindex&gt; | Microsoft Docs"
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
  - "<typeindex>"
dev_langs: 
  - "C++"
ms.assetid: a9551137-f74b-4f02-af64-ff00214cea1f
caps.latest.revision: 14
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;typeindex&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Includere il typeindex standard \<di intestazione\> per definire la classe ed eseguire supportate l'indicizzazione di oggetti classe [type\_information](../cpp/type-info-class.md).  
  
## Sintassi  
  
```cpp  
#include <typeindex>  
```  
  
## Note  
 [Struttura hash](../standard-library/hash-structure.md) definisce `hash function` appropriato per eseguire il mapping di valori di tipo [type\_index](../standard-library/type-index-class.md) a una distribuzione dei valori di indice.  
  
 La classe di `type_index` esegue il wrapping di un puntatore a un oggetto di `type_info` di supporto indicizzazione.  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)