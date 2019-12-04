---
title: Errore del compilatore C3540
ms.date: 11/04/2016
f1_keywords:
- C3540
helpviewer_keywords:
- C3540
ms.assetid: 3c0c959c-e3b7-40eb-b922-ccac44bd9d85
ms.openlocfilehash: 94f35f9f3bf64e09087f28a11a4fb9802d9d3c0f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761517"
---
# <a name="compiler-error-c3540"></a>Errore del compilatore C3540

' type ': non è possibile applicare sizeof a un tipo che contiene ' auto '

Non è possibile applicare l'operatore [sizeof](../../cpp/sizeof-operator.md) al tipo indicato perché contiene l'identificatore `auto`.

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

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../../cpp/auto-keyword.md)<br/>
[/Zc:auto (deduzione del tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)<br/>
[Operatore sizeof](../../cpp/sizeof-operator.md)
