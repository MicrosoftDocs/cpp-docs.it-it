---
title: Compilatore avviso (livello 4) C4235 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4235
dev_langs:
- C++
helpviewer_keywords:
- C4235
ms.assetid: d4214799-d62c-4674-b4e2-9e201c303303
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c9e709017e51101efe53a8697bb145014f200871
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031821"
---
# <a name="compiler-warning-level-4-c4235"></a>Avviso del compilatore (livello 4) C4235

utilizzata estensione non standard: parola chiave 'keyword' non è supportata in questa architettura

Il compilatore non supporta la parola chiave che è utilizzata.

Questo avviso viene promossa automaticamente a un errore. Se si vuole modificare questo comportamento, usare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4235 in un avviso di livello 2, utilizzare la seguente riga di codice

```
#pragma warning(2:4235)
```

nel file del codice sorgente.