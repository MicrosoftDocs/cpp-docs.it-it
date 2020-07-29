---
title: Errore del compilatore C3540
ms.date: 11/04/2016
f1_keywords:
- C3540
helpviewer_keywords:
- C3540
ms.assetid: 3c0c959c-e3b7-40eb-b922-ccac44bd9d85
ms.openlocfilehash: a041961e8a91832be67d8def8f2a6a3ef70906d9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223395"
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

## <a name="see-also"></a>Vedere anche

[Parola chiave auto](../../cpp/auto-keyword.md)<br/>
[/Zc: auto (deduce il tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)<br/>
[Operatore sizeof](../../cpp/sizeof-operator.md)
