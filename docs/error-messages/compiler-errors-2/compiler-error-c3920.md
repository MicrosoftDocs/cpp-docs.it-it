---
title: Errore del compilatore C3920 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3920
dev_langs:
- C++
helpviewer_keywords:
- C3920
ms.assetid: 66e91f28-ed82-4ce2-bf22-c0c74905b1ed
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b5eeee973258b6d59b7a034e2b71bc453ed7454f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3920"></a>Errore del compilatore C3920
' operatore ': Impossibile definire una forma suffissa incremento/decremento WinRT o un operatore CLR chiama la forma suffissa operatore WinRT o CLR, verrà chiamata al prefisso corrispondente WinRT o CLR (operatore) (op_Increment/op_Decrement) senza la semantica del suffisso  
  
 Windows Runtime e CLR non supportano la forma suffissa dell'operatore e non è consentita la forma suffissa degli operatori definiti dall'utente.  È possibile definire un forma suffissa dell'operatore e la forma prefissa dell'operatore verrà usata per le operazioni di pre-incremento e post-incremento.  
  
 L'esempio seguente genera l'errore C3920 e mostra come risolverlo:  
  
```  
// C3920.cpp  
// compile with: /clr /LD  
public value struct V {  
   static V operator ++(V me, int)  
   // try the following line instead  
   // static V operator ++(V me)  
   {   // C3920  
      me.m_i++;  
      return me;  
   }  
  
   int m_i;  
};  
  
```