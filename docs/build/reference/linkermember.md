---
title: "/LINKERMEMBER | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/linkermember"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/LINKERMEMBER (opzione dumpbin)"
  - "LINKERMEMBER (opzione dumpbin)"
  - "-LINKERMEMBER (opzione dumpbin)"
ms.assetid: c96868c1-d70e-4651-ae36-c55b58b16406
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /LINKERMEMBER
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/LINKERMEMBER[:{1|2}]  
```  
  
## Note  
 Questa opzione consente di visualizzare i simboli pubblici definiti in una libreria.  Specificare l'argomento 1 per visualizzare i simboli in base all'ordine degli oggetti, insieme ai corrispondenti offset.  Specificare l'argomento 2 per visualizzare gli offset e i numeri di indice degli oggetti, quindi elencare i simboli in ordine alfabetico, insieme all'indice oggetto di ciascuno.  Se si desidera che vengano restituiti entrambi gli output, specificare \/LINKERMEMBER senza l'argomento numero.  
  
 L'unica opzione di DUMPBIN utilizzabile sui file generati con l'opzione del compilatore [\/GL](../../build/reference/gl-whole-program-optimization.md) è [\/HEADERS](../../build/reference/headers.md).  
  
## Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)