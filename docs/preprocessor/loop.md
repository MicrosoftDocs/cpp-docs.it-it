---
title: Pragma loop
ms.date: 08/29/2019
f1_keywords:
- loop_CPP
- vc-pragma.loop
ms.assetid: 6d5bb428-cead-47e7-941d-7513bbb162c7
ms.openlocfilehash: 013540ffe120f42c15538ce86661753b9cf9416f
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220855"
---
# <a name="loop-pragma"></a>Pragma loop

Controlla il modo in cui il codice ciclo deve essere considerato dal parallelizzazione automatica automatico o esclude un ciclo dalla considerazione da parte del Vectorizer automatico.

## <a name="syntax"></a>Sintassi

> **ciclo #pragma (hint_parallel (** *n* **))** \
> **ciclo #pragma (no_vector)** \
> **ciclo #pragma (ivdep)**

### <a name="parameters"></a>Parametri

**hint_parallel (** *n* **)** \
Suggerimento al compilatore che il ciclo deve essere parallelo tra *n* thread, dove *n* è un valore letterale intero positivo o zero. Se *n* è zero, il numero massimo di thread viene utilizzato in fase di esecuzione. Si tratta di un suggerimento per il compilatore, non di un comando. Non vi è alcuna garanzia che il ciclo verrà in parallelo. Se il ciclo ha dipendenze di dati o problemi strutturali, non verrà in parallelo. Ad esempio, non è in parallelo se viene archiviato in un valore scalare che viene utilizzato oltre il corpo del ciclo.

Il compilatore ignora questa opzione a meno che non sia specificata l'opzione del compilatore [/QPAR](../build/reference/qpar-auto-parallelizer.md) .

**no_vector**\
Per impostazione predefinita, il Vectorizer automatico tenta di vettorializzare tutti i cicli che valuta possono trarre vantaggio dall'it. Specificare questo pragma per disabilitare il Vectorizer automatico per il ciclo che segue.

**ivdep**\
Hint al compilatore per ignorare le dipendenze vettoriali per questo ciclo. Usare questa opzione insieme a **hint_parallel**.

## <a name="remarks"></a>Note

Per usare il pragma del **ciclo** , posizionarlo immediatamente prima, non in una definizione di ciclo. Il pragma diventa effettivo per l'ambito del ciclo che lo segue. È possibile applicare i pragma a un ciclo, in qualsiasi ordine, ma è necessario dichiarare ciascuno in un'istruzione del pragma distinta.

## <a name="see-also"></a>Vedere anche

[Parallelizzazione automatica e vettorizzazione automatica](../parallel/auto-parallelization-and-auto-vectorization.md)\
[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
