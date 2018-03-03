---
title: Errore del compilatore C3149 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3149
dev_langs:
- C++
helpviewer_keywords:
- C3149
ms.assetid: cf6e2616-2f06-46da-8a8a-d449cb481c51
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 154ae99c5e47438f6fca3b85ac8318c1b14f7a30
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
