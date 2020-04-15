---
title: Problemi comuni relativi alla migrazione di Visual C++ ARM
ms.date: 05/06/2019
ms.assetid: 0f4c434e-0679-4331-ba0a-cc15dd435a46
ms.openlocfilehash: 2c29b4ffa5344b309622314970ce52c47a0ebd05
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328801"
---
# <a name="common-visual-c-arm-migration-issues"></a>Problemi comuni relativi alla migrazione di Visual C++ ARM

Quando si utilizza il compilatore di Microsoft C, è possibile che lo stesso codice sorgente di C, produca risultati diversi nell'architettura ARM rispetto alle architetture x86 o x64.

## <a name="sources-of-migration-issues"></a>Fonti di problemi di migrazione

Molti problemi che possono verificarsi durante la migrazione del codice dalle architetture x86 o x64 all'architettura ARM sono correlati acostrutti di codice sorgente che potrebbero richiamare un comportamento non definito, definito dall'implementazione o non specificato.

*Il comportamento non definito* è un comportamento che lo standard di C, non è definito e che è causato da un'operazione che non ha alcun risultato ragionevole: ad esempio, la conversione di un valore a virgola mobile in un intero senza segno o lo spostamento di un valore di un numero di posizioni negativo o superiore al numero di bit nel tipo promosso.

*Il comportamento definito dall'implementazione* è il comportamento che lo standard di C, richiede che il fornitore del compilatore definisca e documenti. Un programma può basarsi in modo sicuro sul comportamento definito dall'implementazione, anche se questa operazione potrebbe non essere portabile. Esempi di comportamento definito dall'implementazione includono le dimensioni dei tipi di dati incorporati e i relativi requisiti di allineamento. Un esempio di un'operazione che potrebbe essere influenzata dal comportamento definito dall'implementazione è l'accesso all'elenco di argomenti variabili.

*Il comportamento non specificato* è un comportamento che lo standard C, lascia intenzionalmente non deterministico. Anche se il comportamento è considerato non deterministico, particolari chiamate di comportamento non specificato sono determinate dall'implementazione del compilatore. Tuttavia, non vi è alcun requisito per un fornitore del compilatore per predeterminare il risultato o garantire un comportamento coerente tra le chiamate confrontabili e non vi è alcun requisito per la documentazione. Un esempio di comportamento non specificato è l'ordine in cui vengono valutate le sottoespressioni, che includono argomenti per una chiamata di funzione.

Altri problemi di migrazione possono essere attribuiti alle differenze hardware tra le architetture ARM e x86 o x64 che interagiscono in modo diverso con lo standard C. Ad esempio, il modello di memoria forte dell'architettura `volatile`x86 e x64 fornisce alle variabili qualificate alcune proprietà aggiuntive che sono state utilizzate per facilitare determinati tipi di comunicazione tra thread in passato. Ma il modello di memoria debole dell'architettura ARM non supporta questo utilizzo, né lo standard C .

> [!IMPORTANT]
> Sebbene novale `volatile` alcune proprietà che possono essere utilizzate per implementare forme limitate di comunicazione tra thread in x86 e x64, queste proprietà aggiuntive non sono sufficienti per implementare la comunicazione tra thread in generale. Lo standard di C, è consigliabile che tale comunicazione venga implementata utilizzando invece le primitive di sincronizzazione appropriate.

Poiché piattaforme diverse potrebbero esprimere questi tipi di comportamento in modo diverso, il porting del software tra piattaforme può essere difficile e soggetto a bug se dipende dal comportamento di una piattaforma specifica. Anche se molti di questi tipi di comportamento possono essere osservati e possono sembrare stabili, basandosi su di essi è almeno non portabile e, nei casi di comportamento non definito o non specificato, è anche un errore. Anche il comportamento citato in questo documento non deve essere invocato e potrebbe cambiare in futuri compilatori o implementazioni della CPU.

## <a name="example-migration-issues"></a>Problemi di migrazione di esempio

Nella parte restante di questo documento viene descritto in che modo il diverso comportamento di questi elementi del linguaggio C , può produrre risultati diversi su piattaforme diverse.

### <a name="conversion-of-floating-point-to-unsigned-integer"></a>Conversione di virgola mobile in unsigned integer

