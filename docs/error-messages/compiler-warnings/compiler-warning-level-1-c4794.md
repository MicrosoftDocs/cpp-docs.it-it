---
title: "Avviso del compilatore (livello 1) C4794 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4794"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4794"
ms.assetid: badc9c36-fa1a-4fec-929b-7bfda7a7b79f
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Avviso del compilatore (livello 1) C4794
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

segmento della variabile di archiviazione locale di thread 'variable' modificato da 'section name' a '.tls$'  
  
 È stato usato [\#pragma data\_seg](../../preprocessor/data-seg.md) per inserire una variabile tls in una sezione che non inizia con .tls$.  
  
 La sezione .tls$*x* sarà presente nel file oggetto in cui vengono definite le variabili [\_\_declspec\(thread\)](../../cpp/thread.md). Da queste sezioni verrà generata una sezione .tls nel file EXE o DLL.  
  
## Esempio  
 L'esempio seguente genera l'errore C4794:  
  
```  
// C4794.cpp // compile with: /W1 /c #pragma data_seg(".someseg") __declspec(thread) int i;   // C4794 // OK #pragma data_seg(".tls$9") __declspec(thread) int j;  
```