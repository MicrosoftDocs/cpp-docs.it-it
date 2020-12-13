---
description: 'Altre informazioni su: D. Clausola Schedule'
title: D. Clausola schedule
ms.date: 01/22/2019
ms.assetid: bf3d8f51-ea05-4803-bf55-657c12e91efe
ms.openlocfilehash: bd1bb4f9a6c661205e2e647fc9e45d81903008c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342491"
---
# <a name="d-the-schedule-clause"></a>D. Clausola schedule

Un'area parallela ha almeno una barriera, alla sua fine, ed è possibile che vi siano altre barriere al suo interno. A ogni barriera, gli altri membri del team devono attendere l'arrivo dell'ultimo thread. Per ridurre al minimo il tempo di attesa, il lavoro condiviso deve essere distribuito in modo che tutti i thread raggiungano la barriera nello stesso momento. Se alcune delle operazioni condivise sono contenute nei `for` costrutti, è `schedule` possibile usare la clausola a questo scopo.

Quando ci sono riferimenti ripetuti agli stessi oggetti, la scelta della pianificazione per un `for` costrutto può essere determinata principalmente dalle caratteristiche del sistema di memoria, ad esempio la presenza e le dimensioni delle cache e il fatto che i tempi di accesso alla memoria siano uniformi o non uniformi. Tali considerazioni possono rendere preferibile che ogni thread faccia riferimento in modo coerente allo stesso set di elementi di una matrice in una serie di cicli, anche se alcuni thread sono assegnati relativamente meno lavoro in alcuni cicli. Questa configurazione può essere eseguita usando la `static` pianificazione con gli stessi limiti per tutti i cicli. Nell'esempio seguente zero viene usato come limite inferiore nel secondo ciclo, anche se `k` sarebbe più naturale se la pianificazione non fosse importante.

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

Negli esempi rimanenti si presuppone che l'accesso alla memoria non sia la considerazione principale. Se non diversamente specificato, tutti i thread ricevono risorse di calcolo analoghe. In questi casi, la scelta della pianificazione per un `for` costrutto dipende da tutte le operazioni condivise che devono essere eseguite tra la barriera precedente più vicina e la barriera di chiusura implicita o la barriera imminente più vicina, se è presente una `nowait` clausola. Per ogni tipo di pianificazione, un breve esempio Mostra come il tipo di pianificazione è probabilmente la scelta migliore. Di seguito viene riportata una breve descrizione di ogni esempio.

La `static` pianificazione è appropriata anche per il caso più semplice, un'area parallela che contiene un singolo `for` costrutto, con ogni iterazione che richiede la stessa quantità di lavoro.

```cpp
#pragma omp parallel for schedule(static)
for(i=0; i<n; i++) {
  invariant_amount_of_work(i);
}
```

La `static` pianificazione è caratterizzata dalle proprietà che ogni thread ottiene approssimativamente lo stesso numero di iterazioni di qualsiasi altro thread e ogni thread può determinare in modo indipendente le iterazioni assegnate. Di conseguenza, non è necessaria alcuna sincronizzazione per distribuire il lavoro e, nel presupposto che ogni iterazione richieda la stessa quantità di lavoro, tutti i thread devono terminare nello stesso momento.

Per un team di thread *p* , lasciare che il *limite massimo (n/p)* sia il numero intero *q*, che soddisfa *n = p \* q-r* con *0 <= r < p*. Un'implementazione della `static` pianificazione per questo esempio consente di assegnare le iterazioni *q* ai primi thread *p-1* e le iterazioni *q-r* all'ultimo thread.  Un'altra implementazione accettabile assegna le iterazioni *q* ai primi thread *p-r* e le iterazioni *q-1* ai thread *r* rimanenti. In questo esempio viene illustrato il motivo per cui un programma non deve basarsi sui dettagli di una determinata implementazione.

La `dynamic` pianificazione è appropriata per il caso di un `for` costrutto con le iterazioni che richiedono quantità di lavoro variabili o addirittura imprevedibili.

