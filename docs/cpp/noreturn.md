---
title: noreturn
ms.date: 11/04/2016
f1_keywords:
- noreturn_cpp
helpviewer_keywords:
- __declspec keyword [C++], noreturn
- noreturn __declspec keyword
ms.assetid: 9c6517e5-22d7-4051-9974-3d2200ae4d1d
ms.openlocfilehash: f0b5b17a6d64375f49a6d55021c72ba7119eb976
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213307"
---
# <a name="noreturn"></a>noreturn

**Specifico di Microsoft**

Questo **`__declspec`** attributo indica al compilatore che una funzione non restituisce. Di conseguenza, il compilatore sa che il codice che segue una chiamata a una **`__declspec(noreturn)`** funzione non è raggiungibile.

Se il compilatore rileva una funzione con un percorso di controllo che non restituisce un valore, viene generato un avviso (C4715) o un messaggio di errore (C2202). Se non è possibile raggiungere il percorso del controllo a causa di una funzione che non restituisce mai, è possibile usare **`__declspec(noreturn)`** per evitare questo avviso o errore.

> [!NOTE]
> **`__declspec(noreturn)`** L'aggiunta a una funzione che si prevede venga restituita può causare un comportamento indefinito.

## <a name="example"></a>Esempio

Nell'esempio seguente la **`else`** clausola non contiene un'istruzione return.  La Dichiarazione `fatal` di come **`__declspec(noreturn)`** evita un messaggio di errore o di avviso.

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
