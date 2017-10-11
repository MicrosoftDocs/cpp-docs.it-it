---
title: Errore del compilatore C3531 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3531
dev_langs:
- C++
helpviewer_keywords:
- C3531
ms.assetid: 2bdb9fdc-9ddf-403e-8b92-02763d434487
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 7753e30e305b7b36adc3b4d2b535f755fa455bdd
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3531"></a>Errore del compilatore C3531
'symbol': un simbolo il cui tipo contiene 'auto' deve avere un inizializzatore  
  
 La variabile specificata non dispone di un'espressione dell'inizializzatore.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Specificare un'espressione dell'inizializzatore, ad esempio un'assegnazione semplice che utilizza la sintassi di segno di uguale, quando si dichiara la variabile.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3531 perché le variabili `x1`, `y1, y2, y3`, e `z2` non inizializzate.  
  
```  
// C3531.cpp  
// Compile with /Zc:auto  
int main()  
{  
   auto x1;                  // C3531  
   auto y1, y2, y3;          // C3531  
   auto z1 = 1, z2, z3 = -1; // C3531  
   return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Auto (parola chiave)](../../cpp/auto-keyword.md)
