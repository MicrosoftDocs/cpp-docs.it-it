---
title: Errore del compilatore C2150
ms.date: 11/04/2016
f1_keywords:
- C2150
helpviewer_keywords:
- C2150
ms.assetid: 21e82a10-c1d4-4c0d-9dc6-c5d92ea42a31
ms.openlocfilehash: 419aa8229e0fe60d391345556c5fbd8be17558d8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214737"
---
# <a name="compiler-error-c2150"></a>Errore del compilatore C2150

> '*Identifier*': il campo di bit deve avere il tipo ' int ',' signed int ' o ' unsigned int '

Il tipo di base per un campo di bit deve essere **`int`** , **`signed int`** o **`unsigned int`** .

## <a name="example"></a>Esempio

Questo esempio illustra come è possibile riscontrare C2150 e come risolverlo:

```cpp
// C2150.cpp
// compile with: /c
struct A {
   float a : 8;    // C2150
   int i : 8;      // OK
};
```
