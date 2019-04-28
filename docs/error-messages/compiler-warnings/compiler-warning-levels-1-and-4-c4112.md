---
title: Avviso del compilatore (livelli 1 e 4) C4112
ms.date: 11/04/2016
f1_keywords:
- C4112
helpviewer_keywords:
- C4112
ms.assetid: aff64897-bb79-4a67-9b6f-902c6d44f3dc
ms.openlocfilehash: 3678d0ce5d9eb9568f0272da4173e72502b0557f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62280334"
---
# <a name="compiler-warning-levels-1-and-4-c4112"></a>Avviso del compilatore (livelli 1 e 4) C4112

\#è necessario un numero intero compreso tra 1 e numero di riga

La direttiva [#line](../../preprocessor/hash-line-directive-c-cpp.md) specifica un parametro Integer che non rientra nell'intervallo consentito.

Se il parametro specificato è minore di 1, il contatore di righe viene reimpostato su 1. Se il parametro specificato è maggiore di *numero*, che rappresenta il limite definito dal compilatore, il contatore di righe non viene modificato. L'avviso è di livello 1 in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) e di livello 4 con le estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).

L'esempio seguente genera l'errore C4112:

```
// C4112.cpp
// compile with: /W4
#line 0   // C4112, value must be between 1 and number

int main() {
}
```