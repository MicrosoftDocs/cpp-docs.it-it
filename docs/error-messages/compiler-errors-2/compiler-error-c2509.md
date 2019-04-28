---
title: Errore del compilatore C2509
ms.date: 11/04/2016
f1_keywords:
- C2509
helpviewer_keywords:
- C2509
ms.assetid: 339c1fcd-ec4a-456c-9f18-a9b24d9921af
ms.openlocfilehash: 21ca3bdcb156aaa654ae3d5d0c1c467a97129dcc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62165008"
---
# <a name="compiler-error-c2509"></a>Errore del compilatore C2509

'identifier': funzione membro non dichiarata in 'class'

La funzione non è dichiarata nella classe specificata.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2509.

```
// C2509.cpp
// compile with: /c
struct A {
   virtual int vfunc() = 0;
   virtual int vfunc2() = 0;
};

struct B : private A {
   using A::vfunc;
   virtual int vfunc2();
};

int B::vfunc() { return 1; }   // C2509
int B::vfunc2() { return 1; }   // OK
```