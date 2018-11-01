---
title: Errore del compilatore C3541
ms.date: 11/04/2016
f1_keywords:
- C3541
helpviewer_keywords:
- C3541
ms.assetid: 252cfd4c-5fd2-415e-a17d-6b0c254350db
ms.openlocfilehash: 356936ee09b75b6930840e015d00ccebb2fd8bc2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50596378"
---
# <a name="compiler-error-c3541"></a>Errore del compilatore C3541

'type': Impossibile applicare typeid a un tipo che contiene 'auto'

Il [typeid](../../windows/typeid-cpp-component-extensions.md) operatore non può essere applicato al tipo indicato perché contiene la `auto` identificatore.

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3541.

```
// C3541.cpp
// Compile with /Zc:auto
#include <typeinfo>
int main() {
    auto x = 123;
    typeid(x);    // OK
    typeid(auto); // C3541
    return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../../cpp/auto-keyword.md)<br/>
[/Zc:auto (deduzione del tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)<br/>
[typeid](../../windows/typeid-cpp-component-extensions.md)