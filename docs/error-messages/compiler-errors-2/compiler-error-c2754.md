---
title: Errore del compilatore C2754
ms.date: 11/04/2016
f1_keywords:
- C2754
helpviewer_keywords:
- C2754
ms.assetid: 1cab66c5-da9d-4b81-b7fb-9cdc48ff1ccc
ms.openlocfilehash: cfe6f8faa1b00faf32ae53e6c25c23532c9f3a3f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50543018"
---
# <a name="compiler-error-c2754"></a>Errore del compilatore C2754

'specialization': una specializzazione parziale non può avere un parametro di modello non di tipo dipendente

È stato effettuato un tentativo per specializzare parzialmente una classe di modello che ha un parametro di modello non di tipo dipendente. ma questa operazione non è consentita.

L'esempio seguente genera l'errore C2754:

```
// C2754.cpp
// compile with: /c

template<class T, T t>
struct A {};

template<class T, int N>
struct B {};

template<class T> struct A<T,5> {};   // C2754
template<> struct A<int,5> {};   // OK
template<class T> struct B<T,5> {};   // OK
```