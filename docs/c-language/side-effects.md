---
description: 'Altre informazioni su: effetti collaterali'
title: Effetti collaterali
ms.date: 11/04/2016
helpviewer_keywords:
- expression evaluation, side effects
- side effects in expression evaluation
ms.assetid: d9b3004a-830e-43a0-bea5-8989d501d670
ms.openlocfilehash: 78a08cb2c6290a3cb9c0c61a714cb2bcfe61a4cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97292780"
---
# <a name="side-effects"></a>Effetti collaterali

L'ordine di valutazione delle espressioni viene definito dall'implementazione specifica, ad eccezione di quando il linguaggio garantisce un particolare ordine di valutazione, come descritto in [Precedenza e ordine di valutazione](../c-language/precedence-and-order-of-evaluation.md). Ad esempio, gli effetti collaterali si verificano nelle chiamate di funzione seguenti:

```
add( i + 1, i = j + 2 );
myproc( getc(), getc() );
```

Gli argomenti di una chiamata di funzione possono essere valutati in qualsiasi ordine. L'espressione `i + 1` può essere valutata prima di `i = j + 2` o `i = j + 2` può essere valutata prima di `i + 1`. In ciascuno dei casi il risultato sarà differente. Ugualmente, non è possibile garantire quali i caratteri vengano effettivamente passati a `myproc`. Poiché operazioni di incrementi unario e di decremento includono assegnazioni, tali operazioni possono causare effetti collaterali, come illustrato nell'esempio seguente:

```
x[i] = i++;
```

In questo esempio, il valore di `x` che viene modificato è imprevedibile. Il valore di indice potrebbe essere il valore nuovo o precedente di `i`. Il risultato può variare in base a compilatori o livelli di ottimizzazione diversi.

Poiché il linguaggio C non definisce l'ordine di valutazione degli effetti collaterali, entrambi i metodi di valutazione illustrati in precedenza sono corretti ed entrambi possono essere implementati. Per assicurarsi che il codice sia portabile e chiaro, evitare le istruzioni che dipendono da un particolare ordine di valutazione per gli effetti collaterali.

## <a name="see-also"></a>Vedi anche

[Valutazione delle espressioni](../c-language/expression-evaluation-c.md)
