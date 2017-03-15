---
title: "high_property_prefixes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "high_property_prefixes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "high_property_prefixes (attributo)"
ms.assetid: 91c6cc2b-19b6-4aba-8831-d9e5cccb58b5
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# high_property_prefixes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Specifica i prefissi alternativi per tre metodi della proprietà.  
  
## Sintassi  
  
```  
high_property_prefixes("GetPrefix","PutPrefix","PutRefPrefix")  
```  
  
#### Parametri  
 `GetPrefix`  
 Prefisso da utilizzare per i metodi **propget**.  
  
 `PutPrefix`  
 Prefisso da utilizzare per i metodi **propput**.  
  
 `PutRefPrefix`  
 Prefisso da utilizzare per i metodi **propputref**.  
  
## Note  
 Per impostazione predefinita, i metodi di gestione degli errori di livello elevato **propget**, **propput** e **propputref** vengono esposti dalle funzioni membro denominate con i prefissi **Get**, `Put` e **PutRef**, rispettivamente.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)