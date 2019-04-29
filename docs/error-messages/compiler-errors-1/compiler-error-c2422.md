---
title: Errore del compilatore C2422
ms.date: 11/04/2016
f1_keywords:
- C2422
helpviewer_keywords:
- C2422
ms.assetid: ef0ec302-4028-4778-b134-0b8cea4bcad9
ms.openlocfilehash: 524eeadb6cf066d3eba3a7e88c45a9e2b993c0ae
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402892"
---
# <a name="compiler-error-c2422"></a>Errore del compilatore C2422

override di segmento non valido in 'operando'

Il codice assembly inline erroneamente Usa un operatore di eseguire l'override di segmento (due punti) su un operando.  Fra le cause possibili vi sono le seguenti:

- Il registro che precede l'operatore non è un registro del segmento.

- Il registro che precede l'operatore non è l'unico register segmento dell'operando.

- L'operatore di eseguire l'override di segmento all'interno di un operatore di riferimento indiretto (parentesi).

- L'espressione che segue l'operatore di eseguire l'override di segmento non è un operando immediato o un operando di memoria.

L'esempio seguente genera l'errore C2422:

```
// C2422.cpp
// processor: x86
int main() {
   _asm {
      mov AX, [BX:ES]   // C2422
      mov AX, ES   // OK
   }
}
```