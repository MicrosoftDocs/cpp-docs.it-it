---
title: "Spazio dei nomi stdext | Microsoft Docs"
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
  - "stdext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_DEFINE_DEPRECATED_HASH_CLASSES (simbolo)"
  - "stdext (spazio dei nomi)"
ms.assetid: 3e94fc89-0584-424f-bc09-081b73379545
caps.latest.revision: 10
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Spazio dei nomi stdext
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I membri dei file di intestazione [\<hash\_map\>](../standard-library/hash-map.md) e [\<hash\_set\>](../standard-library/hash-set.md) non fanno attualmente parte dello standard ISO C\+\+. Di conseguenza, questi tipi e membri sono stati spostati dallo spazio dei nomi `std` a quello `stdext` per restare conformi allo standard C\+\+.  
  
 Durante la compilazione con [\/Ze](../build/reference/za-ze-disable-language-extensions.md), che è l'impostazione predefinita, il compilatore genera un avviso sull'uso di `std` per i membri dei file di intestazione \<hash\_map\> e \<hash\_set\>. Per disabilitare l'avviso, usare il pragma [warning](../preprocessor/warning.md).  
  
 Per far in modo che il compilatore generi un errore per l'uso di `std` per i membri dei file di intestazione \<hash\_map\> e \<hash\_set\> con **\/Ze**, aggiungere la direttiva seguente prima dell'esecuzione di \#include per qualsiasi file di intestazione della libreria standard C\+\+.  
  
```  
#define _DEFINE_DEPRECATED_HASH_CLASSES 0  
```  
  
 Quando si compila con **\/Za**, il compilatore genererà un errore.  
  
## Vedere anche  
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)