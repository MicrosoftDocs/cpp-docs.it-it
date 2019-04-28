---
title: Errore del compilatore C2733
ms.date: 11/04/2016
f1_keywords:
- C2733
helpviewer_keywords:
- C2733
ms.assetid: 67f83561-c633-407c-a2ee-f9fd16e165bf
ms.openlocfilehash: 26819f1928223b5fa96d275290105f32787057f5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208324"
---
# <a name="compiler-error-c2733"></a>Errore del compilatore C2733

secondo collegamento C della funzione in overload 'function' non consentito

Più di una funzione in overload è dichiarata con collegamento C. Quando si usa il collegamento C, solo una forma di una funzione specificata può essere esterna. Poiché le funzioni in overload con lo stesso nome non decorato, non possono essere usati con i programmi C.

L'esempio seguente genera l'errore C2733:

```
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