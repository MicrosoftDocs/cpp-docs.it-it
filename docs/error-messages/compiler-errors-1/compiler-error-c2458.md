---
description: 'Altre informazioni su: errore del compilatore C2458'
title: Errore del compilatore C2458
ms.date: 11/04/2016
f1_keywords:
- C2458
helpviewer_keywords:
- C2458
ms.assetid: ed21901f-1067-42f5-b275-19b480decf5c
ms.openlocfilehash: 7f705511c14da19b125868c1b34d907d6b5f220e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262854"
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
