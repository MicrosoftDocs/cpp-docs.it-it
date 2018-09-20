---
title: 2.7.1 direttiva threadprivate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 08e0b70f-5359-4607-b0ca-38c2d570d7b3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 31c9c70940b558d0b4cc3f77677665235417694d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46398144"
---
# <a name="271-threadprivate-directive"></a>2.7.1 Direttiva threadprivate

Il `threadprivate` directive rende il file-ambito denominato, dell'ambito dello spazio dei nomi o variabili statico dall'ambito del blocco specificate nel *elenco di variabili* privata di un thread. *elenco variabile* è un elenco delimitato da virgole di variabili che non è un tipo incompleto. La sintassi del `threadprivate` direttiva è come segue:

```
#pragma omp threadprivate(variable-list) new-line
```

Ogni copia di un `threadprivate` variabile viene inizializzata una sola volta, in un punto specificato nel programma prima il primo riferimento a tale copia e nel modo consueto (ad esempio, come verrebbe inizializzata la copia master durante l'esecuzione del programma seriale). Si noti che se un oggetto viene fatto riferimento in un inizializzatore esplicito di un `threadprivate` variabile e il valore dell'oggetto viene modificato prima il primo riferimento a una copia della variabile, quindi il comportamento non è specificato.

Come con qualsiasi variabile privata, un thread non deve fare riferimento a copia di un altro thread di un `threadprivate` oggetto. Durante le aree seriali e master aree del programma, i riferimenti sarà alla copia del thread principale dell'oggetto.

Dopo l'esecuzione della prima area parallela, i dati nel `threadprivate` oggetti è garantita in modo permanente solo se dinamica thread meccanismo è stato disabilitato e se il numero di thread rimane invariato per tutte le aree parallele.

Le restrizioni per il `threadprivate` direttiva sono i seguenti:

- Oggetto `threadprivate` direttiva per le variabili di ambito file o di ambito dello spazio dei nomi deve trovarsi all'esterno di qualsiasi definizione o dichiarazione e deve precedere lessicalmente tutti i riferimenti a nessuna delle variabili nel relativo elenco.

- Ogni variabile nel *variabile-list* di un `threadprivate` direttiva in ambito file o spazio dei nomi deve fare riferimento a una dichiarazione di variabile nell'ambito del file o spazio dei nomi che deve precede la direttiva.

- Oggetto `threadprivate` direttiva per le variabili statico dall'ambito del blocco deve essere visualizzati nell'ambito della variabile e non in un ambito annidato. La direttiva deve precedere lessicalmente tutti i riferimenti a nessuna delle variabili nel relativo elenco.

- Ogni variabile nel *variabile-list* di un `threadprivate` direttiva nell'ambito del blocco deve fare riferimento a una dichiarazione di variabile nello stesso ambito che deve precede la direttiva. La dichiarazione di variabile debba usare l'identificatore di classe di archiviazione statica.

- Se una variabile viene specificata una `threadprivate` direttiva in un'unità di conversione, è necessario specificarlo un `threadprivate` direttiva in ogni unità di conversione in cui è dichiarata.

- Oggetto `threadprivate` variabile non deve comparire in qualsiasi clausola, ad eccezione di `copyin`, `copyprivate`, `schedule`, `num_threads`, o il **se** clausola.

- L'indirizzo di un `threadprivate` variabile non è una costante di indirizzo.

- Oggetto `threadprivate` variabile non deve avere un tipo incompleto o un tipo riferimento.

- Oggetto `threadprivate` variabile con tipo di classe non POD deve avere un costruttore di copia accessibile e non ambiguo se è dichiarata con un inizializzatore esplicito.

Nell'esempio seguente viene illustrato come modificare una variabile che viene visualizzato in un inizializzatore di può causare un comportamento non specificato, nonché come evitare questo problema usando un costruttore di copia e un oggetto ausiliario.

```
int x = 1;
T a(x);
const T b_aux(x); /* Capture value of x = 1 */
T b(b_aux);
#pragma omp threadprivate(a, b)

void f(int n) {
   x++;
   #pragma omp parallel for
   /* In each thread:
   * Object a is constructed from x (with value 1 or 2?)
   * Object b is copy-constructed from b_aux
   */
   for (int i=0; i<n; i++) {
      g(a, b); /* Value of a is unspecified. */
   }
}
```

## <a name="cross-references"></a>Tra i riferimenti:

- Thread dinamico, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.

- `OMP_DYNAMIC` vedere variabile di ambiente [4.3 sezione](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49.