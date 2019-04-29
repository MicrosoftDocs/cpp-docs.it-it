---
title: Errore del compilatore C2458
ms.date: 11/04/2016
f1_keywords:
- C2458
helpviewer_keywords:
- C2458
ms.assetid: ed21901f-1067-42f5-b275-19b480decf5c
ms.openlocfilehash: 8131b259f89c5cacd07d04edbf6c45adaa25b145
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62367993"
---
# <a name="compiler-error-c2458"></a>Errore del compilatore C2458

'identifier': ridefinizione all'interno di definizione

Una classe, struttura, unione o enumerazione sono stato ridefinito nella propria dichiarazione.

L'esempio seguente genera l'errore C2458:

```
// C2458.cpp
class C {
   enum i { C };   // C2458
};
```