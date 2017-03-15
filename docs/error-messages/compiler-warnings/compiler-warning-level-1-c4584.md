---
title: "Avviso del compilatore (livello 1) C4584 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4584"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4584"
ms.assetid: ad86582f-cb8c-4d21-8c4c-a6c800059e25
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4584
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe1' : la classe base 'classe2' è già una classe base di 'classe3'  
  
 La classe definita eredita da due classi, una delle quali eredita dall'altra.  Di seguito è riportato un esempio.  
  
```  
// C4584.cpp  
// compile with: /W1 /LD  
class A {  
};  
  
class B : public A {  
};  
  
class C : public A, public B { // C4584  
};  
```  
  
 In questo caso, viene generato un avviso sulla classe C poiché eredita sia dalla classe A sia dalla classe B, la quale eredita anch'essa dalla classe A.  Questo avviso ha la funzione di promemoria per segnalare che è necessario completare l'utilizzo di membri da queste classi base, in caso contrario verrà generato un errore del compilatore a causa dell'ambiguità relativa al membro della classe a cui si fa riferimento.