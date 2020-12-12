---
description: 'Altre informazioni su: errore del compilatore C2153'
title: Errore del compilatore C2153
ms.date: 11/04/2016
f1_keywords:
- C2153
helpviewer_keywords:
- C2153
ms.assetid: cfc50cb7-9a0f-4b5b-879a-d419c99f7be1
ms.openlocfilehash: 0b5ded0908f3c12033f1c2b3b034b41b52e847cb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97181293"
---
# <a name="compiler-error-c2153"></a>Errore del compilatore C2153

le costanti esadecimali devono avere almeno una cifra esadecimale

Le costanti esadecimali 0x, 0X e \x non sono valide. Almeno una cifra esadecimale deve seguire x o X.

L'esempio seguente genera l'C2153:

```cpp
// C2153.cpp
int main() {
   int a= 0x;    // C2153
   int b= 0xA;   // OK
}
```
