---
title: Errore del compilatore C3412
ms.date: 11/04/2016
f1_keywords:
- C3412
helpviewer_keywords:
- C3412
ms.assetid: aa4dd43b-54ce-4cda-85c1-1a77dd6e34fa
ms.openlocfilehash: 6918e3be0a0288bab50d63a188bc33df87fe7754
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90742892"
---
# <a name="compiler-error-c3412"></a>Errore del compilatore C3412

' template ': impossibile specializzare il modello nell'ambito corrente

Un modello non può essere specializzato nell'ambito della classe, solo nell'ambito globale o dello spazio dei nomi.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'C3412.

```cpp
// C3412.cpp
template <class T>
struct S {
   template <>
   struct S<int> {};   // C3412 in a class
};
```

Nell'esempio seguente viene illustrata una possibile risoluzione.

```cpp
// C3412b.cpp
// compile with: /c
template <class T>
struct S {};

template <>
struct S<int> {};
```
