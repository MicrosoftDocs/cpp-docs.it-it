---
title: Errore del compilatore C2562
ms.date: 11/04/2016
f1_keywords:
- C2562
helpviewer_keywords:
- C2562
ms.assetid: 2c41e511-9952-4b98-9976-6b1523613e1b
ms.openlocfilehash: 7efc94cc859bbee6db0ce973135c7501fd79ae1d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87206939"
---
# <a name="compiler-error-c2562"></a>Errore del compilatore C2562

' Identifier ': la funzione ' void ' restituisce un valore

La funzione viene dichiarata come **`void`** ma restituisce un valore.

Questo errore può essere causato da un prototipo di funzione errato.

Questo errore può essere corretto se si specifica il tipo restituito nella dichiarazione di funzione.

L'esempio seguente genera l'C2562:

```cpp
// C2562.cpp
// compile with: /c
void testfunc() {
   int i;
   return i;   // C2562 delete the return to resolve
}
```
