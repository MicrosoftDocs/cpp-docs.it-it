---
title: "Avviso del compilatore (livello 1) C4739 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4739"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4739"
ms.assetid: 600873b3-7c85-4cd4-944e-cd8e01bfcbb0
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 1) C4739
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il riferimento alla variabile 'var' supera lo spazio di archiviazione  
  
 È stato assegnato un valore a una variabile, ma il valore è maggiore della dimensione della variabile. La scrittura in memoria supererà la posizione di memoria della variabile ed è possibile che si verifichi una perdita di dati.  
  
 Per risolvere il problema, assegnare un valore solo a una variabile con una dimensione tale da poter contenere il valore.  
  
 L'esempio seguente genera l'errore C4739:  
  
```  
// C4739.cpp // compile with: /RTCs /Zi /W1 /c char *pc; int main() { char c; *(int *)&c = 1;   // C4739 // OK *(char *)&c = 1; }  
```