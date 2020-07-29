---
title: Errore del compilatore C3541
ms.date: 11/04/2016
f1_keywords:
- C3541
helpviewer_keywords:
- C3541
ms.assetid: 252cfd4c-5fd2-415e-a17d-6b0c254350db
ms.openlocfilehash: 32926d0ef9343bad9ed73458e4d52d317b628109
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221042"
---
# <a name="compiler-error-c3541"></a>Errore del compilatore C3541

' type ': typeid non può essere applicato a un tipo che contiene ' auto '

Non è possibile applicare l'operatore [typeid](../../extensions/typeid-cpp-component-extensions.md) al tipo indicato perché contiene l' **`auto`** identificatore.

## <a name="example"></a>Esempio

Nell'esempio seguente viene restituito C3541.

```cpp
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

[Parola chiave auto](../../cpp/auto-keyword.md)<br/>
[/Zc: auto (deduce il tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)<br/>
[TypeId](../../extensions/typeid-cpp-component-extensions.md)
