---
description: 'Altre informazioni su: errore del compilatore C2754'
title: Errore del compilatore C2754
ms.date: 11/04/2016
f1_keywords:
- C2754
helpviewer_keywords:
- C2754
ms.assetid: 1cab66c5-da9d-4b81-b7fb-9cdc48ff1ccc
ms.openlocfilehash: 68840f85d7a7f9be18246dfa4f3176a76f0fb9ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336230"
---
# <a name="compiler-error-c2754"></a>Errore del compilatore C2754

' Speciality ': una specializzazione parziale non può avere un parametro di modello dipendente non di tipo

È stato effettuato un tentativo di specializzare parzialmente una classe modello con un parametro di modello dipendente non di tipo. ma questa operazione non è consentita.

L'esempio seguente genera l'C2754:

```cpp
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
