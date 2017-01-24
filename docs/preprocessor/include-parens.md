---
title: "include() | Microsoft Docs"
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
  - "include()"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "include() (attributo)"
ms.assetid: 86c9dcb2-d9e0-4fd5-97d7-0bb3e23d6ecc
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# include()
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Disabilita l'esclusione automatica.  
  
## Sintassi  
  
```  
include("Name1"[,"Name2", ...])  
```  
  
#### Parametri  
 `Name1`  
 Primo elemento da includere forzatamente.  
  
 `Name2`  
 Secondo elemento da includere forzatamente \(se necessario\).  
  
## Note  
 Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi.  `#import` tenta di evitare più errori di definizione escludendo automaticamente tali elementi.  Se gli elementi sono stati esclusi, come indicato da [Avviso del compilatore \(livello 3\) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md) e non sarebbe dovuto avvenire, è possibile utilizzare questo attributo per disabilitare l'esclusione automatica.  Questo attributo può accettare un numero qualsiasi di argomenti, ognuno dei quali costituisce il nome dell'elemento della libreria dei tipi da includere.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)