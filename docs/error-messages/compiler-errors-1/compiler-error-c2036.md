---
title: Errore del compilatore C2036 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2036
dev_langs:
- C++
helpviewer_keywords:
- C2036
ms.assetid: 895821a9-65d1-44b5-bde1-dae827f3e486
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 105fcbaacbc35c003720cf8b1337a52e5264b26e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025347"
---
# <a name="compiler-error-c2036"></a>Errore del compilatore C2036

'identifier': dimensione sconosciuta

Un'operazione su `identifier` richiede le dimensioni dell'oggetto dati, che non può essere determinato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2036.

```
// C2036.c
// a C program
struct A* pA;
struct B { int i; } *pB;
int main() {
   pA++;   // C2036, size of A not known
   ((char*)pA)++;   // OK

   pB++;   // OK
}
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2036.

```
// C2036_2.cpp
// a C++ program
struct A* pA;
int main() {
   pA++;   // C2036, size of A not known
   ((char*&)pA)++;   // OK, if sizeof(A) == sizeof(char)
}
```