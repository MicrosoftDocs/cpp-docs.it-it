---
title: Errore del compilatore C2477 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2477
dev_langs:
- C++
helpviewer_keywords:
- C2477
ms.assetid: 60bc324b-6605-4833-8099-a291efc712e7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4a3e8a9f76526ecc170b30436ff395d54f8d5395
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46020170"
---
# <a name="compiler-error-c2477"></a>Errore del compilatore C2477

'member': membro dati statici non possa essere inizializzato tramite classi derivate

Un membro dati statici di una classe modello è stato inizializzato in modo non corretto. Si tratta di una modifica importante riguardo le versioni del compilatore Visual C++ precedenti a Visual Studio .NET 2003, per la conformità allo standard ISO C++.

L'esempio seguente genera l'errore C2477:

```
// C2477.cpp
// compile with: /Za /c
template <class T>
struct S {
   static int n;
};

struct X {};
struct A: S<X> {};

int A::n = 0;   // C2477

template<>
int S<X>::n = 0;
```