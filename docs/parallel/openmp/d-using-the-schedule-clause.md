---
title: D. Utilizzando la clausola di pianificazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: bf3d8f51-ea05-4803-bf55-657c12e91efe
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b51eeb36a4cffafde0e90586fec08d28b9672e5d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="d-using-the-schedule-clause"></a>D. Utilizzando la clausola di pianificazione
Un'area parallela ha almeno una barriera, alla fine, potrebbe essere ostacoli aggiuntivi all'interno di esso. In ogni barriera, gli altri membri del team devono attendere l'ultimo thread di arrivo. Per ridurre al minimo il tempo di attesa, lavoro condiviso deve essere distribuito in modo che tutti i thread arrivano alla barriera nello stesso momento. Se alcuni dei condivisi lavoro è contenuto **per** , costruisce il `schedule` clausola può essere utilizzata per questo scopo.  
  
 Quando sono presenti più riferimenti agli stessi oggetti, la scelta della pianificazione per un **per** costrutto può essere determinato principalmente dalle caratteristiche del sistema di memoria, ad esempio la presenza e le dimensioni della cache e se l'accesso della memoria i tempi sono uniformi o non uniformi. Tali considerazioni, potrebbero essere preferibile utilizzare ogni thread in modo coerente per fare riferimento allo stesso set di elementi di matrice in una serie di cicli, anche se alcuni thread assegnati relativamente meno lavoro in alcuni i cicli. Questa operazione può essere eseguita tramite il **statico** pianificazione con gli stessi limiti per tutti i cicli. Nell'esempio seguente, si noti che zero viene utilizzato come limite inferiore nel secondo ciclo, anche se **k** sarebbe più semplice se la pianificazione non è importante.  
  
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
  
 Negli esempi restanti si presuppone che la memoria la considerazione principale, non è l'accesso e, se non diversamente specificato, che tutti i thread di ricevano le risorse di calcolo confrontabili. In questi casi, la scelta della pianificazione per un **per** costrutto dipende tutto il lavoro condiviso che deve essere eseguita tra precedente più vicina barriera e barriera chiusura implicita o di più vicino barriera successivi, se è presente un `nowait` clausola. Per ogni tipo di pianificazione, un breve esempio viene illustrato questo tipo di pianificazione potrebbe essere la scelta migliore. Una breve descrizione di ogni esempio di seguito.  
  
 Il **statico** pianificazione è adatta per il caso più semplice, un'area parallela contenente un singolo **per** costruire, con ogni iterazione richiede la stessa quantità di lavoro.  
  
```  
#pragma omp parallel for schedule(static)  
for(i=0; i<n; i++) {  
  invariant_amount_of_work(i);  
}  
```  
  
 Il **statico** pianificazione è caratterizzata dalle proprietà di ogni thread ottiene approssimativamente lo stesso numero di iterazioni di un altro thread e ogni thread può determinare in modo indipendente le iterazioni assegnate a esso. Quindi, per distribuire il lavoro, non è necessaria alcuna sincronizzazione e sul presupposto che ogni iterazione richiede la stessa quantità di lavoro, è opportuno completare tutti i thread nello stesso momento.  
  
 Per un team di `p` thread, consentire *ceiling(n/p)* essere l'intero *q*, che soddisfa *n = p\*q - r* con *0 < = r < p* . Un'implementazione del **statico** pianificare per questo esempio è necessario assegnare *q* iterazioni per il primo *p-1* thread, e *q-r* iterazioni per l'ultimo thread.  Un'altra implementazione accettabile assegnerà *q* iterazioni per il primo *p-r* thread, e *q-1* iterazioni per il rimanente *r*thread. Ciò illustra il motivo per cui un programma deve fare affidamento sui dettagli di una determinata implementazione.  
  
 Il **dinamica** pianificazione è appropriato per il caso di un **per** costruire con le iterazioni che richiedono diversi o anche imprevedibili, quantità di lavoro.  
  