Nell'architettura ARM, la conversione di un valore a virgola mobile in un intero a 32 bit satura il valore più vicino che l'intero può rappresentare se il valore a virgola mobile non è compreso nell'intervallo che l'intero può rappresentare. Nelle architetture x86 e x64, la conversione esegue il wrapping se l'intero è senza segno o è impostato su -2147483648 se l'intero è con segno. Nessuna di queste architetture supporta direttamente la conversione di valori a virgola mobile in tipi integer più piccoli; al contrario, le conversioni vengono eseguite a 32 bit e i risultati vengono troncati a una dimensione inferiore.

Per l'architettura ARM, la combinazione di saturazione e troncamento significa che la conversione in tipi senza segno satura correttamente i tipi senza segno più piccoli quando satura un intero a 32 bit, ma produce un risultato troncato per i valori che sono più grandi del tipo più piccolo può rappresentare ma troppo piccolo per saturare l'intero a 32 bit completo. La conversione satura correttamente anche per gli interi con segno a 32 bit, ma il troncamento di interi con segno saturi restituisce -1 per i valori saturi positivi e 0 per i valori con saturazione negativa. La conversione in un intero con segno più piccolo produce un risultato troncato imprevedibile.

Per le architetture x86 e x64, la combinazione di comportamento di wrapping per le conversioni di interi senza segno e valutazione esplicita per le conversioni di interi con segno in caso di overflow, insieme al troncamento, rende imprevedibili i risultati per la maggior parte degli spostamenti se sono troppo grandi.

Queste piattaforme differiscono anche nel modo in cui gestiscono la conversione di NaN (Not-a-Number) in tipi integer. In ARM, NaN converte in 0x00000000; su x86 e x64, si converte in 0x8000000.

La conversione a virgola mobile può essere affidata solo se si sa che il valore è compreso nell'intervallo del tipo Integer in cui viene convertito.

### <a name="shift-operator---behavior"></a>Comportamento dell'operatore Shift ( >>)\< \<

Nell'architettura ARM, un valore può essere spostato a sinistra o a destra fino a 255 bit prima che il modello inizi a ripetersi. Nelle architetture x86 e x64, il modello viene ripetuto a ogni multiplo di 32, a meno che l'origine del modello non sia una variabile a 64 bit; in tal caso, il modello si ripete a ogni multiplo di 64 su x64 e ogni multiplo di 256 su x86, in cui viene impiegata un'implementazione software. Ad esempio, per una variabile a 32 bit con un valore di 1 spostato a sinistra di 32 posizioni, in ARM il risultato è 0, in x86 il risultato è 1 e in x64 anche il risultato è 1. Tuttavia, se l'origine del valore è una variabile a 64 bit, il risultato su tutte e tre le piattaforme è 4294967296 e il valore non "avvolge" fino a quando non viene spostato 64 posizioni su x64 o 256 posizioni su ARM e x86.

Poiché il risultato di un'operazione di spostamento che supera il numero di bit nel tipo di origine non è definito, il compilatore non deve avere un comportamento coerente in tutte le situazioni. Ad esempio, se entrambi gli operandi di uno spostamento sono noti in fase di compilazione, il compilatore può ottimizzare il programma utilizzando una routine interna per precalcolare il risultato dello spostamento e quindi sostituendo il risultato al posto dell'operazione shift. Se l'importo del turno è troppo grande o negativo, il risultato della routine interna potrebbe essere diverso dal risultato della stessa espressione shift eseguita dalla CPU.

### <a name="variable-arguments-varargs-behavior"></a>Comportamento degli argomenti variabili (varargs)Variable arguments (varargs) behavior

Nell'architettura ARM, i parametri dell'elenco di argomenti variabili passati nello stack sono soggetti ad allineamento. Ad esempio, un parametro a 64 bit è allineato su un limite a 64 bit. In x86 e x64, gli argomenti passati nello stack non sono soggetti ad allineamento e di compattazione. Questa differenza può causare una `printf` funzione variadic come leggere gli indirizzi di memoria che sono stati destinati come riempimento su ARM se il layout previsto dell'elenco di argomenti variabili non corrisponde esattamente, anche se potrebbe funzionare per un subset di alcuni valori nelle architetture x86 o x64. Considerare questo esempio:

