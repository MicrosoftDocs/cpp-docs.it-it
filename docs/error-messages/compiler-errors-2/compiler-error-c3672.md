---
title: Errore del compilatore C3672
ms.date: 11/04/2016
f1_keywords:
- C3672
helpviewer_keywords:
- C3672
ms.assetid: da971041-1766-467a-aecf-1d8655c6cb7a
ms.openlocfilehash: 3288f7ea0b95d141dd6b4281d7080de1409da606
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758099"
---
# <a name="compiler-error-c3672"></a>Errore del compilatore C3672

l'espressione pseudo-distruttore può essere utilizzata solo come parte di una chiamata di funzione

Un distruttore è stato chiamato in modo non corretto.  Per ulteriori informazioni, vedere [distruttori](../../cpp/destructors-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3672.

```cpp
// C3672.cpp
template<typename T>
void f(T* pT) {
   &pT->T::~T;   // C3672
   pT->T::~T();   // OK
};

int main() {
   int i;
   f(&i);
}
```
