---
title: Errore del compilatore C2975 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2975
dev_langs:
- C++
helpviewer_keywords:
- C2975
ms.assetid: 526f6b9d-6c76-4c12-9252-1b1d7c1e06c7
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 07b2b96cd79364215c9a859a9fd0282768ff45e4
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2975"></a>Errore del compilatore C2975
'arg': argomento di modello non valido per 'type', è prevista un'espressione di costante in fase di compilazione  
  
 L'argomento di modello non corrisponde alla dichiarazione di modello; un'espressione costante deve trovarsi tra parentesi angolari. Non sono consentite le variabili come argomenti effettivi di modello. Controllare la definizione di modello per individuare i tipi corretti.  
  
 L'esempio seguente genera l'errore C2975:  
  
```  
// C2975.cpp  
template<int I>  
class X {};  
  
int main() {  
   int i = 4, j = 2;  
   X<i + j> x1;   // C2975  
   X<6> x2;   // OK  
}  
```  
  
 C2975 si verificherà anche quando si utilizza __LINE\_ \_ come costante in fase di compilazione con [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md). Una soluzione, è possibile eseguire la compilazione con [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) anziché **/ZI**.  
  
```  
// C2975b.cpp  
// compile with: /ZI  
// processor: x86  
template<long line>   
void test(void) {}  
  
int main() {  
   test<__LINE__>();   // C2975  
}  
```
