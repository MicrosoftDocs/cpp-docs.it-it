---
title: Errore del compilatore C2784
ms.date: 11/04/2016
f1_keywords:
- C2784
helpviewer_keywords:
- C2784
ms.assetid: 3d761fe2-881c-48bd-afae-e2e714e20473
ms.openlocfilehash: 1ff91135f6a6207921aa1f83d42ebd1689e711a1
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74739636"
---
# <a name="compiler-error-c2784"></a>Errore del compilatore C2784

'declaration': impossibile dedurre un argomento modello per 'type' da 'type'

Il compilatore non può determinare un argomento modello dagli argomenti della funzione forniti.

L'esempio seguente genera l'errore C2784 e mostra come risolverlo:

```cpp
// C2784.cpp
template<class T> class X {};
template<class T> void f(X<T>) {}

int main() {
   X<int> x;
   f(1);   // C2784

   // To fix it, try the following line instead
   f(x);
}
```
