---
title: "no_implementation | Microsoft Docs"
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
  - "no_implementation"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "no_implementation (attributo)"
ms.assetid: bdc67785-e131-409c-87bc-f4d2f4abb07b
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# no_implementation
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Elimina la generazione dell'intestazione con estensione tli, contenente implementazioni delle funzioni membro wrapper.  
  
## Sintassi  
  
```  
no_implementation  
```  
  
## Note  
 Se viene specificato questo attributo, l'intestazione con estensione tlh, con le dichiarazioni per esporre gli elementi libreria\-tipo, verrà generata senza un'istruzione `#include` per includere il file di intestazione con estensione tli.  
  
 Questo attributo viene utilizzato insieme a [implementation\_only](../preprocessor/implementation-only.md).  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)