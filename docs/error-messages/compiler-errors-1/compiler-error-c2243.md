---
title: Errore del compilatore C2243
ms.date: 11/04/2016
f1_keywords:
- C2243
helpviewer_keywords:
- C2243
ms.assetid: b90065bb-d251-4ba9-8b4c-280ee13fa9c0
ms.openlocfilehash: f5a62b1c12b94735d0383697bf7a92d12d64b21f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757800"
---
# <a name="compiler-error-c2243"></a>Errore del compilatore C2243

conversione 'conversion type' da 'type1' a 'type2' esistente ma inaccessibile

La protezione dell'accesso (`protected` o `private`) ha impedito la conversione da un puntatore a una classe derivata a un puntatore alla classe di base.

L'esempio seguente genera l'errore C2243:

```cpp
// C2243.cpp
// compile with: /c
class B {};
class D : private B {};
class E : public B {};

D d;
B *p = &d;   // C2243

E e;
B *p2 = &e;
```

Le classi di base con accesso `protected` o `private` non sono accessibili ai client della classe derivata. Questi livelli di controllo di accesso vengono usati per indicare che la classe di base è un dettaglio dell'implementazione che non dovrebbe essere visibile ai client. Usare la derivazione pubblica se si vuole che i client della classe derivata abbiano accesso alla conversione implicita di un puntatore a una classe derivata in un puntatore alla classe di base.
