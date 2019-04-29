---
title: Avviso del compilatore (livello 4) C4234
ms.date: 11/04/2016
f1_keywords:
- C4234
helpviewer_keywords:
- C4234
ms.assetid: f7fecd5c-8248-4fde-8446-502aedc357ca
ms.openlocfilehash: 314ee068fb2be6148304360b0aaa3bd8029c283b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401072"
---
# <a name="compiler-warning-level-4-c4234"></a>Avviso del compilatore (livello 4) C4234

utilizzata estensione non standard: parola chiave 'keyword' riservata per utilizzi futuri

Il compilatore non implementa la parola chiave che è utilizzata.

Questo avviso viene promossa automaticamente a un errore. Se si vuole modificare questo comportamento, usare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere un problema di avviso di livello 4, C4234

```
#pragma warning(2:4234)
```

nel file del codice sorgente.