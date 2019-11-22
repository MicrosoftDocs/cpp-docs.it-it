---
title: Problemi comuni relativi alla migrazione di Visual C++ ARM
ms.date: 05/06/2019
ms.assetid: 0f4c434e-0679-4331-ba0a-cc15dd435a46
ms.openlocfilehash: 518b8872b301a8fcfc0f154cb3d5d0299efb0975
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303225"
---
# <a name="common-visual-c-arm-migration-issues"></a>Problemi comuni relativi alla migrazione di Visual C++ ARM

Quando si usa il C++ compilatore Microsoft (MSVC), lo C++ stesso codice sorgente potrebbe produrre risultati diversi sull'architettura ARM rispetto alle architetture x86 o x64.

## <a name="sources-of-migration-issues"></a>Origini dei problemi di migrazione

Molti problemi che potrebbero verificarsi quando si esegue la migrazione del codice dalle architetture x86 o x64 all'architettura ARM sono correlati a costrutti di codice sorgente che potrebbero richiamare un comportamento non definito, definito dall'implementazione o non specificato.

Un *comportamento non definito* è un comportamento C++ non definito dallo standard e causato da un'operazione che non ha un risultato ragionevole, ad esempio la conversione di un valore a virgola mobile in un Unsigned Integer o lo spostamento di un valore in base a un numero di posizioni negativo o superiore al numero di bit nel tipo innalzato di livello.

Il comportamento *definito dall'implementazione* è il comportamento C++ che lo standard richiede al fornitore del compilatore di definire e documentare. Un programma può basarsi tranquillamente sul comportamento definito dall'implementazione, anche se questa operazione potrebbe non essere portabile. Tra gli esempi di comportamento definito dall'implementazione sono incluse le dimensioni dei tipi di dati incorporati e i relativi requisiti di allineamento. Un esempio di un'operazione che potrebbe essere interessata dal comportamento definito dall'implementazione è l'accesso all'elenco di argomenti variabili.

Un *comportamento non specificato* è il comportamento C++ che lo standard lascia intenzionalmente non deterministico. Sebbene il comportamento sia considerato non deterministico, le chiamate particolari di comportamenti non specificati sono determinate dall'implementazione del compilatore. Tuttavia, non è necessario che un fornitore del compilatore predetermini il risultato o garantisca un comportamento coerente tra chiamate confrontabili e non vi sia alcun requisito per la documentazione. Un esempio di comportamento non specificato è l'ordine in cui vengono valutate le sottoespressioni, che includono gli argomenti di una chiamata di funzione.

Altri problemi di migrazione possono essere attribuiti alle differenze hardware tra le architetture ARM e x86 o x64 che interagiscono con lo C++ standard in modo diverso. Il modello di memoria forte dell'architettura x86 e x64, ad esempio, offre variabili qualificate `volatile`alcune proprietà aggiuntive che sono state usate per facilitare determinati tipi di comunicazione tra thread nel passato. Tuttavia, il modello di memoria debole dell'architettura ARM non supporta questo utilizzo, né C++ lo standard lo richiede.

> [!IMPORTANT]
>  Sebbene `volatile` acquisisca alcune proprietà che possono essere usate per implementare forme limitate di comunicazione tra thread su x86 e x64, queste proprietà aggiuntive non sono sufficienti per implementare la comunicazione tra thread in generale. Lo C++ standard consiglia di implementare tali comunicazioni usando le primitive di sincronizzazione appropriate.

Poiché le diverse piattaforme potrebbero esprimere questi tipi di comportamento in modo diverso, il trasferimento di software tra piattaforme può essere difficile e soggetto a errori se dipende dal comportamento di una piattaforma specifica. Sebbene molti di questi tipi di comportamento possano essere osservati e possano sembrare stabili, il loro uso è almeno non portabile e, in caso di comportamento non definito o non specificato, rappresenta anche un errore. Anche il comportamento menzionato in questo documento non dovrebbe essere basato su e potrebbe cambiare in futuro compilatori o implementazioni della CPU.

## <a name="example-migration-issues"></a>Problemi di migrazione di esempio

Il resto di questo documento descrive in che modo il comportamento diverso C++ di questi elementi del linguaggio può produrre risultati diversi su piattaforme diverse.

### <a name="conversion-of-floating-point-to-unsigned-integer"></a>Conversione da virgola mobile a Unsigned Integer

