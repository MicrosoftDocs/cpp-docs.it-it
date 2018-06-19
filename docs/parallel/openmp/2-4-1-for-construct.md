---
title: 2.4.1 costrutto for | Documenti Microsoft
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
ms.openlocfilehash: d5165c21f0bf6f2b9757550208d5e8e26a2bd3b1
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33693549"
---
# <a name="241-for-construct"></a>2.4.1 Costrutto for
Il **per** direttiva identifica un costrutto di condivisione del lavoro iterativo che specifica che le iterazioni del ciclo associato verranno eseguite in parallelo. Le iterazioni del **per** ciclo vengono distribuite tra thread già presenti nel gruppo a cui associa un costrutto parallelo in esecuzione. La sintassi del **per** costrutto è come segue:  
  
```  
#pragma omp for [clause[[,] clause] ... ] new-linefor-loop  
```  
  
 La clausola è uno dei valori seguenti:  
  
 **private (** *variabile-list* **)**  
  
 **firstprivate (** *variabile-list* **)**  
  
 **lastprivate(** *variable-list* **)**  
  
 **riduzione (** *operatore* **:** *variabile-elenco * * *)**  
  
 **ordered**  
  
 **pianificazione (** *tipo*[, *chunk_size*]**)**  
  
 **nowait**  
  
 Il **per** direttiva inserisce restrizioni sulla struttura dei corrispondenti **per** ciclo. In particolare, il corrispondente **per** ciclo deve avere una forma canonica:  
  
 **per (** *init-expr* **;** *var logico op b*; */incr-expr * * *)**  
  
 *Init-expr*  
 Uno dei seguenti:  
  
 *var* = *lb*  
  
 *tipo integer var* = *lb*  
  
 *incr-expr*  
 Uno dei seguenti:  
  
 ++*Var*  
  
 *var* ++  
  
 -- *Var*  
  
 *var* --  
  
 *var* += */incr*  
  
 *var* -= */incr*  
  
 *var* = *var* + */incr*  
  
 *var* = */incr* + *var*  
  
 *var* = *var* - */incr*  
  
 *var*  
 Una variabile integer con segno. Se questa variabile sarebbe condivisi in caso contrario, viene implicitamente reso privato per la durata del **per**.   Questa variabile non deve essere modificata all'interno del corpo del **per** istruzione. Se non si specifica la variabile **lastprivate**, il valore dopo il ciclo è indeterminato.  
  
 *operazione logica*  
 Uno dei seguenti:  
  
 <  
  
 \<=  
  
 >  
  
 \>=  
  
 *lb*, *b*, e */incr*  
 Ciclo espressioni integer invariante. Vi è alcuna sincronizzazione durante la valutazione di espressioni. Di conseguenza, tutti gli effetti collaterali valutati produrre risultati imprevisti.  
  
 Si noti che la forma canonica consente un numero di iterazioni del ciclo deve essere calcolata sulla voce per il ciclo. Questo calcolo viene eseguito con i valori nel tipo di *var*, dopo le promozioni integrali. In particolare, se valore *b* - *lb* + */incr* non può essere rappresentato in tipo, il risultato è indeterminato. Inoltre, se *logico op* è < o \<= quindi */incr expr* causano *var* per aumentare a ogni iterazione del ciclo.   Se *logico op* è > o > = quindi */incr expr* causano *var* a diminuire a ogni iterazione del ciclo.  
  
 Il **pianificazione** clausola specifica come iterazioni del **per** ciclo sono divise tra i thread del team. La correttezza di un programma non deve dipendere quale thread viene eseguita un'iterazione specifica. Il valore di *chunk_size*, se specificato, deve essere un'espressione integer invariante ciclo con un valore positivo. Vi è alcuna sincronizzazione durante la valutazione dell'espressione. Di conseguenza, tutti gli effetti collaterali valutati produrre risultati imprevisti. La pianificazione *tipo* può essere uno dei seguenti:  
  
 TABELLA 2-1 **pianificazione** clausola *tipo* valori  
  
