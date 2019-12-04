---
title: Errore del compilatore C2378
ms.date: 11/04/2016
f1_keywords:
- C2378
helpviewer_keywords:
- C2378
ms.assetid: 507a91c6-ca72-48df-b3a4-2cf931c86806
ms.openlocfilehash: 63063ec98bbc4d42f3237fd42e42b9fdce489892
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74745421"
---
# <a name="compiler-error-c2378"></a>Errore del compilatore C2378

'identifier': ridefinizione. Impossibile eseguire l'overload del simbolo con typedef

L'identificatore è stato ridefinito come `typedef`.

L'esempio seguente genera l'errore C2378:

```cpp
// C2378.cpp
// compile with: /c
int i;
typedef int i;   // C2378
typedef int b;   // OK
```
