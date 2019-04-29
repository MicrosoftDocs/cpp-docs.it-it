---
title: 4. Variabili di ambiente
ms.date: 01/16/2019
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
ms.openlocfilehash: b41829fd9cf2f90312f669ef991f56dda02947f7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62363193"
---
# <a name="4-environment-variables"></a>4. Variabili di ambiente

In questo capitolo vengono descritte le variabili di ambiente OpenMP C e C++ API (o simile meccanismi specifici della piattaforma) che controllano l'esecuzione del codice parallelo.  I nomi delle variabili di ambiente devono essere maiuscoli. I valori ad essi assegnati sono maiuscole e minuscole e possono avere spazi vuoti iniziali e finali.  Le modifiche ai valori dopo l'avvio del programma vengono ignorate.

Le variabili di ambiente sono i seguenti:

- [OMP_SCHEDULE](#41-omp_schedule) imposta la dimensione di blocco e tipo di pianificazione in fase di esecuzione.
- [OMP_NUM_THREADS](#42-omp_num_threads) imposta il numero di thread da usare durante l'esecuzione.
- [OMP_DYNAMIC](#43-omp_dynamic) attiva o disattiva la regolazione dinamica del numero di thread.
- [OMP_NESTED](#44-omp_nested) Abilita o disabilita il parallelismo annidato.

Gli esempi in questo capitolo viene illustrato solo come queste variabili possono essere impostate in ambienti shell (csh) Unix C. In shell Korn e ambienti di DOS, le azioni sono simili:

csh:  
`setenv OMP_SCHEDULE "dynamic"`

ksh:  
`export OMP_SCHEDULE="dynamic"`

DOS:  
`set OMP_SCHEDULE="dynamic"`

## <a name="41-omp_schedule"></a>4.1 OMP_SCHEDULE

`OMP_SCHEDULE` si applica solo al `for` e `parallel for` direttive con il tipo di pianificazione `runtime`. Le dimensioni di blocco e tipo di pianificazione per tutti i cicli di questo tipo possono essere impostata in fase di esecuzione. Impostare questa variabile di ambiente per qualsiasi tipo di pianificazione riconosciuto e facoltativa *chunk_size*.

Per la `for` e `parallel for` direttive che hanno un tipo di pianificazione diverso da `runtime`, `OMP_SCHEDULE` viene ignorato. Il valore predefinito per questa variabile di ambiente è definito dall'implementazione. Se l'opzione facoltativa *chunk_size* è impostata, il valore deve essere positivo. Se *chunk_size* non è impostata, si presuppone un valore pari a 1, tranne quando la pianificazione è `static`. Per un `static` pianificazione, la dimensione del blocco predefinita è impostata sullo spazio di iterazione ciclo diviso per il numero di thread applicati al ciclo.

Esempio:

```csh
setenv OMP_SCHEDULE "guided,4"
setenv OMP_SCHEDULE "dynamic"
```

### <a name="cross-references"></a>Riferimenti incrociati

- [per](2-directives.md#241-for-construct) (direttiva)
- [parallelo per](2-directives.md#251-parallel-for-construct) (direttiva)

## <a name="42-omp_num_threads"></a>4.2 OMP_NUM_THREADS

Il `OMP_NUM_THREADS` variabile di ambiente imposta il numero predefinito di thread da usare durante l'esecuzione. `OMP_NUM_THREADS` viene ignorato se tale numero viene modificato in modo esplicito chiamando il `omp_set_num_threads` routine di libreria. Viene ignorato anche se è presente l'impostazione esplicita `num_threads` clausola in un `parallel` direttiva.

Il valore della `OMP_NUM_THREADS` variabile di ambiente deve essere un numero intero positivo. Il suo effetto varia a seconda se è abilitata la regolazione dinamica del numero di thread. Per un set completo di regole che stabiliscono l'interazione tra il `OMP_NUM_THREADS` ambiente regolazione dinamica e variabili di thread, vedere [sezione 2.3](2-directives.md#23-parallel-construct).

Il numero di thread da usare è definito dall'implementazione se:

- il `OMP_NUM_THREADS` variabile di ambiente non è specificata,
- il valore specificato non è un numero intero positivo o
- il valore è maggiore del numero massimo di thread che il sistema può supportare.

Esempio:

```csh
setenv OMP_NUM_THREADS 16
```

### <a name="cross-references"></a>Riferimenti incrociati

- [num_threads](2-directives.md#23-parallel-construct) clausola
- [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function) (funzione)
- [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function) function

## <a name="43-omp_dynamic"></a>4.3 OMP_DYNAMIC

Il `OMP_DYNAMIC` variabile di ambiente Abilita o disabilita la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele. `OMP_DYNAMIC` viene ignorata durante la regolazione dinamica è abilitato o disabilitato chiamando in modo esplicito il `omp_set_dynamic` routine di libreria. Il valore deve essere `TRUE` o `FALSE`.

Se `OMP_DYNAMIC` è impostata su `TRUE`, è possibile modificare il numero di thread usati per l'esecuzione di aree parallele dall'ambiente di runtime usare al meglio le risorse di sistema.  Se `OMP_DYNAMIC` è impostata su `FALSE`, regolazione dinamica è disabilitata. La condizione predefinita è definito dall'implementazione.

Esempio:

```csh
setenv OMP_DYNAMIC TRUE
```

### <a name="cross-references"></a>Riferimenti incrociati

- [Aree parallele](2-directives.md#23-parallel-construct)
- [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function) function

## <a name="44-omp_nested"></a>4.4 OMP_NESTED

Il `OMP_NESTED` variabile di ambiente Abilita o disabilita il parallelismo nidificato a meno che non annidati di parallelismo è abilitato o disabilitato chiamando il `omp_set_nested` routine di libreria. Se `OMP_NESTED` è impostata su `TRUE`, parallelismo annidato è abilitato. Se `OMP_NESTED` è impostata su `FALSE`nidificato parallelismo viene disabilitato. Il valore predefinito è `FALSE`.

Esempio:

```csh
setenv OMP_NESTED TRUE
```

### <a name="cross-reference"></a>Riferimento incrociato

- [omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function) function
