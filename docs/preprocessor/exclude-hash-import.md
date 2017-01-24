---
title: "exclude (#import) | Microsoft Docs"
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
  - "exclude"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "exclude (attributo)"
ms.assetid: 0883248a-d4bf-420e-9848-807b28fa976e
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# exclude (#import)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Esclude gli elementi dai file di intestazione della libreria dei tipi generati.  
  
## Sintassi  
  
```  
exclude("Name1"[, "Name2",...])  
```  
  
#### Parametri  
 `Name1`  
 Primo elemento da escludere.  
  
 `Name2`  
 Secondo elemento da escludere \(se necessario\).  
  
## Note  
 Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi.  Questo attributo può accettare un numero qualsiasi di argomenti, ognuno dei quali è un elemento di primo livello della libreria dei tipi da escludere.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)