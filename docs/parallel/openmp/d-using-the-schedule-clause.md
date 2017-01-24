---
title: "D. Using the schedule Clause | Microsoft Docs"
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
ms.assetid: bf3d8f51-ea05-4803-bf55-657c12e91efe
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# D. Using the schedule Clause
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un'area parallela dispone di almeno una barriera, alla fine e può avere barriere aggiuntive.  A ogni barriera, gli altri membri del team devono restare l'ultimo thread per ricevere.  Per ridurre al minimo il tempo di attesa, il lavoro condiviso deve essere distribuiti in modo che tutti i thread arrivino alla barriera a sullo stesso tempo.  Se parte del lavoro condiviso è contenuto in **per** costrutti,  `schedule` la clausola a questo scopo può essere utilizzata.  
  
 Quando sono presenti riferimenti ripetuti agli stessi oggetti, la scelta di pianificazione per un oggetto **per** il costrutto può essere determinato principalmente dalle caratteristiche del sistema di memoria, come la presenza e la dimensione della cache e se i tempi di accesso alla memoria sono uniformi o non uniformi.  Tali considerazioni possono risultare preferibile rendere ogni riferimento thread coerente allo stesso insieme di elementi di una matrice in una serie di cicli, anche se alcuni thread vengono assegnati relativamente meno lavoro in alcuni dei cicli.  Questa operazione può essere eseguita utilizzando **statico** pianificazione con gli stessi limiti per tutti i cicli.  Nell'esempio seguente, si noti che zero viene utilizzato come limite inferiore nel secondo ciclo, anche se **K** essere più naturale se la pianificazione non è importante.  
  
```  
#pragma omp parallel  
{  
#pragma omp for schedule(static)  
  for(i=0; i<n; i++)  
    a[i] = work1(i);  
#pragma omp for schedule(static)  
  for(i=0; i<n; i++)  
    if(i>=k) a[i] += work2(i);  
}  
```  
  
 Negli esempi rimanenti, si presume che l'accesso alla memoria non è una considerazione dominante e, se non specificato diversamente, che tutti i thread ricevono le risorse di elaborazione confrontabili.  In questi casi, la scelta di pianificazione per un oggetto **per** il costrutto dipende da qualsiasi lavoro condiviso che deve essere eseguito tra la barriera precedente più vicina e la barriera di chiusura implicita o la barriera successiva più vicina, se c " è un oggetto  `nowait` clausola.  Per ogni tipo di pianificazione, in brevi di un esempio di tale tipo di pianificazione potrebbe essere la scelta migliore.  Una breve descrizione di ogni esempio.  
  
 **statico** la pianificazione viene inoltre appropriata per il caso più semplice, un'area parallela che contiene un singolo  **per** costrutto, con ogni iterazione che richiede la stessa quantità di lavoro.  
  
```  
#pragma omp parallel for schedule(static)  
for(i=0; i<n; i++) {  
  invariant_amount_of_work(i);  
}  
```  
  
 **statico** la pianificazione è caratterizzato da proprietà che ogni thread ottiene approssimativamente allo stesso numero di iterazioni di un altro thread e ogni thread può determinare indipendente le iterazioni assegnate.  Pertanto non è necessaria alcuna sincronizzazione per distribuire il lavoro e, in dell'ipotesi che ogni iterazione richiede la stessa quantità di lavoro, tutti i thread deve completare a sullo stesso tempo.  
  
 per un team di `p` i thread, let intero più piccolo maggiore \(n\/p\) essere integer q, che soddisfa n \= p\*q \- r con 0 \<\= r \< p.  Un'implementazione di **statico** la pianificazione per questo esempio assegnerebbe q a prime iterazioni p\-1 thread e q\-r iterazioni all'ultimo thread.  un'altra implementazione accettabile assegnerebbe *q* a prime iterazioni *fotoricettore* thread e *q\-1* iterazioni mantenere *r* thread.  Viene illustrato perché un programma non deve basarsi sui dettagli di implementazione di.  
  
 **dinamico** la pianificazione appropriata per il caso di un oggetto  **per** costrutto con le iterazioni che richiedono variazione, o addirittura imprevedibile, quantità di lavoro.  
  
