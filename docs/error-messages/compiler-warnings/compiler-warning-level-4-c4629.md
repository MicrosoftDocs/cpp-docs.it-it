---
title: Avviso del compilatore (livello 4) C4629
ms.date: 11/04/2016
f1_keywords:
- C4629
helpviewer_keywords:
- C4629
ms.assetid: 158cde12-bae5-4d43-b575-b52b35aaa0b9
ms.openlocfilehash: 4aaaf3d592398981c1266a0ffbc1625da7d906af
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74990628"
---
# <a name="compiler-warning-level-4-c4629"></a>Avviso del compilatore (livello 4) C4629

utilizzato digraph; la sequenza di caratteri 'digraph' è stata interpretata come token 'char' (se non è corretto, inserire uno spazio tra i due caratteri)

In [/Za](../../build/reference/za-ze-disable-language-extensions.md)viene generato un avviso quando viene rilevato un digraph.

L'esempio seguente genera l'errore C4629:

```cpp
// C4629.cpp
// compile with: /Za /W4
int main()
<%   // C4629 <% digraph for {
}
```
