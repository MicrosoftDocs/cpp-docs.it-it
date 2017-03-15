---
title: "Avviso del compilatore (livello 1) C4537 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4537"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4537"
ms.assetid: 9454493c-d419-475e-8f35-9c00233c9329
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4537
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'oggetto': 'operatore' applicato a un tipo non definito dall'utente  
  
 È stato passato un riferimento nel punto in cui era previsto un oggetto di tipo definito dall'utente.  Anche se un riferimento non è un oggetto, il codice assembler inline non è in grado di fare una distinzione,  pertanto il codice viene generato come se ***oggetto*** fosse un'istanza.  
  
 Il seguente codice di esempio genera l'errore C4537:  
  
```  
// C4537.cpp  
// compile with: /W1 /c  
// processor: x86  
struct S {  
   int member;  
};  
  
void f1(S &s) {  
   __asm mov eax, s.member;   // C4537  
   // try the following code instead  
   // or, make the declaration "void f1(S s)"  
   /*  
   mov eax, s  
   mov eax, [eax]s.member  
   */  
}  
```