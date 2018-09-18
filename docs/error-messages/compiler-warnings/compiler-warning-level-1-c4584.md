---
title: Compilatore avviso (livello 1) C4584 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4584
dev_langs:
- C++
helpviewer_keywords:
- C4584
ms.assetid: ad86582f-cb8c-4d21-8c4c-a6c800059e25
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9db97bf35034f7ca628f860924bfb9a1fccc942f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46036254"
---
# <a name="compiler-warning-level-1-c4584"></a>Avviso del compilatore (livello 1) C4584

'class1': classe di base 'class2' è già una classe di base di 'class3'

La classe definita eredita da due classi, uno dei quali eredita da altra. Ad esempio:

```
// C4584.cpp
// compile with: /W1 /LD
class A {
};

class B : public A {
};

class C : public A, public B { // C4584
};
```

In questo caso, viene generato un avviso sulla classe C perché eredita sia dalla classe A e B, che eredita anche dalla classe A. Questo avviso viene utilizzato come un promemoria che è necessario qualificare l'utilizzo di membri di queste classi di base o verrà generato un errore del compilatore a causa dell'ambiguità in quale membro di classe si fa riferimento.