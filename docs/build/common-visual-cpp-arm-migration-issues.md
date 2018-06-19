---
title: Problemi comuni relativi alla migrazione di Visual C++ ARM | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 0f4c434e-0679-4331-ba0a-cc15dd435a46
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 04253b5d71de75f6a06f2934dae24df2e6d4e3e2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32376234"
---
# <a name="common-visual-c-arm-migration-issues"></a>Problemi comuni relativi alla migrazione di Visual C++ ARM

Quando si utilizza Microsoft Visual C++ (opzioni: MSVC), lo stesso codice sorgente C++ potrebbe produrre risultati diversi per l'architettura ARM rispetto a quello usato nelle architetture x86 o x64.

## <a name="sources-of-migration-issues"></a>Origini di problemi di migrazione

Molti problemi che potrebbero verificarsi quando si esegue la migrazione di codice dalle architetture x86 o x64 per l'architettura ARM riguardano i costrutti di codice sorgente che potrebbero richiamare un comportamento indefinito, definito dall'implementazione o non specificato.

*Genera un comportamento indefinito* è comportamento che lo standard C++ non definisce e che è causato da un'operazione con nessun risultato ragionevole: ad esempio, la conversione di un valore a virgola mobile in un intero senza segno o lo spostamento di un valore di un numero di posizioni che è un valore negativo o supera il numero di bit nel relativo tipo promosso.

*Comportamento definito dall'implementazione* comportamento che lo standard C++ richiede il fornitore del compilatore definire e documentare. Un programma può fare affidamento sul comportamento definito dall'implementazione, anche se in tal modo potrebbe non essere portabile. Le dimensioni dei tipi di dati incorporati e i relativi requisiti di allineamento sono esempi di comportamento definito dall'implementazione. Un esempio di un'operazione che potrebbe dipendere dal comportamento definito dall'implementazione è accesso all'elenco di argomenti variabili.

*Non viene specificato il comportamento* comportamento che lo standard C++ lascia intenzionalmente non deterministico. Sebbene il comportamento viene considerato non deterministica, chiamate particolare di un comportamento non specificato vengono determinate dall'implementazione del compilatore. Tuttavia, non vi è alcun requisito per un fornitore di compilatori determinare il risultato o garantire un comportamento coerente tra le chiamate simili e non è richiesto per la documentazione. Un esempio di un comportamento non specificato è l'ordine in cui le sottoespressioni, che include gli argomenti per una chiamata di funzione, vengono valutate.

Altri problemi di migrazione possono essere attribuiti a differenze hardware ARM e le architetture x86 o x64 che interagiscono con lo standard C++ in modo diverso. Ad esempio, il modello di memoria sicuro dell'architettura x86 e x64 fornisce `volatile`-qualificato variabili alcune proprietà aggiuntive che sono stati utilizzati per facilitare determinati tipi di comunicazione tra thread nel passato. Ma il modello di memoria debole dell'architettura ARM non supporta l'uso né lo standard C++ richiede.

> [!IMPORTANT]
>  Sebbene `volatile` alcune proprietà che può essere utilizzato per implementare forme limitate di comunicazione tra thread su x86 e x64, queste proprietà aggiuntive non sono sufficienti per l'implementazione di miglioramenti tra thread comunicazione in generale. Lo standard C++ consiglia che tale comunicazione deve essere implementato utilizzando invece le primitive di sincronizzazione appropriato.

Perché diverse piattaforme potrebbero esprimere questi tipi di comportamento in modo diverso, porting software tra le piattaforme, può essere difficile e bug-se dipende dal comportamento di una piattaforma specifica. Sebbene molti di questi tipi di comportamento può essere osservati potrebbe sembrare stabile, basate su di esse è almeno non portabili e nei casi di comportamento non definito o non specificato, è anche un errore. Anche il comportamento che citato in questo documento non bisognerebbe affidarsi e potrebbe cambiare nelle future compilatori o implementazioni di CPU.

## <a name="example-migration-issues"></a>Problemi relativi alla migrazione di esempio

Il resto di questo documento viene descritto come il diverso comportamento di questi elementi del linguaggio C++ può produrre risultati diversi su piattaforme diverse.

### <a name="conversion-of-floating-point-to-unsigned-integer"></a>Conversione di tipo a virgola mobile nell'intero senza segno

