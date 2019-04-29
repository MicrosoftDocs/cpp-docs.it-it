---
title: Avviso del compilatore (livello 4) C4238
ms.date: 11/04/2016
f1_keywords:
- C4238
helpviewer_keywords:
- C4238
ms.assetid: 5d4051d3-7b0f-43ea-8c8d-d194bfdceb71
ms.openlocfilehash: c5ffa07b06f010d10edc14aa7576bb614aa9dd04
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401033"
---
# <a name="compiler-warning-level-4-c4238"></a>Avviso del compilatore (livello 4) C4238

utilizzata estensione non standard: rvalue di classe utilizzato come lvalue

Per garantire la compatibilità con le versioni precedenti di Visual C++, le estensioni Microsoft (**/Ze**) consentono di usare un tipo di classe come un rvalue in un contesto che in modo implicito o esplicito accetta l'indirizzo. In alcuni casi, come illustrato nell'esempio riportato di seguito, può essere pericolosa.

## <a name="example"></a>Esempio

```
// C4238.cpp
// compile with: /W4 /c
struct C {
   C() {}
};

C * pC = &C();   // C4238
```

Questo utilizzo provoca un errore in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).