---
title: Errore del compilatore C3083
ms.date: 11/04/2016
f1_keywords:
- C3083
helpviewer_keywords:
- C3083
ms.assetid: 05ff791d-52bb-41eb-9511-3ef89d7f4710
ms.openlocfilehash: ee4a2bc683a757e079295c16d1022739eaa5726c
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759711"
---
# <a name="compiler-error-c3083"></a>Errore del compilatore C3083

' Function ': il simbolo a sinistra di '::' deve essere un tipo

Una funzione è stata chiamata in modo non corretto.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3083.

```cpp
// C3083.cpp
// compile with: /c
struct N {
   ~N();
};

struct N1 {
   ~N1();
};

N::N::~N() {}   // C3083
N1::~N1() {}   // OK
```
