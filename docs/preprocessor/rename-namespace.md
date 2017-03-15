---
title: "rename_namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "rename_namespace"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rename_namespace (attributo)"
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# rename_namespace
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Rinomina lo spazio dei nomi i cui è presente il contenuto della libreria dei tipi.  
  
## Sintassi  
  
```  
rename_namespace("NewName")  
```  
  
#### Parametri  
 `NewName`  
 Nuovo nome dello spazio dei nomi.  
  
## Note  
 Prende in considerazione un unico argomento, *NewName* che specifica il nuovo nome per lo spazio dei nomi.  
  
 Per rimuovere lo spazio dei nomi, utilizzare piuttosto l'attributo [no\_namespace](../preprocessor/no-namespace.md).  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)