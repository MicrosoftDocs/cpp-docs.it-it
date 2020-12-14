---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4960'
title: Avviso del compilatore (livello 4) C4960
ms.date: 11/04/2016
f1_keywords:
- C4960
helpviewer_keywords:
- C4960
ms.assetid: 3b4ed286-9e8d-46f1-af0c-00ba669693a9
ms.openlocfilehash: 9a1e3d5390ffa4ffad101d1ea2c3164c04d12ca8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234579"
---
# <a name="compiler-warning-level-4-c4960"></a>Avviso del compilatore (livello 4) C4960

'function' è troppo grande per il profiling

Durante l'uso di [/LTCG: PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md)il compilatore ha rilevato un modulo di input con una funzione che includeva oltre 65.535 istruzioni. Questa funzione di grandi dimensioni non è disponibile per le ottimizzazioni PGO.

Per risolvere il problema, ridurre le dimensioni della funzione.
