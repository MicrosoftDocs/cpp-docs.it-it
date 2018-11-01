---
title: noreturn
ms.date: 11/04/2016
f1_keywords:
- noreturn_cpp
helpviewer_keywords:
- __declspec keyword [C++], noreturn
- noreturn __declspec keyword
ms.assetid: 9c6517e5-22d7-4051-9974-3d2200ae4d1d
ms.openlocfilehash: 1d78e8f5116eabf9073205b938156197bf1001a9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50611861"
---
# <a name="noreturn"></a>noreturn

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

Ciò **declspec** attributo indica al compilatore che non restituisce una funzione. Di conseguenza, il compilatore sa che il codice che segue una chiamata a un **__declspec(noreturn)** funzione non è raggiungibile.

Se il compilatore rileva una funzione con un percorso di controllo che non restituisce un valore, viene generato un avviso (C4715) o un messaggio di errore (C2202). Se il percorso del controllo non è raggiungibile a causa di una funzione che non restituisce alcun risultato, è possibile usare **__declspec(noreturn)** per evitare questo avviso o errore.

> [!NOTE]
>  Aggiunta **__declspec(noreturn)** a una funzione che deve restituire può causare un comportamento indefinito.

## <a name="example"></a>Esempio

Nell'esempio seguente, il **else** clausola non contiene un'istruzione return.  La dichiarazione `fatal` come **__declspec(noreturn)** evita un errore o un messaggio di avviso.

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

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)