---
title: Errore del compilatore C3672
ms.date: 11/04/2016
f1_keywords:
- C3672
helpviewer_keywords:
- C3672
ms.assetid: da971041-1766-467a-aecf-1d8655c6cb7a
ms.openlocfilehash: 36048f3e4b8cc1be3e766f11b5c131513a3365da
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50436777"
---
# <a name="compiler-error-c3672"></a>Errore del compilatore C3672

espressione di pseudodistruttore può essere utilizzata solo come parte di una chiamata di funzione

Un distruttore è stato chiamato in modo non corretto.  Per altre informazioni, vedere [distruttori](../../cpp/destructors-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3672.

```
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