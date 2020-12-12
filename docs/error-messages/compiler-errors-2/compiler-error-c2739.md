---
description: 'Altre informazioni su: errore del compilatore C2739'
title: Errore del compilatore C2739
ms.date: 11/04/2016
f1_keywords:
- C2739
helpviewer_keywords:
- C2739
ms.assetid: 5b63e435-7631-43d7-805e-f2adefb7e517
ms.openlocfilehash: 2a65f552eeb8a0b475b5559aaa3f1ab6b0da0e25
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123084"
---
# <a name="compiler-error-c2739"></a>Errore del compilatore C2739

'number': le dimensioni di matrici gestite o WinRT esplicite devono essere comprese tra 1 e 32

Una dimensione di matrice non è compresa tra 1 e 32.

L'esempio seguente genera l'errore C2739 e mostra come risolverlo:

```cpp
// C2739.cpp
// compile with: /clr
int main() {
   array<int, -1>^a;   // C2739
   // try the following line instead
   // array<int, 2>^a;
}
```
