---
description: Altre informazioni sulla direttiva pop_macro pragma in Microsoft C/C++
title: pop_macro pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.pop_macro
- pop_macro_CPP
helpviewer_keywords:
- pop_macro pragma
- pragma, pop_macro
no-loc:
- pragma
ms.openlocfilehash: 99b0567838bac2a683f2a31fe13dd423e2efe651
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713363"
---
# <a name="pop_macro-no-locpragma"></a>`pop_macro` pragma

Imposta il valore della macro del *Nome macro* sul valore all'inizio dello stack per la macro.

## <a name="syntax"></a>Sintassi

> **`#pragma pop_macro(`** "*Nome-macro*" **`)`**

## <a name="remarks"></a>Osservazioni

[`push_macro`](../preprocessor/push-macro.md)Prima di poter eseguire un'operazione, è necessario emettere un oggetto per il *nome della macro* **`pop_macro`** .

## <a name="example"></a>Esempio

```cpp
// pragma_directives_pop_macro.cpp
// compile with: /W1
#include <stdio.h>
#define X 1
#define Y 2

int main() {
   printf("%d",X);
   printf("\n%d",Y);
   #define Y 3   // C4005
   #pragma push_macro("Y")
   #pragma push_macro("X")
   printf("\n%d",X);
   #define X 2   // C4005
   printf("\n%d",X);
   #pragma pop_macro("X")
   printf("\n%d",X);
   #pragma pop_macro("Y")
   printf("\n%d",Y);
}
```

```Output
1
2
1
2
1
3
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
