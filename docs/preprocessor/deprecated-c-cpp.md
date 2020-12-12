---
description: 'Altre informazioni su: pragma deprecated'
title: deprecated (pragma)
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.deprecated
helpviewer_keywords:
- deprecated pragma
- pragmas, deprecated
ms.assetid: 9c046f12-7875-499a-8d5d-12f8642fed2d
ms.openlocfilehash: b3f7e8bf17e98f6e6f57511f3c0c9a94a9388bf1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300775"
---
# <a name="deprecated-pragma"></a>deprecated (pragma)

Il **`deprecated`** pragma consente di indicare che una funzione, un tipo o un altro identificatore potrebbe non essere più supportato in una versione futura o non deve più essere utilizzato.

> [!NOTE]
> Per informazioni sull'attributo C++ 14 `[[deprecated]]` e indicazioni su quando utilizzare tale attributo anziché il `__declspec(deprecated)` modificatore Microsoft o il **`deprecated`** pragma, vedere [attributi in C++](../cpp/attributes.md).

## <a name="syntax"></a>Sintassi

> **#pragma deprecato (** *identificatore1* [ **,** *identifier2* ...] **)**

## <a name="remarks"></a>Commenti

Quando il compilatore rileva un identificatore specificato da un **`deprecated`** pragma, emette un avviso del compilatore [C4995](../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md).

È possibile deprecare i nomi di macro. Inserire il nome della macro tra virgolette, altrimenti l'espansione della macro viene eseguita.

Poiché il **`deprecated`** pragma funziona su tutti gli identificatori corrispondenti e non prende in considerazione le firme, non è l'opzione migliore per deprecare versioni specifiche delle funzioni in overload. Qualsiasi nome di funzione corrispondente introdotto nell'ambito attiva l'avviso.

È consigliabile usare l'attributo C++ 14 `[[deprecated]]` , quando possibile, anziché il **`deprecated`** pragma. Il modificatore di Dichiarazione [__declspec (deprecato)](../cpp/deprecated-cpp.md) specifico di Microsoft rappresenta anche la scelta migliore in molti casi rispetto al **`deprecated`** pragma. L' `[[deprecated]]` attributo e il `__declspec(deprecated)` modificatore consentono di specificare lo stato deprecato per particolari forme di funzioni in overload. L'avviso di diagnostica viene visualizzato solo sui riferimenti alla funzione di overload specifica a cui si applica l'attributo o il modificatore.

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

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
