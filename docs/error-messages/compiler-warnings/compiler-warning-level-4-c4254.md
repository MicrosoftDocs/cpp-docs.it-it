---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4254'
title: Avviso del compilatore (livello 4) C4254
ms.date: 11/04/2016
f1_keywords:
- c4254
helpviewer_keywords:
- C4254
ms.assetid: c7dcef24-d535-4c98-bb41-fc3d2b88fd11
ms.openlocfilehash: 112a8c4af016b15f6a5ec4c6e138381a8ee32405
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294704"
---
# <a name="compiler-warning-level-4-c4254"></a>Avviso del compilatore (livello 4) C4254

' operator ': conversione da' tipo1' a' tipo2', possibile perdita di dati

Un campo di bit di dimensioni maggiori è stato assegnato a un campo di bit più piccolo. Potrebbe verificarsi una perdita di dati.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4254:

```cpp
// C4254.cpp
// compile with: /W4
#pragma warning(default: 4254)

struct X {
   int a : 20;
   int b : 12;
};

int main() {
   X *x = new X();
   x->b = 10;
   x->a = 4;
   x->a = x->b;    // OK
   x->b = x->a;    // C4254
};
```
