---
title: Avviso del compilatore (livello 1) C4952
ms.date: 08/27/2018
f1_keywords:
- C4952
helpviewer_keywords:
- C4952
ms.assetid: 593324f0-5cfe-42fb-b221-2f71308765dd
ms.openlocfilehash: 560705edeb0bbdd6be760736a8d4a19d914133d2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80174570"
---
# <a name="compiler-warning-level-1-c4952"></a>Avviso del compilatore (livello 1) C4952

> '*Function*': non sono stati trovati dati di profilo nel database di programma '*pgd_file*'

Durante l'uso di [/LTCG:PGUPDATE](../../build/reference/ltcg-link-time-code-generation.md)il compilatore ha rilevato un modulo di input ricompilato dopo `/LTCG:PGINSTRUMENT` e contenente una nuova funzione (*function*).

Si tratta di un avviso informativo. Per risolvere il problema, eseguire `/LTCG:PGINSTRUMENT`, ripetere tutte le esecuzioni dei test ed eseguire `/LTCG:PGOPTIMIZE`.

Se fosse stata usata `/LTCG:PGOPTIMIZE` , al posto di questo avviso sarebbe comparso un errore.