```  
#pragma omp parallel for schedule(dynamic)  
  for(i=0; i<n; i++) {  
    unpredictable_amount_of_work(i);  
}  
```  
  
 Il **dinamica** pianificazione è caratterizzata da proprietà che nessun thread attende che alla barriera maggiore rispetto al necessario eseguire l'iterazione finale di un altro thread. Ciò richiede che le iterazioni sia assegnato uno alla volta a thread appena diventano disponibili, con la sincronizzazione per ogni assegnazione. Il sovraccarico della sincronizzazione può essere ridotto specificando una dimensione del blocco minimo *k* maggiore di 1, in modo che i thread assegnati *k* alla volta fino a quando non meno di *k* rimangono. In questo modo si garantisce che nessun thread rimane in attesa alla barriera più tempo servirebbe per un altro thread per eseguire il blocco finale di (al massimo) *k* iterazioni.  
  
 Il **dinamica** pianificazione può essere utile se il thread di ricezione diverse risorse di calcolo, che ha più lo stesso effetto diverse quantità di lavoro per ogni iterazione. Analogamente, la programmazione dinamica può essere utile anche se il thread di giungere al **per** costruire in momenti diversi, ma in alcuni di questi casi il **interattiva** pianificazione potrebbe essere preferibile.  
  
 Il **interattiva** pianificazione è appropriato per il caso in cui i thread possono arrivare in momenti diversi in un **per** costruire con ogni richiesta di iterazione sulla stessa quantità di lavoro. Questa situazione può verificarsi se, ad esempio, il **per** costrutto è preceduto da una o più sezioni o **per** costruisce con `nowait` clausole.  
  
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
  
 Ad esempio **dinamica**, **interattiva** pianificare garantisce che nessun thread rimane in attesa alla barriera più tempo servirebbe per eseguire l'iterazione finale di un altro thread o finale *k* iterazioni se una dimensione del blocco di *k* specificato. Tra tali pianificazioni, di **interattiva** pianificazione è caratterizzata dalla proprietà che richiede il minor numero di sincronizzazioni. Per le dimensioni del blocco *k*, un'implementazione tipica assegnerà *q = ceiling(n/p)* iterazioni per il primo thread disponibili, impostare  *n*  al più grande di *n-q* e *p\*k*e ripetere fino a quando non vengono assegnate tutte le iterazioni.  
  
 Quando non è più chiara come nel caso di questi esempi, la scelta della pianificazione ottimale di **runtime** pianificazione è utile per sperimentare diverse pianificazioni e le dimensioni di blocco senza dover modificare e ricompilare il programma. Inoltre, può rivelarsi utile se la pianificazione ottimale dipende (in qualche modo stimabile) dei dati di input a cui viene applicato il programma.  
  
 Per visualizzare un esempio dei compromessi tra diverse pianificazioni, prendere in considerazione la condivisione e 1000 le iterazioni tra 8 thread. Si supponga che vi sia una quantità di lavoro in ogni iterazione, lingua e utilizzarlo come l'unità di tempo.  
  
 Se tutti i thread avviato nello stesso momento, il **statico** pianificazione causerà il costrutto da eseguire nell'unità di 125, con alcuna sincronizzazione. Ma si supponga che un thread è 100 unità tardiva in arrivo. Attendere il thread di sette rimanenti per le unità di 100 alla barriera e aumenta il tempo di esecuzione per l'intero costrutto a 225.  
  
 Perché sia il **dinamica** e **interattiva** pianificazioni assicurarsi che nessun thread rimane in attesa per più di una unità alla barriera, il thread ritardato fa sì che i relativi tempi di esecuzione per il costrutto di aumentare solo a 138 unità, probabilmente è aumentate di ritardi di sincronizzazione. Se tali ritardi non sono trascurabili, diventa importante che il numero di sincronizzazioni è 1000 per **dinamica** ma 41 solo per **interattiva**, presupponendo che le dimensioni predefinite del blocco di uno. Con una dimensione di blocco pari a 25, **dinamica** e **interattiva** finire in 150 unità, oltre a eventuali ritardi delle sincronizzazioni richieste, il numero di ora solo 40 e 20, rispettivamente.