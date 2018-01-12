---
title: Errore del compilatore C2594 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2594
dev_langs: C++
helpviewer_keywords: C2594
ms.assetid: 68cd708f-266e-44b0-a211-3e3ab63b11bf
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d4cca18672aad77e051ff4428dc115c53cd5ddad
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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