Per l'architettura ARM, conversione di un valore a virgola mobile a un intero a 32 bit la saturazione al valore più vicino che può rappresentare il numero intero, se il valore a virgola mobile non rientra nell'intervallo che può rappresentare il numero intero. Nelle architetture x86 e x64, la conversione wrapping se il numero intero non è firmato o se il valore integer è firmato è impostato su -2147483648. Nessuna di queste architetture supportano direttamente la conversione di valori a virgola mobile a tipi interi più piccoli; al contrario, le conversioni vengono eseguite a 32 bit e i risultati vengono troncati a dimensioni inferiori.

Per l'architettura ARM, significa che la conversione in tipi non firmati correttamente la saturazione tipi senza segno di minori quando la saturazione di un intero a 32 bit, ma produce un risultato troncato per i valori maggiori di combinazione di saturazione e il troncamento di tipo più piccolo può rappresentare ma troppo piccolo per saturare l'intero a 32 bit. Conversione satura inoltre correttamente per interi con segno a 32 bit, ma comporta il troncamento di numeri interi sature, con segno -1 per i valori di saturazione positivamente e 0 per i valori di saturazione negativamente. Conversione in un intero con segno più piccolo produce un risultato troncato che imprevedibile.

Per le architetture x86 e x64, la combinazione di comportamento circolare per le conversioni di tipo integer senza segno e valutazione esplicita per le conversioni di intero con segno in caso di overflow, il troncamento, insieme a rendere i risultati per la maggior parte degli spostamenti imprevedibile se sono troppo grande.

Anche queste piattaforme sono diverse modalità di gestione di conversione di NaN (Not a Number) in tipi integer. Converte in ARM, NaN 0x00000000; su x86 e x64, converte in 0x80000000.

Conversione a virgola mobile può solo essere ritenuti attendibili se si sa che il valore all'interno dell'intervallo di tipo integer convertito in.

### <a name="shift-operator---behavior"></a>Operatore di spostamento (\< \< >>) comportamento

Nell'architettura ARM, un valore può essere spostato a sinistra o destra, fino a 255 bit prima che inizi il modello da ripetere. Nelle architetture x86 e x64, il modello viene ripetuto in ogni più di 32, a meno che l'origine del modello è una variabile a 64 bit. In tal caso, il modello si ripete ogni multiplo di 64 su x64 e ogni più di 256 x86, in cui viene utilizzata un'implementazione del software. Ad esempio, per una variabile a 32 bit con un valore pari a 1 spostato a sinistra da posizioni di 32, su architetture ARM, il risultato è 0, x86, il risultato è 1 e su x64 il risultato è 1. Tuttavia, se l'origine del valore è una variabile a 64 bit, il risultato in tutte e tre le piattaforme è 4294967296 e il valore non "wrapping" fino a quando non ha spostato 64 posizioni su x64 o 256 posizioni su ARM e x86.

Poiché il risultato di un'operazione di spostamento che supera il numero di bit nel tipo di origine non è definito, il compilatore non è necessario disporre di un comportamento coerente in tutte le situazioni. Ad esempio, se entrambi gli operandi di un turno sono noto in fase di compilazione, il compilatore potrebbe ottimizzare il programma usando una routine interna per pre-calcola il risultato dello spostamento e quindi sostituendo il risultato al posto dell'operazione di spostamento. Se l'entità dello spostamento è troppo grande o negativo, il risultato della routine interno potrebbe essere diverso il risultato dell'espressione stessa MAIUSC eseguite direttamente dalla CPU.

### <a name="variable-arguments-varargs-behavior"></a>Comportamento di argomenti variabili (varargs)

Per l'architettura ARM, i parametri nell'elenco di argomenti variabili che vengono passati nello stack sono soggetti a allineamento. Ad esempio, un parametro a 64 bit è allineato a un limite di 64 bit. Su x86 e x64, gli argomenti che vengono passati nello stack non sono soggetti a allineamento e i Service pack strettamente. Questa differenza può provocare una funzione variadic come `printf` per leggere gli indirizzi di memoria che erano destinati a riempimento su ARM se il layout previsto dell'elenco di argomenti variabili non corrisponde esattamente, anche se potrebbe funzionare per un subset di alcuni valori in x86 x64 o architetture. Si consideri l'esempio seguente:

