---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4629'
title: Avviso del compilatore (livello 4) C4629
ms.date: 11/04/2016
f1_keywords:
- C4629
helpviewer_keywords:
- C4629
ms.assetid: 158cde12-bae5-4d43-b575-b52b35aaa0b9
ms.openlocfilehash: b357b72ca95682c33d3f4019d4663593c5c5ee8d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134173"
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
