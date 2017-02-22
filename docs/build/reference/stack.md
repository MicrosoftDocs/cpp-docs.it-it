---
title: "/STACK | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/stack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/STACK (opzione editbin)"
  - "STACK (opzione editbin)"
  - "-STACK EDITBIN (opzione)"
  - "stack, impostazione dimensioni"
ms.assetid: a39bcff0-c945-4355-80cc-8e4f24a5f142
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /STACK
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/STACK:reserve[,commit]  
```  
  
## Note  
 Questa opzione consente di impostare la dimensione dello stack in byte ed è in grado di accettare argomenti in notazione decimale o in linguaggio C.  Essa è applicabile solo a file eseguibili.  
  
 L'argomento *reserve* consente di specificare l'allocazione totale per lo stack in memoria virtuale.  Il valore specificato viene arrotondato ai 4 byte più vicini.  
  
 L'argomento facoltativo `commit` viene interpretato nel sistema operativo.  In Windows NT, Windows 95 e Windows 98 `commit` consente di specificare la quantità di memoria fisica da allocare ogni volta.  Vincolando memoria virtuale viene riservato spazio nel file di paging.  Un valore di `commit` più alto consente di risparmiare tempo quando l'applicazione necessita di maggior spazio per lo stack, ma comporta un aumento dei requisiti di memoria e in alcuni casi del tempo necessario per eseguire l'avvio.  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)