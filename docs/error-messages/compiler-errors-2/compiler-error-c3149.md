---
title: Errore del compilatore C3149 | Documenti di Microsoft
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
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: 555b3a7ac8e0d1e5de8eacd763c9ee63101e5b78
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3149"></a>Errore del compilatore C3149
'tipo': Impossibile utilizzare questo tipo senza un livello superiore 'char'  
  
 Una dichiarazione non è stata specificata correttamente.  
  
 Ad esempio, potrebbe avere definito un tipo CLR in ambito globale e ha tentato di creare una variabile del tipo come parte della definizione. Poiché non sono consentite le variabili globali dei tipi CLR, il compilatore genererà C3149.  
  
 Per risolvere questo errore, dichiarare le variabili di tipi CLR all'interno di una definizione di funzione o un tipo.  
  
 Nell'esempio seguente viene generato l'errore C3149:  
  
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
  
 Nell'esempio seguente viene generato l'errore C3149:  
  
```  
// C3149b.cpp  
// compile with: /clr /c  
delegate int MyDelegate(const int, int);  
void Test1(MyDelegate m) {}   // C3149  
void Test2(MyDelegate ^ m) {}   // OK  
```  

