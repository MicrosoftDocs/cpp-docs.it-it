---
title: Compilatore avviso (livello 4) C4629 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4629
dev_langs:
- C++
helpviewer_keywords:
- C4629
ms.assetid: 158cde12-bae5-4d43-b575-b52b35aaa0b9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e5f728d60a654a672002610d41aa4e387b4479e0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46081324"
---
# <a name="compiler-warning-level-4-c4629"></a>Avviso del compilatore (livello 4) C4629

utilizzato digraph; la sequenza di caratteri 'digraph' è stata interpretata come token 'char' (se non è corretto, inserire uno spazio tra i due caratteri)

In [/Za](../../build/reference/za-ze-disable-language-extensions.md)viene generato un avviso quando viene rilevato un digraph.

L'esempio seguente genera l'errore C4629:

```
// C4629.cpp
// compile with: /Za /W4
int main()
<%   // C4629 <% digraph for {
}
```