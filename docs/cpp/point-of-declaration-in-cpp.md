---
title: Punto di dichiarazione in C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- point of declaration
ms.assetid: 92ea8707-80cb-497c-b479-f907b8401859
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 77f66182052cc2a031b7f1f8db8018f49b36801d
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
