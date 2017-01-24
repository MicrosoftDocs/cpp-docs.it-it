---
title: "raw_interfaces_only | Microsoft Docs"
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
  - "raw_interfaces_only"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "raw_interfaces_only (attributo)"
ms.assetid: 87056c6d-3f34-4248-af58-f5775a35bfb7
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# raw_interfaces_only
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Elimina la generazione di funzioni wrapper di gestione degli errori e di dichiarazioni [property](../cpp/property-cpp.md) che utilizzano tali funzioni.  
  
## Sintassi  
  
```  
raw_interfaces_only  
```  
  
## Note  
 L'attributo `raw_interfaces_only` causa inoltre la rimozione del prefisso predefinito utilizzato durante l'assegnazione del nome alle funzioni non di proprietà.  In genere, il prefisso è **raw\_**.  Se viene specificato questo attributo, i nomi delle funzioni vengono derivati direttamente dalla libreria dei tipi.  
  
 Questo attributo consente di esporre solo i contenuti di basso livello della libreria dei tipi.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)