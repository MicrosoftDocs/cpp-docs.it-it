---
title: Avviso del compilatore (livello 4) C4235
ms.date: 11/04/2016
f1_keywords:
- C4235
helpviewer_keywords:
- C4235
ms.assetid: d4214799-d62c-4674-b4e2-9e201c303303
ms.openlocfilehash: 80ad388b26b2b972aa1301c1f335d0361a75f15f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401046"
---
# <a name="compiler-warning-level-4-c4235"></a>Avviso del compilatore (livello 4) C4235

utilizzata estensione non standard: parola chiave 'keyword' non è supportata in questa architettura

Il compilatore non supporta la parola chiave che è utilizzata.

Questo avviso viene promossa automaticamente a un errore. Se si vuole modificare questo comportamento, usare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4235 in un avviso di livello 2, utilizzare la seguente riga di codice

```
#pragma warning(2:4235)
```

nel file del codice sorgente.