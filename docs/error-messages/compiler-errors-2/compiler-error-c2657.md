---
title: Errore del compilatore C2657 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2657
dev_langs:
- C++
helpviewer_keywords:
- C2657
ms.assetid: f7cf29a9-684a-4605-9469-ecfee9ba4b03
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 2e0e06104458961297a4d0a3de8b7cda756d16ab
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2657"></a>Errore del compilatore C2657
' classe:: *' trovato all'inizio di un'istruzione (si è omesso di specificare un tipo?)  
  
 La riga inizia con un identificatore di puntatore a membro.  
  
 Questo errore può essere causato da un identificatore di tipo mancante nella dichiarazione di un puntatore a un membro.  
  
 L'esempio seguente genera l'errore C2657:  
  
```  
// C2657.cpp  
class C {};  
int main() {  
   C::* pmc1;        // C2657  
   int C::* pmc2;   // OK  
}  
```
