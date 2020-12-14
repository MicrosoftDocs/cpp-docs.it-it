---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4985'
title: Avviso del compilatore (livello 4) C4985
ms.date: 11/04/2016
f1_keywords:
- C4985
helpviewer_keywords:
- C4985
ms.assetid: 832f001c-afe7-403d-a8b4-02334724c79e
ms.openlocfilehash: c00c6ebd16f5160ffed726eae5307d7f3642eb3d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234566"
---
# <a name="compiler-warning-level-4-c4985"></a>Avviso del compilatore (livello 4) C4985

> '*symbol-name*': attributi non presenti nella dichiarazione precedente.

Le annotazioni del linguaggio di annotazione del codice sorgente Microsoft (SAL), presenti nella dichiarazione o nella definizione del metodo corrente differiscono dalle annotazioni presenti in una dichiarazione precedente. Le stesse annotazioni SAL devono essere usate nella definizione e nelle dichiarazioni di un metodo.

Il linguaggio di annotazione del codice sorgente Microsoft (SAL) fornisce un set di annotazioni per descrivere come una funzione usa i parametri, le ipotesi che fa su di essi e le garanzie che produce in fase di completamento. Il file di intestazione sal.h definisce le annotazioni.

Si noti che le macro SAL non si espanderanno, a meno che il progetto non includa il [`/analyze`](../../build/reference/analyze-code-analysis.md) flag specificato. Quando si specifica **`/analyze`** , il compilatore può generare C4985, anche se non sono stati visualizzati avvisi o errori senza **`/analyze`** .

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Usare le stesse annotazioni SAL nella definizione e nelle dichiarazioni di un metodo.

## <a name="see-also"></a>Vedi anche

[Annotazioni SAL](../../c-runtime-library/sal-annotations.md)
