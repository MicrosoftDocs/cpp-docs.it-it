---
title: Avviso del compilatore (livello 4) C4238
ms.date: 11/04/2016
f1_keywords:
- C4238
helpviewer_keywords:
- C4238
ms.assetid: 5d4051d3-7b0f-43ea-8c8d-d194bfdceb71
ms.openlocfilehash: 982457ded987f6aee4f2891bbb7d9103b830cc99
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541782"
---
# <a name="compiler-warning-level-4-c4238"></a>Avviso del compilatore (livello 4) C4238

utilizzata estensione non standard: rvalue di classe utilizzato come lvalue

Per la compatibilità con le versioni precedenti C++di Visual, le estensioni Microsoft ( **/ze**) consentono di usare un tipo di classe come rvalue in un contesto che accetta implicitamente o in modo esplicito l'indirizzo. In alcuni casi, ad esempio l'esempio riportato di seguito, questo può essere pericoloso.

## <a name="example"></a>Esempio

```cpp
// C4238.cpp
// compile with: /W4 /c
struct C {
   C() {}
};

C * pC = &C();   // C4238
```

Questo utilizzo causa un errore in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).