---
title: "Errore del compilatore C2229 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2229"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2229"
ms.assetid: 933c7cf2-a463-4e74-b0b4-59dedad987fb
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2229
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il tipo 'identificatore' ha una matrice di dimensioni zero non valida  
  
 Un membro di una struttura o di un campo di bit contiene una matrice di dimensioni zero che non rappresenta l'ultimo membro.  
  
 Poiché è possibile avere una matrice di dimensioni zero come ultimo membro della struttura, quando quest'ultima viene allocata è necessario specificare le dimensioni della matrice.  
  
 Se la matrice di dimensioni zero non costituisce l'ultimo membro della struttura, il compilatore non potrà calcolare l'offset per i campi rimanenti.  
  
 Il seguente codice di esempio genera l'errore C2229:  
  
```  
// C2229.cpp  
struct S {  
   int a[0];  // C2229  zero-sized array  
   int b[1];  
};  
  
struct S2 {  
   int a;  
   int b[0];  
};  
  
int main() {  
   // allocate 7 elements for b field  
   S2* s2 = (S2*)new int[sizeof(S2) + 7*sizeof(int)];  
   s2->b[6] = 100;  
}  
```