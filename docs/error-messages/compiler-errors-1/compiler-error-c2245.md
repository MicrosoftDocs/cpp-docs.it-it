---
title: Errore del compilatore C2245 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2245
dev_langs:
- C++
helpviewer_keywords:
- C2245
ms.assetid: 08aaeadf-10ec-485a-b2a6-6e775289082b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2df4d79afc9c934abb9296a78c6cb5f0dd4ffde5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46080025"
---
# <a name="compiler-error-c2245"></a>Errore del compilatore C2245

funzione membro 'function' non esistente specificata come friend (la firma della funzione membro non corrisponde ad alcun overload)

Una funzione specificata come friend non è stata trovata dal compilatore.

L'esempio seguente genera l'errore C2245:

```
// C2245.cpp
// compile with: /c
class B {
   void f(int i);
};

class A {
   int m_i;
   friend void B::f(char);   // C2245
   // try the following line instead
   // friend void B::f(int);
};

void B::f(int i) {
   A a;
   a.m_i = 0;
}
```