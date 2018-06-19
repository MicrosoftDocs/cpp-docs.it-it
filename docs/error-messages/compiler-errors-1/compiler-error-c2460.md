---
title: Errore del compilatore C2460 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2460
dev_langs:
- C++
helpviewer_keywords:
- C2460
ms.assetid: d969fca9-3ac5-4e4e-88fc-df05510e2093
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b4220be654f93ecd79d196efc14657ca7346411f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33197780"
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