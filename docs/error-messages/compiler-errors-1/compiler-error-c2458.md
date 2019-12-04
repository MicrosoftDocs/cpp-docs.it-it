---
title: Errore del compilatore C2458
ms.date: 11/04/2016
f1_keywords:
- C2458
helpviewer_keywords:
- C2458
ms.assetid: ed21901f-1067-42f5-b275-19b480decf5c
ms.openlocfilehash: 93e0159ca680b37aed2031c6e2ec41463e7e389d
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74744004"
---
# <a name="compiler-error-c2458"></a>Errore del compilatore C2458

' Identifier ': ridefinizione all'interno della definizione

Una classe, una struttura, un'Unione o un'enumerazione viene ridefinita nella relativa dichiarazione.

L'esempio seguente genera l'C2458:

```cpp
// C2458.cpp
class C {
   enum i { C };   // C2458
};
```
