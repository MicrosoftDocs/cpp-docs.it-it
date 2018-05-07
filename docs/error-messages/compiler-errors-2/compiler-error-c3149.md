---
title: Errore del compilatore C3149 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3149
dev_langs:
- C++
helpviewer_keywords:
- C3149
ms.assetid: cf6e2616-2f06-46da-8a8a-d449cb481c51
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9c0441a7aebf86139aedbd5e45a7645db0a90b37
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3149"></a>Errore del compilatore C3149
'type': Impossibile utilizzare questo tipo senza un livello superiore 'char'  
  
 Una dichiarazione non è stata specificata correttamente.  
  
 Ad esempio, potrebbe avere definito un tipo CLR in ambito globale e ha tentato di creare una variabile del tipo come parte della definizione. Poiché non sono consentite le variabili globali di tipi CLR, il compilatore genererà C3149.  
  
 Per correggere l'errore, dichiarare le variabili di tipi CLR all'interno di una definizione di funzione o un tipo.  
  
 L'esempio seguente genera l'errore C3149:  
  
```  
// C3149.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   // declare an array of value types   
   array< Int32 ^> IntArray;   // C3149  
   array< Int32>^ IntArray2;   // OK  
}  
```  
  
 L'esempio seguente genera l'errore C3149:  
  
```  
// C3149b.cpp  
// compile with: /clr /c  
delegate int MyDelegate(const int, int);  
void Test1(MyDelegate m) {}   // C3149  
void Test2(MyDelegate ^ m) {}   // OK  
```  
