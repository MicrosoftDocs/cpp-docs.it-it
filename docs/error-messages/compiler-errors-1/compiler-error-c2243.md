---
description: 'Altre informazioni su: errore del compilatore C2243'
title: Errore del compilatore C2243
ms.date: 11/04/2016
f1_keywords:
- C2243
helpviewer_keywords:
- C2243
ms.assetid: b90065bb-d251-4ba9-8b4c-280ee13fa9c0
ms.openlocfilehash: 48947ee39e61b2db1a64023f730b89d8be8d1907
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302193"
---
# <a name="compiler-error-c2243"></a>Errore del compilatore C2243

conversione 'conversion type' da 'type1' a 'type2' esistente ma inaccessibile

La protezione dell'accesso ( **`protected`** o **`private`** ) ha impedito la conversione da un puntatore a una classe derivata a un puntatore alla classe di base.

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

Le classi di base con l' **`protected`** **`private`** accesso o non sono accessibili ai client della classe derivata. Questi livelli di controllo di accesso vengono usati per indicare che la classe di base è un dettaglio dell'implementazione che non dovrebbe essere visibile ai client. Usare la derivazione pubblica se si vuole che i client della classe derivata abbiano accesso alla conversione implicita di un puntatore a una classe derivata in un puntatore alla classe di base.
