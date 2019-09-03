---
title: deprecated (pragma)
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.deprecated
- deprecated_CPP
helpviewer_keywords:
- deprecated pragma
- pragmas, deprecated
ms.assetid: 9c046f12-7875-499a-8d5d-12f8642fed2d
ms.openlocfilehash: 2e76d1c53cb900c108e2839a9aad17b330143a5d
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222399"
---
# <a name="deprecated-pragma"></a>deprecated (pragma)

Il pragma deprecated consente di indicare che una funzione, un tipo o un qualsiasi altro identificatore potrebbero non essere più supportati in una versione futura o non devono più essere utilizzati.

> [!NOTE]
> Per informazioni sull'attributo c++ 14 `[[deprecated]]` e indicazioni su quando utilizzare tale attributo anziché il modificatore Microsoft `__declspec(deprecated)` o il pragma deprecato , vedere [attributi in C++ ](../cpp/attributes.md).

## <a name="syntax"></a>Sintassi

> **#pragma deprecato (** *identificatore1* [ **,** *identifier2* ...] **)**

## <a name="remarks"></a>Note

Quando il compilatore rileva un identificatore specificato da un pragma **deprecato** , emette un avviso del compilatore [C4995](../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md).

È possibile deprecare i nomi di macro. Inserire il nome della macro tra virgolette, altrimenti l'espansione della macro viene eseguita.

Poiché il pragma deprecated funziona su tutti gli identificatori corrispondenti e non prende in considerazione le firme, non è l'opzione migliore per deprecare versioni specifiche di funzioni in overload. Qualsiasi nome di funzione corrispondente introdotto nell'ambito attiva l'avviso.

È consigliabile usare l'attributo c++ 14 `[[deprecated]]` , quando possibile, anziché il pragma **deprecato** . Il modificatore di Dichiarazione [_ _ declspec (deprecated)](../cpp/deprecated-cpp.md) specifico di Microsoft rappresenta anche la scelta migliore in molti casi rispetto al pragma deprecato. L' `[[deprecated]]` attributo e `__declspec(deprecated)` il modificatore consentono di specificare lo stato deprecato per particolari forme di funzioni in overload. L'avviso di diagnostica viene visualizzato solo sui riferimenti alla funzione di overload specifica a cui si applica l'attributo o il modificatore.

## <a name="example"></a>Esempio

```cpp
// pragma_directive_deprecated.cpp
// compile with: /W3
#include <stdio.h>
void func1(void) {
}

void func2(void) {
}

int main() {
   func1();
   func2();
   #pragma deprecated(func1, func2)
   func1();   // C4995
   func2();   // C4995
}
```

Nell'esempio seguente viene illustrato come deprecare una classe:

```cpp
// pragma_directive_deprecated2.cpp
// compile with: /W3
#pragma deprecated(X)
class X {  // C4995
public:
   void f(){}
};

int main() {
   X x;   // C4995
}
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)