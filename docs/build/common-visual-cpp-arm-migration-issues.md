---
title: "Problemi comuni relativi alla migrazione di Visual C++ ARM | Microsoft Docs"
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
ms.assetid: 0f4c434e-0679-4331-ba0a-cc15dd435a46
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Problemi comuni relativi alla migrazione di Visual C++ ARM
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il medesimo codice sorgente in Visual C\+\+ può produrre risultati diversi in architetture ARM rispetto alle architetture x86 e x64.  
  
## Origine dei problemi di migrazione  
 Molti problemi che si verificano quando si esegue la migrazione del codice dalle architetture x86 o x64, ad una architettura di ARM, sono relativi ai costrutti di codice sorgente che invocano valori indefiniti, implementazioni definite o non specificate.  
  
 Comportamento indefinito  
 Comportamento non definito nello standard C\+\+ e che è causato da un'operazione che non ottiene un risultato accettabile—ad esempio, la conversione di un valore denotato in virgola mobile in un valore unsigned integer, oppure scorrere per un numero di posizioni negativo o superiore al numero di bit accettato per un determinato tipo.  
  
 Comportamento di una Implementazione definita  
 Comportamento che lo standard C\+\+, richiede a i produttori di compilatori, per definire una documentazione.  Un programma può essere implementato in modalità sicura\-definendo il comportamento, anche se tale soluzione non è portatile.  Esempi di implementazione definita, il comportamento include la dimensione dei tipi di dati incorporati ed i requisiti di allineamento.  Ad esempio, un'operazione potrebbe dipendere dal comportamento dall'implementazione definita, per accede all'elenco di argomenti di una variabile.  
  
 Comportamento non specificato  
 Comportamento che lo standard C\+\+ lascia intenzionalmente non deterministico.  Sebbene il comportamento sia considerato non deterministico, particolari chiamate determinano un comportamento non aspettato dall'implementazione del compilatore.  Tuttavia, non è necessario per un fornitore di compilatori predeterminare i risultati, o garantire coerenza nei comportamenti tra invocazioni equiparabili e non esiste alcun requisito specificato nella documentazioni.  Un esempio di comportamento non specificato, è l'ordine in cui una sub\-espressione—che include argomenti per una chiamata a funzione—viene valutata.  
  
 Altri problemi di migrazione possono essere attribuiti alle differenze relative all'hardware, tra ARM e architetture x86 e x64, che interagisce con differenti standard C\+\+.  Ad esempio, il modello di forte memoria dell'architettura x86 e x64 fornisce variabili `volatile` che dispongono di alcune proprietà aggiuntive, che possono essere utilizzate per facilitare la comunicazione con le thread meno recenti.  Mentre il modello di memoria debole, dell'architettura di ARM, non supporta questo utilizzo e lo standard C\+\+ non ne richiede il supporto.  
  
> [!IMPORTANT]
>  Sebbene `volatile` riceve alcune proprietà che possono essere utilizzate per implementare form limitati o comunicazione tra le thread in x86 e x64, queste proprietà aggiuntive non sono sufficienti in generale per implementare la comunicazione tra le thread.  Lo standard C\+\+ consiglia questa comunicazione per essere implementata utilizzando le primitive di sincronizzazione appropriate.  
  
 Poiché piattaforme differenti possono esprimere gli stessi comportamenti ma in modalità diverse, trasferire il software tra piattaforme può essere complicato e soggetto ad errori dipendenti dal comportamento specifico di una determinata piattaforma.  Sebbene molti di questi tipi di comportamento possano essere osservati e potrebbero risultare stabili, basarsi su di essi gli rende non portabili e in questi casi il comportamento è non definito o non specificato, ad è anche un errore.  Anche il comportamento che è menzionato in questo documento potrebbe non valere e in futuro potrebbe cambiare per nuove implementazioni di compilatori e CPU.  
  
## Esempi di problemi di migrazione  
 Nella parte restante di questo documento, viene descritto come il comportamento diverso di elementi del linguaggio C\+\+ può produrre risultati diversi per piattaforme differenti.  
  
