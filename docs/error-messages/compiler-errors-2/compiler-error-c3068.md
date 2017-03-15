---
title: "Errore del compilatore C3068 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3068"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3068"
ms.assetid: 613e3447-b4a8-4268-a661-297bed63ccdf
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3068
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': una funzione 'naked' non può contenere oggetti che dovrebbero essere rimossi in caso di eccezione C\+\+  
  
 Non è stato possibile eseguire la rimozione dello stack su una funzione [naked](../../cpp/naked-cpp.md) che ha generato un'eccezione perché è stato creato un oggetto temporaneo nella funzione ed è stata specificata la gestione delle eccezioni C\+\+ \([\/EHsc](../../build/reference/eh-exception-handling-model.md)\).  
  
 Per correggere l'errore, effettuare almeno una delle seguenti operazioni:  
  
-   Non eseguire la compilazione con \/EHsc.  
  
-   Non contrassegnare la funzione come `naked`.  
  
-   Non creare un oggetto temporaneo nella funzione.  
  
 Se una funzione crea un oggetto temporaneo nello stack e genera un'eccezione quando è attivata la gestione delle eccezioni C\+\+, il compilatore rimuoverà lo stack in caso di eccezione.  
  
 Una volta generata un'eccezione, il codice generato dal compilatore, chiamati il prologo e l'epilogo e gli elementi non presenti in una funzione naked, viene eseguito per la funzione.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C3068:  
  
```  
// C3068.cpp  
// compile with: /EHsc  
// processor: x86  
class A {  
public:  
   A(){}  
   ~A(){}  
};  
  
void b(A){}  
  
__declspec(naked) void c() {  
   b(A());   // C3068   
};  
```