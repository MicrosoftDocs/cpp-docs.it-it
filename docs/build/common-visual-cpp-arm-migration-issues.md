---
title: Problemi comuni relativi alla migrazione di Visual C++ ARM | Microsoft Docs
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
ms.openlocfilehash: c0e42cd14c5707f728f5577a77b2dd613c5ef2a0
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45709618"
---
# <a name="common-visual-c-arm-migration-issues"></a>Problemi comuni relativi alla migrazione di Visual C++ ARM

Quando si usa Microsoft Visual C++ (MSVC), lo stesso codice sorgente C++ può produrre risultati diversi nell'architettura ARM rispetto a su architetture x86 o x64.

## <a name="sources-of-migration-issues"></a>Fonti di problemi di migrazione

Molti problemi che possono verificarsi quando si esegue la migrazione di codice dalle architetture x86 o x64 per l'architettura ARM sono correlati ai costrutti di codice sorgente che potrebbero richiamare il comportamento non definito, definito dall'implementazione o non specificato.

*Un comportamento indefinito* è il comportamento C++ standard non definisce e che è dovuto a un'operazione che non produce alcun risultato ragionevole: ad esempio, la conversione di un valore a virgola mobile in un intero senza segno o lo spostamento di un valore di un numero di posizioni che è negativo o supera il numero di bit nel relativo tipo promosso.

*Comportamento definito dall'implementazione* è il comportamento standard C++ richiede il fornitore di compilatori definire e documentare. Un programma può fare affidamento sul comportamento definito dall'implementazione, anche se tale operazione pertanto potrebbe non essere portabile. Le dimensioni dei tipi di dati incorporati e i relativi requisiti di allineamento sono esempi di comportamento definito dall'implementazione. Un esempio di un'operazione che potrebbe essere influenzato dal comportamento definito dall'implementazione è accedere all'elenco di argomenti variabili.

*Non viene specificato il comportamento* è il comportamento standard C++ lascia intenzionalmente non deterministica. Sebbene il comportamento è considerato non deterministico, chiamate particolare di un comportamento non specificato sono determinate dall'implementazione del compilatore. Tuttavia, non è obbligatorio per un fornitore di compilatori definire in anticipo il risultato o garantisce un comportamento coerente tra le chiamate simili e non è necessario per la documentazione. Un esempio di comportamento non specificato è l'ordine in cui le sottoespressioni, tra cui gli argomenti a una chiamata di funzione, vengono valutate.

Altri problemi di migrazione possono essere attribuite alle differenze hardware esistenti tra le architetture x86 o x64 che interagiscono con lo standard C++ in modo diverso e ARM. Ad esempio, il modello di memoria avanzata dell'architettura x86 e x64 offre `volatile`-qualificato variabili alcune proprietà aggiuntive che sono stati utilizzati per facilitare determinati tipi di comunicazione tra thread nel passato. Ma il modello di memoria debole dell'architettura ARM non supporta l'uso, né lo standard C++ richiede.

> [!IMPORTANT]
>  Sebbene `volatile` guadagni alcune proprietà che possono essere utilizzati per implementare forme limitate di comunicazione tra thread su x86 e x64, queste proprietà aggiuntive non sono sufficienti per l'implementazione tra thread comunicazione in generale. Lo standard C++ consiglia che tale comunicazione essere implementato usando invece le primitive di sincronizzazione appropriato.

Poiché le diverse piattaforme potrebbero esprimere questi tipi di comportamento in modo diverso, portabilità tra piattaforme software può risultare difficile e bug tendenti se dipende il comportamento di una piattaforma specifica. Sebbene molti di questi tipi di comportamento può essere osservati potrebbe sembrare stabile, basandosi su di essi è almeno non portabile e in caso di un comportamento non definito o non specificato, è anche un errore. Anche il comportamento che è citato nel presente documento necessario non fare affidamento e può cambiare in futuro i compilatori o implementazioni della CPU.

## <a name="example-migration-issues"></a>Problemi relativi alla migrazione di esempio

La parte restante di questo documento descrive come il diverso comportamento di questi elementi del linguaggio C++ può produrre risultati diversi su piattaforme diverse.

### <a name="conversion-of-floating-point-to-unsigned-integer"></a>Conversione della virgola mobile all'intero senza segno

