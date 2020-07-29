---
title: Errore del compilatore C3737
ms.date: 11/04/2016
f1_keywords:
- C3737
helpviewer_keywords:
- C3737
ms.assetid: ca2aeb23-2491-4ccb-8838-884abf7065c8
ms.openlocfilehash: 6b61904fac09145ba749138a730603fcfdbb862d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223382"
---
# <a name="compiler-error-c3737"></a>Errore del compilatore C3737

' Delegate ': un delegato non può avere una convenzione di chiamata esplicita

Non è possibile specificare la [convenzione di chiamata](../../cpp/calling-conventions.md) per un oggetto **`delegate`** .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3737:

```cpp
// C3737a.cpp
// compile with: /clr
delegate void __stdcall MyFunc();   // C3737
// Try the following line instead.
// delegate void MyFunc();

int main() {
}
```
