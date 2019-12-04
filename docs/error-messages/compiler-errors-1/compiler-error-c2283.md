---
title: Errore del compilatore C2283
ms.date: 11/04/2016
f1_keywords:
- C2283
helpviewer_keywords:
- C2283
ms.assetid: 8a5b3175-b480-4598-a1f7-0b50504c5caa
ms.openlocfilehash: 7f3568aa5dfee116a225256a4452465c05f72f6f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759152"
---
# <a name="compiler-error-c2283"></a>Errore del compilatore C2283

'identifier': identificatore pure o identificatore di override abstract non consentito per struct senza nome

Una funzione membro di una struttura o di una classe senza nome è dichiarata in modo non valido con un identificatore pure.

L'esempio seguente genera l'errore C2283:

```cpp
// C2283.cpp
// compile with: /c
struct {
   virtual void func() = 0;   // C2283
};
struct T {
   virtual void func() = 0;   // OK
};
```
