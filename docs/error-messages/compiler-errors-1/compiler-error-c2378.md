---
title: Errore del compilatore C2378
ms.date: 11/04/2016
f1_keywords:
- C2378
helpviewer_keywords:
- C2378
ms.assetid: 507a91c6-ca72-48df-b3a4-2cf931c86806
ms.openlocfilehash: fb6d228826cf1b21904863505c0963069e89d32d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50436582"
---
# <a name="compiler-error-c2378"></a>Errore del compilatore C2378

'identifier': ridefinizione. Impossibile eseguire l'overload del simbolo con typedef

L'identificatore è stato ridefinito come `typedef`.

L'esempio seguente genera l'errore C2378:

```
// C2378.cpp
// compile with: /c
int i;
typedef int i;   // C2378
typedef int b;   // OK
```