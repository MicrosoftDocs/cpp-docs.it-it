---
description: 'Altre informazioni su: errore del compilatore C3541'
title: Errore del compilatore C3541
ms.date: 11/04/2016
f1_keywords:
- C3541
helpviewer_keywords:
- C3541
ms.assetid: 252cfd4c-5fd2-415e-a17d-6b0c254350db
ms.openlocfilehash: b579697de98556aa99077e43d28e6de828741fb5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315166"
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

## <a name="see-also"></a>Vedi anche

[Parola chiave auto](../../cpp/auto-cpp.md)<br/>
[/Zc: auto (deduce il tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)<br/>
[TypeId](../../extensions/typeid-cpp-component-extensions.md)
