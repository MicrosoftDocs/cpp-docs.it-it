---
title: Punto di dichiarazione in C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- point of declaration
ms.assetid: 92ea8707-80cb-497c-b479-f907b8401859
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 89f94cdee6be18436b3f39f840fb7880e5860adb
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39409376"
---
# <a name="point-of-declaration-in-c"></a>Punto di dichiarazione in C++
Un nome viene considerato dichiarato immediatamente dopo il proprio dichiaratore e prima del proprio inizializzatore (quest'ultimo è facoltativo). (Per altre informazioni sui dichiaratori, vedere [dichiarazioni e definizioni](declarations-and-definitions-cpp.md).)  
  
 Si consideri l'esempio seguente:  
  
```cpp 
// point_of_declaration1.cpp  
// compile with: /W1   
double dVar = 7.0;  
int main()  
{  
   double dVar = dVar;   // C4700  
}  
```  
  
 Se la posizione della dichiarazione fosse *dopo aver* l'inizializzazione, quindi locale `dVar` verrebbe inizializzata su 7.0, il valore della variabile globale `dVar`. Tuttavia, poiché non è questo il caso, `dVar` viene inizializzata su un valore non definito.  
  
## <a name="see-also"></a>Vedere anche  
 [Ambito](../cpp/scope-visual-cpp.md)