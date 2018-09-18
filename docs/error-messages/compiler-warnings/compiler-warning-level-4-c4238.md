---
title: Compilatore avviso (livello 4) C4238 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4238
dev_langs:
- C++
helpviewer_keywords:
- C4238
ms.assetid: 5d4051d3-7b0f-43ea-8c8d-d194bfdceb71
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f4d5f358d08f81e6b8097140ad47d54f4b3b3fed
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46057028"
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