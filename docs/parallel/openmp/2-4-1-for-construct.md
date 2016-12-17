---
title: "2.4.1 for Construct | Microsoft Docs"
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
ms.assetid: 27d2cbce-786b-4819-91d3-d55b2cc57a5e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.4.1 for Construct
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**per** la direttiva identifica un costrutto iterativo di suddivisione del lavoro che specifica che le iterazioni del ciclo associato verranno eseguite in parallelo.  Le iterazioni di **per** il ciclo è distribuita nei thread che sono già presenti nel team che esegue il costrutto parallelo a cui è associato.  La sintassi di **per** il costrutto è la seguente:  
  
```  
#pragma omp for [clause[[,] clause] ... ] new-line  
   for-loop  
```  
  
 La clausola è una delle seguenti:  
  
 **privato \(**variabile\-elenco**\)**  
  
 **firstprivate \(**variabile\-elenco**\)**  
  
 **lastprivate \(**variabile\-elenco**\)**  
  
 **riduzione \(**operatore **:** variabile\-elenco**\)**  
  
 **ordinato**  
  
 **pianificazione \(**tipo\[, chunk\_size\]**\)**  
  
 **nowait**  
  
 \_ per la direttiva consente di posizionare le restrizioni relative alla struttura della corrispondenza per ciclo.  In particolare, la corrispondenza **per** il ciclo deve essere forma canonica:  
  
 **per \(**init\-expr**;** var b logico\-op; aumento\-expr**\)**  
  
 *init\-expr*  
 Uno dei seguenti:  
  
 *var* \= *cancelletto*  
  
 *tipo integer var* \= *cancelletto*  
  
 *aumento\-expr*  
 Uno dei seguenti:  
  
 C\+\+*var*  
  
 *var* C\+\+  
  
 \-\- *var*  
  
 *var* \-\-  
  
 *var* \+\= *aumento*  
  
 *var* \- \= *aumento*  
  
 *var* \= *var* \+ *aumento*  
  
 *var* \= *aumento* \+ *var*  
  
 *var* \= *var* \- *incr*  
  
 *var*  
 Una variabile di integer con segno.  Se questa variabile è condivisa in caso contrario, in modo implicito viene resa privata per la durata di **per**.  Questa variabile non deve essere modificata nel corpo del **per** istruzione.  A meno che la variabile non sia specificata **lastprivate**, il valore dopo il ciclo è indeterminato.  
  
 *logico\-op*  
 Uno dei seguenti:  
  
 \<  
  
 \<\=  
  
 \>  
  
 \>\=  
  
 *cancelletto*, *b*e *aumento*  
 Espressioni Integer invarianti del ciclo.  Non esiste alcuna sincronizzazione durante la valutazione delle espressioni.  Pertanto, tutti gli effetti collaterali valutati forniscono risultati imprevisti.  
  
 Si noti che il formato canonico consente il numero di iterazioni del ciclo da calcolare la voce nel ciclo.  Il calcolo viene eseguito con i valori del tipo di *var*, dopo le promozioni integrali.  in particolare, se valore di *b* \- *cancelletto* \+ *aumento* non può essere rappresentato in quel tipo, il risultato è indeterminato.  Inoltre, se *logico\-op* viene quindi \< o \<\= *aumento\-expr* deve causare *var* per aumentare a ogni iterazione del ciclo.  se *logico\-op* viene quindi \> o \>\= *aumento\-expr* deve causare *var* per ridurre a ogni iterazione del ciclo.  
  
 **pianificazione** la clausola specifica come iterazioni di  **per** il ciclo viene suddiviso tra i thread del team.  La precisione di un programma non deve dipendere dal thread esegue un'iterazione specifica.  il valore di *chunk\_size*, se specificata, deve essere un'espressione Integer invariante del ciclo con un valore positivo.  Non esiste alcuna sincronizzazione durante la valutazione dell'espressione.  Pertanto, tutti gli effetti collaterali valutati forniscono risultati imprevisti.  la pianificazione *tipo* può essere:  
  
 L'istruzione SQL 2\-1       **pianificazione** clausola tipo valori  
  
