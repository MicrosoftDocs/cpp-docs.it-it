---
description: 'Altre informazioni su: errore del compilatore C2090'
title: Errore del compilatore C2090
ms.date: 11/04/2016
f1_keywords:
- C2090
helpviewer_keywords:
- C2090
ms.assetid: e8176e55-382b-453d-aa27-6597f0274afd
ms.openlocfilehash: 224f900a20d57a35a6a6c6dcc2dc95b09c596403
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251908"
---
# <a name="compiler-error-c2090"></a>Errore del compilatore C2090

la funzione restituisce una matrice

Una funzione non può restituire una matrice. Restituisce invece un puntatore a una matrice.

L'esempio seguente genera l'C2090:

```cpp
// C2090.cpp
int func1(void)[] {}   // C2090
```

Possibile soluzione:

```cpp
// C2090b.cpp
// compile with: /c
int* func2(int * i) {
   return i;
}
```
