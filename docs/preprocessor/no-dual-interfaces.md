---
title: "no_dual_interfaces | Microsoft Docs"
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
  - "no_dual_interfaces"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "no_dual_interfaces (attributo)"
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# no_dual_interfaces
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Modifica il modo in cui il compilatore genera funzioni wrapper per i metodi di interfaccia duale.  
  
## Sintassi  
  
```  
no_dual_interfaces  
```  
  
## Note  
 In genere, il wrapper chiama il metodo attraverso la tabella di funzioni virtuali dell'interfaccia.  Con `no_dual_interfaces`, invece, il wrapper chiama **IDispatch::Invoke** per richiamare il metodo.  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)