```C
// notice that a 64-bit integer is passed to the function, but '%d' is used to read it.
// on x86 and x64 this may work for small values because %d will "parse" the low-32 bits of the argument.
// on ARM the calling convention will align the 64-bit value and the code will print a random value
printf("%d\n", 1LL);
```

In questo caso, il bug può essere corretto assicurandosi che venga utilizzata la specifica di formato corretta in modo che venga considerato l'allineamento dell'argomento. Questo codice è corretto:This code is correct:

```C
// CORRECT: use %I64d for 64-bit integers
printf("%I64d\n", 1LL);
```

### <a name="argument-evaluation-order"></a>Ordine di valutazione degli argomenti

Poiché i processori ARM, x86 e x64 sono così diversi, possono presentare requisiti diversi per le implementazioni del compilatore e anche diverse opportunità per le ottimizzazioni. Per questo motivo, insieme ad altri fattori come le impostazioni di convenzione di chiamata e ottimizzazione, un compilatore potrebbe valutare gli argomenti della funzione in un ordine diverso in architetture diverse o quando gli altri fattori vengono modificati. Ciò può causare la modifica imprevista del comportamento di un'app che si basa su un ordine di valutazione specifico.

Questo tipo di errore può verificarsi quando gli argomenti di una funzione hanno effetti collaterali che influiscono su altri argomenti della funzione nella stessa chiamata. In genere questo tipo di dipendenza è facile da evitare, ma a volte può essere oscurato da dipendenze difficili da discernere o dall'overload dell'operatore. Si consideri questo esempio di codice:Consider this code example:

```cpp
handle memory_handle;

memory_handle->acquire(*p);
```

Questo sembra ben definito, `->` `*` ma se e sono operatori di overload, allora questo codice viene convertito in qualcosa di simile al seguente:This appears well-defined, but if and are overloaded operators, then this code is translated to something that resembles this:

```cpp
Handle::acquire(operator->(memory_handle), operator*(p));
```

E se c'è una `operator->(memory_handle)` `operator*(p)`dipendenza tra e , il codice potrebbe basarsi su un ordine di valutazione specifico, anche se il codice originale sembra che non ci sia alcuna dipendenza possibile.

### <a name="volatile-keyword-default-behavior"></a>comportamento predefinito parola chiave volatile

Il compilatore MSVC supporta due `volatile` diverse interpretazioni del qualificatore di archiviazione che è possibile specificare utilizzando le opzioni del compilatore. L'opzione [/volatile:ms](reference/volatile-volatile-keyword-interpretation.md) consente di selezionare la semantica volatile estesa di Microsoft che garantisce un ordinamento sicuro, come è stato il caso tradizionale per x86 e x64 a causa del modello di memoria avanzata in tali architetture. L'opzione [/volatile:iso](reference/volatile-volatile-keyword-interpretation.md) consente di selezionare la semantica volatile standard di C, che non garantisce un ordinamento sicuro.

Nell'architettura ARM, il valore predefinito è **/volatile:iso** perché i processori ARM hanno un modello di memoria ordinato in modo debole e perché il software ARM non ha un'eredità di basarsi sulla semantica estesa di **/volatile:ms** e di solito non deve interfacciarsi con il software che lo fa. Tuttavia, a volte è ancora conveniente o anche necessario compilare un programma ARM per utilizzare la semantica estesa. Ad esempio, potrebbe essere troppo costoso eseguire il porting di un programma per l'utilizzo della semantica ISO C, oppure il software del driver potrebbe dover rispettare la semantica tradizionale per funzionare correttamente. In questi casi, è possibile utilizzare l'opzione **/volatile:ms;** Tuttavia, per ricreare la semantica volatile tradizionale nelle destinazioni ARM, il `volatile` compilatore deve inserire barriere di memoria intorno a ogni lettura o scrittura di una variabile per applicare un ordinamento sicuro, che può avere un impatto negativo sulle prestazioni.

Nelle architetture x86 e x64, il valore predefinito è **/volatile:ms** perché gran parte del software che è già stato creato per queste architetture utilizzando MSVC si basa su di esse. Quando si compilano programmi x86 e x64, è possibile specificare l'opzione **/volatile:iso** per evitare inutili dipendenza dalla semantica volatile tradizionale e per promuovere la portabilità.

## <a name="see-also"></a>Vedere anche

[Configurare Visual C++ per processori ARM](configuring-programs-for-arm-processors-visual-cpp.md)
