---
title: Errore del compilatore C3541
ms.date: 11/04/2016
f1_keywords:
- C3541
helpviewer_keywords:
- C3541
ms.assetid: 252cfd4c-5fd2-415e-a17d-6b0c254350db
ms.openlocfilehash: c56be16504dbdad0c441ad90182fa99ef0445dcf
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58772631"
---
# <a name="compiler-error-c3541"></a>Errore del compilatore C3541

'type': Impossibile applicare typeid a un tipo che contiene 'auto'

Il [typeid](../../extensions/typeid-cpp-component-extensions.md) operatore non può essere applicato al tipo indicato perché contiene la `auto` identificatore.

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
[typeid](../../extensions/typeid-cpp-component-extensions.md)