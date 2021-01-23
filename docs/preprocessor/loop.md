---
description: Altre informazioni sulla direttiva loop pragma in Microsoft C/C++
title: ciclo pragma
ms.date: 01/22/2021
f1_keywords:
- loop_CPP
- vc-pragma.loop
helpviewer_keywords:
- loop pragma
- pragma, loop
no-loc:
- pragma
ms.openlocfilehash: 4aac76cb5220e57dd378ac00ff576521c9001218
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713532"
---
# <a name="loop-no-locpragma"></a>`loop` pragma

Controlla il modo in cui il codice ciclo deve essere considerato dal parallelizzazione automatica automatico o esclude un ciclo dalla considerazione da parte del Vectorizer automatico.

## <a name="syntax"></a>Sintassi

> **`#pragma loop( hint_parallel(`***n***`) )`**\
> **`#pragma loop( no_vector )`**\
> **`#pragma loop( ivdep )`**

### <a name="parameters"></a>Parametri

**`hint_parallel(`***n***`)`**\
Suggerimento al compilatore che il ciclo deve essere parallelo tra *n* thread, dove *n* è un valore letterale intero positivo o zero. Se *n* è zero, il numero massimo di thread viene utilizzato in fase di esecuzione. Si tratta di un suggerimento per il compilatore, non di un comando. Non vi è alcuna garanzia che il ciclo verrà in parallelo. Se il ciclo ha dipendenze di dati o problemi strutturali, non verrà in parallelo. Ad esempio, non è in parallelo se viene archiviato in un valore scalare che viene utilizzato oltre il corpo del ciclo.

Il compilatore ignora questa opzione a meno che non [`/Qpar`](../build/reference/qpar-auto-parallelizer.md) venga specificata l'opzione del compilatore.

**`no_vector`**\
Per impostazione predefinita, il Vectorizer automatico tenta di vettorializzare tutti i cicli che valuta possono trarre vantaggio dall'it. Specificare questa pragma opzione per disabilitare il Vectorizer automatico per il ciclo che segue.

**`ivdep`**\
Hint al compilatore per ignorare le dipendenze vettoriali per questo ciclo.

## <a name="remarks"></a>Osservazioni

Per utilizzare l'oggetto **`loop`** pragma , posizionarlo immediatamente prima, non in una definizione di ciclo. L'oggetto pragma viene applicato per l'ambito del ciclo che lo segue. È possibile applicare più pragma direttive a un ciclo, in qualsiasi ordine, ma è necessario indicare ciascuna di esse in un' pragma istruzione separata.

## <a name="see-also"></a>Vedere anche

[Parallelizzazione automatica e vettorizzazione automatica](../parallel/auto-parallelization-and-auto-vectorization.md)\
[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
