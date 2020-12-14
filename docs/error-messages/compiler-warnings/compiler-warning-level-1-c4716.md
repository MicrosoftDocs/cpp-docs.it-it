---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4716'
title: Avviso del compilatore (livello 1) C4716
ms.date: 11/04/2016
f1_keywords:
- C4716
helpviewer_keywords:
- C4716
ms.assetid: d95ecfe5-870f-461f-a746-7913af98414b
ms.openlocfilehash: 3ea67c6220cfda97989e4ea095856082608aab0c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249074"
---
# <a name="compiler-warning-level-1-c4716"></a>Avviso del compilatore (livello 1) C4716

'function' deve restituire un valore

La funzione specificata non ha restituito un valore.

Solo le funzioni con un tipo restituito void possono usare il comando return senza un valore restituito associato.

Quando viene chiamata questa funzione, viene restituito un valore non definito.

Questo avviso viene promosso automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md).

L'esempio seguente genera l'C4716:

```cpp
// C4716.cpp
// compile with: /c /W1
// C4716 expected
#pragma warning(default:4716)
int test() {
   // uncomment the following line to resolve
   // return 0;
}
```
