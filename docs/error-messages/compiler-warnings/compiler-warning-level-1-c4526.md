---
title: Compilatore avviso (livello 1) C4526 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4526
dev_langs:
- C++
helpviewer_keywords:
- C4526
ms.assetid: 490f8916-5fdc-4cad-b412-76c3382a5976
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a74d7d2e2c745a4c8e29736c1e3a7fc38892d5f6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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