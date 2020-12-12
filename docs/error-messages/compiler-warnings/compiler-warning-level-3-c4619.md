---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4619'
title: Avviso del compilatore (livello 3) C4619
ms.date: 11/04/2016
f1_keywords:
- C4619
helpviewer_keywords:
- C4619
ms.assetid: 701fea21-01aa-4bea-93d4-1cb8824170b0
ms.openlocfilehash: c108e4d1a0845cc6629a36307c33fc8342cadd67
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337264"
---
# <a name="compiler-warning-level-3-c4619"></a>Avviso del compilatore (livello 3) C4619

\#avviso pragma: nessun numero di avviso ' Number '

È stato effettuato un tentativo di disabilitare un avviso che non esiste.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4619:

```cpp
// C4619.cpp
// compile with: /W3 /c
#pragma warning(default : 4619)
#pragma warning(disable : 4354)   // C4619, C4354 does not exist
```
