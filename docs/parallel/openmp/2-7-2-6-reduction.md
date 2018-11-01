---
title: 2.7.2.6 reduction
ms.date: 11/04/2016
ms.assetid: e7630a15-2978-4dbe-a29b-3a46371a0151
ms.openlocfilehash: 54b326feb4e4ccf1f1da5c8152ffc8d1e4bd13b2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50456017"
---
# <a name="2726-reduction"></a>2.7.2.6 reduction

Questa clausola esegue una riduzione delle variabili scalari vengono visualizzati nella *variabile-list*, con l'operatore *op*. La sintassi del `reduction` clausola è il seguente:

> Reduction (*op*: *elenco variabili*)

Una riduzione viene in genere specificata per un'istruzione con uno dei formati seguenti:

> *x* = *x* *op* *expr*
> *x* *binop* = *expr*
> *x* = *expr* *op* *x* (tranne che per la sottrazione) *x*++
> ++*x*
> *x*--
> --*x*

dove:

*x*<br/>
Una delle variabili di riduzione specificate nella `list`.

*variable-list*<br/>
Elenco delimitato da virgole di variabili di riduzione scalare.

*expr*<br/>
Un'espressione con tipo scalare che non fa riferimento *x*.

*op*<br/>
Non un operatore di overload, ma uno dei +, &#42;, -, &amp;, ^, &#124;, &amp; &amp;, o &#124; &#124;.

*binop*<br/>
Non un operatore di overload, ma uno dei +, &#42;, -, &amp;, ^, o &#124;.

Di seguito è riportato un esempio del `reduction` clausola:

```cpp
#pragma omp parallel for reduction(+: a, y) reduction(||: am)
for (i=0; i<n; i++) {
   a += b[i];
   y = sum(y, c[i]);
   am = am || b[i] == c[i];
}
```

Come illustrato nell'esempio, un operatore può essere nascosta all'interno di una chiamata di funzione. L'utente deve prestare attenzione che l'operatore specificato nel `reduction` clausola corrisponde all'operazione di riduzione.

Anche se l'operando destro del &#124; &#124; operatore non ha effetti collaterali in questo esempio, sono consentiti, ma deve essere utilizzate con cautela. In questo contesto, un effetto collaterale che è garantito che non si verificano durante l'esecuzione sequenziale del ciclo può verificarsi durante l'esecuzione parallela. Questa differenza può verificarsi perché l'ordine di esecuzione delle iterazioni è indeterminato.

L'operatore viene usato per determinare il valore iniziale di tutte le variabili private usato dal compilatore per la riduzione e per determinare l'operatore di finalizzazione. Specificare in modo esplicito l'operatore consente l'istruzione di riduzione di fuori l'ambito lessicale del costrutto. Un numero qualsiasi di `reduction` clausole possono essere specificate nella direttiva, ma potrebbe sembrare una variabile in uno `reduction` clausola per tale direttiva.

Una copia privata di ogni variabile nel *variabile-list* viene creato, uno per ogni thread, come se il `private` clausola fosse stata usata. La copia privata viene inizializzata in base all'operatore (vedere la tabella seguente).

Alla fine dell'area per il quale il `reduction` clausola è stata specificata, l'oggetto originale viene aggiornato per riflettere il risultato della combinazione il valore originale con il valore finale della ognuno delle copie private usando l'operatore specificato. Gli operatori di riduzione sono tutti associativi (ad eccezione di sottrazione), e il compilatore può liberamente riassociare il calcolo del valore finale. (Per formare il valore finale vengono aggiunti i risultati parziali di una riduzione di sottrazione).

Il valore dell'oggetto originale diventa indeterminato quando il primo thread che raggiunge la clausola che lo contiene e rimarrà tale finché non viene completato il calcolo di riduzione.  In genere, il calcolo sarà completato al termine del costrutto; Tuttavia, se il `reduction` clausola viene utilizzata in un costrutto a cui `nowait` viene anche applicato, il valore dell'oggetto originale rimane indeterminato fino a quando non è stata eseguita una sincronizzazione ostacolo per garantire che tutti i thread sono state completate le `reduction`clausola.

Nella tabella seguente sono elencati gli operatori validi e i relativi valori di inizializzazione canonico. Il valore di inizializzazione effettivo sarà coerenza con il tipo di dati della variabile di riduzione.

|Operatore|Inizializzazione|
|--------------|--------------------|
|+|0|
|&#42;|1|
|-|0|
|&amp;|~0|
|&#124;|0|
|^|0|
|&amp;&amp;|1|
|&#124;&#124;|0|

Le restrizioni per il `reduction` clausola sono i seguenti:

- Il tipo delle variabili nella `reduction` clausola deve essere valido per l'operatore di riduzione, ad eccezione del fatto che i tipi di puntatore e tipi di riferimento non sono consentiti.

- Una variabile specificata nella `reduction` clausola non deve essere **const**-completo.

- Le variabili che appartengono all'interno di un'area parallela o che vengono visualizzate nel `reduction` clausola di un **parallele** direttiva non è possibile specificare un `reduction` clausola in una direttiva condivisione del lavoro associata a un costrutto parallelo.

   ```cpp
   #pragma omp parallel private(y)
   { /* ERROR - private variable y cannot be specified
                in a reduction clause */
      #pragma omp for reduction(+: y)
      for (i=0; i<n; i++)
         y += b[i];
   }

   /* ERROR - variable x cannot be specified in both
              a shared and a reduction clause */
   #pragma omp parallel for shared(x) reduction(+: x)
   ```
