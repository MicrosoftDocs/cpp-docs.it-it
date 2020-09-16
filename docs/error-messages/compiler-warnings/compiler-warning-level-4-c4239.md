---
title: Avviso del compilatore (livello 4) C4239
ms.date: 11/04/2016
f1_keywords:
- C4239
helpviewer_keywords:
- C4239
ms.assetid: a23dc16a-649e-4870-9a24-275de1584fcd
ms.openlocfilehash: 25b97cfb50847a0929f3d3a97b822209e6a11900
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90686678"
---
# <a name="compiler-warning-level-4-c4239"></a>Avviso del compilatore (livello 4) C4239

utilizzata estensione non standard:' token ': conversione da' type ' a' type '

Questa conversione del tipo non è consentita dallo standard C++, ma è consentita come estensione. Questo avviso è sempre seguito da almeno una riga di spiegazione che descrive la regola del linguaggio violata.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'C4239.

```cpp
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

La conversione da tipo integrale a tipo enum non è consentita in modo esplicito.

L'esempio seguente genera l'C4239.

```cpp
// C4239b.cpp
// compile with: /W4 /c
enum E { value };
struct S {
   E e : 2;
} s = { 5 };   // C4239
// try the following line instead
// } s = { (E)5 };
```
