---
title: Errore del compilatore C3645 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3645
dev_langs:
- C++
helpviewer_keywords:
- C3645
ms.assetid: 346da528-ae86-4cd0-9654-f41bee26ac0d
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 43bda10ee2e4f2939061d70cfcf19da950909d03
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3645"></a>Errore del compilatore C3645
'function': Impossibile utilizzare clrcall su funzioni compilate in codice nativo  
  
 La presenza di alcune parole chiave in una funzione causeranno la funzione essere compilata come nativa.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3645.  
  
```  
// C3645.cpp  
// compile with: /clr /c  
#pragma unmanaged   
int __clrcall dog() {}   // C3645  
```