Nell'architettura ARM, una conversione di un valore a virgola mobile a un integer a 32 bit saturazione sul valore più vicino che può rappresentare l'intero se il valore a virgola mobile è compreso nell'intervallo che può rappresentare il numero intero. Nelle architetture x86 e x64, la conversione esegue il wrapping se il valore integer non è firmato o se il valore integer viene firmato è impostato su -2147483648. Nessuna di queste architetture direttamente supportare la conversione di valori a virgola mobile a tipi interi più piccoli; al contrario, le conversioni vengono eseguite a 32 bit e i risultati vengono troncati a dimensioni inferiori.

Per l'architettura ARM, la combinazione di saturazione e il troncamento indica che la conversione a tipi senza segno satura correttamente più piccoli i tipi senza segno quando la saturazione di un intero a 32 bit, ma produce un risultato troncato per i valori maggiori di tipo di livello inferiore può rappresentare ma troppo piccolo per saturare l'intero completo a 32 bit. Conversione satura inoltre correttamente per interi con segno a 32 bit, ma comporta il troncamento di valori interi saturi, firmati -1 per i valori positivi saturo e 0 per i valori negativamente saturo. Conversione in un intero con segno più piccolo produce un risultato troncato che non è prevedibile.

Per le architetture x86 e x64, la combinazione di comportamento circolare per le conversioni di integer senza segno e valutazione esplicita per le conversioni di intero con segno in caso di overflow, insieme a troncamento, verificare i risultati per la maggior parte degli spostamenti imprevedibile se sono troppo grande.

Queste piattaforme presentano differiscono la gestione della conversione di NaN (Not a Number) ai tipi integer. In ARM, NaN converte 0x00000000; su x86 e x64, converte in 0x80000000.

Conversione a virgola mobile possa solo fare affidamento su se si sa che il valore è compreso nell'intervallo del tipo che viene viene convertito in numero intero.

### <a name="shift-operator---behavior"></a>Operatore di spostamento (\< \< >>) comportamento

Nell'architettura ARM, un valore può essere spostato a sinistra o destra, fino a 255 bit prima che inizi il modello di ripetizione. Nelle architetture x86 e x64, il modello viene ripetuto in ogni più di 32, a meno che l'origine del modello è una variabile a 64 bit. In tal caso, il modello si ripete ogni multiplo di 64 su x64 e ogni più di 256 x86, in cui viene usata un'implementazione del software. Ad esempio, per una variabile a 32 bit con un valore pari a 1 spostato a sinistra di 32 posizioni, in ARM il risultato è 0, x86 il risultato è 1 e su x64 il risultato è 1. Tuttavia, se l'origine del valore è una variabile a 64 bit, quindi in tutte e tre le piattaforme risulta 4294967296 e il valore non "wrapping" fino a quando non ha spostato 64 posizioni su x64 o 256 posizioni su ARM e x86.

Poiché il risultato di un'operazione di spostamento che supera il numero di bit del tipo di origine non è definito, il compilatore non deve avere un comportamento coerente in tutte le situazioni. Ad esempio, se entrambi gli operandi di un turno sono noti in fase di compilazione, il compilatore potrebbe ottimizzare il programma usando una routine interna di pre-calcola il risultato dello spostamento e quindi sostituendo il risultato al posto dell'operazione di spostamento. Se l'entità dello spostamento è troppo grande o un valore negativo, il risultato della routine interno potrebbe essere diverso il risultato dell'espressione stessa MAIUSC eseguite direttamente dalla CPU.

### <a name="variable-arguments-varargs-behavior"></a>Comportamento di argomenti variabili (varargs)

Nell'architettura ARM, i parametri nell'elenco di argomenti variabili che vengono passati nello stack sono soggetti a allineamento. Ad esempio, un parametro a 64 bit è allineato a un limite di 64 bit. Su x86 e x64, gli argomenti che vengono passati nello stack non sono soggetti allineamento e pack strettamente. Questa differenza può provocare una funzione variadic, ad esempio `printf` per leggere gli indirizzi di memoria che sono stati intendersi come spaziatura interna in ARM se il layout previsto dell'elenco di argomenti variabili non corrisponde esattamente, anche se potrebbe funzionare per un subset di alcuni valori su x86 x64 o architetture. Si consideri l'esempio seguente:

