---
title: Errore del compilatore C2090
ms.date: 11/04/2016
f1_keywords:
- C2090
helpviewer_keywords:
- C2090
ms.assetid: e8176e55-382b-453d-aa27-6597f0274afd
ms.openlocfilehash: d805a4d6e0da0e94288ac36c6680a952b7633b86
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62347246"
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