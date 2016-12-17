---
title: "Avviso del compilatore (livello 1) C4733 | Microsoft Docs"
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
  - "C4733"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4733"
ms.assetid: 7ef4f577-772d-4b66-a7bf-8958a6b250bc
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4733
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Assegnazione dell'assembly inline a "FS:0": gestore non registrato come sicuro  
  
 È possibile che una funzione che modifica il valore su FS:0 per aggiungere un nuovo gestore eccezioni non funzioni con le eccezioni sicure, poiché è possibile che il gestore non sia registrato come gestore eccezione valido \(vedere [\/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md)\).  
  
 Per risolvere il problema, rimuovere la definizione o disattivare l'avviso e utilizzare [.SAFESEH](../../assembler/masm/dot-safeseh.md) per specificare i gestori eccezioni sicuri.  
  
 Il seguente codice di esempio genera l'errore C4733:  
  
```  
// C4733.cpp  
// compile with: /W1 /c  
// processor: x86  
#include "stdlib.h"  
#include "stdio.h"  
void my_handler()  
{  
   printf("Hello from my_handler\n");  
   exit(1);  
}  
  
int main()  
{  
   _asm {  
      push    my_handler  
      mov     eax, DWORD PTR fs:0  
      push    eax  
      mov     DWORD PTR fs:0, esp   // C4733  
   }  
  
   *(int*)0 = 0;  
}  
```