### Conversione di un valore in virgola mobile in un unsigned integer  
 Nell'architettura ARM, la conversione di un valore espresso in virgola mobile in un Integer a 32 bit satura il più vicino valore Integer che possa essere rappresentato, se il valore a virgola mobile non è compreso nell'intervallo che può essere rappresentato dal valore Integer.  Nelle architetture x86 e x64, la conversione viene inclusa al valore Integer se è unsigned, o impostato a \-2147483648 se il valore Integer è signed.  Nessuna di queste architetture supportano direttamente la conversione da virgola mobile a integer di piccole dimensioni; viceversa per le conversioni eseguite a 32 bit i risultati vengono troncati ad una dimensione minore.  
  
 Per l'architettura ARM, la combinazione di saturazione e troncamento significa che la conversione verso tipi senza segno satura correttamente i tipi più piccoli senza segno quando satura un intero a 32 bit, ma produce un risultato troncato per valori che sono maggiori rispetto al più piccolo tipo rappresentabile ma allo stesso tempo troppo piccoli per saturare un integer a 32 bit.  La conversione viene satura correttamente per Integer con segno a 32 bit, ma il troncamento e la saturazione di Integer con segno implica il valore \-1 per i valori positivi saturati e 0 per i valori negativi saturati.  La conversione in un Integer signed più piccolo produce un risultato non prevedibili.  
  
 Per le architetture x86 e x64, la combinazione di un comportamento che prevede il wrapping delle conversioni per gli integer senza segno valutati esplicitamente per le conversioni di interi con segno con un overflow, insieme al troncamento, produce i risultati imprevisti per la maggior parte degli spostamenti se troppo grandi.  
  
 Queste piattaforme differiscono sulla gestione della conversione NaN \(Non\-un\- Numero\) per tipi di valore Integer.  In ARM, Nan converte a 0x00000000; su x86 e x64 converte a 0x80000000.  
  
 La conversione in virgola mobile può essere invocata solamente se si conosce il valore dell'intervallo del tipo Integer che si sta convertendo.  
  
### Comportamento dell'operatore shift \(\<\< \>\>\)  
 Nell'architettura di ARM, un valore può essere spostato a sinistra o a destra fino a 255 bit, prima che il modello inizi la ripetizione.  Nelle architetture x86 e x64, il modello viene eseguito per ogni multiplo di 32 a meno che il modello di origine sia una variabile a 64\-bit; in questo caso, il modello so ripete per ogni multiplo di 64 su x64 e per ogni multiplo di 256 su x86, in cui un'implementazione software viene utilizzata.  Ad esempio, per una variabile a 32 bit che ha un valore 1 lo spostamento sinistro di 32 posizioni, in ARM dà risultato 0, in x86 risulta 1 e anche in x64 è 1.  Tuttavia, se il valore d'origine è una variabile è a 64\-bit, il risultato di tutte e tre le piattaforme è 4294967296 e il valore "non si avvolge" finché non si scorrono 64 posizioni su x64, o 256 posizioni in ARM e su x86.  
  
 Poiché il risultato, di un'operazione di spostamento che supera il numero di bit del tipo di origine, è indefinito; il compilatore non richiede di avere un comportamento coerente in tutte le situazioni.  Ad esempio, se entrambi gli operandi di spostamento sono noti in fase di compilazione, il compilatore può ottimizzare il programma utilizzando una routine interna per precompilare il risultato degli spostamenti e quindi sostituire il risultato ottenuto nella operazione di spostamento.  Se lo spostamento è troppo grande, o negativo, il risultato della routine interna potrebbe essere diverso dal risultato della stessa espressione di spostamento in fase di esecuzione da parte della CPU.  
  
### Comportamento argomenti variabile \(varargs\)  
 Nell'architettura di ARM, i parametri passati nello stack dell'elenco degli argomenti della variabile sono soggetti ad allineamento.  Ad esempio, un parametro a 64 bit viene allineato su un limite di 64 bit.  Su x86 e x64, gli argomenti passati nello stack non sono soggetti ad allineamento e non sono strettamente impacchettati.  Questa differenza può causare una funzione variadic come `printf` per leggere gli indirizzi di memoria che sono destinati come riempimento in ARM, se il layout previsto dell'elenco di argomenti della variabile non corrisponde esattamente, anche se potrebbe funzionare per alcuni valori nelle architetture x86 e x64.  Si consideri l'esempio seguente:  
  
