---
title: Avviso del compilatore (livello 4) C4960
ms.date: 11/04/2016
f1_keywords:
- C4960
helpviewer_keywords:
- C4960
ms.assetid: 3b4ed286-9e8d-46f1-af0c-00ba669693a9
ms.openlocfilehash: 286d3a1953c6c6badf15b712feac99afafe8b0a7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198120"
---
# <a name="compiler-warning-level-4-c4960"></a>Avviso del compilatore (livello 4) C4960

'function' è troppo grande per il profiling

Durante l'uso di [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md)il compilatore ha rilevato un modulo di input con una funzione che includeva oltre 65.535 istruzioni. Questa funzione di grandi dimensioni non è disponibile per le ottimizzazioni PGO.

Per risolvere il problema, ridurre le dimensioni della funzione.
