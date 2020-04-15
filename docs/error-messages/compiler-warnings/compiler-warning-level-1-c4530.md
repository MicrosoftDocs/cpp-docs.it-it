---
title: Avviso del compilatore (livello 1) C4530
description: Guida di riferimento all'avviso del compilatore C. C. C.
ms.date: 04/02/2020
f1_keywords:
- C4530
helpviewer_keywords:
- C4530
ms.assetid: a04dcdb2-84db-459d-9e5e-4e743887465f
ms.openlocfilehash: 9de88a4b0b6c7176ff82b68c92d09d9fe75a70b2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369788"
---
# <a name="compiler-warning-level-1-c4530"></a>Avviso del compilatore (livello 1) C4530

> È stato utilizzato il gestore di eccezioni di C, ma la semantica di rimozione non è abilitata. Specificare /EHsc

Nel codice viene utilizzata la gestione delle eccezioni di C, ma [/EHsc](../../build/reference/eh-exception-handling-model.md) non è stato incluso nelle opzioni del compilatore.

## <a name="remarks"></a>Osservazioni

Il compilatore **`/EHsc`** richiede l'opzione per compilare il codice C , che segue lo standard di C, per la gestione delle eccezioni. La *semantica* di rimozione standard di C, c'è, specifica che gli oggetti e gli stack frame costruiti tra il punto in cui viene generata un'eccezione e il punto in cui viene intercettata devono essere eliminati e le relative risorse recuperate. Questo processo è noto come *rimozione dello stack*.

L'opzione **`/EHsc`** indica al compilatore di generare codice che chiama i distruttori sugli oggetti di archiviazione automatica quando un'eccezione passa attraverso lo stack frame contenitore. *Gli* oggetti di archiviazione automatica sono oggetti allocati nello stack, ad esempio variabili locali. Si chiama archiviazione automatica perché viene allocata automaticamente quando le funzioni vengono chiamate e rilasciate automaticamente quando vengono restituite. Uno *stack frame* è il dato inserito nello stack quando viene chiamata una funzione, insieme alla relativa archiviazione automatica.

Quando viene generata un'eccezione, può viaggiare attraverso diversi stack frame prima che venga intercettato. Questi stack frame devono essere eliminati man mano che l'eccezione passa attraverso di essi in ordine di chiamata inverso. Gli oggetti di archiviazione automatici in ogni stack frame devono essere eliminati per recuperare le risorse in modo pulito. È lo stesso processo di distruzione e recupero che avviene automaticamente quando una funzione restituisce normalmente.

Quando **`/EHsc`** l'opzione non è abilitata, gli oggetti di archiviazione automatica negli stack frame tra la funzione di generazione e la funzione in cui viene rilevata l'eccezione non vengono eliminati. Solo gli oggetti di archiviazione automatica creati in un blocco **try** o **catch** vengono distrutti, il che può causare perdite significative di risorse e altri comportamenti imprevisti.

Se nell'eseguibile non è possibile generare eccezioni, è possibile ignorare questo avviso. Alcuni codici potrebbero richiedere altre opzioni di gestione delle eccezioni. Per ulteriori informazioni, vedere [/EH](../../build/reference/eh-exception-handling-model.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato l'errore C4530:

```cpp
// C4530.cpp
// compile with: /W1
int main() {
   try{} catch(int*) {}   // C4530
}
```

Compilare l'esempio con **`/EHsc`** per risolvere l'avviso.