|||  
|-|-|  
|statico|Quando si **pianificazione (statico,** *chunk_size * * *)** viene specificato, le iterazioni sono suddivisi in blocchi di dimensioni specificato dal *chunk_size*. I blocchi vengono assegnati in modo statico per i thread del team in uno schema round-robin, nell'ordine il numero di thread. Se non si *chunk_size* è specificato, lo spazio di iterazione è suddiviso in blocchi che sono approssimativamente in dimensioni con un blocco assegnato a ogni thread.|  
|dynamic|Quando si **pianificazione (dinamica,** *chunk_size * * *)** viene specificato, le iterazioni sono suddivisi in una serie di blocchi, ognuno dei quali contiene *chunk_size* iterazioni. Ogni blocco viene assegnato a un thread in attesa di un'assegnazione. Il thread viene eseguito il blocco di iterazioni e quindi attende la relativa assegnazione successivo, fino a quando nessun blocco rimarrà impostata per essere assegnati. Si noti che l'ultimo blocco per poter essere assegnati può avere un numero inferiore di iterazioni. Se non si *chunk_size* è specificato, l'impostazione predefinita su 1.|  
|PGO|Quando si **pianificazione (guidati** *chunk_size * * *)** viene specificato, le iterazioni assegnate al thread in blocchi con riducendo le dimensioni. Quando un thread termina il blocco assegnato di iterazioni, in modo dinamico viene assegnato un altro blocco, fino a quando non rimane nessuna. Per un *chunk_size* pari a 1, la dimensione di ciascun blocco è approssimativamente il numero di iterazioni non assegnati diviso per il numero di thread. Queste dimensioni diminuiscono circa esponenzialmente su 1. Per un *chunk_size* con valore *k* maggiore di 1, le dimensioni di circa ridurre in modo esponenziale a *k*, ad eccezione del fatto che l'ultimo blocco potrebbe essere meno di  *k* iterazioni. Se non si *chunk_size* è specificato, l'impostazione predefinita su 1.|  
|runtime|Quando **Schedule (Runtime)** viene specificato, le decisioni relative alla pianificazione viene posticipata fino alla fase di esecuzione. La pianificazione *tipo* e dimensione dei blocchi è possibile accedere in fase di esecuzione impostando la variabile di ambiente **OMP_SCHEDULE**. Se questa variabile di ambiente non è impostata, la pianificazione risulta è definito dall'implementazione. Quando **Schedule (Runtime)** è specificato, *chunk_size* non deve essere specificato.|  
  
 In assenza di definite in modo esplicito **pianificazione** clausola, il valore predefinito **pianificazione** è definito dall'implementazione.  
  
 Un programma compatibile con OpenMP non deve basarsi su una determinata pianificazione per l'esecuzione corretta. Un programma non deve basarsi su una pianificazione *tipo* conforme con precisione e la descrizione dell'indicata in precedenza, perché è possibile disporre di variazioni nelle implementazioni della stessa pianificazione *tipo* tra diversi compilatori. Le descrizioni consente di selezionare la pianificazione appropriata per una determinata situazione.  
  
 Il **ordinati** clausola deve essere presente quando **ordinati** direttive associare il **per** costruire.  
  
 È una barriera implicita alla fine di un **per** creare a meno che un **nowait** è specificata alcuna clausola.  
  
 Restrizioni per il **per** direttiva sono i seguenti:  
  
-   Il **per** ciclo deve essere un blocco strutturato e, inoltre, l'esecuzione non deve essere terminato da un **interruzione** istruzione.  
  
-   I valori del ciclo di espressioni di controllano di **per** ciclo associata a un **per** direttiva deve essere uguale per tutti i thread del team.  
  
-   Il **per** variabile di iterazione del ciclo deve avere un tipo integer con segno.  
  
-   Una sola **pianificazione** clausola può essere incluso in un **per** direttiva.  
  
-   Una sola **ordinati** clausola può essere incluso in un **per** direttiva.  
  
-   Una sola **nowait** clausola può essere incluso in un **per** direttiva.  
  
-   È se non specificato o la frequenza con cui eventuali effetti all'interno di *chunk_size*, *lb*, *b*, o */incr* sono presenti espressioni.  
  
-   Il valore di *chunk_size* espressione deve essere uguale per tutti i thread del team.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **private**, **firstprivate**, **lastprivate**, e **riduzione** clausole, vedere [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.  
  
-   **OMP_SCHEDULE** vedere variabile di ambiente [sezione 4.1](../../parallel/openmp/4-1-omp-schedule.md) nella pagina 48.  
  
-   **ordinati** costruire, vedere [sezione 2.6.6](../../parallel/openmp/2-6-6-ordered-construct.md) nella pagina 22.  
  
-   [Appendice D](../../parallel/openmp/d-using-the-schedule-clause.md), pagina 93, vengono fornite ulteriori informazioni sull'utilizzo della clausola di pianificazione.