Nell'architettura ARM la conversione di un valore a virgola mobile in un Integer a 32 bit viene saturata al valore più vicino che può essere rappresentato dal valore integer se il valore a virgola mobile non è compreso nell'intervallo che può essere rappresentato dall'intero. Nelle architetture x86 e x64, la conversione esegue il wrapping se l'intero è senza segno oppure è impostato su-2147483648 se il numero intero è firmato. Nessuna di queste architetture supporta direttamente la conversione dei valori a virgola mobile in tipi integer più piccoli; al contrario, le conversioni vengono eseguite a 32 bit e i risultati vengono troncati a una dimensione inferiore.

Per l'architettura ARM, la combinazione di saturazione e troncamento significa che la conversione in tipi senza segno satura correttamente i tipi senza segno più piccoli quando satura un intero a 32 bit, ma produce un risultato troncato per valori maggiori di il tipo più piccolo può rappresentare ma troppo piccolo per saturare l'intero a 32 bit. La conversione viene saturata correttamente anche per interi con segno a 32 bit, ma il troncamento di interi con segno saturi restituisce-1 per i valori con saturazione positiva e 0 per i valori con saturazione negativa. La conversione in un intero con segno più piccolo genera un risultato troncato che è imprevedibile.

Per le architetture x86 e x64, la combinazione del comportamento wrap-around per le conversioni di Unsigned Integer e la valutazione esplicita per le conversioni di interi con segno in caso di overflow, insieme al troncamento, rendono i risultati imprevedibili per la maggior parte dei turni se sono troppo grande.

Queste piattaforme differiscono anche per il modo in cui gestiscono la conversione di NaN (non un numero) in tipi Integer. In ARM NaN converte in 0x00000000; in x86 e x64 viene convertito in 0x80000000.

È possibile fare affidamento sulla conversione a virgola mobile solo se si è certi che il valore sia compreso nell'intervallo del tipo integer in cui viene convertito.

### <a name="shift-operator---behavior"></a>Comportamento dell'operatore Shift (\<\< > >)

Nell'architettura ARM un valore può essere spostato a sinistra o a destra fino a 255 bit prima che il modello inizi a essere ripetuto. Nelle architetture x86 e x64 il modello viene ripetuto a ogni multiplo di 32, a meno che l'origine del modello non sia una variabile a 64 bit. in tal caso, il modello si ripete a ogni multiplo di 64 su x64 e a ogni multiplo di 256 su x86, in cui viene utilizzata un'implementazione di software. Ad esempio, per una variabile a 32 bit il cui valore è 1 spostato a sinistra di 32 posizioni, su ARM il risultato è 0, su x86 il risultato è 1 e in x64 anche il risultato è 1. Tuttavia, se l'origine del valore è una variabile a 64 bit, il risultato su tutte e tre le piattaforme è 4294967296 e il valore non viene "avvolto" fino a quando non vengono spostate 64 posizioni su x64 o 256 posizioni su ARM e x86.

Poiché il risultato di un'operazione di spostamento che supera il numero di bit nel tipo di origine non è definito, non è necessario che il compilatore abbia un comportamento coerente in tutte le situazioni. Se, ad esempio, entrambi gli operandi di un turno sono noti in fase di compilazione, il compilatore può ottimizzare il programma utilizzando una routine interna per precalcolare il risultato dello spostamento e quindi sostituire il risultato al posto dell'operazione di spostamento. Se l'importo dello spostamento è troppo grande o negativo, il risultato della routine interna potrebbe essere diverso dal risultato della stessa espressione di spostamento eseguito dalla CPU.

### <a name="variable-arguments-varargs-behavior"></a>Comportamento degli argomenti variabili (varargs)

Nell'architettura ARM, i parametri dell'elenco di argomenti variabili passati nello stack sono soggetti a allineamento. Un parametro a 64 bit, ad esempio, è allineato a un limite di 64 bit. In x86 e x64 gli argomenti passati nello stack non sono soggetti a allineamento e a compressione. Questa differenza può causare una funzione Variadic come `printf` di leggere gli indirizzi di memoria che sono stati usati come spaziatura interna se il layout previsto dell'elenco di argomenti variabili non corrisponde esattamente, anche se potrebbe funzionare per un subset di alcuni valori nelle architetture x86 o x64. Si consideri l'esempio seguente:

