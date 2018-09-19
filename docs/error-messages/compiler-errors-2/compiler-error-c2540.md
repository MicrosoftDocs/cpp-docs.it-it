---
title: Errore del compilatore C2540 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2540
dev_langs:
- C++
helpviewer_keywords:
- C2540
ms.assetid: 92c805a3-2dd9-46ca-a63d-3845c18ecc95
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8a6ec3945cf49598b57c92e5c0e6a5e48466f1e4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112382"
---
# <a name="compiler-error-c2540"></a>Errore del compilatore C2540

espressione non costante come limite di matrice

Una matrice deve avere un limite costante.

L'esempio seguente genera l'errore C2540:

```
// C2540.cpp
void func(int n, int pC[]) {
   int i = ((int [n])pC)[1];   // C2540
}

void func2(int n, int pC[]) {
   int i = (pC)[1];   // OK
}

int main() {
   int pC[100];
   func(100, pC);
   func2(100, pC);
}
```