---
title: D. Clausola schedule
ms.date: 01/22/2019
ms.assetid: bf3d8f51-ea05-4803-bf55-657c12e91efe
ms.openlocfilehash: 89e011784c5cccedc4a75f38d553458ea2e5d7e0
ms.sourcegitcommit: 382e247c0f1b4cb7c2dab837b8b6fdff24bff47a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/28/2019
ms.locfileid: "55087288"
---
# <a name="d-the-schedule-clause"></a>D. Clausola schedule

Un'area parallela ha almeno una barriera, sul proprio lato e potrebbe essere creare barriere aggiuntive in esso contenuti. Ad ogni barriera, gli altri membri del team devono attendere l'ultimo thread in arrivo. Per ridurre al minimo il tempo di attesa, lavoro condivise deve essere distribuito in modo che tutti i thread descrivo la barriera all'incirca alla stessa ora. Se qualcosa del genere condiviso lavoro è contenuto nel `for` costrutti, il `schedule` clausola può essere utilizzata per questo scopo.

Quando sono presenti più riferimenti agli stessi oggetti, la scelta della pianificazione per un `for` costrutto può essere determinato principalmente dalle caratteristiche del sistema di memoria, ad esempio la presenza e le dimensioni della cache e se i tempi di accesso di memoria sono uniformi o nonuniform. Tali considerazioni, potrebbero essere preferibile utilizzare ogni thread in modo coerente per fare riferimento allo stesso set di elementi di matrice in una serie di cicli, anche se alcuni thread vengono assegnati meno lavoro in alcuni cicli. Questa configurazione può avvenire usando il `static` pianificazione con gli stessi limiti per tutti i cicli. Nell'esempio seguente, zero viene usato come limite inferiore nel ciclo di secondo, anche se `k` risulterebbe più naturale se la pianificazione non fosse importante.

```cpp
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

Negli esempi rimanenti, presuppone che tale memoria accesso non è la considerazione più importante. Se non diversamente specificato, che tutti i thread di ricevano le risorse di calcolo confrontabili. In questi casi, la scelta della pianificazione per un `for` costrutto dipende tutto il lavoro condiviso che deve essere eseguita tra il precedente più vicino barriera e barriera chiusura implicita o il più vicino imminente barriera, se è presente un `nowait` clausola. Per ogni tipo di pianificazione, un breve esempio mostra come questo tipo di pianificazione è probabilmente la scelta migliore. Una breve descrizione segue ogni esempio.

Il `static` pianificazione è appropriata anche per il caso più semplice, un'area parallela contenente un singolo `for` costruire, dove ogni iterazione richiede la stessa quantità di lavoro.

```cpp
#pragma omp parallel for schedule(static)
for(i=0; i<n; i++) {
  invariant_amount_of_work(i);
}
```

Il `static` pianificazione è caratterizzata dalle proprietà che ogni thread ottiene approssimativamente lo stesso numero di iterazioni di un altro thread e ogni thread può determinare in modo indipendente le iterazioni assegnate ad esso. Quindi, per distribuire il lavoro, non è necessaria alcuna operazione di sincronizzazione e, in base al presupposto che ogni iterazione richiede la stessa quantità di lavoro, tutti i thread dovrebbero terminare all'incirca alla stessa ora.

Per un team di *p* thread, consentire *ceiling(n/p)* essere integer *q*, che soddisfa *n = p\*q - r* con *0 < = r < p*. Un'implementazione del `static` pianificazione per questo esempio è necessario assegnare *q* iterazioni nel primo *p-1* thread, e *q-r* iterazioni per l'ultimo thread.  Un'altra implementazione accettabile assegnerà *q* iterazioni nel primo *p-r* thread, e *q-1* iterazioni per il rimanente *r*thread. Questo esempio viene illustrato il motivo per cui un programma non deve fare affidamento sui dettagli di una determinata implementazione.

Il `dynamic` pianificazione è appropriata per il caso di un `for` costruire con le iterazioni che richiedono diversi o anche imprevedibili, quantità di lavoro.

```cpp
#pragma omp parallel for schedule(dynamic)
  for(i=0; i<n; i++) {
    unpredictable_amount_of_work(i);
}
```

Il `dynamic` pianificazione è caratterizzata da proprietà che nessun thread attende alla barriera maggiore rispetto al necessario eseguire l'iterazione finale di un altro thread. Questo requisito significa che le iterazioni devono essere assegnate uno alla volta per thread man mano che diventano disponibili, con la sincronizzazione per ogni assegnazione. È possibile ridurre il sovraccarico della sincronizzazione, specificando una dimensione minima del blocco *k* maggiore di 1, in modo che i thread vengono assegnati *k* alla volta fino a quando non meno *k* rimangono. In questo modo si garantisce che nessun thread in attesa alla barriera maggiore del tempo necessario eseguire il blocco finale di (al massimo) di un altro thread *k* iterazioni.

Il `dynamic` pianificazione può essere utile se il thread ricevono diverse risorse di calcolo, che ha più lo stesso effetto diverse quantità di lavoro per ogni iterazione. Analogamente, la programmazione dinamica può essere utile anche se il thread arriva al `for` costruire in momenti diversi, anche se in alcuni di questi casi il `guided` pianificazione può essere preferibile.

Il `guided` pianificazione è appropriato per il caso in cui i thread possono arrivare in momenti diversi a un `for` costruire ogni iterazione richiedendo sulla stessa quantità di lavoro. Questa situazione può verificarsi se, ad esempio, il `for` costrutto è preceduto da una o più sezioni o `for` costruisce con `nowait` clausole.

```cpp
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

