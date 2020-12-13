---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4238'
title: Avviso del compilatore (livello 4) C4238
ms.date: 11/04/2016
f1_keywords:
- C4238
helpviewer_keywords:
- C4238
ms.assetid: 5d4051d3-7b0f-43ea-8c8d-d194bfdceb71
ms.openlocfilehash: 8999d9ebeb4583256360f6223d4bf51a842fcb01
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334867"
---
# <a name="compiler-warning-level-4-c4238"></a>Avviso del compilatore (livello 4) C4238

utilizzata estensione non standard: rvalue di classe utilizzato come lvalue

Per la compatibilità con le versioni precedenti di Visual C++, le estensioni Microsoft (**/ze**) consentono di usare un tipo di classe come rvalue in un contesto che accetta implicitamente o in modo esplicito l'indirizzo. In alcuni casi, ad esempio l'esempio riportato di seguito, questo può essere pericoloso.

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
