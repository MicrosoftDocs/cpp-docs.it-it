---
title: Errore del compilatore C2422 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2422
dev_langs:
- C++
helpviewer_keywords:
- C2422
ms.assetid: ef0ec302-4028-4778-b134-0b8cea4bcad9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 17421f2d4a7823c0e2fbb34a54a7c562223c798c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46047031"
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