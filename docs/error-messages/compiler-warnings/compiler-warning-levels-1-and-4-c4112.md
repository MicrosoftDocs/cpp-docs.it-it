---
description: 'Altre informazioni su: avviso del compilatore (livelli 1 e 4) C4112'
title: Avviso del compilatore (livelli 1 e 4) C4112
ms.date: 11/04/2016
f1_keywords:
- C4112
helpviewer_keywords:
- C4112
ms.assetid: aff64897-bb79-4a67-9b6f-902c6d44f3dc
ms.openlocfilehash: a4958cbd4537ab9c1f5686383f27414ae366e72b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234553"
---
# <a name="compiler-warning-levels-1-and-4-c4112"></a>Avviso del compilatore (livelli 1 e 4) C4112

\#la riga richiede un numero intero compreso tra 1 e numero

La direttiva [#line](../../preprocessor/hash-line-directive-c-cpp.md) specifica un parametro Integer che non rientra nell'intervallo consentito.

Se il parametro specificato è minore di 1, il contatore di righe viene reimpostato su 1. Se il parametro specificato è maggiore di *numero*, che rappresenta il limite definito dal compilatore, il contatore di righe non viene modificato. L'avviso è di livello 1 in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) e di livello 4 con le estensioni Microsoft ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).

L'esempio seguente genera l'errore C4112:

```cpp
// C4112.cpp
// compile with: /W4
#line 0   // C4112, value must be between 1 and number

int main() {
}
```
