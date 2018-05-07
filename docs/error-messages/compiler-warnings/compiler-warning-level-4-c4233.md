---
title: Compilatore avviso (livello 4) C4233 | Documenti Microsoft
ms.custom: ''
ms.date: 10/25/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4233
dev_langs:
- C++
helpviewer_keywords:
- C4233
ms.assetid: 9aa51fc6-8ef3-43b5-bafb-c9333cf60de3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a933d41fd8e7cf3b94e458efff72193b8ce5e187
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4233"></a>Avviso del compilatore (livello 4) C4233

> utilizzata estensione non standard: '*parola chiave*' parola chiave supportata solo in C++, non in C

Il compilatore compilato il codice sorgente come C anziché in C++ e di aver usato una parola chiave che è valida solo in C++. Il compilatore compila il file di origine come C, se l'estensione del file di origine c o utilizzano [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md).

Questo avviso viene promossa automaticamente a un errore. Se si desidera modificare questo comportamento, utilizzare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4233 un problema di avviso di livello 4, aggiungere questa riga al file del codice sorgente:

```cpp
#pragma warning(4:4233)
```
