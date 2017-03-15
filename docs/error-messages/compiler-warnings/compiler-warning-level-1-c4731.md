---
title: "Avviso del compilatore (livello 1) C4731 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4731"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4731"
ms.assetid: 5658c24c-3e6f-4505-835b-1fb92d47cab0
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4731
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'puntatore': registro dei puntatori ai frame 'registro' modificato da codice assembly inline  
  
 Un registro dei puntatori ai frame è stato modificato.  Per evitare che il codice non funzioni correttamente, salvare e ripristinare il registro nel blocco del codice assembly inline o nella variabile frame, locale o parametro a seconda del registro modificato.  
  
 Il seguente codice di esempio genera l'errore C4731:  
  
```  
// C4731.cpp  
// compile with: /W1 /LD  
// processor: x86  
// C4731 expected  
void bad(int p) {  
   __asm  
   {  
      mov ebp, 1  
   }  
  
   if (p == 1)  
   {  
      // ...  
   }  
}  
```  
  
 EBP rappresenta il puntatore ai frame \(l'omissione dei puntatori ai frame è disattivata\) e viene modificato.  Il riferimento successivo a `p` è relativo a `EBP`,  che però è stato sovrascritto dal codice. Il programma, quindi, non funzionerà correttamente e potrebbe restituire un errore.