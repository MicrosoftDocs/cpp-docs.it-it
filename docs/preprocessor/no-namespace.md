---
title: "no_namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "no_namespace"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "no_namespace (attributo)"
ms.assetid: 5d81b741-a558-451b-b493-1f3b18967337
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# no_namespace
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Specifica che il nome dello spazio dei nomi non viene generato dal compilatore.  
  
## Sintassi  
  
```  
no_namespace  
```  
  
## Note  
 Il contenuto della libreria di tipi nel file di intestazione `#import` è in genere definito in uno spazio dei nomi.  Il nome dello spazio dei nomi è specificato nell'istruzione **library** del file IDL originale.  Se è specificato l'attributo `no_namespace`, questo spazio dei nomi non viene generato dal compilatore.  
  
 Se si desidera utilizzare un nome dello spazio dei nomi differente, utilizzare l'attributo [rename\_namespace](../preprocessor/rename-namespace.md).  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)