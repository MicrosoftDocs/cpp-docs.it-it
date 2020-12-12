---
description: 'Altre informazioni su: errore del compilatore C2479'
title: Errore del compilatore C2479
ms.date: 11/04/2016
f1_keywords:
- C2479
helpviewer_keywords:
- C2479
ms.assetid: c74c7869-e65b-4ca1-b6fa-eb39fed4458a
ms.openlocfilehash: 7193112ee546b7314075b105cb88c68fce71a256
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123942"
---
# <a name="compiler-error-c2479"></a>Errore del compilatore C2479

' Identifier ':' allocate ()' è valido solo per gli elementi di dati con estensione statica

La `__declspec( allocate())` sintassi può essere utilizzata solo per i dati statici.

L'esempio seguente genera l'C2479:

```cpp
// C2479.cpp
// compile with: /c
#pragma section("mycode", read)
static __declspec(allocate("mycode")) void DoNothing() {}   // C2479
__declspec(allocate("mycode"))  int i = 0;   // OK
```
