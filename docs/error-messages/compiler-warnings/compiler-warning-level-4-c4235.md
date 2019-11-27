---
title: Avviso del compilatore (livello 4) C4235
ms.date: 11/04/2016
f1_keywords:
- C4235
helpviewer_keywords:
- C4235
ms.assetid: d4214799-d62c-4674-b4e2-9e201c303303
ms.openlocfilehash: 3e3cb2e40ed42b24ee52252003b26ec09cd86710
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541766"
---
# <a name="compiler-warning-level-4-c4235"></a>Avviso del compilatore (livello 4) C4235

utilizzata estensione non standard: parola chiave ' keyword ' non supportata in questa architettura

Il compilatore non supporta la parola chiave usata.

Questo avviso viene promosso automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4235 un avviso di livello 2, usare la riga di codice seguente

```cpp
#pragma warning(2:4235)
```

nel file di codice sorgente.