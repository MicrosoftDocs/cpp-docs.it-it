---
title: Compilatore avviso (livello 1) C4807 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4807
dev_langs:
- C++
helpviewer_keywords:
- C4807
ms.assetid: 089c9f87-fd81-402e-9826-66a8ef1ef1fe
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 1548905fd242707c1cdf01c2cbc51b5c9e50cfce
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-1-c4807"></a>Avviso del compilatore (livello 1) C4807
'operation': combinazione non affidabile del tipo 'type' e del campo di bit signed del tipo 'type'  
  
 Questo avviso viene generato quando si confronta un campo di bit signed a un bit con una variabile `bool` . Poiché un campo di bit signed a un bit può contenere solo il valore -1 o 0, è pericoloso confrontarlo con `bool`. Non viene generato alcun avviso relativo alla combinazione di campi di bit senza segno di tipo `bool` e a un bit poiché sono identici a `bool` e possono contenere solo 0 o 1.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4807:  
  
```  
// C4807.cpp  
// compile with: /W1  
typedef struct bitfield {  
   signed mybit : 1;  
} mybitfield;  
  
int main() {  
   mybitfield bf;  
   bool b = true;  
  
   // try..  
   // int b = true;  
  
   bf.mybit = -1;  
   if (b == bf.mybit) {   // C4807  
      b = false;  
   }  
}  
```
