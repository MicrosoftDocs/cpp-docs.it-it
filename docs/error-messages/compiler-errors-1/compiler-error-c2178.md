---
title: C2178 errore del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 05/08/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2178
dev_langs:
- C++
helpviewer_keywords:
- C2178
ms.assetid: 79a14158-17f3-4221-bd06-9d675c49cef4
caps.latest.revision: 0
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: facb255b0c53a3de0e1d5c9f90de5835b25e3c32
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2178"></a>C2178 errore del compilatore  
  
'*identificatore*'non può essere dichiarata con'*identificatore*' identificatore  
  
Oggetto `mutable` identificatore è stato usato in una dichiarazione, ma l'identificatore non è consentito in questo contesto.  
  
Il `mutable` identificatore può essere applicato soltanto ai nomi dei membri dati della classe e non può essere applicato ai nomi dichiarati `const` o `static`e non può essere applicato ai membri di riferimento.  
  
## <a name="example"></a>Esempio  
  
L'esempio seguente viene illustrato come si verifichi C2178 e come risolverlo.  
  
```  
// C2178.cpp
// compile with: cl /c /W4 C2178.cpp

class S {
    mutable const int i; // C2178
    // To fix, declare either const or mutable, not both.
};

mutable int x = 4; // C2178
// To fix, remove mutable keyword
```  

