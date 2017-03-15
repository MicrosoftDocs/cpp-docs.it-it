---
title: "Errore del compilatore C2344 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2344"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2344"
ms.assetid: a84c7b37-c84e-4345-8691-c23abb2dc193
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2344
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

align\(\#\): l'allineamento deve essere una potenza di due  
  
 Quando si usa la parola chiave [align](../../cpp/align-cpp.md), il valore passato deve essere una potenza di due.  
  
 Ad esempio, il codice seguente genera l'errore C2344 perché 3 non è una potenza di due:  
  
```  
// C2344.cpp // compile with: /c __declspec(align(3)) int a;   // C2344 __declspec(align(4)) int b;   // OK  
```