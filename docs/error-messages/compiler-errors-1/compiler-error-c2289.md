---
description: 'Altre informazioni su: errore del compilatore C2289'
title: Errore del compilatore C2289
ms.date: 11/04/2016
f1_keywords:
- C2289
helpviewer_keywords:
- C2289
ms.assetid: cb41a29e-1b06-47dc-bfce-8d73bd63a0df
ms.openlocfilehash: ba9af908af6defaccd6825ce3dad412ad6914c77
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185960"
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
