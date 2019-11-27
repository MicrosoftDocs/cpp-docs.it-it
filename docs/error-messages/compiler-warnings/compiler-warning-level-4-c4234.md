---
title: Avviso del compilatore (livello 4) C4234
ms.date: 11/04/2016
f1_keywords:
- C4234
helpviewer_keywords:
- C4234
ms.assetid: f7fecd5c-8248-4fde-8446-502aedc357ca
ms.openlocfilehash: 63a22fed0832677837eb786268fc92946d295b79
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541768"
---
# <a name="compiler-warning-level-4-c4234"></a>Avviso del compilatore (livello 4) C4234

utilizzata estensione non standard: parola chiave ' keyword ' riservata per un utilizzo futuro

Il compilatore non implementa ancora la parola chiave usata.

Questo avviso viene promosso automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4234 un problema di avviso di livello 4,

```cpp
#pragma warning(2:4234)
```

nel file di codice sorgente.