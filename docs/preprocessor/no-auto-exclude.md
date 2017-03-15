---
title: "no_auto_exclude | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "no_auto_exclude"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "no_auto_exclude (attributo)"
ms.assetid: 3241ef9c-758a-4e86-bdc5-37da6072430f
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# no_auto_exclude
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Disabilita l'esclusione automatica.  
  
## Sintassi  
  
```  
no_auto_exclude  
```  
  
## Note  
 Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi.  `#import` tenta di evitare più errori di definizione escludendo automaticamente tali elementi.  Al termine di questa operazione, [Avviso del compilatore \(livello 3\) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md) verrà generato per ogni elemento da escludere.  È possibile disattivare questa esclusione automatica utilizzando questo attributo.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)