---
title: "2.3 parallel Construct | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 190eacdf-2c16-4c06-8cb7-ac60eb211425
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.3 parallel Construct
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La direttiva seguente definisce un'area parallela, cioé un'area del programma che deve essere eseguito da più thread in parallelo.  Si tratta del costrutto fondamentale che avvia l'esecuzione parallela.  
  
```  
#pragma omp parallel [clause[ [, ]clause] ...] new-line  
   structured-block  
```  
  
 *clausola* è uno dei seguenti:  
  
 **se \(**scalare\-espressione**\)**  
  
 **privato \(**variabile\-elenco**\)**  
  
 **firstprivate \(**variabile\-elenco**\)**  
  
 **il valore predefinito \(condivisa &#124; nessuno\)**  
  
 **\(condiviso**variabile\-elenco**\)**  
  
 **copyin \(**variabile\-elenco**\)**  
  
 **riduzione \(**operatore**:** variabile\-elenco**\)**  
  
 **num\_threads \(**Integer\-espressione**\)**  
  
 Quando un thread viene rilevato un costrutto parallelo, un team di thread viene creata se uno dei casi seguenti è vera:  
  
-   no **se** la clausola è presente.  
  
-   **se** l'espressione restituisce un valore diverso da zero.  
  
 Questo thread diventa il thread master del team, con un numero di thread di 0 e tutti i thread del team, incluso il thread master, eseguono l'area in parallelo.  Se il valore di **se** l'espressione è zero, l'area viene serializzata.  
  
 Per determinare il numero di thread necessari, le regole seguenti verranno considerate in ordine.  La prima regola di cui la condizione viene soddisfatta verrà applicato:  
  
1.  se **num\_threads** la clausola è presente, il valore dell'espressione Integer è il numero di thread necessari.  
  
2.  se **omp\_set\_num\_threads** la funzione della libreria è stata chiamata, il valore dell'argomento nella chiamata di recente eseguita è il numero di thread necessari.  
  
3.  se la variabile di ambiente **OMP\_NUM\_THREADS** viene definito, il valore della variabile di ambiente è il numero di thread necessari.  
  
4.  Se nessuno dei metodi sopra venisse utilizzato, il numero di thread che è implementazione\-definito.  
  
 se **num\_threads** la clausola è presente quindi che sostituisce il numero di thread richiesti da  **omp\_set\_num\_threads** funzione di libreria o  **OMP\_NUM\_THREADS** variabile di ambiente solo per area parallela si applica a.  le aree parallele successive non sono interessate da.  
  
 Il numero di thread che eseguono area parallela dipende inoltre da su indipendentemente dal fatto che la modifica dinamica del numero di thread è abilitata.  Se la modifica dinamica è disabilitata, il numero richiesto di thread eseguirà area parallela.  Se la modifica dinamica viene abilitata il numero richiesto di thread è il numero massimo di thread che è possibile eseguire area parallela.  
  
 Se un'area parallela viene rilevato durante la modifica dinamica del numero di thread viene disabilitata e il numero di thread dell'area parallela supera il numero del sistema in fase di esecuzione possibile immettere, il comportamento del programma viene implementazione\-definito.  Un'implementazione possibile, ad esempio, arrestare l'esecuzione del programma, o possibile serializzare area parallela.  
  
 **omp\_set\_dynamic** funzione di libreria e  **OMP\_DYNAMIC** la variabile di ambiente può essere utilizzata per abilitare e disabilitare il ridimensionamento dinamico il numero di thread.  
  
 Il numero di processori in realtà fisici che ospitano i thread in un determinato momento è implementazione\-definito.  Dopo avere creato, il numero di thread rimane costante per la durata dell'area parallela.  Può essere modificata esplicitamente dall'utente o automaticamente dal sistema in fase di esecuzione da un'area parallela a un altro.  
  
 Le istruzioni contenute nell'ambito dinamico dell'area parallela vengono eseguiti da ogni thread e ogni thread può eseguire un percorso di istruzioni che è diverso dagli altri thread.  Le direttive si riscontraambito lessicale di un'area parallela sono definiti direttive orfane.  
  
 Esiste una barriera implicita alla fine di un'area parallela.  Solo il thread master del team l'esecuzione continua alla fine di un'area parallela.  
  
 Se un thread in un team che esegue un'area parallela incontra un altro costrutto parallelo, viene creato un nuovo team e diventa la pagina master del nuovo team.  Le aree parallele annidate vengono serializzate per impostazione predefinita.  Pertanto, per impostazione predefinita, un'area parallela annidata viene eseguita da un team costituito da un thread.  Il comportamento predefinito può essere modificato tramite qualsiasi la funzione della libreria di runtime **omp\_set\_nested** o la variabile di ambiente  **OMP\_NESTED**.  Tuttavia, il numero di thread in un team che eseguono un'area parallela annidata è implementazione\-definito.  
  
 Restrizioni a **parallelo** la direttiva è la seguente:  
  
-   Al massimo uno **se** la clausola può apparire nella direttiva.  
  
-   Non è specificata se tutti gli effetti collaterali in se espressione o **num\_threads** l'espressione si verifica.  
  
-   In **generare** eseguito in un'area parallela deve causare l'esecuzione viene riattivato nell'ambito dinamico dello stesso blocco strutturato e deve essere rilevato dallo stesso thread che ha generato l'eccezione.  
  
-   Solo un singolo **num\_threads** la clausola può apparire nella direttiva.  **num\_threads** l'espressione viene valutata all'esterno del contesto dell'area parallela e deve restituire un valore Integer positivo.  
  
-   L'ordine di valutazione di **se** e  **num\_threads** le clausole non è specificato.  
  
## riferimenti incrociati:  
  
-   **privato**,  **firstprivate**,  **impostazione predefinita**,  **condiviso**,  **copyin**e  **riduzione** le clausole, vedere  [parte 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.  
  
-   **OMP\_NUM\_THREADS** variabile di ambiente,  [parte 4,2](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48.  
  
-   **omp\_set\_dynamic** la funzione di libreria, vedere  [parte 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.  
  
-   **OMP\_DYNAMIC** la variabile di ambiente, vedere  [parte 4,3](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49.  
  
-   **omp\_set\_nested** la funzione, vedere  [parte 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40.  
  
-   **OMP\_NESTED** la variabile di ambiente, vedere  [parte 4,4](../../parallel/openmp/4-4-omp-nested.md) nella pagina 49.  
  
-   **omp\_set\_num\_threads** la funzione di libreria, vedere  [parte 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36.