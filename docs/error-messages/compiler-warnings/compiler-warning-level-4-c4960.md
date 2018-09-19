---
title: Compilatore avviso (livello 4) C4960 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4960
dev_langs:
- C++
helpviewer_keywords:
- C4960
ms.assetid: 3b4ed286-9e8d-46f1-af0c-00ba669693a9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ed6ba083017c84cd6af05b917ff8417b0394d7c2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46085719"
---
# <a name="compiler-warning-level-4-c4960"></a>Avviso del compilatore (livello 4) C4960

'function' è troppo grande per il profiling

Durante l'uso di [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md)il compilatore ha rilevato un modulo di input con una funzione che includeva oltre 65.535 istruzioni. Questa funzione di grandi dimensioni non è disponibile per le ottimizzazioni PGO.

Per risolvere il problema, ridurre le dimensioni della funzione.