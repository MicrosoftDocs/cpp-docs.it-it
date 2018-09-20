---
title: 2.4.1 costrutto for | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 27d2cbce-786b-4819-91d3-d55b2cc57a5e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cb9a554d9141223be7a5f6bc741c86b8f03511e2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46428544"
---
# <a name="241-for-construct"></a>2.4.1 Costrutto for

Il **per** direttiva identifica un costrutto di condivisione del lavoro iterativo che specifica che le iterazioni del ciclo associato verranno eseguite in parallelo. Le iterazioni del **per** ciclo vengono distribuite tra i thread che già esistono nel team l'esecuzione di un costrutto parallelo a cui si esegue l'associazione. La sintassi del **per** costrutto è come segue:

```
#pragma omp for [clause[[,] clause] ... ] new-line for-loop
```

La clausola è uno dei seguenti:

**private (** *variabile-list* **)**

**firstprivate (** *variabile-list* **)**

**lastprivate(** *variable-list* **)**

**Reduction (** *operator* **:** *elenco variabili* **)**

**ordered**

**pianificazione (** *genere* [**,** *chunk_size*] **)**

**nowait**

Il **per** direttiva specifica limitazioni sulla struttura dei corrispondenti **per** ciclo. In particolare, il corrispondente **per** ciclo deve avere forma canonica:

**per (** *init-expr* **;** *var logico op b*; *incr-expr* **)**

*Init-expr*<br/>
Uno dei seguenti:

*var* = *bilanciamento del carico*

*tipo integer var* = *bilanciamento del carico*

*incr-expr*<br/>
Uno dei seguenti:

++ *var*

*var* ++

-- *var*

*var* --

*var* += *incr*

*var* -= *incr*

*var* = *var* + *incr*

*var* = *incr* + *var*

*var* = *var* - *incr*

*var*<br/>
Una variabile integer con segno. Se questa variabile in caso contrario, potrebbe essere condivisi, in modo implicito renderlo privato per la durata della **per**.   Questa variabile non deve essere modificata all'interno del corpo del **per** istruzione. Se non si specifica la variabile **lastprivate**, il relativo valore dopo il ciclo è indeterminato.

*operazione logica*<br/>
Uno dei seguenti:

<

\<=

>

\>=

*bilanciamento del carico*, *b*, e *incr*<br>
Le espressioni integer invariante del ciclo. Non vi è alcuna sincronizzazione durante la valutazione di espressioni. In questo modo, tutti gli effetti collaterali valutati produrre risultati imprevisti.

Si noti che la forma canonica consente il numero di iterazioni del ciclo deve essere calcolata in ingresso per il ciclo. Questo calcolo viene eseguito con i valori nel tipo di *var*, dopo le promozioni integrali. In particolare, se pari *b* - *lb* + *incr* non può essere rappresentato nel cui tipo, il risultato è indeterminato. Inoltre, se *logiche-op* è < o \<= then *incr-expr* causano *var* per aumentare a ogni iterazione del ciclo.   Se *logiche-op* è > o > = then *incr-expr* causano *var* diminuzione in ogni iterazione del ciclo.

Il **pianificazione** clausola che specifica come iterazioni delle **per** ciclo sono divise tra i thread del team. La correttezza di un programma non deve dipendere thread che esegue un'iterazione specifica. Il valore di *chunk_size*, se specificato, deve essere un'espressione integer invariante ciclo con un valore positivo. Non vi è alcuna sincronizzazione durante la valutazione dell'espressione. In questo modo, tutti gli effetti collaterali valutati produrre risultati imprevisti. La pianificazione *tipo* può essere uno dei seguenti:

TABELLA 2-1 **pianificazione** clausola *tipo* valori

