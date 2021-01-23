---
description: Altre informazioni sulla direttiva deprecata pragma in Microsoft C/C++
title: deprecato pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.deprecated
helpviewer_keywords:
- deprecated pragma
- pragma, deprecated
no-loc:
- pragma
ms.openlocfilehash: 47e049f415b243a4c9959c7adc789f32f91de7ba
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98712908"
---
# <a name="deprecated-no-locpragma"></a>`deprecated` pragma

**`deprecated`** pragma Consente di indicare che una funzione, un tipo o qualsiasi altro identificatore potrebbe non essere più supportato in una versione futura o non deve più essere utilizzato.

> [!NOTE]
> Per informazioni sull'attributo C++ 14 `[[deprecated]]` e indicazioni su quando utilizzare tale attributo anziché il `__declspec(deprecated)` modificatore Microsoft o **`deprecated`** pragma , vedere [attributi in C++](../cpp/attributes.md).

## <a name="syntax"></a>Sintassi

> **`#pragma deprecated(`***identificatore1* [ **`,`** *identifier2* ...]**`)`**

## <a name="remarks"></a>Osservazioni

Quando il compilatore rileva un identificatore specificato da un **`deprecated`** pragma , emette un avviso del compilatore [C4995](../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md).

È possibile deprecare i nomi di macro. Inserire il nome della macro tra virgolette, altrimenti l'espansione della macro viene eseguita.

Poiché il **`deprecated`** pragma funziona su tutti gli identificatori corrispondenti e non prende in considerazione le firme, non è l'opzione migliore per deprecare versioni specifiche delle funzioni in overload. Qualsiasi nome di funzione corrispondente introdotto nell'ambito attiva l'avviso.

È consigliabile usare l'attributo C++ 14 `[[deprecated]]` , quando possibile, anziché **`deprecated`** pragma . Il modificatore di dichiarazione specifico di Microsoft [`__declspec(deprecated)`](../cpp/deprecated-cpp.md) rappresenta anche la scelta migliore in molti casi rispetto a **`deprecated`** pragma . L' `[[deprecated]]` attributo e il `__declspec(deprecated)` modificatore consentono di specificare lo stato deprecato per particolari forme di funzioni in overload. L'avviso di diagnostica viene visualizzato solo sui riferimenti alla funzione di overload specifica a cui si applica l'attributo o il modificatore.

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

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
