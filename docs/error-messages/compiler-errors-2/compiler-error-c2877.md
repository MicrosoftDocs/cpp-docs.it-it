---
title: Errore del compilatore C2877 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2877
dev_langs:
- C++
helpviewer_keywords:
- C2877
ms.assetid: 0b54837e-fcae-4d90-9658-623250435e24
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e2f293cefdc37c4adb2882f52d6676dcd912cfef
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46047538"
---
# <a name="compiler-error-c2877"></a>Errore del compilatore C2877

'symbol' non è accessibile da 'class'

Tutti i membri derivati da una classe base devono essere accessibili nella classe derivata.

L'esempio seguente genera l'errore C2877:

```
// C2877.cpp
// compile with: /c
class A {
private:
   int a;
};

class B : public A {
   using A::a;   // C2877
};
```