---
title: "Avviso del compilatore (livello 1) C4163 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4163"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4163"
ms.assetid: b08413fd-03fc-4f41-9167-a98976ac12f2
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4163
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': non disponibile come funzione intrinseca  
  
 La funzione specificata non può essere usata come funzione [intrinsic](../../preprocessor/intrinsic.md). Il compilatore ignora il nome di funzione non valido.  
  
 L'esempio seguente genera l'errore C4163:  
  
```  
// C4163.cpp // compile with: /W1 /LD #include <math.h> #pragma intrinsic(mysin)   // C4163 // try the following line instead // #pragma intrinsic(sin)  
```