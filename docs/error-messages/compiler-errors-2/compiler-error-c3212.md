---
description: 'Altre informazioni su: errore del compilatore C3212'
title: Errore del compilatore C3212
ms.date: 11/04/2016
f1_keywords:
- C3212
helpviewer_keywords:
- C3212
ms.assetid: 9e271bb6-a51f-4b96-b26b-9f4ca28fca0a
ms.openlocfilehash: f78234f1176319739be74841e0a982afa591045d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97173844"
---
# <a name="compiler-error-c3212"></a>Errore del compilatore C3212

'specialization': la specializzazione esplicita di un membro di un modello deve essere un membro di una specializzazione esplicita

Una specializzazione esplicita non è stata creata nel formato corretto.

L'esempio seguente genera l'errore C3212:

```cpp
// C3212.cpp
// compile with: /LD
template <class T>
struct S {
   template <class T1>
   struct S1;
};

template <class T>   // C3212
template <>
struct S<T>::S1<int> {};

/*
// try the following instead
template <>
template <>
struct S<int>::S1<int> {};
*/

/*
// or, the following
template <>
struct S<int> {
   template <class T1>
   struct S1;
};

template <>
struct S<int>::S1<int> {
};
*/
```
