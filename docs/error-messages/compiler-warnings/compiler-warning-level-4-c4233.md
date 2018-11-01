---
title: Avviso del compilatore (livello 4) C4233
ms.date: 10/25/2017
f1_keywords:
- C4233
helpviewer_keywords:
- C4233
ms.assetid: 9aa51fc6-8ef3-43b5-bafb-c9333cf60de3
ms.openlocfilehash: 361e00b7361aab51ea077d7e248503f3654e5e58
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50516519"
---
# <a name="compiler-warning-level-4-c4233"></a>Avviso del compilatore (livello 4) C4233

> utilizzata estensione non standard: '*parola chiave*' supportata solo in C++, non C (parola chiave)

Il compilatore compilato il codice sorgente come C anziché C++ e di aver usato una parola chiave che è valida solo in C++. Il compilatore compila il file di origine come C, se l'estensione del file di origine è file. c o si usa [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md).

Questo avviso viene promossa automaticamente a un errore. Se si vuole modificare questo comportamento, usare [#pragma avviso](../../preprocessor/warning.md). Ad esempio, per rendere C4233 in un problema di avviso di livello 4, aggiungere questa riga al file del codice sorgente:

```cpp
#pragma warning(4:4233)
```