|||  
|-|-|  
|static|quando **pianificazione \(statico,**chunk\_size**\)** viene specificato, iterazioni sono suddivisi nei blocchi di dimensione specificata da chunk\_size.  I blocchi vengono assegnati in modo statico ai thread del team in modo round robin per il numero di thread.  Quando non *chunk\_size* viene specificato, lo spazio di iterazione è suddiviso in blocchi che sono approssimativamente uguali nella dimensione, con un blocco assegnato a ogni thread.|  
|dynamic|quando **pianificazione \(dinamica,** chunk\_size**\)** viene specificato, le iterazioni sono suddivisi in una serie di blocchi, ciascuno contenente chunk\_size iterazioni.  Ogni blocco viene assegnato a un thread in attesa di assegnazione.  Il thread viene eseguito il blocco di iterazioni e quindi di attesa per la relativa assegnazione seguente, finché non blocco non rimane assegnare.  Si noti che l'ultimo blocco da assegnare può avere un minore numero di iterazioni.  Quando non *chunk\_size* viene specificato, verrà utilizzato il valore predefinito è 1.|  
|guida|quando **pianificazione \(guida,** chunk\_size**\)** viene specificato, le iterazioni vengono assegnati i thread in blocchi con una riduzione delle dimensioni.  Quando un thread termina il blocco assegnato di iterazioni, viene assegnato dinamicamente un altro blocco, finché non non rimangano.  Per una proprietà *chunk\_size* a 1, la dimensione di ciascun blocco è approssimativamente il numero di iterazioni assegnato diviso per il numero di thread.  Riduzione delle dimensioni approssimativamente esponenzialmente a 1.  Per una proprietà *chunk\_size* con valore *K* maggiore di 1, la perdita di dimensioni approssimativamente esponenzialmente a *K*, eccetto l'ultimo blocco può essere meno che *K* iterazioni.  Quando non *chunk\_size* viene specificato, verrà utilizzato il valore predefinito è 1.|  
|runtime|quando **pianificazione \(pre\-elaborati\)** è specificato, la decisione relativamente programmazione viene rimandato al runtime.  la pianificazione tipo e la dimensione dei blocchi può essere scelta in fase di esecuzione impostando la variabile di ambiente **OMP\_SCHEDULE**.  Se la variabile non è impostata, la pianificazione risultante è implementazione\-definita.  quando  **pianificazione \(pre\-elaborati\)** viene specificato, chunk\_size non devono essere specificato.|  
  
 In assenza di un oggetto definito in modo esplicito **pianificazione** clausola, l'impostazione predefinita  **pianificazione** è implementazione\-definito.  
  
 Un programma OpenMP\-compiacente non deve basarsi su intervalli pianificati per l'esecuzione corretta.  Un programma non deve basarsi su una pianificazione *tipo* conformandosi con precisione la descrizione fornita da, perché è possibile avere variazioni nelle implementazioni della stessa pianificazione *tipo* nei compilatori diversi.  Le descrizioni possono essere utilizzate per selezionare la pianificazione appropriata per una situazione specifica.  
  
 **ordinato** la clausola deve essere presente in cui  **ordinato** associazione di direttive a  **per** costrutto.  
  
 Esiste una barriera implicita alla fine di un oggetto **per** costrutto a meno che a  **nowait** la clausola è specificata.  
  
 Restrizioni a **per** la direttiva è la seguente:  
  
-   **per** il ciclo deve essere un blocco strutturato e, inoltre, l'esecuzione non deve essere interrotta da un oggetto  **interruzione** istruzione.  
  
-   I valori delle espressioni di controllo del ciclo di  la direttiva deve essere la stessa per tutti i thread del team.  
  
-   **per** la variabile di iterazione del ciclo deve avere un tipo interi con segno.  
  
-   Solo un singolo **pianificazione** la clausola può apparire in un oggetto  **per** direttiva.  
  
-   Solo un singolo **ordinato** la clausola può apparire in un oggetto  **per** direttiva.  
  
-   Solo un singolo **nowait** la clausola può apparire in un oggetto  **per** direttiva.  
  
-   Viene omesso se o la frequenza tutti gli effetti collaterali all'interno di *chunk\_size*, *cancelletto*, *b*, o *aumento* le espressioni si verificano.  
  
-   Il valore di *chunk\_size* l'espressione deve essere la stessa per tutti i thread del team.  
  
## riferimenti incrociati:  
  
-   **privato**,  **firstprivate**,  **lastprivate**e  **riduzione** le clausole, vedere  [parte 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.  
  
-   **OMP\_SCHEDULE** la variabile di ambiente, vedere  [parte 4,1](../../parallel/openmp/4-1-omp-schedule.md) nella pagina 48.  
  
-   **ordinato** il costrutto, vedere  [parte 2.6.6](../../parallel/openmp/2-6-6-ordered-construct.md) nella pagina 22.  
  
-   [appendice D](../../parallel/openmp/d-using-the-schedule-clause.md), la pagina 93, fornisce ulteriori informazioni sull'utilizzo della clausola di pianificazione.