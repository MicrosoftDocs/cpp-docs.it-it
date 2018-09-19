---
title: Errore del compilatore C2104 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2104
dev_langs:
- C++
helpviewer_keywords:
- C2104
ms.assetid: 2ea78896-72a6-4901-a1fa-f33ea88ad61b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e35be180be7ded6a65585566dff6173a13ba7821
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46083379"
---
# <a name="compiler-error-c2104"></a>Errore del compilatore C2104

'&' su campo di bit ignorato

È possibile accettare l'indirizzo di un campo di bit.

L'esempio seguente genera l'errore C2104:

```
// C2104.cpp
struct X {
   int sb : 1;
};

int main() {
   X x;
   &x.sb;   // C2104
   x.sb;   // OK
}
```