```  
// notice that a 64-bit integer is passed to the function, but '%d' is used to read it.  
// on x86 and x64 this may work for small values because %d will “parse” the low-32 bits of the argument.  
// on ARM the calling convention will align the 64-bit value and the code will print a random value  
printf("%d\n", 1LL);  
  
```  
  
 In questo caso, il bug può essere corretto facendo in modo che la specifica di formato venga utilizzata in modo da considerare l'allineamento dell'argomento.  Questo codice è corretto:  
  
```  
// CORRECT: use %I64d for 64-bit integers  
printf("%I64d\n", 1LL);  
  
```  
  
### Ordine di valutazione dell'argomento  
 Poiché i processori ARM, x86 e x64 risultano diversi, possono presentarsi requisiti diversi per implementare la compilazione e anche diverse opportunità di ottimizzazioni.  Per questo motivo, insieme ad altri fattori quali ad esempio, le impostazioni di ottimizzazione, un compilatore può valutare gli argomenti di una funzione in ordine diverso a seconda dell'architettura oppure quando gli altri fattori vengono modificati.  Questo può provocare, modifiche impreviste, sul comportamento di un'applicazione basata su un ordine specifico di valutazione.  
  
 Questo tipo di errore può verificarsi , nella chiamata di una funzione, quando gli argomenti hanno effetti collaterali che influiscono su altri argomenti della funzione.  In genere questo tipo di dipendenza è facile evitare, ma talvolta le dipendenze possono essere nascoste e difficile da identificare oppure si verifica l'overloading degli operatori.  Si consideri questo codice d'esempio:  
  
```  
handle memory_handle;  
  
memory_handle->acquire(*p);  
  
```  
  
 Ciò è ben definito, ma se `->` e `*` sono operatori sottoposti a overload, allora il codice viene tradotto in qualcosa che assomiglia a questo:  
  
```  
Handle::acquire(operator->(memory_handle), operator*(p));  
```  
  
 E se è presente una dipendenza tra `operator->(memory_handle)` e `operator*(p)`, il codice potrebbe utilizzare un ordine di valutazione specifico, anche se nel codice originale sembra che non vi è alcuna dipendenza possibile.  
  
### Comportamento volatile della parola chiave predefinita  
 Il compilatore Microsoft C\+\+ supporta le due diverse interpretazioni di qualificatore di memoria volatile che è possibile specificare utilizzando le opzioni del compilatore.  L'opzione **\/volatile:ms** seleziona la semantica volatile estesa Microsoft che garantisce un'ordine rigido, come nel caso tradizionale per x86 e x64 il compilatore Microsoft utilizza il modello di memoria forte.  L'opzione di **\/volatile:iso** seleziona la semantica volatile rigida standard di C\+\+ che non garantisce un'ordine rigido.  
  
 Nell'architettura ARM, l'impostazione predefinita è **\/volatile:iso** poiché i processori ARM presentano un modello di memoria debolmente ordinato e il software ARM non dispone di un legacy su cui basare la semantica estesa di **\/volatile:ms** e generalmente non è necessario interfacciarsi con il software che esegue.  Tuttavia, è sempre conveniente o anche richiesto compilare un programma ARM per utilizzare la semantica estesa.  Ad esempio, è troppo impiegate per trasferire un programma di utilizzare la semantica ISO C\+\+, o il software del driver potrebbe essere necessario rispettare la semantica tradizionale per funzionare correttamente.  In questi casi, è possibile utilizzare l'opzione **\/volatile:ms** ; tuttavia, per ricreare la tradizionale semantica volatile su ARM, il compilatore deve inserire delle barriere sulla memoria intorno ad ogni lettura e scrittura della variabile `volatile` per applicare un'ordine rigido, però può avere un impatto negativo sulle prestazioni.  
  
 Nelle architetture x86 e x64, l'impostazione predefinita è **\/volatile:ms** perché gran parte del software è già stato creato per queste architetture, utilizzando il compilatore Microsoft C\+\+ che si base su di esse.  Quando si compilano i programmi x86 e x64, è possibile specificare l'opzione **\/volatile:iso** per evitare la dipendenza non necessaria sulle semantiche volatili tradizionali e per garantire la portabilità.  
  
## Vedere anche  
 [Configurazione di programmi per processori ARM](../build/configuring-programs-for-arm-processors-visual-cpp.md)