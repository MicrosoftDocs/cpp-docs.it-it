---
title: Compilatore avviso (livello 4) C4234 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4234
dev_langs:
- C++
helpviewer_keywords:
- C4234
ms.assetid: f7fecd5c-8248-4fde-8446-502aedc357ca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a6ce6ba622cb480096144706589a01dee7326f38
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46118232"
---
# <a name="compiler-warning-level-4-c4234"></a>Avviso del compilatore (livello 4) C4234

utilizzata estensione non standard: parola chiave 'keyword' riservata per utilizzi futuri

Il compilatore non implementa la parola chiave che è utilizzata.

Questo avviso viene promossa automaticamente a un errore. Se si vuole modificare questo comportamento, usare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere un problema di avviso di livello 4, C4234

```
#pragma warning(2:4234)
```

nel file del codice sorgente.