---
title: Avviso del compilatore (livello 4) C4239
ms.date: 11/04/2016
f1_keywords:
- C4239
helpviewer_keywords:
- C4239
ms.assetid: a23dc16a-649e-4870-9a24-275de1584fcd
ms.openlocfilehash: 067d1aef41280f4d14fe799e4f4ee26a9f1b9f5a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401020"
---
# <a name="compiler-warning-level-4-c4239"></a>Avviso del compilatore (livello 4) C4239

utilizzata estensione non standard: 'token': conversione da 'type' a 'type'

Tale conversione non è consentita dallo standard C++, ma è consentito come estensione. Questo avviso viene sempre seguito da almeno una riga di una spiegazione che descrive la regola di linguaggio violata.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4239.

```
// C4239.cpp
// compile with: /W4 /c
struct C {
   C() {}
};

void func(void) {
   C & rC = C();   // C4239
   const C & rC2 = C();   // OK
   rC2;
}
```

## <a name="example"></a>Esempio

Conversione da tipo integrale a tipo di enumerazione non è consentita in modo esplicito.

L'esempio seguente genera l'errore C4239.

```
// C4239b.cpp
// compile with: /W4 /c
enum E { value };
struct S {
   E e : 2;
} s = { 5 };   // C4239
// try the following line instead
// } s = { (E)5 };
```