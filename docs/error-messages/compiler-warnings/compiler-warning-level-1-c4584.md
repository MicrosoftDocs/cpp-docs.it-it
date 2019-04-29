---
title: Avviso del compilatore (livello 1) C4584
ms.date: 11/04/2016
f1_keywords:
- C4584
helpviewer_keywords:
- C4584
ms.assetid: ad86582f-cb8c-4d21-8c4c-a6c800059e25
ms.openlocfilehash: 3c60575e766ea3490a40711fe26c3e402c41fbdd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62397250"
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