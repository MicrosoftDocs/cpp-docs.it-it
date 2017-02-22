---
title: "Avviso del compilatore (livello 1) C4333 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4333"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4333"
ms.assetid: d3763c52-6110-4da0-84db-5264e3f3f166
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4333
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore': shift a destra di una misura eccessiva. Perdita di dati  
  
 Un'operazione di shift a destra era di una misura eccessiva.  Tutti i bit significativi vengono spostati in modo che il risultato sia sempre zero.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4333:  
  
```  
// C4333.cpp  
// compile with: /c /W1  
unsigned shift8 (unsigned char c) {  
   return c >> 8;   // C4333  
  
   // try the following line instead  
   // return c >> 4;   // OK  
}  
```