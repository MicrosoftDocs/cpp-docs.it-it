---
title: noreturn
ms.date: 11/04/2016
f1_keywords:
- noreturn_cpp
helpviewer_keywords:
- __declspec keyword [C++], noreturn
- noreturn __declspec keyword
ms.assetid: 9c6517e5-22d7-4051-9974-3d2200ae4d1d
ms.openlocfilehash: a30840aa0556a7324ba24c0f2aaec57dea88d082
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367861"
---
# <a name="noreturn"></a>noreturn

**Specifico di Microsoft**

Questo **attributo __declspec** indica al compilatore che una funzione non restituisce. Di conseguenza, il compilatore sa che il codice che segue una chiamata a una funzione **__declspec(noreturn)** non è raggiungibile.

Se il compilatore rileva una funzione con un percorso di controllo che non restituisce un valore, viene generato un avviso (C4715) o un messaggio di errore (C2202). Se il percorso di controllo non può essere raggiunto a causa di una funzione che non restituisce mai, è possibile utilizzare **__declspec(noreturn)** per evitare questo avviso o errore.

> [!NOTE]
> L'aggiunta **di __declspec(noreturn)** a una funzione che si prevede venga restituita può comportare un comportamento indefinito.

## <a name="example"></a>Esempio

Nell'esempio seguente la clausola **else** non contiene un'istruzione return.  La `fatal` dichiarazione come **__declspec(noreturn)** evita un messaggio di errore o di avviso.

```cpp
// noreturn2.cpp
__declspec(noreturn) extern void fatal () {}

int main() {
   if(1)
     return 1;
   else if(0)
     return 0;
   else
     fatal();
}
```

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
