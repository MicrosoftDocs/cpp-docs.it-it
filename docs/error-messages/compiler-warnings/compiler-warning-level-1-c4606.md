---
title: Avviso del compilatore (livello 1) C4606
ms.date: 11/04/2016
f1_keywords:
- C4606
helpviewer_keywords:
- C4606
ms.assetid: c1b45fb6-672b-42eb-9e1c-c67b3e4150d3
ms.openlocfilehash: 9b38e9670157fd15dc7c4b6a96ced7ad40c43e34
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185997"
---
# <a name="compiler-warning-level-1-c4606"></a>Avviso del compilatore (livello 1) C4606

avviso \#pragma:' warning_number ' ignorato; Gli avvisi di analisi del codice non sono associati ai livelli di avviso

Per gli avvisi di analisi del codice, solo `error`, `once`e `default` sono supportati con il pragma [warning](../../preprocessor/warning.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4606.

```cpp
// C4606.cpp
// compile with: /c /W1
#pragma warning(1: 6001)   // C4606
#pragma warning(once: 6001)   // OK
```
