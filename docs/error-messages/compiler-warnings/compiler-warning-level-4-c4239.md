---
title: Avviso (livello 4) del compilatore C4239 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4239
dev_langs:
- C++
helpviewer_keywords:
- C4239
ms.assetid: a23dc16a-649e-4870-9a24-275de1584fcd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 89a68de05ff999e72fc02a75d5958a7e2589f8ed
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46032841"
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