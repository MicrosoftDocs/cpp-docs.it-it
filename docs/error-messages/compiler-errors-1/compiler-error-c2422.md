---
description: 'Altre informazioni su: errore del compilatore C2422'
title: Errore del compilatore C2422
ms.date: 11/04/2016
f1_keywords:
- C2422
helpviewer_keywords:
- C2422
ms.assetid: ef0ec302-4028-4778-b134-0b8cea4bcad9
ms.openlocfilehash: 4fb35b7613e523c750d6c3f15a8071117edba46a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97120243"
---
# <a name="compiler-error-c2422"></a>Errore del compilatore C2422

override di segmento non valido in ' operando '

Il codice assembly inline USA erroneamente un operatore di override del segmento (due punti) su un operando.  Le cause possibili sono:

- Il registro che precede l'operatore non è un registro di segmento.

- Il registro che precede l'operatore non è l'unico registro del segmento nell'operando.

- L'operatore di override del segmento viene visualizzato all'interno di un operatore di riferimento indiretto (parentesi quadre).

- L'espressione che segue l'operatore di override del segmento non è un operando immediato o un operando di memoria.

L'esempio seguente genera l'C2422:

```cpp
// C2422.cpp
// processor: x86
int main() {
   _asm {
      mov AX, [BX:ES]   // C2422
      mov AX, ES   // OK
   }
}
```
