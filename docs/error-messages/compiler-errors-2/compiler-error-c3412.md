---
description: 'Altre informazioni su: errore del compilatore C3412'
title: Errore del compilatore C3412
ms.date: 11/04/2016
f1_keywords:
- C3412
helpviewer_keywords:
- C3412
ms.assetid: aa4dd43b-54ce-4cda-85c1-1a77dd6e34fa
ms.openlocfilehash: aa0dc6cfeac193afc99d003cd821663bcfc139c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97313190"
---
# <a name="compiler-error-c3412"></a>Errore del compilatore C3412

' template ': impossibile specializzare il modello nell'ambito corrente

Un modello non può essere specializzato nell'ambito della classe, solo nell'ambito globale o dello spazio dei nomi.

## <a name="examples"></a>Esempio

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
