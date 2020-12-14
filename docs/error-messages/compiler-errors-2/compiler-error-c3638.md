---
description: 'Altre informazioni su: errore del compilatore C3638'
title: Errore del compilatore C3638
ms.date: 11/04/2016
f1_keywords:
- C3638
helpviewer_keywords:
- C3638
ms.assetid: 8d8bc5ca-75aa-480e-b6b6-3178fab51b1d
ms.openlocfilehash: 1d1cc59cd8065a5b0e661292b717ba885c6febeb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97239194"
---
# <a name="compiler-error-c3638"></a>Errore del compilatore C3638

' operator ': non è possibile ridefinire gli operatori di conversione boxing e unboxing standard

Il compilatore definisce un operatore di conversione per ogni classe gestita per supportare la conversione boxing implicita. Questo operatore non può essere ridefinito.

Per altre informazioni, vedere [boxing implicito](../../extensions/boxing-cpp-component-extensions.md).

L'esempio seguente genera l'C3638:

```cpp
// C3638.cpp
// compile with: /clr
value struct V {
   V(){}
   static operator V^(V);   // C3638
};

int main() {
   V myV;
   V ^ pmyV = myV;   // operator supports implicit boxing
}
```
