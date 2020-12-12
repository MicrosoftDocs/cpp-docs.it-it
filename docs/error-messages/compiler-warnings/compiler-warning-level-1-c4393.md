---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4393'
title: Avviso del compilatore (livello 1) C4393
ms.date: 11/04/2016
f1_keywords:
- C4393
helpviewer_keywords:
- C4393
ms.assetid: 353a0539-d1ea-4c1b-8849-c9b321ec9842
ms.openlocfilehash: e68829b7e41cbc1720ceb4dced374a53e97fe8d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212714"
---
# <a name="compiler-warning-level-1-c4393"></a>Avviso del compilatore (livello 1) C4393

' var ': const senza effetti sul membro dati literal; ignorato

Un membro dati [literal](../../extensions/literal-cpp-component-extensions.md) è stato inoltre specificato come const.  Poiché un membro dati literal implica const, non è necessario aggiungere Const alla dichiarazione.

L'esempio seguente genera l'C4393:

```cpp
// C4393.cpp
// compile with: /clr /W1 /c
ref struct Y1 {
   literal const int staticConst = 10;   // C4393
   literal int staticConst2 = 10;   // OK
};
```
