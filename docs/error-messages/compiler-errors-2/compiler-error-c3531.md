---
title: "Errore del compilatore C3531 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3531"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3531"
ms.assetid: 2bdb9fdc-9ddf-403e-8b92-02763d434487
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3531
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': un simbolo il cui tipo contiene 'auto' deve disporre di un inizializzatore  
  
 La variabile specificata non dispone di un'espressione di inizializzazione.  
  
### Per correggere l'errore  
  
1.  Specificare un'espressione di inizializzazione, ad esempio un'assegnazione semplice che utilizza la sintassi del segno di uguale, quando si dichiara la variabile.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3531 perché le variabili `x1`, `y1, y2, y3`e `z2` non sono state inizializzate.  
  
```  
// C3531.cpp  
// Compile with /Zc:auto  
int main()  
{  
   auto x1;                  // C3531  
   auto y1, y2, y3;          // C3531  
   auto z1 = 1, z2, z3 = -1; // C3531  
   return 0;  
}  
```  
  
## Vedere anche  
 [Parola chiave auto](../../cpp/auto-keyword.md)