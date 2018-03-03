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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c7c8158d798df3fb48c45194ff6a01a1cbf3ab4a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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