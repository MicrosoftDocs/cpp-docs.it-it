---
title: Avviso del compilatore (livello 3) C4018
description: Avviso del compilatore Microsoft C/C++ C4018, le cause e la risoluzione.
ms.date: 10/16/2020
f1_keywords:
- C4018
helpviewer_keywords:
- C4018
ms.openlocfilehash: b9d01f6b733c2ca18880aa6f4b6fca9771f8123f
ms.sourcegitcommit: f19f02f217b80804ab321d463c76ce6f681abcc6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/19/2020
ms.locfileid: "92176172"
---
# <a name="compiler-warning-level-3-c4018"></a>Avviso del compilatore (livello 3) C4018

> '*token*': mancata corrispondenza tra signed e unsigned

Utilizzo dell'operatore *token* per confrontare **`signed`** e i **`unsigned`** numeri necessari al compilatore per la conversione del **`signed`** valore **`unsigned`** .

## <a name="remarks"></a>Osservazioni

Un modo per correggere questo avviso è se si esegue il cast di uno dei due tipi quando si confrontano i **`signed`** **`unsigned`** tipi e.

## <a name="example"></a>Esempio

Questo esempio genera C4018 e Mostra come risolverlo:

```cpp
// C4018.cpp
// compile with: cl /EHsc /W4 C4018.cpp
int main() {
    unsigned int uc = 0;
    int c = 0;
    unsigned int c2 = c; // implicit conversion

    if (uc < c)           // C4018
        uc = 0;

    if (uc < unsigned(c)) // OK
        uc = 0;

    if (uc < c2)          // Also OK
       uc = 0;
}
```

## <a name="see-also"></a>Vedere anche

[Avviso del compilatore (livello 4) C4388](c4388.md)\
[Avviso del compilatore (livello 4) C4389](compiler-warning-level-4-c4389.md)
