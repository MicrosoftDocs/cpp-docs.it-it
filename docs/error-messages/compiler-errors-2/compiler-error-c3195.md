---
title: Errore del compilatore C3195 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3195
dev_langs:
- C++
helpviewer_keywords:
- C3195
ms.assetid: 97e4f681-812b-49e8-ba57-24b7817e3cd8
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: ae4ca677380fd9b4052ecb1f41ba44899ed87768
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3195"></a>Errore del compilatore C3195
'operator': è riservata e non può essere utilizzata come membro di una classe di riferimento o un tipo di valore. Gli operatori CLR o WinRT devono essere definiti usando la parola chiave 'operator'  
  
Il compilatore ha rilevato una definizione dell'operatore che usa la sintassi di Estensioni gestite per C++. È necessario utilizzare la sintassi di C++ per gli operatori.  
  
L'esempio seguente genera l'errore C3195 e mostra come risolverlo:  
  
```  
// C3195.cpp  
// compile with: /clr /LD  
#using <mscorlib.dll>  
value struct V {  
   static V op_Addition(V v, int i);   // C3195  
   static V operator +(V v, char c);   // OK for new C++ syntax   
};  
```
