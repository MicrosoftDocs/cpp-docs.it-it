---
title: 2.6.4 Costrutto atomic
ms.date: 11/04/2016
ms.assetid: e4232ef1-4058-42ce-9de0-0ca788312aba
ms.openlocfilehash: 1f477a59ef475fda9bd0daeeb4edac18a3eeedb9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50677656"
---
# <a name="264-atomic-construct"></a>2.6.4 Costrutto atomic

Il `atomic` direttiva garantisce che una determinata posizione di memoria viene aggiornata in modo atomico, anziché esporre la possibilità di più thread di scrittura simultanee. La sintassi del `atomic` direttiva è come segue:

```
#pragma omp atomic new-lineexpression-stmt
```

L'istruzione di espressione deve essere uno dei formati seguenti:

*x binop*= *expr*

x + +

+ + x

x-

--x

Nelle espressioni di precedente:

- *x* è un'espressione di lvalue con un tipo scalare.

- *Expr* è un'espressione con un tipo scalare, e non fa riferimento l'oggetto specificato da *x*.

- `binop` non è un operatore di overload ed è uno dei + \*, -, / &, ^, &#124;, <\<, o >>.

Anche se è definito dall'implementazione se un'implementazione sostituisce tutte `atomic` direttive con **critici** direttive che hanno lo stesso oggetto univoco *name*, il `atomic` (direttiva) consente un migliore ottimizzazione. Spesso le istruzioni di hardware sono disponibili in grado di eseguire l'aggiornamento atomico con un sovraccarico minimo.

Solo il carico e l'archivio dell'oggetto definito dal *x* sono atomica, la valutazione del *expr* non è atomico. Per evitare situazioni di race condition, è consigliabile proteggere tutti gli aggiornamenti della posizione in parallelo tramite il `atomic` direttiva, ad eccezione di quelli che notoriamente privi di race condition.

Restrizioni per il `atomic` direttiva sono i seguenti:

- Tutti i riferimenti atomici nel percorso di archiviazione x in tutto il programma deve essere un tipo compatibile.

## <a name="examples"></a>Esempi:

```
extern float a[], *p = a, b;
/* Protect against races among multiple updates. */
#pragma omp atomic
a[index[i]] += b;
/* Protect against races with updates through a. */
#pragma omp atomic
p[i] -= 1.0f;

extern union {int n; float x;} u;
/* ERROR - References through incompatible types. */
#pragma omp atomic
u.n++;
#pragma omp atomic
u.x -= 1.0f;
```