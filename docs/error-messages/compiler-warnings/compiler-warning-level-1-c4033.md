---
title: Compilatore avviso (livello 1) C4033 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4033
dev_langs:
- C++
helpviewer_keywords:
- C4033
ms.assetid: 189a9ec3-ff6d-49dd-b9b2-530b28bbb7c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 35df279ef7611a62ced5cb6291bdf17331850f0c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46102684"
---
# <a name="compiler-warning-level-1-c4033"></a>Avviso del compilatore (livello 1) C4033

'function' deve restituire un valore

La funzione non restituisce un valore. Viene restituito un valore indefinito.

Le funzioni che usano `return` senza un valore restituito devono essere dichiarate come tipo `void`.

Questo errore è relativo al codice del linguaggio C.

L'esempio seguente genera l'errore C4033:

```
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