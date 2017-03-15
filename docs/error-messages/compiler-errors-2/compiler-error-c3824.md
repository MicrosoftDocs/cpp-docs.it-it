---
title: Errore del compilatore C3824 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3824
dev_langs:
- C++
helpviewer_keywords:
- C3824
ms.assetid: b6c6adf1-0a29-401c-a06e-616fd50d4c37
caps.latest.revision: 10
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
ms.openlocfilehash: 546edbeccfee84e91018d0801f0c1ebc7a53a537
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3824"></a>Errore del compilatore C3824
'membro': questo tipo non può apparire in questo contesto (parametro di funzione, il tipo restituito o un membro statico)  
  
 Puntatori di blocco non possono essere parametri di funzione, tipi restituiti o dichiarate `static`.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3824:  
  
```  
// C3824a.cpp  
// compile with: /clr /c  
void func() {  
   static pin_ptr<int> a; // C3824  
   pin_ptr<int> b; // OK  
}  
```  

