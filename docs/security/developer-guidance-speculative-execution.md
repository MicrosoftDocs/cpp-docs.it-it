---
title: Istruzioni per sviluppatori di C++ per i canali lato di esecuzione speculativo | Documenti Microsoft
ms.custom: ''
ms.date: 05/21/2018
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Visual C++, security
- security [C++]
- security [C++], best practices
- Spectre
- CVE-2017-5753
- Speculative Execution
author: mamillmsft
ms.author: mikeblome
ms.workload:
- cplusplus
ms.openlocfilehash: 515e2223e67d86da12488d9880a1a0a258fc4bdf
ms.sourcegitcommit: 4b2c3b0c720aef42bce7e1e5566723b0fec5ec7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
---
# <a name="c-developer-guidance-for-speculative-execution-side-channels"></a>Istruzioni per sviluppatori di C++ per i canali lato di esecuzione speculativo

Questo articolo contiene informazioni aggiuntive per gli sviluppatori facilitare l'identificazione e riduzione del rischio di esecuzione speculativo lato canale hardware le vulnerabilità nel software di C++. Queste vulnerabilità possono rivelare informazioni riservate tra confini di trust e possono influire sul software in esecuzione su processori che supportano speculativa, in ordine di esecuzione di istruzioni. Questa classe di vulnerabilità sia prima descritto in gennaio, 2018 e complementari e informazioni aggiuntive sono reperibili [security di Microsoft advisory](https://portal.msrc.microsoft.com/en-US/security-guidance/advisory/ADV180002).

Le indicazioni fornite da questo articolo sono correlata alle classi di vulnerabilità rappresentata da:

