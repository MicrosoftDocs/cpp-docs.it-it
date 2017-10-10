---
title: Errore del compilatore C2467 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2467
dev_langs:
- C++
helpviewer_keywords:
- C2467
ms.assetid: f9ead270-5d0b-41cc-bdcd-586a647c67a7
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a51321e6597bffe0dded58ffa481f054e770f9b7
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2467"></a>Errore del compilatore C2467
dichiarazione non valida di anonimo '-tipo definito dall'utente '  
  
 È stato dichiarato un tipo annidato definito dall'utente. Si tratta di un errore durante la compilazione del codice sorgente C con l'opzione di compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) abilitato.  
  
 L'esempio seguente genera l'errore C2467:  
  
```  
//C2467.c  
// compile with: /Za   
int main() {  
   struct X {  
      union { int i; };   // C2467, nested declaration  
   };  
}  
```
