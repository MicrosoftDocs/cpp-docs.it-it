---
title: "Avviso del compilatore (livello 1) C4090 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4090"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4090"
ms.assetid: baad469d-23d4-45aa-ad9c-305b32d61e9a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4090
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operazione': qualificatori 'modificatore' differenti  
  
 Una variabile utilizzata in un'operazione è definita con un modificatore specificato che ne impedisce la modifica senza rilevamento da parte del compilatore.  L'espressione viene compilata senza modifiche.  
  
 Questo avviso può essere generato quando un puntatore a un elemento **const** o `volatile` viene assegnato a un puntatore non dichiarato come puntatore a **const** o `volatile`.  
  
 Questo avviso viene generato per i programmi C.  In un programma C\+\+, il compilatore genera l'errore [C2440](../../error-messages/compiler-errors-1/compiler-error-c2440.md).  
  
 Il seguente codice di esempio genera l'errore C4090:  
  
```  
// C4090.c  
// compile with: /W1  
int *volatile *p;  
int *const *q;  
int **r;  
  
int main() {  
   p = q;   // C4090  
   p = r;  
   q = p;   // C4090  
   q = r;  
   r = p;   // C4090  
   r = q;   // C4090  
}  
```