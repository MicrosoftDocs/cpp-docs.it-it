---
title: Compilatore avviso (livello 1) C4537 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4537
dev_langs: C++
helpviewer_keywords: C4537
ms.assetid: 9454493c-d419-475e-8f35-9c00233c9329
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d0fb90652f03cba43bb7965e725ea7403490a0a2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4537"></a>Avviso del compilatore (livello 1) C4537
'object': 'operator' applicato al tipo non definito dall'utente  
  
 È stato passato un riferimento in cui era previsto un oggetto (tipo definito dall'utente). Un riferimento non è un oggetto, ma il codice assembler inline non è in grado di distinzione. Il compilatore genera codice come se ***oggetto*** fosse un'istanza.  
  
 L'esempio seguente genera l'errore C4537:  
  
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