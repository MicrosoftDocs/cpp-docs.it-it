---
title: Errore del compilatore C3412 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3412
dev_langs:
- C++
helpviewer_keywords:
- C3412
ms.assetid: aa4dd43b-54ce-4cda-85c1-1a77dd6e34fa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f6a04de132c85cb09a960d3a0edfcb3b07127119
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054577"
---
# <a name="compiler-error-c3412"></a>Errore del compilatore C3412

'template': Impossibile specializzare il modello nell'ambito corrente

Un modello non possa essere specializzato in ambito di classe, solo nel modello globale o dello spazio dei nomi.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3412.

```
// C3412.cpp
template <class T>
struct S {
   template <>
   struct S<int> {};   // C3412 in a class
};
```

## <a name="example"></a>Esempio

L'esempio seguente illustra una possibile soluzione.

```
// C3412b.cpp
// compile with: /c
template <class T>
struct S {};

template <>
struct S<int> {};
```