---
title: Errore del compilatore C2090 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2090
dev_langs:
- C++
helpviewer_keywords:
- C2090
ms.assetid: e8176e55-382b-453d-aa27-6597f0274afd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 613d3214e652e994ec07e1fe4396b4eb15798067
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46028779"
---
# <a name="compiler-error-c2090"></a>Errore del compilatore C2090

Restituisce una matrice (funzione)

Una funzione non può restituire una matrice. Al contrario, restituiscono un puntatore a una matrice.

L'esempio seguente genera l'errore C2090:

```
// C2090.cpp
int func1(void)[] {}   // C2090
```

Possibile soluzione:

```
// C2090b.cpp
// compile with: /c
int* func2(int * i) {
   return i;
}
```