---
title: "Errore del compilatore C3530 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3530"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3530"
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Errore del compilatore C3530
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'auto' non può essere combinato con qualsiasi altro identificatore del tipo  
  
 Un identificatore del tipo viene utilizzato con la parola chiave `auto`.  
  
### Per correggere l'errore  
  
1.  Non utilizzare un identificatore del tipo in una dichiarazione di variabile che utilizza la parola chiave `auto`.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3530 perché la variabile `x` viene dichiarata sia con la parola chiave `auto` sia con il tipo `int`, nonché per il fatto che l'esempio viene compilato con **\/Zc:auto**.  
  
```  
// C3530.cpp  
// Compile with /Zc:auto  
int main()  
{  
   auto int x;   // C3530  
   return 0;  
}  
```  
  
## Vedere anche  
 [Parola chiave auto](../../cpp/auto-keyword.md)