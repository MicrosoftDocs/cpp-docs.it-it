---
title: Errore del compilatore C3737
ms.date: 11/04/2016
f1_keywords:
- C3737
helpviewer_keywords:
- C3737
ms.assetid: ca2aeb23-2491-4ccb-8838-884abf7065c8
ms.openlocfilehash: b6c2a85556e96ff6176e158b7d75a844bb5710d6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62327886"
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
