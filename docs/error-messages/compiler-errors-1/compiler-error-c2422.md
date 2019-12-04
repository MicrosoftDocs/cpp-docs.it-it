---
title: Errore del compilatore C2422
ms.date: 11/04/2016
f1_keywords:
- C2422
helpviewer_keywords:
- C2422
ms.assetid: ef0ec302-4028-4778-b134-0b8cea4bcad9
ms.openlocfilehash: 39f779ee846cf4f328f9c7af59ae394d97d7a3ca
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74744732"
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