```C
// notice that a 64-bit integer is passed to the function, but '%d' is used to read it.
// on x86 and x64 this may work for small values because %d will “parse” the low-32 bits of the argument.
// on ARM the calling convention will align the 64-bit value and the code will print a random value
printf("%d\n", 1LL);
```

In questo caso, il bug può essere risolto assicurandosi che la specifica del formato corretto è usata in modo che viene considerato l'allineamento dell'argomento. Questo codice è corretto:

```C
// CORRECT: use %I64d for 64-bit integers
printf("%I64d\n", 1LL);
```

### <a name="argument-evaluation-order"></a>Ordine di valutazione dell'argomento

Poiché ARM, x86 e x64 sono molto diversi da processori, essi possono presentare requisiti diversi per le implementazioni del compilatore, nonché diverse opportunità per le ottimizzazioni. Per questo motivo, insieme ad altri fattori, ad esempio le impostazioni di convenzione di chiamata e l'ottimizzazione, un compilatore può valutare gli argomenti della funzione in un ordine diverso su diverse architetture o quando vengono modificati di altri fattori. Ciò può causare il comportamento di un'app che si basa su un ordine di valutazione specifico per modificare in modo imprevisto.

Questo tipo di errore può verificarsi quando gli argomenti a una funzione hanno effetti collaterali che influiscono su altri argomenti della funzione nella stessa chiamata. In genere questo tipo di dipendenza è facile da evitare, ma possono talvolta essere nascosto da dipendenze che sono difficili da distinguere in o dall'overload degli operatori. Si consideri l'esempio di codice:

```cpp
handle memory_handle;

memory_handle->acquire(*p);
```

Questo valore viene visualizzato ben definito, ma se `->` e `*` sono gli operatori di overload, quindi questo codice viene convertito in qualcosa di simile alla seguente:

```cpp
Handle::acquire(operator->(memory_handle), operator*(p));
```

E se è presente una dipendenza tra `operator->(memory_handle)` e `operator*(p)`, il codice può basarsi su un ordine di valutazione specifico, anche se il codice originale è simile a non è presente alcuna dipendenza possibili.

### <a name="volatile-keyword-default-behavior"></a>comportamento predefinito di parola chiave volatile

Il compilatore MSVC supporta due diverse interpretazioni sulla `volatile` qualificatore di archiviazione che è possibile specificare utilizzando le opzioni del compilatore. Il [/volatile: MS](../build/reference/volatile-volatile-keyword-interpretation.md) consente di selezionare Microsoft estese semantica volatile che garantire l'ordinamento sicuro, come è stato tradizionalmente per x86 e x64 a causa del modello di memoria sicuro in tali architetture. Il [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) consente di selezionare la rigorosa C++ volatile semantica standard che non garanzia l'ordinamento sicuro.

Nell'architettura ARM, il valore predefinito è **/volatile:iso** perché i processori ARM hanno un debole ordinati in modello di memoria e perché ARM software non presenta un legacy di affidarsi la semantica estesa di **/volatile: MS**  e non ha in genere per interfacciarsi con il software che esegue. Tuttavia, è ancora in alcuni casi conviene o persino necessari per compilare un programma ARM di usare la semantica estesa. Ad esempio, potrebbe essere troppo costoso trasferire un programma di usare la semantica di ISO C++ o software del driver potrebbe essere necessario rispettare la semantica tradizionale a funzionare correttamente. In questi casi, è possibile usare la **/volatile: MS** commutatore; tuttavia, per ricreare la tradizionale semantica volatile sugli obiettivi di ARM, il compilatore deve inserire le barriere di memoria per ogni lettura o scrittura di un `volatile` variabile da applicare ordinamento sicuro, che può avere un impatto negativo sulle prestazioni.

Nelle architetture x86 e x64, il valore predefinito è **/volatile: MS** poiché gran parte del software che è già stato creato per le architetture con MSVC si basa su di essi. Quando si compilano programmi x86 e x64, è possibile specificare il **/volatile:iso** interruttore per evitare il affidamento inutile la tradizionale semantica volatile e per promuovere la portabilità.

## <a name="see-also"></a>Vedere anche

[Configurare Visual C++ per processori ARM](../build/configuring-programs-for-arm-processors-visual-cpp.md)
