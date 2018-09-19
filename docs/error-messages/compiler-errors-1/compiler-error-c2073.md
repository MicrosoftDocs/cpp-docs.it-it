---
title: Errore del compilatore C2073 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2073
dev_langs:
- C++
helpviewer_keywords:
- C2073
ms.assetid: 57908234-be7a-4ce9-b0a7-8b1ad621865e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 950ca9551a605da392c1f033cb1784ff43a7fefc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112369"
---
# <a name="compiler-error-c2073"></a>Errore del compilatore C2073

'identifier': gli elementi della matrice parzialmente inizializzata devono avere un costruttore predefinito

Gli inizializzatori insufficienti specificati per una matrice di tipi definiti dall'utente o costanti. Se un inizializzatore esplicito e il costruttore corrispondente non vengono specificati per un membro di matrice, è necessario specificare un costruttore predefinito.

L'esempio seguente genera l'errore C2073:

```
// C2073.cpp
class A {
public:
   A( int );   // constructor for ints only
};
A a[3] = { A(1), A(2) };   // C2073, no default constructor
```

```
// C2073b.cpp
// compile with: /c
class B {
public:
   B();   // default constructor declared
   B( int );
};
B b[3] = { B(1), B(2) };   // OK
```