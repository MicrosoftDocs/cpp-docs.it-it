---
title: Compilatore (livello 1) avviso C4003 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4003
dev_langs:
- C++
helpviewer_keywords:
- C4003
ms.assetid: 0ed1c285-4428-4c90-8131-86897e31f115
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 0e0ac3c216168ada4f2367adbac509b422aba310
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-warning-level-1-c4003"></a>Compilatore (livello 1) avviso C4003
parametri effettivi insufficienti per la macro 'identifier'  
  
 Il numero di parametri formali nella definizione della macro supera il numero di parametri effettivi nella macro. Espansione della macro sostituisce il testo vuoto per i parametri mancanti.  
  
 L'esempio seguente genera l'errore C4003:  
  
```  
// C4003.cpp  
// compile with: /WX  
#define test(a,b) (a+b)  
  
int main()  
{  
   int a = 1;  
   int b = 2;  
   a = test(b);   // C4003  
   // try..  
   a = test(a,b);  
}  
```
