---
title: Errore del compilatore C2460 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2460
dev_langs:
- C++
helpviewer_keywords:
- C2460
ms.assetid: d969fca9-3ac5-4e4e-88fc-df05510e2093
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 00e4015a0dae5054973ba72bb0e4f89c7443ae03
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2460"></a>Errore del compilatore C2460
'identifier1': utilizza 'identifier2', che viene definito  
  
 Una classe o struttura (`identifier2`) è dichiarato come un membro di se stesso (`identifier1`). Le definizioni di classi e strutture ricorsive non sono consentite.  
  
 L'esempio seguente genera l'errore C2460:  
  
```  
// C2460.cpp  
class C {  
   C aC;    // C2460  
};  
```  
  
 Utilizzare invece un riferimento a un puntatore nella classe.  
  
```  
// C2460.cpp  
class C {  
   C * aC;    // OK  
};  
```
