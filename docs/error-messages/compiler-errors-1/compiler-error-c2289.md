---
title: Errore del compilatore C2289
ms.date: 11/04/2016
f1_keywords:
- C2289
helpviewer_keywords:
- C2289
ms.assetid: cb41a29e-1b06-47dc-bfce-8d73bd63a0df
ms.openlocfilehash: 239552eb383197e57fcc6285cbf416c7c71c858b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216271"
---
# <a name="compiler-error-c2289"></a>Errore del compilatore C2289

stesso qualificatore di tipo utilizzato più di una volta

Una dichiarazione o una definizione di tipo usa più volte un qualificatore di tipo ( **`const`** ,, **`volatile`** **`signed`** o **`unsigned`** ), causando un errore in compatibilità ANSI (**/za**).

L'esempio seguente genera l'errore C2286:

```cpp
// C2289.cpp
// compile with: /Za /c
volatile volatile int i;   // C2289
volatile int j;   // OK
```
