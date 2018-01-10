---
title: Errore del compilatore C2460 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2460
dev_langs: C++
helpviewer_keywords: C2460
ms.assetid: d969fca9-3ac5-4e4e-88fc-df05510e2093
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 97ab5f3a2635bf25c01c2e54ba27c49447f1514a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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