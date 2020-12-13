---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4235'
title: Avviso del compilatore (livello 4) C4235
ms.date: 11/04/2016
f1_keywords:
- C4235
helpviewer_keywords:
- C4235
ms.assetid: d4214799-d62c-4674-b4e2-9e201c303303
ms.openlocfilehash: 011586efb311cab1da5cd4452bbbc03a942a5045
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334882"
---
# <a name="compiler-warning-level-4-c4235"></a>Avviso del compilatore (livello 4) C4235

utilizzata estensione non standard: parola chiave ' keyword ' non supportata in questa architettura

Il compilatore non supporta la parola chiave usata.

Questo avviso viene promosso automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4235 un avviso di livello 2, usare la riga di codice seguente

```cpp
#pragma warning(2:4235)
```

nel file di codice sorgente.
