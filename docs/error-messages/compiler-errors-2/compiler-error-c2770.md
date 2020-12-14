---
description: 'Altre informazioni su: errore del compilatore C2770'
title: Errore del compilatore C2770
ms.date: 11/04/2016
f1_keywords:
- C2770
helpviewer_keywords:
- C2770
ms.assetid: 100001b5-80b0-4971-8ff6-9023f443c926
ms.openlocfilehash: 36148e13f0039e38cce26ebdfe4a94c00b0178eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223477"
---
# <a name="compiler-error-c2770"></a>Errore del compilatore C2770

argomento/i template_or_generic esplicito non valido per ' template '

I candidati del modello di funzione con modello esplicito o argomenti generici hanno generato tipi di funzione non consentiti.

L'esempio seguente genera l'C2770:

```cpp
// C2770.cpp
#include <stdio.h>
template <class T>
int f(typename T::B*);   // expects type with member B

struct Err {};

int main() {
   f<int>(0);   // C2770 int has no B
   // try the following line instead
   f<OK>(0);
}
```
