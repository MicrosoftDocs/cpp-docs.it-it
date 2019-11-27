---
title: Avviso del compilatore (livello 3) C4619
ms.date: 11/04/2016
f1_keywords:
- C4619
helpviewer_keywords:
- C4619
ms.assetid: 701fea21-01aa-4bea-93d4-1cb8824170b0
ms.openlocfilehash: 982e7da5523f76a3ff205778318a75076a8c04d1
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74189170"
---
# <a name="compiler-warning-level-3-c4619"></a>Avviso del compilatore (livello 3) C4619

avviso \#pragma: nessun numero di avviso ' Number '

È stato effettuato un tentativo di disabilitare un avviso che non esiste.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4619:

```cpp
// C4619.cpp
// compile with: /W3 /c
#pragma warning(default : 4619)
#pragma warning(disable : 4354)   // C4619, C4354 does not exist
```