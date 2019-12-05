---
title: noreturn
ms.date: 11/04/2016
f1_keywords:
- noreturn_cpp
helpviewer_keywords:
- __declspec keyword [C++], noreturn
- noreturn __declspec keyword
ms.assetid: 9c6517e5-22d7-4051-9974-3d2200ae4d1d
ms.openlocfilehash: f9ca61c9d734ccdd6b8d8374ed3a7c4128ee3d5e
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857372"
---
# <a name="noreturn"></a>noreturn

**Sezione specifica Microsoft**

Questo attributo **__declspec** indica al compilatore che una funzione non restituisce alcun risultato. Di conseguenza, il compilatore sa che il codice che segue una chiamata a una funzione **__declspec (noreturn)** non è raggiungibile.

Se il compilatore rileva una funzione con un percorso di controllo che non restituisce un valore, viene generato un avviso (C4715) o un messaggio di errore (C2202). Se non è possibile raggiungere il percorso del controllo a causa di una funzione che non restituisce mai, è possibile usare **__declspec (noreturn)** per evitare questo avviso o errore.

> [!NOTE]
>  L'aggiunta di **__declspec (noreturn)** a una funzione che dovrebbe restituire può causare un comportamento indefinito.

## <a name="example"></a>Esempio

Nell'esempio seguente la clausola **else** non contiene un'istruzione return.  La dichiarazione di `fatal` come **__declspec (noreturn)** evita un messaggio di errore o di avviso.

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)