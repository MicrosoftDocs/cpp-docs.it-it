---
title: Compilatore avviso (livello 4) C4725 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4725
dev_langs:
- C++
helpviewer_keywords:
- C4725
ms.assetid: effa0335-71c3-4b3b-8618-da4b9b46a95d
caps.latest.revision: 6
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
ms.openlocfilehash: b68b0145f21811704a88bf6c5b8aaf333181d9b0
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-level-4-c4725"></a>Avviso del compilatore (livello 4) C4725
l'istruzione potrebbe non risultare corretta per alcuni Pentium  
  
 Il codice contiene un'istruzione di assembly inline che potrebbe produrre risultati non precisi su alcuni microprocessori Pentium.  
  
 L'esempio seguente genera l'errore C4725:  
  
```  
// C4725.cpp  
// compile with: /W4  
// processor: x86  
double m32fp = 2.0003e-17;  
  
void f() {  
   __asm  
   {  
      FDIV m32fp   // C4725  
   }  
}  
  
int main() {  
}  
```