Ad esempio `dynamic`, il `guided` pianificare garantisce che nessun thread rimane in attesa alla barriera, maggiore del tempo necessario eseguire l'iterazione finale di un altro thread o l'ultimo *k* iterazioni se le dimensioni del blocco di *k* specificato. Tra tali pianificazioni, le `guided` pianificazione è caratterizzata da proprietà che richiede il minor numero sincronizzazioni. Per le dimensioni del blocco *k*, un'implementazione tipica assegnerà *q = ceiling(n/p)* iterazioni per il primo thread disponibile, impostare *n* al più grande di *n-q* e *p\*k*e ripetere fino a quando non vengono assegnate tutte le iterazioni.

Quando non è più chiara di questi esempi, la scelta della pianificazione ottimale di `runtime` pianificazione è comoda per provare diverse pianificazioni e le dimensioni di blocco senza doverlo modificare e ricompilare il programma. Può anche essere utile quando la pianificazione ottimale dipende dal (in qualche modo stimabile) i dati di input a cui viene applicato il programma.

Per un esempio dei compromessi tra diverse pianificazioni, prendere in considerazione la condivisione e 1000 le iterazioni tra otto thread. Si supponga che sia presente una quantità di lavoro in ogni iterazione, invariante e usarlo come unità di tempo.

Se tutti i thread avviato nello stesso momento, il `static` pianificazione causerà il costrutto da eseguire in unità di 125, con Nessuna sincronizzazione. Ma si supponga che un thread è 100 unità nelle fasi finali in arrivo. I thread rimanenti sette attendono quindi 100 unità alla barriera e aumenta il tempo di esecuzione per l'intero costrutto di 225.

Poiché sia la `dynamic` e `guided` pianificazioni assicurarsi che nessun thread rimane in attesa per più di un'unità alla barriera, il thread posticipato fa in modo che i tempi di esecuzione per il costrutto aumentare solo alle 138 unità, possibilmente aumentata di ritardi di sincronizzazione. Se tali ritardi non trascurabili, diventa importante che il numero di sincronizzazioni è 1000 per `dynamic` , ma solo 41 per `guided`, presupponendo che le dimensioni di blocco predefinito di uno. Con una dimensione del blocco pari a 25, `dynamic` e `guided` finire in unità di 150, oltre a eventuali ritardi dalle sincronizzazioni necessarie, quali numero ora solo 40 e 20, rispettivamente.
