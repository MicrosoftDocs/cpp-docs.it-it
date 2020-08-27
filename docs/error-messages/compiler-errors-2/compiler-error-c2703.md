---
title: Errore del compilatore C2703
description: Descrive l'errore del compilatore Microsoft C/C++ C2703.
ms.date: 08/24/2020
f1_keywords:
- C2703
helpviewer_keywords:
- C2703
ms.assetid: 384295c3-643d-47ae-a9a6-865b3036aa84
ms.openlocfilehash: 4d5b5ccad1cd15c1a107c81423e2372e14165776
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898607"
---
# <a name="compiler-error-c2703"></a>Errore del compilatore C2703

> istruzione non valida `__leave`

## <a name="remarks"></a>Osservazioni

Un' **`__leave`** istruzione deve trovarsi all'interno di un **`__try`** blocco.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2703:

```cpp
// C2703.cpp
int main() {
   __leave;   // C2703
   __try {
      // try the following line instead
      __leave;
   }
   __finally {}
}
```

## <a name="see-also"></a>Vedere anche

[`__leave`Parola chiave](../../cpp/try-except-statement.md#__leave)\
[`try-except` istruzione](../../cpp/try-except-statement.md)\
[`try-finally` istruzione](../../cpp/try-finally-statement.md)
