---
title: "Errore del compilatore C2157 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2157"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2157"
ms.assetid: babbca24-16dc-4b69-be14-a675029249c1
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2157
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': deve essere dichiarato prima dell'utilizzo in un elenco pragma  
  
 Il nome della funzione non è stato dichiarato prima di essere usato come riferimento nell'elenco delle funzioni per un pragma [alloc\_text](../../preprocessor/alloc-text.md).  
  
 L'esempio seguente genera l'errore C2157:  
  
```  
// C2157.cpp // compile with: /c #pragma alloc_text( "func", func)   // C2157 // OK extern "C" void func(); #pragma alloc_text( "func", func)  
```