```cpp
#pragma omp parallel for schedule(dynamic)
  for(i=0; i<n; i++) {
    unpredictable_amount_of_work(i);
}
```

La `dynamic` pianificazione è caratterizzata dalla proprietà che nessun thread resta in attesa sulla barriera per più tempo del necessario per l'esecuzione dell'iterazione finale di un altro thread. Questo requisito significa che è necessario assegnare le iterazioni una alla volta ai thread non appena diventano disponibili, con sincronizzazione per ogni assegnazione. L'overhead di sincronizzazione può essere ridotto specificando una dimensione minima del blocco *k* maggiore di 1, in modo che i thread vengano assegnati *k* alla volta fino a quando non rimangono meno di *k* . Ciò garantisce che nessun thread attenda la barriera più a lungo rispetto a un altro thread per eseguire il relativo blocco finale di iterazioni (al massimo) *k* .

La `dynamic` pianificazione può essere utile se i thread ricevono diverse risorse di calcolo, che hanno un effetto molto simile a quello delle diverse quantità di lavoro per ogni iterazione. Analogamente, la pianificazione dinamica può essere utile anche se i thread arrivano al `for` costrutto in momenti diversi, anche se in alcuni di questi casi la `guided` pianificazione potrebbe essere preferibile.

La `guided` pianificazione è appropriata per il caso in cui i thread possano arrivare in momenti diversi in un `for` costrutto con ogni iterazione che richiede la stessa quantità di lavoro. Questa situazione può verificarsi se, ad esempio, il `for` costrutto è preceduto da una o più sezioni o `for` costrutti con `nowait` clausole.

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

Analogamente a `dynamic` , la `guided` pianificazione garantisce che nessun thread attenda la barriera più a lungo rispetto a un altro thread per eseguire l'iterazione finale o le iterazioni finali *k* se viene specificata una dimensione del blocco pari a *k* . Tra tali pianificazioni, la `guided` pianificazione è caratterizzata dalla proprietà che richiede il minor numero di sincronizzazioni. Per le dimensioni del blocco *k*, un'implementazione tipica assegna le iterazioni *q = Ceiling (n/p)* al primo thread disponibile, *imposta n* sul valore maggiore di *n-q* e *p \* k* e si ripete fino a quando non vengono assegnate tutte le iterazioni.

Quando la scelta della pianificazione ottimale non è chiara come per questi esempi, la `runtime` pianificazione è utile per sperimentare diverse pianificazioni e dimensioni del blocco senza dover modificare e ricompilare il programma. Può anche essere utile quando la pianificazione ottimale dipende (in qualche modo prevedibile) i dati di input a cui viene applicato il programma.

Per visualizzare un esempio dei compromessi tra diverse pianificazioni, è consigliabile condividere 1000 iterazioni tra otto thread. Si supponga che esista una quantità di lavoro invariante in ogni iterazione e che venga utilizzata come unità di tempo.

Se tutti i thread vengono avviati nello stesso momento, la pianificazione provocherà `static` l'esecuzione del costrutto in unità 125, senza sincronizzazione. Si supponga tuttavia che un thread sia 100 unità in ritardo nell'arrivo. I sette thread restanti attendono la barriera per 100 unità e il tempo di esecuzione per l'intero costrutto aumenta fino a 225.

Poiché entrambe le `dynamic` `guided` pianificazioni e assicurano che nessun thread attenda più di un'unità alla barriera, il thread ritardato causa i tempi di esecuzione del costrutto in modo che il costrutto aumenti solo a 138 unità, eventualmente aumentata da ritardi dalla sincronizzazione. Se tali ritardi non sono trascurabili, diventa importante che il numero di sincronizzazioni sia 1000 per `dynamic` ma solo 41 per `guided` , presumendo la dimensione del blocco predefinita di uno. Con una dimensione di blocco pari a 25 `dynamic` e `guided` entrambe completate in unità di 150, più eventuali ritardi dalle sincronizzazioni richieste, che ora sono solo il numero 40 e 20, rispettivamente.
