---
title: Errore del compilatore C2351
ms.date: 11/04/2016
f1_keywords:
- C2351
helpviewer_keywords:
- C2351
ms.assetid: 5439ccf6-66f6-4859-964c-c73f5eddfc1b
ms.openlocfilehash: 2d93902ee0008a54da1b2ecf165e0a829362511f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665491"
---
# <a name="compiler-error-c2351"></a>Errore del compilatore C2351

sintassi di inizializzazione costruttore C++ obsoleta

In un elenco di inizializzazione di nuovo stile per un costruttore, è necessario denominare in modo esplicito ogni classe di base diretta, anche se è l'unica classe di base.

L'esempio seguente genera l'errore C2351:

```
// C2351.cpp
// compile with: /c
class B {
public:
   B() : () {}   // C2351
   B() {}   // OK
};
```