```C
// notice that a 64-bit integer is passed to the function, but '%d' is used to read it.
// on x86 and x64 this may work for small values because %d will "parse" the low-32 bits of the argument.
// on ARM the calling convention will align the 64-bit value and the code will print a random value
printf("%d\n", 1LL);
```

In questo caso, è possibile correggere il bug verificando che venga utilizzata la specifica di formato corretta, in modo che venga considerato l'allineamento dell'argomento. Questo codice è corretto:

```C
// CORRECT: use %I64d for 64-bit integers
printf("%I64d\n", 1LL);
```

### <a name="argument-evaluation-order"></a>Ordine di valutazione degli argomenti

Poiché i processori ARM, x86 e x64 sono così diversi, possono presentare requisiti diversi per le implementazioni del compilatore e anche opportunità diverse per le ottimizzazioni. Per questo motivo, insieme ad altri fattori quali le impostazioni di ottimizzazione e convenzione di chiamata, un compilatore può valutare gli argomenti della funzione in un ordine diverso in architetture diverse o quando vengono modificati gli altri fattori. Questo può causare il comportamento di un'app che si basa su un ordine di valutazione specifico per la modifica imprevista.

Questo tipo di errore può verificarsi quando gli argomenti di una funzione presentano effetti collaterali che influiscono su altri argomenti per la funzione nella stessa chiamata. In genere questo tipo di dipendenza è facile da evitare, ma a volte può essere nascosto dalle dipendenze difficili da discernere o dall'overload degli operatori. Si consideri l'esempio di codice seguente:

```cpp
handle memory_handle;

memory_handle->acquire(*p);
```

Questo aspetto è ben definito, ma se `->` e `*` sono operatori di overload, il codice viene convertito in un elemento simile al seguente:

```cpp
Handle::acquire(operator->(memory_handle), operator*(p));
```

Se c'è una dipendenza tra `operator->(memory_handle)` e `operator*(p)`, il codice può basarsi su un ordine di valutazione specifico, anche se il codice originale sembra non esiste alcuna dipendenza possibile.

### <a name="volatile-keyword-default-behavior"></a>comportamento predefinito della parola chiave volatile

Il compilatore MSVC supporta due diverse interpretazioni del qualificatore di archiviazione `volatile` che è possibile specificare usando le opzioni del compilatore. L'opzione [/volatile: ms](reference/volatile-volatile-keyword-interpretation.md) seleziona la semantica volatile estesa Microsoft che garantisce un ordinamento sicuro, come è stato il caso tradizionale per x86 e x64 a causa del modello di memoria forte su tali architetture. L'opzione [/volatile: ISO](reference/volatile-volatile-keyword-interpretation.md) seleziona la semantica volatile standard rigorosa C++ che non garantisce un ordinamento sicuro.

Nell'architettura ARM, il valore predefinito è **/volatile: ISO** perché i processori ARM hanno un modello di memoria ordinata in modo debole e perché il software ARM non ha un retaggio di basarsi sulla semantica estesa di **/volatile: ms** e in genere non deve interfacciarsi con il software che lo fa. Tuttavia, in alcuni casi è comunque utile o addirittura necessario compilare un programma ARM per usare la semantica estesa. Ad esempio, potrebbe essere troppo costoso trasferire un programma per l'uso della semantica ISO C++ oppure il software driver potrebbe dover rispettare la semantica tradizionale per funzionare correttamente. In questi casi, è possibile usare l'opzione **/volatile: ms** . Tuttavia, per ricreare la semantica volatile tradizionale sulle destinazioni ARM, il compilatore deve inserire barriere di memoria attorno a ogni lettura o scrittura di una variabile di `volatile` per applicare un ordinamento sicuro, che può avere un impatto negativo sulle prestazioni.

Nelle architetture x86 e x64 il valore predefinito è **/volatile: ms** perché gran parte del software già creato per queste architetture con MSVC si basa su di essi. Quando si compilano programmi x86 e x64, è possibile specificare l'opzione **/volatile: ISO** per evitare la dipendenza non necessaria dalla semantica volatile tradizionale e per promuovere la portabilità.

## <a name="see-also"></a>Vedere anche

[Configurare Visual C++ per processori ARM](configuring-programs-for-arm-processors-visual-cpp.md)
