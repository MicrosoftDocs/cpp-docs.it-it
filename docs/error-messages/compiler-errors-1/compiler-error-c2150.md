---
title: Errore del compilatore C2150
ms.date: 11/04/2016
f1_keywords:
- C2150
helpviewer_keywords:
- C2150
ms.assetid: 21e82a10-c1d4-4c0d-9dc6-c5d92ea42a31
ms.openlocfilehash: a9c6465ef87c12135ad4e6709741f0027d8ea3c7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62175147"
---
# <a name="compiler-error-c2150"></a>Errore del compilatore C2150

> «*identificatore*': un campo di bit deve avere il tipo 'int', 'signed int' o 'unsigned int'

Il tipo base per un campo di bit deve essere `int`, `signed int`, o `unsigned int`.

## <a name="example"></a>Esempio

In questo esempio mostra come possono verificarsi C2150 e come è possibile risolvere il problema:

```cpp
// C2150.cpp
// compile with: /c
struct A {
   float a : 8;    // C2150
   int i : 8;      // OK
};
```