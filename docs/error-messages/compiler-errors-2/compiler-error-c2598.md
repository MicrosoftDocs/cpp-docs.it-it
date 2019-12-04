---
title: Errore del compilatore C2598
ms.date: 11/04/2016
f1_keywords:
- C2598
helpviewer_keywords:
- C2598
ms.assetid: 40777c62-39ba-441e-b081-f49f94b43547
ms.openlocfilehash: a1ad34d454c5dc80feaac1df1383854391100ab0
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759321"
---
# <a name="compiler-error-c2598"></a>Errore del compilatore C2598

la specifica del collegamento deve essere in ambito globale

L'identificatore di collegamento viene dichiarato nell'ambito locale.

L'esempio seguente genera l'C2598:

```cpp
// C2598.cpp
// compile with: /c
void func() {
   extern "C" int func2();   // C2598
}

extern "C" int func( int i );
```
