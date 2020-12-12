---
description: 'Altre informazioni su: errore del compilatore C2733'
title: Errore del compilatore C2733
ms.date: 11/04/2016
f1_keywords:
- C2733
helpviewer_keywords:
- C2733
ms.assetid: 67f83561-c633-407c-a2ee-f9fd16e165bf
ms.openlocfilehash: f957be13b8c1de1ee3ada98ffd42f0d89fc7755c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123201"
---
# <a name="compiler-error-c2733"></a>Errore del compilatore C2733

secondo collegamento C della funzione in overload ' Function ' non consentito

Più di una funzione in overload viene dichiarata con il collegamento C. Quando si usa il collegamento C, solo un form di una funzione specificata può essere esterno. Poiché le funzioni in overload hanno lo stesso nome non decorato, non possono essere usate con i programmi C.

L'esempio seguente genera l'C2733:

```cpp
// C2733.cpp
extern "C" {
   void F1(int);
}

extern "C" {
   void F1();   // C2733
   // try the following line instead
   // void F2();
}
```
