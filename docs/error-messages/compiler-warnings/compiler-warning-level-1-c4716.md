---
title: Avviso del compilatore (livello 1) C4716
ms.date: 11/04/2016
f1_keywords:
- C4716
helpviewer_keywords:
- C4716
ms.assetid: d95ecfe5-870f-461f-a746-7913af98414b
ms.openlocfilehash: 5ec0aea543053d699db7483df7dd7ea91b3af715
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50594545"
---
# <a name="compiler-warning-level-1-c4716"></a>Avviso del compilatore (livello 1) C4716

'function' deve restituire un valore

La funzione specificata non ha restituito un valore.

Funziona solo con un tipo restituito void possono Usa il comando restituito senza un valore restituito.

Verrà restituito un valore indefinito quando questa funzione viene chiamata.

Questo avviso viene promossa automaticamente a un errore. Se si vuole modificare questo comportamento, usare [#pragma avviso](../../preprocessor/warning.md).

L'esempio seguente genera l'errore C4716:

```
// C4716.cpp
// compile with: /c /W1
// C4716 expected
#pragma warning(default:4716)
int test() {
   // uncomment the following line to resolve
   // return 0;
}
```