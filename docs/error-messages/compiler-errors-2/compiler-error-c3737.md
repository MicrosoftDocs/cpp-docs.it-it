---
title: Errore del compilatore C3737
ms.date: 11/04/2016
f1_keywords:
- C3737
helpviewer_keywords:
- C3737
ms.assetid: ca2aeb23-2491-4ccb-8838-884abf7065c8
ms.openlocfilehash: b6c2a85556e96ff6176e158b7d75a844bb5710d6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50458630"
---
# <a name="compiler-error-c3737"></a>Errore del compilatore C3737

'delegate': un delegato non può avere una convenzione di chiamata esplicita

Non è possibile specificare il [convenzione di chiamata](../../cpp/calling-conventions.md) per un `delegate`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3737:

```
// C3737a.cpp
// compile with: /clr
delegate void __stdcall MyFunc();   // C3737
// Try the following line instead.
// delegate void MyFunc();

int main() {
}
```
