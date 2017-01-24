---
title: "Avviso del compilatore (livello 3) C4161 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4161"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4161"
ms.assetid: 03d3be61-83f1-4009-8310-8758ab67055f
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4161
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#pragma pragma\(pop...\): più estrazioni che inserimenti  
  
 Il codice sorgente contiene più estrazioni che inserimenti per pragma ***pragma***, quindi lo stack potrebbe non comportarsi come previsto. Per evitare l'avviso, assicurarsi che il numero di estrazioni non superi il numero di inserimenti.  
  
## Esempio  
 L'esempio seguente genera l'errore C4161:  
  
```  
// C4161.cpp // compile with: /W3 /LD #pragma pack(push, id) #pragma pack(pop, id) #pragma pack(pop, id)   // C4161, an extra pop #pragma bss_seg(".my_data1") int j; #pragma bss_seg(push, stack1, ".my_data2") int l; #pragma bss_seg(pop, stack1) int m; #pragma bss_seg(pop, stack1)   // C4161  
```