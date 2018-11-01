---
title: Punto di dichiarazione in C++
ms.date: 11/04/2016
helpviewer_keywords:
- point of declaration
ms.assetid: 92ea8707-80cb-497c-b479-f907b8401859
ms.openlocfilehash: d6cb4c3813d88c8b29fbcb2e0827805f406e6c81
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50560654"
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