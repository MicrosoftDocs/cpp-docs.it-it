---
title: 2.3 costrutto parallel | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 190eacdf-2c16-4c06-8cb7-ac60eb211425
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 89167547085682a81cc1d281f4f32ab55022d27c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="23-parallel-construct"></a>2.3 Costrutto parallel
La direttiva seguente definisce un'area parallela, che è un'area del programma che deve essere eseguito da più thread in parallelo. Ciò è fondamentale che inizia l'esecuzione parallela.  
  
```  
#pragma omp parallel [clause[ [, ]clause] ...] new-line   structured-block  
```  
  
 Il *clausola* è uno dei seguenti:  
  
 **Se (** *espressione scalare* **)**  
  
 **private (** *elenco variabili* **)**  
  
 **firstprivate (** *elenco variabili* **)**  
  
 **predefinito (condiviso &#124; none)**  
  
 **condiviso (** *elenco variabili* **)**  
  
 **copyin (** *elenco variabili* **)**  
  
 **riduzione (** *operatore* **:***elenco variabili* **)**   
  
 **num_threads (** *espressione integer* **)**  
  
 Quando un thread incontra un costrutto parallelo, viene creato un gruppo di thread se viene soddisfatta una delle seguenti condizioni:  
  
-   Non **se** clausola è presente.  
  
-   Il **se** espressione restituisce un valore diverso da zero.  
  
 Questo thread diventa il thread principale del team, con un numero di thread pari a 0, e tutti i thread del team, incluso il thread principale, l'area di eseguire in parallelo. Se il valore di **se** espressione è zero, l'area viene serializzato.  
  
 Per determinare il numero di thread che vengono richiesti, le regole seguenti verranno considerate in ordine. La prima regola, la cui condizione verrà applicata:  
  
1.  Se il **num_threads** clausola è presente, quindi il valore dell'espressione integer è il numero di thread richiesto.  
  
2.  Se il **omp_set_num_threads** funzione della libreria è stato chiamato, quindi il valore dell'argomento nella chiamata eseguito di recente è il numero di thread richiesto.  
  
3.  Se la variabile di ambiente **OMP_NUM_THREADS** è definito, il valore di questa variabile di ambiente è il numero di thread richiesto.  
  
4.  Se nessuno dei metodi precedenti sono stati utilizzati, il numero di thread richiesto è definito dall'implementazione.  
  
 Se il **num_threads** clausola è presente, quindi sostituisce il numero di thread richiesti per il **omp_set_num_threads** funzione della libreria o **OMP_NUM_THREADS** solo per tale area che viene applicato alla variabile di ambiente. Successive aree parallele non sono interessate da esso.  
  
 Il numero di thread che eseguono l'area parallela dipende anche se è abilitata la regolazione dinamica del numero di thread. Se la regolazione dinamica è disabilitata, il numero di thread richiesti eseguirà area parallela. Se la regolazione dinamica è abilitata il numero richiesto di thread è il numero massimo di thread che possono essere eseguite area parallela.  
  
 Se un'area parallela viene rilevata durante la regolazione dinamica del numero di thread è disabilitata e il numero di thread richiesti per l'area parallela supera il numero che può fornire il sistema in fase di esecuzione, il comportamento del programma è definito dall'implementazione. Un'implementazione può, ad esempio, interrompere l'esecuzione del programma, o può serializzare l'area parallela.  
  
 Il **omp_set_dynamic** funzione della libreria e **OMP_DYNAMIC** variabile di ambiente può essere utilizzata per abilitare e disabilitare la regolazione dinamica del numero di thread.  
  
 Il numero di processori fisici hosting effettivamente i thread in qualsiasi momento è definito dall'implementazione. Una volta creato, il numero di thread del team rimane costante per la durata di tale area parallela. Può essere modificata in modo esplicito dall'utente o automaticamente dal sistema in fase di esecuzione da un'area parallela a un altro.  
  
 Le istruzioni contenute in quanto dinamica dell'area parallela vengono eseguite da ogni thread e un percorso diverso da altri thread di istruzioni è possibile eseguire ogni thread. Direttive rilevate all'esterno di extent lessicale di un'area parallela vengono definite come direttive orfane.  
  
 È una barriera implicita alla fine di un'area parallela. Solo i thread del team di master continua l'esecuzione alla fine di un'area parallela.  
  
 Se un thread in un team, l'esecuzione di un'area parallela incontra un altro costrutto parallelo, viene creato un nuovo team e diventa il master del nuovo team. Per impostazione predefinita, vengono serializzati regioni parallel annidate. Di conseguenza, per impostazione predefinita, un'area parallela nidificata viene eseguita da un team composto da un thread. Il comportamento predefinito può essere modificato utilizzando la funzione della libreria runtime **omp_set_nested** o la variabile di ambiente **OMP_NESTED**. Tuttavia, il numero di thread in un team che eseguono un'area parallela nidificata è definito dall'implementazione.  
  
 Restrizioni per il **parallela** direttiva sono i seguenti:  
  
-   Al massimo uno **se** clausola può apparire nella direttiva.  
  
-   Non viene specificato se qualsiasi lato effetti all'interno di espressioni o **num_threads** espressione verificarsi.  
  
-   Oggetto **generare** eseguito all'interno di un'area parallela causano la ripresa in quanto dinamica del blocco strutturato stesso e devono essere intercettata dallo stesso thread che ha generato l'eccezione.  
  
-   Una sola **num_threads** la clausola può apparire nella direttiva. Il **num_threads** espressione viene valutata all'esterno del contesto dell'area parallela e deve restituire un valore intero positivo.  
  
-   L'ordine di valutazione del **se** e **num_threads** clausole non è specificato.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **privato**, **firstprivate**, **predefinito**, **condivisa**, **copyin**, e **riduzione**clausole, vedere [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.  
  
-   **OMP_NUM_THREADS** variabile di ambiente, [sezione 4.2](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48.  
  
-   **omp_set_dynamic** funzione della libreria, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.  
  
-   **OMP_DYNAMIC** vedere variabile di ambiente [sezione 4.3](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49.  
  
-   **omp_set_nested** funzione, vedere [sezione 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40.  
  
-   **OMP_NESTED** vedere variabile di ambiente [sezione 4.4](../../parallel/openmp/4-4-omp-nested.md) nella pagina 49.  
  
-   **omp_set_num_threads** funzione della libreria, vedere [sezione 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36.