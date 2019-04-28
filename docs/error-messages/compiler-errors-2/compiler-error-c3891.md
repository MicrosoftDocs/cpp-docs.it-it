---
title: Errore del compilatore C3891
ms.date: 11/04/2016
f1_keywords:
- C3891
helpviewer_keywords:
- C3891
ms.assetid: 6e1a9458-97f5-4580-bc0f-aa97a1bfd20d
ms.openlocfilehash: 74b8802a165ab3265cc0f1c6a0b33b31d3db401d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62281560"
---
# <a name="compiler-error-c3891"></a>Errore del compilatore C3891

'var': un membro dati literal non può essere utilizzato come l-value

Oggetto [letterale](../../extensions/literal-cpp-component-extensions.md) variabile è di tipo const e non è possibile modificarne il valore dopo l'inizializzazione nella dichiarazione.

L'esempio seguente genera l'errore C3891:

```
// C3891.cpp
// compile with: /clr
ref struct Y1 {
   literal int staticConst = 9;
};

int main() {
   Y1::staticConst = 0;   // C3891
}
```