|||
|-|-|
|statico|Quando **pianificazione (statici** *chunk_size* **)** è specificato, le iterazioni sono suddivisi in blocchi di dimensioni specificato dalla *chunk_size*. I blocchi vengono assegnati staticamente ai thread del team in modo round robin in base all'ordine il numero di thread. Se non si specifica *chunk_size* viene specificato, lo spazio di iterazione è suddiviso in blocchi che equivalgono circa le dimensioni, con un blocco assegnato a ogni thread.|
|dynamic|Quando **pianificazione (dinamica** *chunk_size* **)** è specificato, le iterazioni sono suddivisi in una serie di blocchi, ognuno dei quali contiene *chunk_size* iterazioni. Ogni blocco viene assegnato a un thread in attesa di un'assegnazione. Il thread viene eseguito il blocco di iterazioni e quindi attende la relativa assegnazione successivo, fino a quando nessun blocco rimarrà impostata per essere assegnati. Si noti che l'ultimo blocco per l'assegnazione può avere un numero inferiore di iterazioni. Se non si specifica *chunk_size* viene specificato, l'impostazione predefinita è 1.|
|PGO|Quando **pianificazione (guidati** *chunk_size* **)** viene specificato, le iterazioni vengono assegnate ai thread in blocchi con riducendo le dimensioni. Quando un thread termina il blocco assegnato di iterazioni, esso viene assegnato dinamicamente un altro blocco, fino a quando non rimane nessuna. Per un *chunk_size* pari a 1, la dimensione di ciascun blocco è approssimativamente il numero di iterazioni non assegnati diviso per il numero di thread. Queste dimensioni diminuiscono circa esponenzialmente su 1. Per un *chunk_size* con il valore *k* maggiore di 1, le dimensioni di circa diminuire in modo esponenziale a *k*, ad eccezione del fatto che l'ultimo blocco potrà avere meno di  *k* iterazioni. Se non si specifica *chunk_size* viene specificato, l'impostazione predefinita è 1.|
|runtime|Quando **Schedule (Runtime)** viene specificato, la decisione relativa a pianificazione viene posticipata fino alla fase di esecuzione. La pianificazione *genere* e le dimensioni dei blocchi possono essere scelte in fase di esecuzione impostando la variabile di ambiente **OMP_SCHEDULE**. Se questa variabile di ambiente non è impostata, la pianificazione risulta viene definito dall'implementazione. Quando **Schedule (Runtime)** omette *chunk_size* non deve essere specificata.|

In assenza di un controllo definito in modo esplicito **pianificazione** clausola, il valore predefinito **pianificazione** è definito dall'implementazione.

Un programma OpenMP conformi necessario non affidarsi a una determinata pianificazione per l'esecuzione corretta. Un programma necessario non affidarsi a una pianificazione *genere* conformi con precisione e la descrizione specificata in precedenza, perché è possibile disporre di variazioni nelle implementazioni della pianificazione stessa *tipo* tra compilatori diversi. Le descrizioni sono utilizzabile per selezionare la pianificazione appropriata per una determinata situazione.

Il **ordinati** clausola deve essere presente quando **ordinati** direttive associare al **per** costruire.

È una barriera implicita alla fine di una **per** costruire, a meno che un **nowait** è specificata alcuna clausola.

Restrizioni per il **per** direttiva sono i seguenti:

- Il **per** ciclo deve essere un blocco strutturato e, inoltre, l'esecuzione deve non terminare con un **interruzione** istruzione.

- I valori del ciclo controllano le espressioni del **per** ciclo associata a un **per** direttiva deve essere uguale per tutti i thread del team.

- Il **per** variabile di iterazione del ciclo deve presentare un tipo intero con segno.

- Una sola **pianificazione** clausola può apparire in un **per** direttiva.

- Una sola **ordinati** clausola può apparire in un **per** direttiva.

- Una sola **nowait** clausola può apparire in un **per** direttiva.

- È se non specificato o frequenza eventuali effetti all'interno di *chunk_size*, *lb*, *b*, oppure *incr* espressioni si verificano.

- Il valore della *chunk_size* espressione deve essere uguale per tutti i thread del team.

## <a name="cross-references"></a>Tra i riferimenti:

- **privato**, **firstprivate**, **lastprivate**, e **riduzione** clausole, vedere [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) a pagina 25.

- **OMP_SCHEDULE** vedere variabile di ambiente [sezione 4.1](../../parallel/openmp/4-1-omp-schedule.md) nella pagina 48.

- **ordinati** costruire, vedere [sezione 2.6.6](../../parallel/openmp/2-6-6-ordered-construct.md) nella pagina 22.

- [Appendice D](../../parallel/openmp/d-using-the-schedule-clause.md), pagina 93, fornisce ulteriori informazioni sull'utilizzo della clausola di pianificazione.