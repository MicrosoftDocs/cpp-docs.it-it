---
title: Avviso del compilatore (livello 1) C4215
ms.date: 11/04/2016
f1_keywords:
- C4215
helpviewer_keywords:
- C4215
ms.assetid: f2aab64d-1bab-4f75-95ee-89e1263047b1
ms.openlocfilehash: a45cd6cf86eb8ab1edb33ad5e0df8374972c425e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50450824"
---
# <a name="compiler-warning-level-1-c4215"></a>Avviso del compilatore (livello 1) C4215

utilizzata estensione non standard: long float

Le estensioni di Microsoft (/Ze) predefinita considerano **long float** come **doppie**. Garantire la compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) non esiste. Uso **doppie** per mantenere la compatibilità.

L'esempio seguente genera l'errore C4215:

```
// C4215.cpp
// compile with: /W1 /LD
long float a;   // C4215

// use the line below to resolve the warning
// double a;
```