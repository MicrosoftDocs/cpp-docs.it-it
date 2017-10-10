---
title: Errore del compilatore C2562 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2562
dev_langs:
- C++
helpviewer_keywords:
- C2562
ms.assetid: 2c41e511-9952-4b98-9976-6b1523613e1b
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: bcd98e241abd5cfd8cfce16224069470493d89b5
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2562"></a>Errore del compilatore C2562
'identifier': funzione 'void' restituisce un valore  
  
 La funzione viene dichiarata come `void` ma restituisce un valore.  
  
 Questo errore può essere causato da un prototipo di funzione non corretta.  
  
 Questo errore può essere fissato se si specifica il tipo restituito nella dichiarazione di funzione.  
  
 L'esempio seguente genera l'errore C2562:  
  
```  
// C2562.cpp  
// compile with: /c  
void testfunc() {  
   int i;  
   return i;   // C2562 delete the return to resolve  
}  
```