1. CVE-2017-5753, noto anche come variante Spectre 1. Questa classe di vulnerabilità di hardware è correlata ai canali lato che possono verificarsi a causa di esecuzione speculativo che si verifica in seguito a soddisfare una diramazione condizionale. Il compilatore Visual C++ in Visual Studio 2017 (a partire dalla versione 15.5.5) include il supporto per il `/Qspectre` commutatore che fornisce una mitigazione in fase di compilazione per un set limitato di modelli di codice potenzialmente vulnerabile correlati a CVE-2017-5753. La documentazione per il [/Qspectre](https://docs.microsoft.com/en-us/cpp/build/reference/qspectre) flag vengono fornite ulteriori informazioni sulla relativa effetti e sull'utilizzo.

2. CVE-2018-3639, noto anche come [speculativo archivio Bypass (SSB)](https://aka.ms/sescsrdssb). Questa classe di vulnerabilità di hardware è correlata ai canali lato che possono verificarsi a causa di speculativo esecuzione di un carico avanti rispetto a un archivio dipendenti come risultato un soddisfare l'accesso di memoria.

Un'introduzione accessibile alle vulnerabilità di canale lato esecuzione speculativo è reperibile nella presentazione intitolata [il Case di Spectre e Meltdown](https://www.youtube.com/watch?v=_4O0zMW-Zu4) da uno dei team di ricerca che questi problemi individuati.

## <a name="what-are-speculative-execution-side-channel-hardware-vulnerabilities"></a>Quali sono le vulnerabilità hardware speculativo esecuzione Side canale?

CPU più recenti forniscono un grado più elevato di prestazioni apportando ricorso speculativo e in ordine l'esecuzione di istruzioni. Ad esempio, questa operazione viene spesso eseguita per stimare la destinazione di rami (condizionale e indirette) che consente la CPU può iniziare speculativo l'esecuzione di istruzioni nel database di destinazione ramo stimati, evitando un stallo fino a quando non è la destinazione branch effettivo risolto. Nel caso in cui la CPU in un secondo momento individua che si è verificato un soddisfare, lo stato di computer che è stato calcolato speculativo verrà ignorato. In questo modo si garantisce che non si verifichino effetti visibili l'architettura di speculation stimati in modo errato.

Durante l'esecuzione speculativo non influiscono sullo stato visibile l'architettura, può mantenere tracce residue in stato non architetturali, ad esempio le varie cache utilizzato dalla CPU. Queste tracce residue di esecuzione speculativo che può dar luogo a vulnerabilità di canale lato è. Per comprendere meglio questo, si consideri il frammento di codice seguente che fornisce un esempio di CVE-2017-5753 (limiti controllare Bypass):

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadByte(unsigned char *buffer, unsigned int buffer_size, unsigned int untrusted_index) {
    if (untrusted_index < buffer_size) {
        unsigned char value = buffer[untrusted_index];
        return shared_buffer[value * 4096];
    }
}
```

In questo esempio, `ReadByte` viene fornito un buffer, le dimensioni del buffer e un indice nel buffer. Il parametro di indice, come specificato da `untrusted_index`, viene fornito da un minore di contesto con privilegi, ad esempio un processo non amministrativi. Se `untrusted_index` è minore `buffer_size`, quindi il carattere in corrispondenza di tale indice viene letto dal `buffer` e utilizzato per l'indice in un'area condivisa di memoria a cui fa riferimento `shared_buffer`. 

Da una prospettiva architettonica, questa sequenza di codice è perfettamente provvisoria è garantito che `untrusted_index` sarà sempre minore `buffer_size`. Tuttavia, in presenza di speculativo esecuzione, è possibile che la CPU verrà mispredict la diramazione condizionale ed eseguire il corpo dell'oggetto se istruzione anche quando `untrusted_index` è maggiore o uguale a `buffer_size`. Di conseguenza, la CPU speculativo può leggere un byte allargano i limiti del `buffer` (che può essere una chiave privata) e può quindi utilizzare tale valore byte per calcolare l'indirizzo del successivo caricamento tramite `shared_buffer`. 

Mentre la CPU infine rileverà questa soddisfare, è possibile che rimanga residui effetti collaterali nella cache della CPU che rivelano informazioni sul valore byte che è stato letto compreso nell'intervallo da `buffer`. Questi effetti collaterali possono essere rilevati dai minore contesto autorizzato in esecuzione nel sistema tramite sondaggio rapidità cache di ogni riga in `shared_buffer` è accessibile. I passaggi che possono essere effettuati a questo scopo sono:

1. **Richiamare `ReadByte` più volte con `untrusted_index` in corso minore `buffer_size`** . Il contesto di attacco può causare il contesto vittima richiamare `ReadByte` (ad esempio tramite RPC) tale che le previsioni di ramo training per essere considerato non come `untrusted_index` è inferiore a `buffer_size`.

2. **Scaricamento di tutte le righe della cache `shared_buffer`** . Il contesto di attacco deve scaricare tutte le righe della cache nell'area della memoria a cui fa riferimento condivisa `shared_buffer`. Poiché l'area di memoria è condiviso, questo è semplice e può essere eseguito utilizzando le funzioni intrinseche, ad esempio `_mm_clflush`.

3. **Richiamare `ReadByte` con `untrusted_index` maggiore `buffer_size`** . Il contesto di attacco fa sì che il contesto vittima richiamare `ReadByte` tale stimato erroneamente che il ramo non verrà eseguito. Questa condizione provoca il processore per eseguire speculativo il corpo dell'oggetto se bloccare con `untrusted_index` maggiore `buffer_size`, pertanto iniziali a una lettura oltre i limiti di `buffer`. Di conseguenza, `shared_buffer` viene indicizzata utilizzando un valore potenzialmente segreto che è stato letto oltre i limiti, causando così la riga della cache rispettivi affinché venga caricato dalla CPU.

4. **Ogni riga della cache di lettura `shared_buffer` per verificare che si accede più rapidamente**. Il contesto di attacco può leggere ogni riga della cache nella `shared_buffer` e individuare la riga della cache che carica notevolmente più veloce rispetto alle altre. Si tratta della riga della cache che è probabile che sono state introdotte passaggio 3. Poiché non esiste una relazione 1:1 tra riga byte di valore e la cache di questo esempio, in questo modo l'autore dell'attacco di dedurre il valore effettivo di byte che è stato letto oltre i limiti.

I passaggi precedenti forniscono un esempio di utilizzo di una tecnica nota come SCARICAMENTO + RICARICA insieme a un'istanza di CVE-2017-5753 può quindi essere sfruttata.

## <a name="what-software-scenarios-can-be-impacted"></a>Gli scenari di software possono essere interessati?

Sviluppo di software protetto tramite un processo, ad esempio il [Security Development Lifecycle](https://www.microsoft.com/en-us/sdl/) (SDL) richiede in genere gli sviluppatori identificare i limiti di trust che esistono nella propria applicazione. Un limite di trust è presente nelle posizioni in cui un'applicazione può interagire con i dati forniti da un contesto di attendibilità inferiore, ad esempio un altro processo nel sistema o un processo in modalità utente non amministratore nel caso di un driver di dispositivo in modalità kernel. La nuova classe di vulnerabilità che interessa i canali lato esecuzione speculativo è pertinente per molti dei limiti di trust in modelli di sicurezza software esistenti isolare codice e i dati in un dispositivo. 

Nella tabella seguente fornisce un riepilogo dei modelli di protezione software in cui gli sviluppatori potrebbe essere necessario preoccuparsi di queste vulnerabilità che si verificano:

|Limite di attendibilità|Descrizione|
|----------------|----------------|
|Limite di macchina virtuale|Le applicazioni che isolano i carichi di lavoro in macchine virtuali separate che ricevono dati non attendibili provenienti da un'altra macchina virtuale potrebbero essere a rischio.| 
|Limite del kernel|Un driver di dispositivo in modalità kernel che riceve dati non attendibili provenienti da un processo in modalità utente non amministratore potrebbe essere a rischio.| 
|Limite di processo|Un'applicazione che riceve dati non attendibili provenienti da un altro processo in esecuzione nel sistema locale, ad esempio tramite una chiamata RPC (Remote Procedure), la memoria condivisa o altre comunicazioni Inter-Process (IPC) meccanismi possono essere a rischio.|
|Limite enclave|Un'applicazione che viene eseguita all'interno di un enclave sicura (ad esempio, Intel SGX) che riceve i dati non attendibili di fuori di enclave potrebbe essere a rischio.|
|Limiti di linguaggio|Un'applicazione che interpreta o -Time (JIT) compila ed esegue codice non attendibile scritto in un linguaggio di livello superiore può essere a rischio.|

Applicazioni che dispongono di una superficie di attacco esposti a precedenti trust limiti necessario rivedere il codice nell'area di attacco per identificare e ridurre le eventuali vulnerabilità di canale lato esecuzione speculativo. Si noti che i confini del trust esposti a superfici di attacco remoto, ad esempio i protocolli di rete remoto, non hanno stati dimostrati il a rischio alle vulnerabilità di canale lato esecuzione speculativo.

## <a name="potentially-vulnerable-coding-patterns"></a>Modelli di codice potenzialmente vulnerabili

Le vulnerabilità di canale lato speculativo esecuzione possono verificarsi come conseguenza di più modelli di codice. In questa sezione vengono descritti i modelli di codice potenzialmente vulnerabili e vengono forniti esempi per ogni, ma deve essere riconosciuto che le variazioni su questi temi potrebbe essere presente. Di conseguenza, gli sviluppatori sono invitati a eseguire questi modelli esemplificativo e non come un elenco completo di tutti i modelli di codice potenzialmente vulnerabili.

In generale, soddisfare di ramo correlate a condizionale canali lato speculativo esecuzione può verificarsi quando un'espressione condizionale funziona sui dati che possono essere controllati o influenzati da un contesto di attendibilità inferiore. Ad esempio, questo può includere espressioni condizionali utilizzate `if`, `for`, `while`, `switch`, o più istruzioni ternarie. Per ognuna di queste istruzioni, il compilatore potrebbe generare un ramo condizionale che la CPU potrebbe quindi consentono di stimare la destinazione branch per in fase di esecuzione.

Per ogni esempio, viene inserito un commento con la frase "SPECULATION barriera" in cui uno sviluppatore potrebbe causare una barriera come prevenzione. Questo aspetto verrà discusso più dettagliatamente nella sezione in soluzioni correttive.

## <a name="speculative-out-of-bounds-load"></a>Speculativo oltre i limiti di carico

Questa categoria dei modelli di codifica comporta una soddisfare diramazione condizionale che provoca un speculativo oltre i limiti l'accesso alla memoria.

### <a name="array-out-of-bounds-load-feeding-a-load"></a>Matrice di interi caricare un carico di alimentazione

Questo modello di codifica è il modello di codifica vulnerabile originariamente descritto per CVE-2017-5753 (limiti controllare Bypass). Nella sezione di sfondo di questo articolo viene illustrato questo modello in modo dettagliato.

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadByte(unsigned char *buffer, unsigned int buffer_size, unsigned int untrusted_index) {
    if (untrusted_index < buffer_size) {
        // SPECULATION BARRIER
        unsigned char value = buffer[untrusted_index];
        return shared_buffer[value * 4096];
    }
}
```

Analogamente, una matrice fuori limite carico può verificarsi in combinazione con un ciclo che supera la terminazione condizione a causa di un soddisfare. In questo esempio, il ramo condizionale associata con il `x < buffer_size` potrebbe mispredict e speculativo eseguire il corpo dell'espressione il `for` ciclo quando `x` è maggiore o uguale a `buffer_size`, pertanto ottenendo un speculativo oltre i limiti di carico.

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadBytes(unsigned char *buffer, unsigned int buffer_size) {
    for (unsigned int x = 0; x < buffer_size; x++) {
        // SPECULATION BARRIER
        unsigned char value = buffer[untrusted_index];
        return shared_buffer[value * 4096];
    }
}
```

### <a name="array-out-of-bounds-load-feeding-an-indirect-branch"></a>Matrice di interi caricare alimentazione di un ramo indiretto

Questo modello di codifica riguarda il caso in cui soddisfare un ramo condizionale può causare un oltre i limiti l'accesso a una matrice di puntatori a funzione che garantisce quindi in un branch indiretto alla destinazione di indirizzi che è stato letto oltre i limiti. Il frammento di codice seguente viene fornito un esempio che illustra questa operazione. 

In questo esempio viene fornito un identificatore del messaggio non attendibile a DispatchMessage tramite il `untrusted_message_id` parametro. Se `untrusted_message_id` è minore di `MAX_MESSAGE_ID`, viene utilizzata per indicizzare in una matrice di puntatori a funzione e creare un ramo di destinazione ramo corrispondente. Questo codice è l'architettura sicuro, ma se la CPU previsioni errate della diramazione condizionale, può comportare `DispatchTable` indicizzati dal `untrusted_message_id` quando il relativo valore è maggiore o uguale a `MAX_MESSAGE_ID`, pertanto sfociando in un oltre i limiti di accesso. Ciò può comportare speculativo esecuzione da un indirizzo di destinazione ramo derivato oltre i limiti della matrice che potrebbe provocare la diffusione di informazioni in base al codice che viene eseguito speculativo.

```cpp
#define MAX_MESSAGE_ID 16

typedef void (*MESSAGE_ROUTINE)(unsigned char *buffer, unsigned int buffer_size);

const MESSAGE_ROUTINE DispatchTable[MAX_MESSAGE_ID];

void DispatchMessage(unsigned int untrusted_message_id, unsigned char *buffer, unsigned int buffer_size) {
    if (untrusted_message_id < MAX_MESSAGE_ID) {
        // SPECULATION BARRIER
        DispatchTable[untrusted_message_id](buffer, buffer_size);
    }
}
```

Come nel caso della matrice fuori limite caricare un altro carico di alimentazione, questa condizione può verificarsi anche in combinazione con un ciclo che supera la condizione di interruzione a causa di un soddisfare.

## <a name="speculative-type-confusion"></a>Confusione tipo speculativo

Questa categoria riguarda i modelli che possono generare confusione speculativo tipo di codifica. Ciò si verifica quando l'accesso alla memoria utilizzando un tipo non corretto lungo un percorso non architetturale durante l'esecuzione speculativo. Soddisfare diramazione condizionale sia archivio speculativo bypass potenzialmente può generare confusione un tipo speculativo. 

Archivio speculativo bypass, questa situazione può verificarsi in scenari in cui un compilatore riutilizza un percorso stack per le variabili di più tipi. Infatti, l'archivio dell'architettura di una variabile di tipo `A` possono essere ignorati, consentendo in tal modo il carico di tipo `A` speculativo eseguito prima che la variabile è assegnata. Se la variabile memorizzata in precedenza è di tipo diverso, ciò può creare le condizioni per confusione tipo speculativo.

Per soddisfare diramazione condizionale, il frammento di codice seguenti verrà utilizzato per descrivere condizioni diverse tra cui confusione tipo speculativo può concedere a salire a.

```cpp
enum TypeName {
    Type1,
    Type2
};

class CBaseType {
public:
    CBaseType(TypeName type) : type(type) {}
    TypeName type;
};

class CType1 : public CBaseType {
public:
    CType1() : CBaseType(Type1) {}
    char field1[256];
    unsigned char field2;
};

class CType2 : public CBaseType {
public:
    CType2() : CBaseType(Type2) {}
    void (*dispatch_routine)();
    unsigned char field2;
};

// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ProcessType(CBaseType *obj)
{
    if (obj->type == Type1) {
        // SPECULATION BARRIER
        CType1 *obj1 = static_cast<CType1 *>(obj);

        unsigned char value = obj1->field2;

        return shared_buffer[value * 4096];
    }
    else if (obj->type == Type2) {
        // SPECULATION BARRIER
        CType2 *obj2 = static_cast<CType2 *>(obj);

        obj2->dispatch_routine();

        return obj2->field2;
    }
}
```

### <a name="speculative-type-confusion-leading-to-an-out-of-bounds-load"></a>Confusione tipo speculativo iniziali per un'oltre i limiti di carico

Questo modello di codifica riguarda il caso in cui una confusione speculativo tipo può comportare un oltre i limiti o l'accesso al campo confuso tipo in cui il valore caricato feed un indirizzo di caricamento successivo. Questa operazione è simile per il modello di codifica oltre i limiti di matrice, ma si manifesta tramite un'alternativa codifica sequenza, come illustrato in precedenza. In questo esempio, un contesto dell'attacco potrebbe causare il contesto vittima eseguire `ProcessType` più volte con un oggetto di tipo `CType1` (`type` campo è uguale a `Type1`). Questa operazione avrà l'effetto del training la diramazione condizionale per la prima `if` istruzione per la stima non eseguito. Il contesto di attacco può quindi causare il contesto vittima eseguire `ProcessType` con un oggetto di tipo `CType2`. Ciò può comportare una confusione tipo speculativo se creare un ramo condizionale per il primo `if` istruzione previsioni errate dei ed esegue il corpo del `if` istruzione, pertanto il cast di un oggetto di tipo `CType2` a `CType1`. Poiché `CType2` inferiori `CType1`, l'accesso in memoria `CType1::field2` risultato in un speculativo oltre i limiti caricherà dei dati che possono essere segreti. Questo valore viene quindi utilizzato in un carico da `shared_buffer` che possono creare observable gli effetti collaterali, come con la matrice fuori limite riportato di seguito viene descritto in precedenza.

### <a name="speculative-type-confusion-leading-to-an-indirect-branch"></a>Confusione tipo speculativo iniziali in un branch indiretto

Questo modello di codifica implica il caso in cui confusione speculativo tipo può comportare un ramo indiretto non sicuro durante l'esecuzione speculativo. In questo esempio, un contesto dell'attacco potrebbe causare il contesto vittima eseguire `ProcessType` più volte con un oggetto di tipo `CType2` (`type` campo è uguale a `Type2`). Questa operazione avrà l'effetto del training la diramazione condizionale per il primo `if` istruzione da eseguire e `else if` istruzione non considerati. Il contesto di attacco può quindi causare il contesto vittima eseguire `ProcessType` con un oggetto di tipo `CType1`. Ciò può comportare una confusione tipo speculativo se creare un ramo condizionale per la prima `if` istruzione esegue la stima eseguita e il `else if` istruzione consente di stimare non eseguito, in modo da eseguire il corpo del `else if` e cast di un oggetto di tipo `CType1` a `CType2`. Poiché il `CType2::dispatch_routine` campo si sovrappone con il `char` matrice `CType1::field1`, ciò può comportare un ramo speculativo indiretto a una destinazione ramo non intenzionali. Se il contesto di attacco può controllare i valori di byte nel `CType1::field1` matrice, potrebbe essere in grado di controllare l'indirizzo di destinazione ramo.

## <a name="speculative-uninitialized-use"></a>Utilizzo non inizializzato speculativo

Questa categoria dei modelli di sviluppo prevede scenari in cui speculativo esecuzione può accedere alla memoria non inizializzata e utilizzarlo per inserire un caricamento successivo o un ramo indiretta. Per questi modelli di codice essere sfruttabili, deve essere in grado di controllare o influire in modo significativo il contenuto della memoria a cui viene usato senza viene inizializzata dal contesto che è in uso in un utente malintenzionato.

### <a name="speculative-uninitialized-use-leading-to-an-out-of-bounds-load"></a>Utilizzo non inizializzato speculativo iniziali per un'oltre i limiti di carico

Un utilizzo non inizializzato speculativo può potenzialmente provocare un oltre i limiti di carico utilizzando un valore controllata. Nell'esempio seguente, il valore di `index` viene assegnato `trusted_index` per tutti i percorsi dell'architettura e `trusted_index` si presuppone che sia minore o uguale a `buffer_size`. Tuttavia, a seconda del codice generato dal compilatore, è possibile che può verificarsi che consente il caricamento da un bypass archivio speculativo `buffer[index]` e le espressioni dipendenti da eseguire prima l'assegnazione al `index`. In questo caso, un valore non inizializzato per `index` verrà usato come offset nella `buffer` che è stato possibile abilitare un utente malintenzionato di leggere oltre i limiti informazioni riservate e ciò trasmettere tramite un canale lato tramite il caricamento del dipendente `shared_buffer` .

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

void InitializeIndex(unsigned int trusted_index, unsigned int *index) {
    *index = trusted_index;
}

unsigned char ReadByte(unsigned char *buffer, unsigned int buffer_size, unsigned int trusted_index) {
    unsigned int index;

    InitializeIndex(trusted_index, &index); // not inlined

    // SPECULATION BARRIER
    unsigned char value = buffer[index];
    return shared_buffer[value * 4096];
}
```

### <a name="speculative-uninitialized-use-leading-to-an-indirect-branch"></a>Utilizzo non inizializzato speculativo iniziali in un branch indiretto

Un utilizzo non inizializzato speculativo può potenzialmente provocare in un branch indiretto in cui la destinazione branch viene controllata da un utente malintenzionato. Nell'esempio seguente, `routine` viene assegnato a uno `DefaultMessageRoutine1` oppure `DefaultMessageRoutine` a seconda del valore di `mode`. Nel percorso dell'architettura, il risultato sarà `routine` sempre in fase di inizializzazione prima del ramo indiretto. Tuttavia, a seconda del codice generato dal compilatore, un bypass archivio speculativo può verificarsi che consente il ramo indiretto attraverso `routine` speculativo da eseguire prima l'assegnazione al `routine`. In questo caso, un utente malintenzionato potrebbe essere in grado di eseguire speculativo da un indirizzo contenuto arbitrario, presupponendo che l'autore dell'attacco possono influenzare o controllare il valore inizializzato di `routine`.

```cpp
#define MAX_MESSAGE_ID 16

typedef void (*MESSAGE_ROUTINE)(unsigned char *buffer, unsigned int buffer_size);

const MESSAGE_ROUTINE DispatchTable[MAX_MESSAGE_ID];
extern unsigned int mode;

void InitializeRoutine(MESSAGE_ROUTINE *routine) {
    if (mode == 1) {
        *routine = &DefaultMessageRoutine1;
    }
    else {
        *routine = &DefaultMessageRoutine;
    }
}

void DispatchMessage(unsigned int untrusted_message_id, unsigned char *buffer, unsigned int buffer_size) {
    MESSAGE_ROUTINE routine;

    InitializeRoutine(&routine); // not inlined

    // SPECULATION BARRIER
    routine(buffer, buffer_size);
}
```

## <a name="mitigation-options"></a>Opzioni di attenuazione

Le vulnerabilità di canale lato speculativo esecuzione possono essere ridotti apportando modifiche al codice sorgente. Queste modifiche possono implicare la riduzione del rischio di istanze specifiche di una vulnerabilità, ad esempio aggiungendo un *barriera speculation*, o se si apportano modifiche alla progettazione di un'applicazione per rendere le informazioni riservate inaccessibile ai speculativo esecuzione.

### <a name="speculation-barrier-via-manual-instrumentation"></a>Barriera speculation tramite strumentazione manuale

Un *barriera speculation* è possibile inserire manualmente da uno sviluppatore per impedire l'esecuzione speculativo avanzamento lungo un percorso non architetturale. Ad esempio, uno sviluppatore può inserire una barriera speculation prima di un modello di codifica pericoloso nel corpo di un blocco condizionale, sia all'inizio del blocco (dopo la diramazione condizionale) o prima del primo carico che costituiscono un problema. Sarà in grado di soddisfare un ramo condizionale dell'esecuzione del codice pericoloso in un percorso UNC non architetturale serializzando l'esecuzione. La sequenza di barriera speculation differisce dall'architettura hardware come descritto nella tabella seguente:

|Architettura|Barriera speculation intrinseco per CVE-2017-5753|Barriera speculation intrinseco per CVE-2018-3639|
|----------------|----------------|----------------|
|x86 o x64|_mm_lfence()|_mm_lfence()|
|ARM|attualmente non disponibile|__dsb(0)|
|ARM64|attualmente non disponibile|__dsb(0)|

Ad esempio, il modello di codice seguente può essere attenuato con la `_mm_lfence` intrinseco come illustrato di seguito.

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadByte(unsigned char *buffer, unsigned int buffer_size, unsigned int untrusted_index) {
    if (untrusted_index < buffer_size) {
        _mm_lfence();
        unsigned char value = buffer[untrusted_index];
        return shared_buffer[value * 4096];
    }
}
```

### <a name="speculation-barrier-via-compiler-time-instrumentation"></a>Barriera speculation tramite strumentazione in fase di compilazione

Il compilatore Visual C++ in Visual Studio 2017 (a partire dalla versione 15.5.5) include il supporto per il `/Qspectre` commutatore che inserisce automaticamente una barriera speculation per un set limitato di modelli di codice potenzialmente vulnerabile correlati a CVE-2017-5753. La documentazione per il [/Qspectre](https://docs.microsoft.com/en-us/cpp/build/reference/qspectre) flag vengono fornite ulteriori informazioni sulla relativa effetti e sull'utilizzo. È importante notare che questo flag non copre tutti i modelli di codice potenzialmente vulnerabili e di conseguenza gli sviluppatori non devono basarsi su di esso come prevenzione completo per questa classe di vulnerabilità.

## <a name="masking-array-indices"></a>Gli indici di matrice di maschera

In casi in cui un speculativo oltre i limiti di carico può verificarsi, l'indice di matrice possa essere vincolato fortemente nel percorso dell'architettura e non dell'architettura mediante l'aggiunta di logica per associare in modo esplicito l'indice della matrice. Ad esempio, se una matrice può essere allocata a una dimensione che è allineata a una potenza di due, quindi una maschera semplice possa essere inserita. Come illustrato nell'esempio riportato di seguito in cui si presuppone che `buffer_size` è allineato a una potenza di due. In questo modo `untrusted_index` è sempre minore `buffer_size`, anche se si verifica di soddisfare un ramo condizionale e `untrusted_index` passato con un valore maggiore o uguale a `buffer_size`.

Si noti che il mascheramento indice eseguito qui potrebbe essere soggetti a bypass speculativo archivio in base al codice generato dal compilatore.

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadByte(unsigned char *buffer, unsigned int buffer_size, unsigned int untrusted_index) {
    if (untrusted_index < buffer_size) {
        untrusted_index &= (buffer_size - 1);
        unsigned char value = buffer[untrusted_index];
        return shared_buffer[value * 4096];
    }
}
```

## <a name="removing-sensitive-information-from-memory"></a>Rimozione di informazioni riservate dalla memoria

Un'altra tecnica che consente di ridurre le vulnerabilità di canale lato speculativo esecuzione consiste nel rimuovere informazioni riservate dalla memoria. Gli sviluppatori software possono controllare risorse di opportunità per effettuare il refactoring propria applicazione in modo che le informazioni riservate non sono accessibile durante l'esecuzione speculativo. Questa operazione può essere eseguita effettuando il refactoring la progettazione di un'applicazione per isolare le informazioni riservate in processi separati. Ad esempio, un'applicazione web browser può tentare di isolare i dati associati a ogni origine web in processi separati, impedendo pertanto un processo in grado di accedere ai dati tra le origini tramite esecuzione speculativo.

## <a name="see-also"></a>Vedere anche

[Materiale sussidiario per ridurre le vulnerabilità di canale laterale esecuzione speculativo](https://portal.msrc.microsoft.com/en-US/security-guidance/advisory/ADV180002)
[riduzione del rischio di vulnerabilità di hardware canale lato esecuzione speculativo](https://blogs.technet.microsoft.com/srd/2018/03/15/mitigating-speculative-execution-side-channel-hardware-vulnerabilities/)