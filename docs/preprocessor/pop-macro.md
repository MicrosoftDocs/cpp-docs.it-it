---
title: Pragma pop_macro
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.pop_macro
- pop_macro_CPP
helpviewer_keywords:
- pop_macro pragma
- pragmas, pop_macro
ms.assetid: 3b5489d0-69ba-4c66-b572-2748af0f12bb
ms.openlocfilehash: f9e097d139e1df5c9ba09ad9ca99f0cfe6bbbfb3
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218289"
---
# <a name="pop_macro-pragma"></a>Pragma pop_macro

Imposta il valore della macro del *Nome macro* sul valore all'inizio dello stack per la macro.

## <a name="syntax"></a>Sintassi

> **#pragma pop_macro (** "*Nome-macro*" **)**

## <a name="remarks"></a>Note

Prima di poter eseguire un **pop_macro**, è necessario emettere un [push_macro](../preprocessor/push-macro.md) per il *nome della macro* .

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

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