```  
#pragma omp parallel for schedule(dynamic)  
  for(i=0; i<n; i++) {  
    unpredictable_amount_of_work(i);  
}  
```  
  
 **dinamico** la pianificazione è caratterizzato dalla proprietà che nessun thread attende la barriera più tempo di accetta un altro thread per eseguire la relativa iterazione finale.  Ciò richiede che le iterazioni assegnato uno alla volta ai thread come essi diventano disponibili, con sincronizzazione per ogni assegnazione.  Il sovraccarico della sincronizzazione può essere ridotto specificando una dimensione minima di blocco *K* maggiore di 1, in modo che i thread vengono assegnati *K* per volta fino a meno che *K* rimanenti.  In questo modo si garantisce che nessuna attesa del thread nella barriera più tempo di accetta un altro thread per eseguire il blocco finale \(al massimo\) *K* iterazioni.  
  
 **dinamico** la pianificazione può essere utile se i thread ricevono le risorse di elaborazione variant, che ha pressoché alcun effetto come importi variabili di lavoro per ogni iterazione.  Analogamente, la pianificazione dinamica può essere utile se i thread arrivano al **per** costrutto in momenti variant, sebbene in alcuni di questi casi  **guida** la pianificazione può essere preferibile.  
  
 **guida** la pianificazione appropriata per il caso in cui i thread possono verificarsi in momenti variant a un oggetto  **per** costrutto con ogni iterazione che richiede quantità di lavoro sullo stesso.  Questa situazione può verificarsi se, ad esempio, \_ per il costrutto è preceduto da uno o più sezioni o perentity\_nowait clausole.  
  
```  
#pragma omp parallel  
{  
  #pragma omp sections nowait  
  {  
    // ...  
  }  
  #pragma omp for schedule(guided)  
  for(i=0; i<n; i++) {  
    invariant_amount_of_work(i);  
  }  
}  
```  
  
 come **dinamico**,  **guida** la pianificazione garantisce che nessuna attesa del thread nella barriera più tempo di accetta un altro thread per eseguire la relativa iterazione finale, o finale K iterazioni se le dimensioni del blocco di K è specificato.  Tra le pianificazioni, **guida** la pianificazione è caratterizzato dalla proprietà che necessita del minore di sincronizzazione.  Per dimensioni del blocco *K*, un'implementazione tipica assegnerà *q \= intero più piccolo maggiore \(n\/p\)* iterazioni al primo thread disponibile, set *n* il maggiore di *n\-q* e *p\*k*e la ripetizione fino a che tutte le iterazioni non è assegnato.  
  
 Quando la scelta della pianificazione ottimale non è chiaro come avviene per gli esempi, **runtime** la pianificazione è utile per sperimentato con pianificazioni e diverse dimensioni del blocco senza dover modificare e ricompilare il programma.  Può inoltre essere utile quando la pianificazione ottimale dipende \(in qualche modo prevedibile\) ai dati di input a cui il programma viene applicato.  
  
 Per un esempio dei compromessi tra le pianificazioni diversi, considerare la possibilità di condividere 1000 iterazioni tra 8 thread.  Si supponga che sia presente una quantità di lavoro invariante in ogni iterazione e quelle che come unità di tempo.  
  
 Se tutti i thread avviati contemporaneamente, **statico** la pianificazione modo il costrutto per l'esecuzione in 125 unità, senza sincronizzazione.  Ma si supponga che un thread è di 100 unità nella situazione.  Quindi attendere rimanente di sette thread 100 unità nella barriera e il tempo di esecuzione per il costrutto di tutto aumenta a 225.  
  
 Poiché entrambi **dinamico** e  **guida** le pianificazioni garantisce che nessun thread rimane in attesa di più unità alla barriera, il thread in ritardo per causare i rispettivi tempi di esecuzione per il costrutto genera solo a 138 unità, possibilmente con i ritardi di sincronizzazione.  Se tali ritardi non sono trascurabili, è importante che il numero di sincronizzazione è 1000 per **dinamico** ma solo 41 per  **guida**, se la dimensione predefinita del blocco di una.  Con una dimensione del blocco di 25, **dinamico** e  **guida** entrambi vengono completati rispettivamente in 150 unità, più tutti i ritardi di sincronizzazione necessarie, che ora numerano solo 40 e 20.