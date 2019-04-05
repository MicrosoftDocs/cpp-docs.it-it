---
title: Errore del compilatore C3540
ms.date: 11/04/2016
f1_keywords:
- C3540
helpviewer_keywords:
- C3540
ms.assetid: 3c0c959c-e3b7-40eb-b922-ccac44bd9d85
ms.openlocfilehash: 57e4145557272f76a890a356c79982346cd74d7e
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59037169"
---
# <a name="compiler-error-c3540"></a>Errore del compilatore C3540

'type': Impossibile applicare sizeof a un tipo che contiene 'auto'

Il [sizeof](../../cpp/sizeof-operator.md) operatore non può essere applicato al tipo indicato perché contiene la `auto` identificatore.

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3540.

```
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
[/Zc:auto (deduzione del tipo di variabile)](../../build/reference/zc-auto-deduce-variable-type.md)<br/>
[Operatore sizeof](../../cpp/sizeof-operator.md)