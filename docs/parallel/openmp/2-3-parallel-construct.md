---
title: 2.3 Costrutto parallel
ms.date: 11/04/2016
ms.assetid: 190eacdf-2c16-4c06-8cb7-ac60eb211425
ms.openlocfilehash: 6ee7539af05bef1fdca117d806900f2f5a9c0d7f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50494675"
---
# <a name="23-parallel-construct"></a>2.3 Costrutto parallel

La direttiva seguente definisce un'area parallela, ovvero un'area del programma che deve essere eseguito da più thread in parallelo. Questo è il costrutto fondamentale che avvia l'esecuzione parallela.

```
#pragma omp parallel [clause[ [, ]clause] ...] new-line   structured-block
```

Il *clausola* è uno dei seguenti:

**if(** *scalar-expression* **)**

**private (** *variabile-list* **)**

**firstprivate (** *variabile-list* **)**

**predefinito (condiviso &#124; none)**

**condiviso (** *variabile-list* **)**

**copyin(** *variable-list* **)**

**Reduction (** *operator* **:***elenco variabili* **)**

**num_threads(** *integer-expression* **)**

Quando un thread viene rilevato un costrutto parallelo, viene creato un team di thread se viene soddisfatta una delle situazioni seguenti:

- No **se** clausola è presente.

- Il **se** espressione restituisce un valore diverso da zero.

Questo thread diventa il thread master del team, con un numero di thread pari a 0, e tutti i thread del team, tra cui il thread master, eseguono l'area in parallelo. Se il valore della **se** espressione è uguale a zero, l'area viene serializzata.

Per determinare il numero di thread che vengono richiesti, le regole seguenti verranno considerate in ordine. Verrà applicata la regola prima la cui condizione viene soddisfatta:

1. Se il **num_threads** clausola è presente, quindi il valore dell'espressione integer è il numero di thread richiesto.

1. Se il **omp_set_num_threads** funzione della libreria è stato chiamato, quindi il valore dell'argomento nella chiamata eseguita più di recente è il numero di thread richiesto.

1. Se la variabile di ambiente **OMP_NUM_THREADS** è definito, il valore di questa variabile di ambiente è il numero di thread richiesto.

1. Se nessuno dei metodi precedenti sono stati utilizzati, il numero di thread richiesti è definito dall'implementazione.

Se il **num_threads** clausola è presenta, sostituisce il numero di thread richiesti per il **omp_set_num_threads** funzione della libreria o la **OMP_NUM_THREADS** variabile di ambiente solo per tale area a che viene applicato. Aree parallele successive non sono interessate da esso.

Il numero di thread che eseguono l'area parallela dipende anche se è abilitata la regolazione dinamica del numero di thread. Se la regolazione dinamica viene disabilitata, il numero di thread richiesti eseguirà l'area parallela. Se la regolazione dinamica è abilitata il numero di thread richiesto è il numero massimo di thread che può essere eseguita l'area parallela.

Se un'area parallela viene rilevata durante la regolazione dinamica del numero di thread è disabilitata e il numero di thread richiesti per l'area parallela supera il numero che può fornire il sistema in fase di esecuzione, il comportamento del programma è definito dall'implementazione. Un'implementazione potrebbe, ad esempio, interrompere l'esecuzione del programma, o potrebbe serializzare tale area.

Il **omp_set_dynamic** funzione di libreria e il **OMP_DYNAMIC** variabile di ambiente può essere utilizzata per abilitare e disabilitare la regolazione dinamica del numero di thread.

Il numero di processori fisici effettivamente che ospita i thread in qualsiasi momento è definito dall'implementazione. Una volta creato, il numero di thread del team rimane costante per la durata di tale area parallela. Può essere modificata in modo esplicito dall'utente o automaticamente dal sistema in fase di esecuzione da un'area parallela a un'altra.

Le istruzioni contenute in extent dinamica dell'area parallelo vengono eseguite da ogni thread, e ogni thread possono eseguire un percorso di istruzioni che è diverso dagli altri thread. Direttive rilevate di fuori l'ambito lessicale di un'area parallela sono detti direttive orfane.

È presente una barriera implicita alla fine di un'area parallela. Solo i thread master del team continua l'esecuzione alla fine di un'area parallela.

Se un thread in un team l'esecuzione di un'area parallela viene rilevato un altro costrutto parallelo, crea un nuovo team e diventa il master di tale nuovo team. Aree parallele annidate vengono serializzate per impostazione predefinita. Di conseguenza, per impostazione predefinita, un'area parallela nidificata viene eseguita da un team composto da un thread. Il comportamento predefinito può essere modificato tramite la funzione della libreria runtime **omp_set_nested** o la variabile di ambiente **OMP_NESTED**. Tuttavia, il numero di thread in un team che eseguono un'area parallela annidata è definito dall'implementazione.

Restrizioni per il **parallele** direttiva sono i seguenti:

- Al massimo uno **se** clausola può apparire nella direttiva.

- Non viene specificato se qualsiasi lato effetti all'interno di se espressione oppure **num_threads** espressione verificarsi.

- Oggetto **throw** eseguita all'interno di un'area parallela deve provocare l'esecuzione ripresa entro l'ambito dinamico dello stesso blocco strutturato e devono essere intercettata dallo stesso thread che ha generato l'eccezione.

- Una sola **num_threads** clausola può apparire nella direttiva. Il **num_threads** espressione viene valutata all'esterno del contesto dell'area parallela e deve restituire un valore intero positivo.

- L'ordine di valutazione del **se** e **num_threads** clausole non è specificato.

## <a name="cross-references"></a>Tra i riferimenti:

- **privato**, **firstprivate**, **predefinita**, **condiviso**, **copyin**, e **riduzione**clausole, vedere [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) a pagina 25.

- **OMP_NUM_THREADS** variabile di ambiente [4.2 sezione](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48.

- **omp_set_dynamic** funzione di libreria, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.

- **OMP_DYNAMIC** vedere variabile di ambiente [4.3 sezione](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49.

- **omp_set_nested** funzione, vedere [sezione 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40.

- **OMP_NESTED** vedere variabile di ambiente [sezione 4.4](../../parallel/openmp/4-4-omp-nested.md) nella pagina 49.

- **omp_set_num_threads** funzione di libreria, vedere [sezione 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36.