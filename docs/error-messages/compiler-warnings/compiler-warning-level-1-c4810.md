---
title: Avviso del compilatore (livello 1) C4810
ms.date: 11/04/2016
f1_keywords:
- C4810
helpviewer_keywords:
- C4810
ms.assetid: 39e2cae0-9c1c-4ac1-aaa0-5f661d06085b
ms.openlocfilehash: bdeb4dd28587635a391e7b776ccd88b637a7769f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80174934"
---
# <a name="compiler-warning-level-1-c4810"></a>Avviso del compilatore (livello 1) C4810

valore di pragma pack(show) == n

Questo avviso viene generato quando si usa l'opzione **show** della direttiva pragma [pack](../../preprocessor/pack.md) . *n* è il valore corrente di pack.

Il codice seguente, ad esempio, illustra il funzionamento dell'avviso C4810 con la direttiva pragma pack:

```cpp
// C4810.cpp
// compile with: /W1 /LD
// C4810 expected
#pragma pack(show)
#pragma pack(4)
#pragma pack(show)
```
