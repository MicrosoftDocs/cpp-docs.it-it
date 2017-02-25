---
title: "Errore del compilatore C2180 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2180"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2180"
ms.assetid: ea71b39e-b977-48a7-b7bd-af68ef5e263b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C2180
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'espressione di controllo ha tipo 'tipo'  
  
 L'espressione di controllo in un'istruzione `if`, `while`, `for` o `do` è un cast dell'espressione a `void`.  Per risolvere il problema, sostituire l'espressione di controllo con una che produce un valore `bool` o un tipo che può essere convertito in `bool`.  
  
 L'esempio seguente genera l'errore C2180:  
  
```  
// C2180.c  
  
int main() {  
   while ((void)1)   // C2180  
      return 1;  
   while (1)         // OK  
      return 0;  
}  
```