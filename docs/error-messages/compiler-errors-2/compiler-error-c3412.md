---
title: Errore del compilatore C3412
ms.date: 11/04/2016
f1_keywords:
- C3412
helpviewer_keywords:
- C3412
ms.assetid: aa4dd43b-54ce-4cda-85c1-1a77dd6e34fa
ms.openlocfilehash: ad241b656464746333760cfcbc134c91e49bf44e
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761416"
---
# <a name="compiler-error-c3412"></a>Errore del compilatore C3412

' template ': impossibile specializzare il modello nell'ambito corrente

Un modello non può essere specializzato nell'ambito della classe, solo nell'ambito globale o dello spazio dei nomi.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3412.

```cpp
// C3412.cpp
template <class T>
struct S {
   template <>
   struct S<int> {};   // C3412 in a class
};
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata una possibile risoluzione.

```cpp
// C3412b.cpp
// compile with: /c
template <class T>
struct S {};

template <>
struct S<int> {};
```
