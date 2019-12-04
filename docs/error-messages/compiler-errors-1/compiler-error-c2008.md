---
title: Errore del compilatore C2008
ms.date: 11/04/2016
f1_keywords:
- C2008
helpviewer_keywords:
- C2008
ms.assetid: e748ccbe-ffd4-4008-aca7-e53c25225209
ms.openlocfilehash: 292f5c6ab9a4e14077f848ff57ff08adefeb09a1
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757332"
---
# <a name="compiler-error-c2008"></a>Errore del compilatore C2008

'character': imprevisto nella definizione macro

Il carattere viene visualizzato immediatamente dopo il nome della macro. Per risolvere l'errore, è necessario che sia presente uno spazio dopo il nome della macro.

L'esempio seguente genera l'C2008:

```cpp
// C2008.cpp
#define TEST1"mytest1"    // C2008
```

Possibile soluzione:

```cpp
// C2008b.cpp
// compile with: /c
#define TEST2 "mytest2"
```
