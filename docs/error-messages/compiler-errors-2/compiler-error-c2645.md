---
description: 'Altre informazioni su: errore del compilatore C2645'
title: Errore del compilatore C2645
ms.date: 11/04/2016
f1_keywords:
- C2645
helpviewer_keywords:
- C2645
ms.assetid: 6609c2fa-c3b2-4a6b-8e8d-58fb52f67175
ms.openlocfilehash: d757b171fd314a5ed90fafe76d1b45074ec5b604
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160831"
---
# <a name="compiler-error-c2645"></a>Errore del compilatore C2645

Nessun nome completo per il puntatore al membro (trovato ':: *')

La dichiarazione di un puntatore a un membro non specifica una classe.

L'esempio seguente genera l'C2645:

```cpp
// C2645.cpp
class A {};
int main() {
   int B::* bp;   // C2645 B not defined
   int A::* ap;   // OK
}
```
