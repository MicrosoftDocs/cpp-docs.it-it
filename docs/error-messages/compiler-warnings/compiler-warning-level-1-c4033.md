---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4033'
title: Avviso del compilatore (livello 1) C4033
ms.date: 11/04/2016
f1_keywords:
- C4033
helpviewer_keywords:
- C4033
ms.assetid: 189a9ec3-ff6d-49dd-b9b2-530b28bbb7c9
ms.openlocfilehash: 1d2455d62b3c375b0f1a863e6cfc3064f44e840a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325959"
---
# <a name="compiler-warning-level-1-c4033"></a>Avviso del compilatore (livello 1) C4033

'function' deve restituire un valore

La funzione non restituisce un valore. Viene restituito un valore indefinito.

Le funzioni che usano **`return`** senza un valore restituito devono essere dichiarate come tipo **`void`** .

Questo errore è relativo al codice del linguaggio C.

L'esempio seguente genera l'errore C4033:

```c
// C4033.c
// compile with: /W1 /LD
int test_1(int x)   // C4033 expected
{
   if (x)
   {
      return;   // C4033
   }
}
```
