---
title: Compilatore avviso (livello 1) C4526 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4526
dev_langs:
- C++
helpviewer_keywords:
- C4526
ms.assetid: 490f8916-5fdc-4cad-b412-76c3382a5976
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c5a38d629d61e16b038701522d4bb27a4de7391d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4526"></a>Avviso del compilatore (livello 1) C4526
'function': funzione membro statica non è possibile eseguire l'override di funzioni virtuali ' function'override virtuale ignorato, funzione virtuale verrà nascosto  
  
 La funzione membro statica soddisfa i criteri per eseguire l'override della funzione virtuale, che rende la funzione membro virtuale sia statico.  
  
 Il codice seguente genera l'errore C4526:  
  
```  
// C4526.cpp  
// compile with: /W1 /c  
// C4526 expected  
struct myStruct1 {  
   virtual void __stdcall func( int ) = 0;  
};  
  
struct myStruct2: public myStruct1 {  
   static void __stdcall func( int );  
};  
```  
  
 Di seguito sono indicate le possibili correzioni.  
  
-   Se la funzione è destinata a eseguire l'override della funzione di classe base virtuale, rimuovere l'identificatore statico.  
  
-   Se la funzione è destinata a essere una funzione membro statica, rinominare la cartella in modo che non sia in conflitto con la funzione di classe base virtuale.