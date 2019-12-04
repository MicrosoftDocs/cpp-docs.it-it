---
title: Errore del compilatore C2109
ms.date: 11/04/2016
f1_keywords:
- C2109
helpviewer_keywords:
- C2109
ms.assetid: 2d1ac79d-a985-4904-a38b-b270578d664d
ms.openlocfilehash: 109b4693a07374f05e8b51c73c15d04c6d9793cd
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755733"
---
# <a name="compiler-error-c2109"></a>Errore del compilatore C2109

l'indice richiede un tipo di matrice o puntatore

L'indice è stato usato in una variabile che non era una matrice.

L'esempio seguente genera l'C2109:

```cpp
// C2109.cpp
int main() {
   int a, b[10] = {0};
   a[0] = 1;   // C2109
   b[0] = 1;   // OK
}
```
