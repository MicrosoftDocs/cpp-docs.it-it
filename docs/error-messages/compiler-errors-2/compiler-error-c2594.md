---
title: Errore del compilatore C2594 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2594
dev_langs:
- C++
helpviewer_keywords:
- C2594
ms.assetid: 68cd708f-266e-44b0-a211-3e3ab63b11bf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9b1de853b8992d3c02eb94c0b050d72539fc3282
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2594"></a>Errore del compilatore C2594
'operator': conversioni ambigue da 'type1' a 'type2'  
  
 Nessuna conversione da *type1* a *type2* è stata più diretta rispetto a qualsiasi altro. Si consiglia di due possibili soluzioni per la conversione da *type1* a *type2*. La prima opzione consiste nel definire una conversione diretta da *type1* a *type2*, e la seconda opzione consiste nella specificazione di una sequenza di conversioni da *type1* a  *type2*.  
  
 L'esempio seguente genera l'errore C2594. La risoluzione suggerita per l'errore è una sequenza di conversioni:  
  
```  
// C2594.cpp  
// compile with: /c  
struct A{};  
struct I1 : A {};  
struct I2 : A {};  
struct D : I1, I2 {};  
  
A *f (D *p) {  
   return (A*) (p);    // C2594  
  
// try the following line instead  
// return static_cast<A *>(static_cast<I1 *>(p));  
}  
```