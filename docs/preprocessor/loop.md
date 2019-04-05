---
title: ciclo
ms.date: 10/18/2018
f1_keywords:
- loop_CPP
- vc-pragma.loop
ms.assetid: 6d5bb428-cead-47e7-941d-7513bbb162c7
ms.openlocfilehash: a1640881d98073381a941478f4b78177a95698d7
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59023166"
---
# <a name="loop"></a>ciclo

Controlla il modo in cui il codice del ciclo deve essere considerato dalla funzione di parallelizzazione automatica e/o esclude un ciclo dalla considerazione da parte della funzione di vettorizzazione automatica.

## <a name="syntax"></a>Sintassi

```
#pragma loop( hint_parallel(n) )
#pragma loop( no_vector )
#pragma loop( ivdep )
```

### <a name="parameters"></a>Parametri

*hint_parallel(n)*<br/>
Suggerisce al compilatore che il ciclo deve essere parallelizzato attraverso *n* thread, in cui *n* è un valore letterale intero positivo o zero. Se *n* è uguale a zero, il numero massimo di thread viene utilizzato in fase di esecuzione. Si tratta di un suggerimento al compilatore, non di un comando, pertanto non è garantito che il ciclo verrà parallelizzato. Se il ciclo presenta dipendenze di dati o problemi strutturali, ad esempio viene archiviato in un valore scalare che è utilizzato oltre il corpo del ciclo, quest'ultimo non verrà parallelizzato.

Il compilatore ignora questa opzione, a meno che il [/Qpar](../build/reference/qpar-auto-parallelizer.md) viene specificata l'opzione del compilatore.

*no_vector*<br/>
Per impostazione predefinita, la vettorizzazione automatica è attivata e tenterà di vettorizzare tutti i cicli che ritiene possano trarne vantaggio. Specificare questo pragma per disabilitare la funzione di vettorizzazione automatica per il ciclo che la segue.

*ivdep*<br/>
Suggerisce al compilatore di ignorare le dipendenze del vettore per questo ciclo. Usata in combinazione con *hint_parallel*.

## <a name="remarks"></a>Note

Usare la **ciclo** pragma, inserirlo immediatamente prima, ovvero non in, ovvero una definizione di ciclo. Il pragma diventa effettivo per l'ambito del ciclo che lo segue. È possibile applicare i pragma a un ciclo, in qualsiasi ordine, ma è necessario dichiarare ciascuno in un'istruzione del pragma distinta.

## <a name="see-also"></a>Vedere anche

[Parallelizzazione automatica e vettorizzazione automatica](../parallel/auto-parallelization-and-auto-vectorization.md)<br/>
[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)