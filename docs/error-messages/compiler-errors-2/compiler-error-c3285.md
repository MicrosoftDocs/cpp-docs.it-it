---
title: Errore del compilatore C3285 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3285
dev_langs:
- C++
helpviewer_keywords:
- C3285
ms.assetid: 04e8f210-d67e-4810-b153-e1efe2986c8f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 685d83f224cc0b6c259a2fdf6946f28d909a1e6b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46049566"
---
# <a name="compiler-error-c3285"></a>Errore del compilatore C3285

istruzione 'for each' non utilizzabile con variabili di tipo 'type'

L'istruzione `for each` ripete un gruppo di istruzioni incorporate per ciascun elemento di una matrice o di una raccolta di oggetti.

Per altre informazioni, vedere [for each, in](../../dotnet/for-each-in.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3285.

```
// C3285.cpp
// compile with: /clr
int main() {
   for each (int i in 0) {}   // C3285

   array<int> ^p = { 1, 2, 3 };
   for each (int j in p) {}   // OK
}
```