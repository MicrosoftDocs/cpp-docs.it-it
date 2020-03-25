---
title: Avviso del compilatore (livello 4) C4235
ms.date: 11/04/2016
f1_keywords:
- C4235
helpviewer_keywords:
- C4235
ms.assetid: d4214799-d62c-4674-b4e2-9e201c303303
ms.openlocfilehash: df80bec2294929be463425d74d4bf00421b368e6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198432"
---
# <a name="compiler-warning-level-4-c4235"></a>Avviso del compilatore (livello 4) C4235

utilizzata estensione non standard: parola chiave ' keyword ' non supportata in questa architettura

Il compilatore non supporta la parola chiave usata.

Questo avviso viene promosso automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4235 un avviso di livello 2, usare la riga di codice seguente

```cpp
#pragma warning(2:4235)
```

nel file di codice sorgente.
