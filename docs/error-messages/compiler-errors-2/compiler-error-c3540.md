---
description: 'Altre informazioni su: errore del compilatore C3540'
title: Errore del compilatore C3540
ms.date: 11/04/2016
f1_keywords:
- C3540
helpviewer_keywords:
- C3540
ms.assetid: 3c0c959c-e3b7-40eb-b922-ccac44bd9d85
ms.openlocfilehash: 85106061b2631d3a392b05a50c49f24566cdd4cb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97112453"
---
# <a name="compiler-error-c3540"></a>Errore del compilatore C3540

' type ': non è possibile applicare sizeof a un tipo che contiene ' auto '

Non è possibile applicare l'operatore [sizeof](../../cpp/sizeof-operator.md) al tipo indicato perché contiene l' **`auto`** identificatore.

## <a name="example"></a>Esempio

Nell'esempio seguente viene restituito C3540.

```cpp
// C3540.cpp
// Compile with /Zc:auto
int main() {
    auto x = 123;
    sizeof(x);    // OK
    sizeof(auto); // C3540
    return 0;
}
```

## <a name="see-also"></a>Vedi anche

[Parola chiave auto](../../cpp/auto-cpp.md)<br/>
[/Zc: auto (deduce il tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)<br/>
[Operatore sizeof](../../cpp/sizeof-operator.md)
