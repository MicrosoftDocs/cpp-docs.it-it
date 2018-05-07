---
title: Compilatore avviso (livello 1) C4540 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4540
dev_langs:
- C++
helpviewer_keywords:
- C4540
ms.assetid: 8085e748-5f4d-43c2-b06d-eaf794edbf72
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3939ad2bbcba1ab3b492d83bdbb8f7076c2c5f2b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4540"></a>Avviso del compilatore (livello 1) C4540
dynamic_cast usato per convertire in base ambigua o inaccessibile. in fase di esecuzione test avrà esito negativo ('type1' a 'type2')  
  
 È stato utilizzato `dynamic_cast` per convertire da un tipo a altro. Il compilatore determinato che il cast avrà sempre esito negativo (restituire **NULL**) perché una classe di base è inaccessibile (`private`ad esempio,) o è ambigua (ad esempio, viene visualizzata più volte nella gerarchia delle classi,).  
  
 Di seguito viene riportato un esempio di questo avviso. Classe **B** è derivata dalla classe **A**. Il programma utilizza `dynamic_cast` per eseguire il cast dalla classe **B** (la classe derivata) alla classe **A**, che avrà sempre esito negativo perché classe **B** è `private` e pertanto non è accessibile. La modifica dell'accesso di **A** a **pubblica** risolverà il problema.  
  
```  
// C4540.cpp  
// compile with: /W1  
  
struct A {   
   virtual void g() {}  
};  
  
struct B : private A {  
   virtual void g() {}  
};  
  
int main() {  
   B b;  
   A * ap = dynamic_cast<A*>(&b);   // C4540  
}  
```