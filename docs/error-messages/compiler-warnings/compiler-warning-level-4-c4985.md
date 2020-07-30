---
title: Avviso del compilatore (livello 4) C4985
ms.date: 11/04/2016
f1_keywords:
- C4985
helpviewer_keywords:
- C4985
ms.assetid: 832f001c-afe7-403d-a8b4-02334724c79e
ms.openlocfilehash: 87537e960c858cc6741108cf191fbeb2a7a2a8d7
ms.sourcegitcommit: 6e55aeb538b1c39af754f82d6f7738a18f5aa031
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/29/2020
ms.locfileid: "87390013"
---
# <a name="compiler-warning-level-4-c4985"></a>Avviso del compilatore (livello 4) C4985

> '*symbol-name*': attributi non presenti nella dichiarazione precedente.

Le annotazioni del linguaggio di annotazione del codice sorgente Microsoft (SAL), presenti nella dichiarazione o nella definizione del metodo corrente differiscono dalle annotazioni presenti in una dichiarazione precedente. Le stesse annotazioni SAL devono essere usate nella definizione e nelle dichiarazioni di un metodo.

Il linguaggio di annotazione del codice sorgente Microsoft (SAL) fornisce un set di annotazioni per descrivere come una funzione usa i parametri, le ipotesi che fa su di essi e le garanzie che produce in fase di completamento. Il file di intestazione sal.h definisce le annotazioni.

Si noti che le macro SAL non si espanderanno, a meno che il progetto non includa il [`/analyze`](../../build/reference/analyze-code-analysis.md) flag specificato. Quando si specifica **`/analyze`** , il compilatore può generare C4985, anche se non sono stati visualizzati avvisi o errori senza **`/analyze`** .

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Usare le stesse annotazioni SAL nella definizione e nelle dichiarazioni di un metodo.

## <a name="see-also"></a>Vedere anche

[Annotazioni SAL](../../c-runtime-library/sal-annotations.md)