```C
// notice that a 64-bit integer is passed to the function, but '%d' is used to read it.
// on x86 and x64 this may work for small values because %d will “parse” the low-32 bits of the argument.
// on ARM the calling convention will align the 64-bit value and the code will print a random value
printf("%d\n", 1LL);
```

In questo caso, il bug può essere risolto assicurandosi che viene utilizzata la specifica di formato corretto, in modo che che viene considerato l'allineamento dell'argomento. Questo codice è corretto:

```C
// CORRECT: use %I64d for 64-bit integers
printf("%I64d\n", 1LL);
```

### <a name="argument-evaluation-order"></a>Ordine di valutazione dell'argomento

Poiché ARM, x86 e x64 sono molto diversi da processori, essi possono presentare requisiti diversi per le implementazioni del compilatore, nonché diverse possibilità per le ottimizzazioni. Per questo motivo, insieme ad altri fattori come le impostazioni di convenzione di chiamata e l'ottimizzazione, un compilatore può valutare gli argomenti della funzione in un ordine diverso su architetture diverse o quando vengono modificati i altri fattori. Questo può causare il comportamento di un'app che si basa su un ordine di valutazione specifico per modificare in modo imprevisto.

Questo tipo di errore può verificarsi quando gli argomenti di una funzione abbiano effetti collaterali che influiscono su altri argomenti della funzione nella stessa chiamata. In genere questo tipo di dipendenza è facile da evitare, ma può talvolta essere oscurato dalle dipendenze che sono difficili da distinguere o dall'operatore di overload. Si consideri l'esempio di codice:

```cpp
handle memory_handle;

memory_handle->acquire(*p);
```

Questo valore viene visualizzato ben definito, ma se `->` e `*` sono gli operatori di overload, quindi questo codice viene convertito in un elemento che è analogo al seguente:

```cpp
Handle::acquire(operator->(memory_handle), operator*(p));
```

E se è presente una dipendenza tra `operator->(memory_handle)` e `operator*(p)`, il codice può basarsi su un ordine di valutazione specifico, anche se il codice originale è simile non è presente alcuna dipendenza possibili.

### <a name="volatile-keyword-default-behavior"></a>comportamento predefinito volatile (parola chiave)

Il compilatore opzioni: MSVC supporta due diverse interpretazioni del `volatile` qualificatore di archiviazione che è possibile specificare utilizzando le opzioni del compilatore. Il [/volatile: MS](../build/reference/volatile-volatile-keyword-interpretation.md) consente di selezionare Microsoft estesi semantica volatile che garantiscono l'ordinamento sicuro, come è stato il case tradizionale per x86 e x64 a causa del modello di memoria sicuro su queste architetture. Il [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) consente di selezionare il C++ standard volatile semantica che non garanzia un ordinamento sicuro.

Per l'architettura ARM, il valore predefinito è **/volatile:iso** poiché processori ARM hanno un debole ordinati modello di memoria e il software di ARM non dispongono di un legacy di basarsi sulla semantica estesa di **/volatile: MS**  e non vengono in genere all'interfaccia con il software che esegue. Tuttavia, è comunque talvolta utile o anche necessari per compilare un programma ARM di usare la semantica estesa. Ad esempio, potrebbe essere troppo costoso trasferire un programma di usare la semantica di ISO C++ o software dei driver potrebbe essere necessario rispettare la semantica tradizionale a funzionare correttamente. In questi casi, è possibile utilizzare il **/volatile: MS** commutatore; per ricreare la semantica tradizionale volatile in destinazioni ARM, tuttavia, il compilatore deve inserire barriere di memoria per ogni lettura o scrittura di un `volatile` variabile da applicare ordinamento complessa, che può avere un impatto negativo sulle prestazioni.

Nelle architetture x86 e x64, il valore predefinito è **/volatile: MS** poiché gran parte del software che è già stato creato per le architetture utilizzando opzioni: MSVC si basa su di essi. Quando si compilano programmi x86 e x64, è possibile specificare il **/volatile:iso** commutatore al fine di evitare inutile dipendenza la semantica tradizionale volatile e alzare di livello la portabilità.

## <a name="see-also"></a>Vedere anche

[Configurare Visual C++ per processori ARM](../build/configuring-programs-for-arm-processors-visual-cpp.md)  
