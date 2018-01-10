---
title: Punto di dichiarazione in C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords: point of declaration
ms.assetid: 92ea8707-80cb-497c-b479-f907b8401859
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 64c1fa1d6d8feb4b869957101bb4b37f125d0f8b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="point-of-declaration-in-c"></a>Punto di dichiarazione in C++
Un nome viene considerato dichiarato immediatamente dopo il proprio dichiaratore e prima del proprio inizializzatore (quest'ultimo è facoltativo). (Per ulteriori informazioni sui dichiaratori, vedere [dichiarazioni e definizioni](declarations-and-definitions-cpp.md).)  
  
 Si consideri l'esempio seguente:  
  
```  
// point_of_declaration1.cpp  
// compile with: /W1   
double dVar = 7.0;  
int main()  
{  
   double dVar = dVar;   // C4700  
}  
```  
  
 Se il punto di dichiarazione fosse *dopo* l'inizializzazione, quindi locale `dVar` verrebbe inizializzata su 7.0, il valore della variabile globale `dVar`. Tuttavia, poiché non è questo il caso, `dVar` viene inizializzata su un valore non definito.  
  
## <a name="see-also"></a>Vedere anche  
 [Ambito](../cpp/scope-visual-cpp.md)