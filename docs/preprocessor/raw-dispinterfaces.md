---
title: "raw_dispinterfaces | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "raw_dispinterfaces"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "raw_dispinterfaces (attributo)"
ms.assetid: f762864d-29bf-445b-825a-ba7b29a95409
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# raw_dispinterfaces
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Indica al compilatore di generare funzioni wrapper di basso livello per le proprietà e i metodi di interfaccia dispatch che chiamano **IDispatch::Invoke** e restituiscono il codice di errore `HRESULT`.  
  
## Sintassi  
  
```  
raw_dispinterfaces  
```  
  
## Note  
 Se questo attributo non viene specificato, solo i wrapper di alto livello vengono generati, che generano eccezioni C\+\+ in caso di errore.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)