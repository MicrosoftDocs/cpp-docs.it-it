---
title: Errore del compilatore C3196
ms.date: 11/04/2016
f1_keywords:
- C3196
helpviewer_keywords:
- C3196
ms.assetid: d9c38a13-191d-472d-aa2b-f61a6459d16c
ms.openlocfilehash: f491bfd129158e949006971be53dadd9a4913035
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74739171"
---
# <a name="compiler-error-c3196"></a>Errore del compilatore C3196

' keyword ': usato più di una volta

Una parola chiave è stata usata più di una volta.

L'esempio seguente genera l'C3196:

```cpp
// C3196.cpp
// compile with: /clr
ref struct R abstract abstract {};   // C3196
ref struct S abstract {};   // OK
```
