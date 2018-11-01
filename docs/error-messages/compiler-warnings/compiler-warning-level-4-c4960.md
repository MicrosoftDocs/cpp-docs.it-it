---
title: Avviso del compilatore (livello 4) C4960
ms.date: 11/04/2016
f1_keywords:
- C4960
helpviewer_keywords:
- C4960
ms.assetid: 3b4ed286-9e8d-46f1-af0c-00ba669693a9
ms.openlocfilehash: ff4a9b3d78a108a45abb18c22049b104e630bf15
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50516363"
---
# <a name="compiler-warning-level-4-c4960"></a>Avviso del compilatore (livello 4) C4960

'function' è troppo grande per il profiling

Durante l'uso di [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md)il compilatore ha rilevato un modulo di input con una funzione che includeva oltre 65.535 istruzioni. Questa funzione di grandi dimensioni non è disponibile per le ottimizzazioni PGO.

Per risolvere il problema, ridurre le dimensioni della funzione.