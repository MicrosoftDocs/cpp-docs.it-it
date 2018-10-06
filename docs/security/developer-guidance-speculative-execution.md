---
title: Linee guida per sviluppatori di C++ per l'esecuzione speculativa i canali | Microsoft Docs
ms.custom: ''
ms.date: 07/10/2018
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2ba89aadc8e1c617ed8e101a226560b80cb9e431
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48821400"
---
# <a name="c-developer-guidance-for-speculative-execution-side-channels"></a>Linee guida per sviluppatori di C++ per l'esecuzione speculativa i canali

Questo articolo contiene indicazioni per gli sviluppatori agevolare l'identificazione e attenuazione dell'esecuzione speculativa side channel hardware le vulnerabilità in software di C++. Le vulnerabilità possono rivelare informazioni riservate tra confini di trust e possono influire sul software in esecuzione su processori che supportano l'esecuzione speculativa, in ordine di istruzioni. Questa classe di vulnerabilità è stata prima descritto in gennaio 2018 e ulteriori informazioni generali e linee guida sono disponibili nel [security di Microsoft advisory](https://portal.msrc.microsoft.com/security-guidance/advisory/ADV180002).

Le indicazioni fornite in questo articolo sono correlata alle classi di vulnerabilità rappresentata da:

1. CVE-2017-5753, noto anche come Spectre variante 1. Questa classe di vulnerabilità di hardware è correlata ai canali lato che possono verificarsi a causa dell'esecuzione speculativa che si verifica in seguito a soddisfare un ramo condizionale. Il compilatore Visual C++ in Visual Studio 2017 (a partire dalla versione 15.5.5) include il supporto per il `/Qspectre` commutatore che fornisce una mitigazione in fase di compilazione per un set limitato di modelli di codice potenzialmente vulnerabili correlati per CVE 2017-5753. Il `/Qspectre` commutatore è disponibile anche in Visual Studio 2015 Update 3 attraverso [KB 4338871](https://support.microsoft.com/help/4338871). La documentazione per il [/Qspectre](https://docs.microsoft.com/cpp/build/reference/qspectre) flag vengono fornite ulteriori informazioni sul relativo utilizzo e gli effetti.

2. CVE-2018-3639, noto anche come [speculativa Store Bypass (SSB)](https://aka.ms/sescsrdssb). Questa classe di vulnerabilità di hardware è correlata ai canali lato che possono verificarsi a causa dell'esecuzione speculativa di un carico prima di un archivio dipendenti come risultato di soddisfare un accesso memoria.

Un'introduzione accessibile alla vulnerabilità del canale sul lato dell'esecuzione speculativa è reperibile nella presentazione intitolata [il Case di Spectre e Meltdown](https://www.youtube.com/watch?v=_4O0zMW-Zu4) da uno dei team di ricerca che questi problemi individuati.

## <a name="what-are-speculative-execution-side-channel-hardware-vulnerabilities"></a>Quali sono le vulnerabilità di hardware speculativo esecuzione Side Channel?

CPU più recenti di garantire livelli più elevati di prestazioni consentendo l'uso dell'esecuzione speculativa e di non in ordine di istruzioni. Ad esempio, questa operazione viene spesso eseguita per stimare la destinazione dei rami (condizionale e indiretti) che consente la CPU iniziare a speculativo eseguendo le istruzioni nella destinazione ramo stimato, evitando in tal modo un blocco fino a quando la destinazione branch effettivo è risolto. Nel caso in cui la CPU in un secondo momento rileva che si è verificato un soddisfare, tutto lo stato di computer che è stato calcolato speculativo viene eliminata. Ciò garantisce che non si verifichino effetti visibili a livello di architettura di speculazione stimate in modo errato.

Durante l'esecuzione speculativa non influisce sullo stato visibile a livello di architettura, può lasciare tracce residue in stato non dell'architettura, ad esempio le diverse cache utilizzati dalla CPU. Si tratta di queste tracce residue dell'esecuzione speculativa che può dar luogo a vulnerabilità del canale laterale. Per comprendere meglio questo, si consideri il frammento di codice seguente che fornisce un esempio di CVE-2017-5753 (limiti controllare Bypass):

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

In questo esempio `ReadByte` viene fornito un buffer, le dimensioni del buffer e un indice nel buffer. Il parametro di indice, come specificato dalle `untrusted_index`, fornito da un minore di contesto con privilegi, ad esempio un processo non amministrativi. Se `untrusted_index` è minore di `buffer_size`, quindi il carattere in corrispondenza di tale indice viene letto dal `buffer` e utilizzato per l'indice in un'area condivisa di memoria a cui fa riferimento `shared_buffer`.

Da una prospettiva architetturale, questa sequenza di codice è perfettamente sicura perché è certo che `untrusted_index` sarà sempre minore di `buffer_size`. Tuttavia, in presenza dell'esecuzione speculativa, è possibile che la CPU verrà previsioni errate la diramazione condizionale ed esegue il corpo dell'oggetto se istruzione anche quando `untrusted_index` è maggiore o uguale a `buffer_size`. Di conseguenza, la CPU speculativo può leggere un byte superando i confini dei limiti del `buffer` (che può essere una chiave privata) e può quindi usare tale valore byte per calcolare l'indirizzo del caricamento successivo tramite `shared_buffer`.

Anche se la CPU alla fine rileverà questa soddisfare, effetti collaterali residui rimanga nella cache della CPU che rivelano informazioni sul valore byte che è stato letto, compreso nell'intervallo da `buffer`. Questi effetti collaterali possono essere rilevati da un minore di contesto con privilegi che eseguono il sistema mediante probing rapidità con cui ogni cache riga in `shared_buffer` è accessibile. I passaggi che possono essere effettuati a questo scopo sono:

1. **Richiamare `ReadByte` più volte con `untrusted_index` viene meno `buffer_size`** . Il contesto che esegue l'attacco può causare il contesto vittima richiamare `ReadByte` (ad esempio, tramite RPC) tale che i predittori ramo sono sottoposto a training essere considerato non come `untrusted_index` è minore di `buffer_size`.

2. **Tutte le righe della cache di scaricamento `shared_buffer`** . Il contesto che esegue l'attacco debba scaricare tutte le righe della cache nell'area di memoria a cui fa riferimento condivisa `shared_buffer`. Poiché l'area di memoria è condivisa, questo è molto semplice e può essere effettuato utilizzando le funzioni intrinseche, ad esempio `_mm_clflush`.

3. **Richiamare `ReadByte` con `untrusted_index` maggiore `buffer_size`** . Il contesto che esegue l'attacco fa sì che il contesto vittima richiamare `ReadByte` in modo da stimare in modo non corretto che il ramo non verrà eseguito. Questo impedisce al processore speculativo esegue il corpo dell'oggetto se bloccare con `untrusted_index` maggiore `buffer_size`, quindi iniziali a una lettura non compresi nell'intervallo di `buffer`. Di conseguenza, `shared_buffer` vengono indicizzati utilizzando un valore potenzialmente riservato che è stato letto non compresi nell'intervallo, causando così la riga cache corrispondente da caricare dalla CPU.

4. **In ogni riga della cache di lettura `shared_buffer` per vedere quale avviene più rapidamente**. Il contesto che esegue l'attacco può leggere in ogni riga della cache `shared_buffer` e rilevare la riga della cache che carica molto più velocemente rispetto agli altri. Questa è la riga della cache che è probabile che sono state introdotte passaggio 3. Poiché non esiste una relazione 1:1 tra la riga della cache e valore di byte in questo esempio, in questo modo l'autore dell'attacco per dedurre il valore effettivo di byte che è stato letto non compresi nell'intervallo.

I passaggi precedenti viene fornito un esempio dell'uso di una tecnica nota come SCARICAMENTO + RICARICAMENTO in combinazione con sui potenziali un'istanza di CVE 2017-5753.

## <a name="what-software-scenarios-can-be-impacted"></a>Quali scenari di software possono essere interessati?

Sviluppo di software protetti tramite un processo, come le [Security Development Lifecycle](https://www.microsoft.com/sdl/) (SDL) richiede in genere gli sviluppatori identificare i limiti di trust che esistono nella propria applicazione. Un limite di trust è presente nelle posizioni in cui un'applicazione può interagire con i dati forniti da un contesto meno attendibili, ad esempio un altro processo nel sistema o un processo in modalità utente senza privilegi di amministratore nel caso di un driver di dispositivo in modalità kernel. La nuova classe di vulnerabilità che interessano i canali lato dell'esecuzione speculativa è rilevante per molti dei limiti di trust in modelli di sicurezza software esistenti isolare codice e i dati in un dispositivo.

Nella tabella seguente fornisce un riepilogo dei modelli di protezione software in cui gli sviluppatori debbano essere interessati a queste vulnerabilità che si verificano:

|Limite di attendibilità|Descrizione|
|----------------|----------------|
|Limite della macchina virtuale|Le applicazioni che isolano i carichi di lavoro in macchine virtuali separate che ricevono dati non attendibili provenienti da un'altra macchina virtuale potrebbero essere a rischio.|
|Limite del kernel|Un driver di dispositivo in modalità kernel che riceve i dati non attendibili da un processo della modalità utente non amministratore potrebbe essere a rischio.|
|Limite di processo|Un'applicazione che riceve i dati non attendibili da un altro processo in esecuzione nel sistema locale, ad esempio tramite una chiamata RPC (Remote Procedure), la memoria condivisa o altre comunicazioni tra processi (IPC) meccanismi possono essere a rischio.|
|Limiti dell'enclave|Un'applicazione eseguita all'interno di una enclave protetta (ad esempio Intel SGX) che riceve i dati non attendibili all'esterno dell'enclave potrebbe essere a rischio.|
|Limiti del linguaggio|Un'applicazione che interpreta o -in-time (JIT) compila ed esegue codice non attendibile, scritto in un linguaggio di livello superiore potrebbe essere a rischio.|

Applicazioni con superficie di attacco esposta a una di queste trust limiti necessario rivedere il codice sulla superficie di attacco per identificare e contrastare le eventuali vulnerabilità del canale sul lato dell'esecuzione speculativa. Si noti che i confini del trust esposti alle superfici di attacco remoto, ad esempio i protocolli di rete remoto, non sono stati dimostrati a rischio di vulnerabilità del canale sul lato dell'esecuzione speculativa.

## <a name="potentially-vulnerable-coding-patterns"></a>Potenzialmente vulnerabili i modelli di codifica

Vulnerabilità del canale sul lato dell'esecuzione speculativa può verificarsi come conseguenza di più modelli di codifica. In questa sezione descrive i modelli di scrittura di codice potenzialmente vulnerabili e vengono forniti esempi per ognuno, ma deve essere riconosciuto che le variazioni in questi temi potrebbe essere presente. Di conseguenza, gli sviluppatori sono invitati a eseguire questi modelli a livello esemplificativo e non come un elenco completo di tutti i modelli di codifica potenzialmente vulnerabili. Le stesse classi delle vulnerabilità di sicurezza della memoria che possono essere presenti nel software oggi è possibile che esistano lungo speculativa e percorsi di non in ordine di esecuzione, inclusi ma non solo i sovraccarichi del buffer, non compresi nell'intervallo della matrice gli accessi, utilizzo della memoria non inizializzata, tipo confusione e così via. Le stesse primitive che utenti malintenzionati possono usare per sfruttare le vulnerabilità di sicurezza della memoria lungo i percorsi dell'architettura potrebbero venire applicate anche ai percorsi speculativi.

In generale, soddisfare correlati a condizionale ramo di esecuzione speculativa lato canali può verificarsi durante un'espressione condizionale agisce sui dati che possono essere controllati o possono dipendere da un contesto meno attendibili. Ad esempio, può trattarsi espressioni condizionali utilizzate in `if`, `for`, `while`, `switch`, o istruzioni ternarie. Per ognuna di queste istruzioni, il compilatore può generarne una diramazione condizionale che la CPU potrebbe prevedere quindi la destinazione branch per in fase di esecuzione.

Per ogni esempio, viene inserito un commento con la frase "Barriera" in cui uno sviluppatore potrebbe introdurre una barriera come prevenzione. Questo argomento viene discusso più dettagliatamente nella sezione in soluzioni di attenuazione.

## <a name="speculative-out-of-bounds-load"></a>Caricare speculativo non compresi nell'intervallo

Questa categoria di scrittura del codice implica soddisfare un ramo condizionale che conduce a un speculativo non compresi nell'intervallo l'accesso alla memoria.

### <a name="array-out-of-bounds-load-feeding-a-load"></a>Matrice non compresi nell'intervallo di caricare un carico di alimentazione

Questo modello di codifica è il modello di scrittura di codice vulnerabile originariamente descritto per CVE-2017-5753 (limiti controllare Bypass). La sezione dello sfondo di questo articolo illustra questo modello in modo dettagliato.

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

Analogamente, una matrice non compresi nell'intervallo caricamento può verificarsi in combinazione con un ciclo che supera la terminazione della condizione a causa di un soddisfare. In questo esempio, il ramo condizionale è associato il `x < buffer_size` potrebbe previsioni errate e speculativo esegue il corpo di espressione la `for` ciclo quando `x` è maggiore o uguale a `buffer_size`, pertanto ottenendo un speculativa caricamento non compresi nell'intervallo.

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadBytes(unsigned char *buffer, unsigned int buffer_size) {
    for (unsigned int x = 0; x < buffer_size; x++) {
        // SPECULATION BARRIER
        unsigned char value = buffer[x];
        return shared_buffer[value * 4096];
    }
}
```

### <a name="array-out-of-bounds-load-feeding-an-indirect-branch"></a>Matrice non compresi nell'intervallo caricare un ramo indiretto di alimentazione

Questo modello di codifica comporta il caso in cui soddisfare un ramo condizionale può causare un oltre i limiti l'accesso a una matrice di puntatori a funzioni quali lead quindi a un ramo indiretto alla destinazione di indirizzi che è stato letto non compresi nell'intervallo. Il frammento di codice seguente viene fornito un esempio di questa procedura.

In questo esempio viene fornito un identificatore di messaggio non trusted per DispatchMessage attraverso il `untrusted_message_id` parametro. Se `untrusted_message_id` è minore di `MAX_MESSAGE_ID`, quindi viene usato per l'indicizzazione in una matrice di puntatori a funzione e il ramo per la destinazione ramo corrispondente. Questo codice sia sicuro a livello di architettura, ma se la CPU di previsioni errate dei branch condizionale, potrebbero verificarsi `DispatchTable` sono indicizzati dal `untrusted_message_id` quando il relativo valore è maggiore o uguale a `MAX_MESSAGE_ID`, pertanto sfociando in un accesso non compresi nell'intervallo. Ciò può comportare l'esecuzione speculativa da un indirizzo di destinazione succursale che sia derivato oltre i limiti della matrice che potrebbe causare la divulgazione di informazioni in base al codice che viene eseguito speculativo.

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

### <a name="array-out-of-bounds-store-feeding-an-indirect-branch"></a>Matrice non compresi nell'intervallo archiviare un branch indiretta di alimentazione

Mentre l'esempio precedente illustra come un speculativo non compresi nell'intervallo carico può influenzare una destinazione branch indiretta, è anche possibile che un archivio non compresi nell'intervallo per modificare una destinazione ramo indiretta, ad esempio un puntatore a funzione o un indirizzo del mittente. Ciò può causare l'esecuzione speculativa da un indirizzo specificato dall'autore dell'attacco.

In questo esempio, un indice non attendibile viene passato tramite la `untrusted_index` parametro. Se `untrusted_index` è minore rispetto al numero di elemento del `pointers` matrice (256 elementi), è necessario che il valore di puntatore fornito nella `ptr` viene scritto il `pointers` matrice. Questo codice sia sicuro a livello di architettura, ma se la CPU di previsioni errate dei branch condizionale, potrebbero verificarsi `ptr` speculativo scritto oltre i limiti di stack allocati `pointers` matrice. Questa operazione potrebbe danneggiare speculativa dell'indirizzo del mittente per `WriteSlot`. Se un utente malintenzionato può controllare il valore di `ptr`, potrebbe essere in grado di provocare l'esecuzione speculativa da un oggetto arbitrario di indirizzi quando `WriteSlot` restituisce lungo il tracciato speculativo.

```cpp
unsigned char WriteSlot(unsigned int untrusted_index, void *ptr) {
    void *pointers[256];
    if (untrusted_index < 256) {
        // SPECULATION BARRIER
        pointers[untrusted_index] = ptr;
    }
}
```

Analogamente, se una variabile locale puntatore funzione denominata `func` allocati nello stack, quindi potrebbe essere possibile speculativo modificare l'indirizzo che `func` fa riferimento al caso di soddisfare la diramazione condizionale. Ciò può comportare l'esecuzione speculativa da un indirizzo arbitrario quando il puntatore a funzione viene chiamato tramite.

```cpp
unsigned char WriteSlot(unsigned int untrusted_index, void *ptr) {
    void *pointers[256];
    void (*func)() = &callback;
    if (untrusted_index < 256) {
        // SPECULATION BARRIER
        pointers[untrusted_index] = ptr;
    }
    func();
}
```

Si noti che entrambi questi esempi implica speculativa modifica dei puntatori ramo indiretta allocate nello stack. È possibile che la modifica speculativa può verificarsi anche per le variabili globali, con allocazione dell'heap di memoria e persino memoria di sola lettura su alcuni CPU. Per la memoria allocate nello stack, il compilatore Visual C++ esegue già i passaggi per rendere più difficile modificare speculativo allocate nello stack indiretta le destinazioni, ad esempio tramite il riordinamento delle variabili locali in modo che i buffer vengono posizionati accanto a un cookie di sicurezza come in parte i [/GS](https://docs.microsoft.com/cpp/build/reference/gs-buffer-security-check) funzionalità di sicurezza del compilatore.

## <a name="speculative-type-confusion"></a>Confusione di tipo speculativa

Questa categoria riguarda i modelli che possono generare confusione speculativa tipo di codifica. Ciò si verifica quando accedono alla memoria usando un tipo non corretto lungo un tracciato non architetturali durante l'esecuzione speculativa. Soddisfare ramo condizionale sia store speculativa bypass potenzialmente può generare confusione un tipo speculativa.

Archivio speculativa bypass, ciò può verificarsi negli scenari in cui un compilatore riusa un percorso stack per le variabili di più tipi. Infatti, l'archivio dell'architettura di una variabile di tipo `A` possono essere ignorati, consentendo in tal modo il carico di tipo `A` speculativo eseguito prima che la variabile è assegnata. Se la variabile archiviata in precedenza è di tipo diverso, questo può creare le condizioni per una confusione tipo speculativa.

Per soddisfare ramo condizionale, il frammento di codice seguente verrà utilizzato per descrivere diverse condizioni che può concedere a confusione tipo speculativa solide basi le proprie.

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

### <a name="speculative-type-confusion-leading-to-an-out-of-bounds-load"></a>Confusione di tipo speculativa portano a un carico non compresi nell'intervallo

Questo modello di codifica comporta il caso in cui può causare confusione tipo speculative un non compresi nell'intervallo o l'accesso al campo confuso tipo in cui i feed di un indirizzo di caricamento successivo valore caricato. Come avviene per il modello di codifica non compresi nell'intervallo di matrice, ma si è dimostrato attraverso un'alternativa codifica sequenza, come illustrato in precedenza. In questo esempio, un contesto che esegue l'attacco potrebbe causare il contesto vittima eseguire `ProcessType` più volte con un oggetto di tipo `CType1` (`type` è uguale al campo `Type1`). Ciò avrà l'effetto del training la diramazione condizionale per i primi `if` istruzione da stimare non eseguito. Il contesto che esegue l'attacco può quindi causare contesto vittima eseguire `ProcessType` con un oggetto di tipo `CType2`. Ciò può comportare una confusione tipo speculativa se creare un ramo condizionale per i primi `if` istruzione previsioni errate dei ed esegue il corpo del `if` istruzione, pertanto il cast di un oggetto di tipo `CType2` a `CType1`. Poiché `CType2` inferiori `CType1`, l'accesso in memoria `CType1::field2` comporterà un speculativo non compresi nell'intervallo caricherà dei dati che possono essere segreti. Questo valore viene quindi usato in un carico dal `shared_buffer` che può creare osservabili effetti collaterali, come con la matrice non compresi nell'intervallo riportato di seguito viene descritto in precedenza.

### <a name="speculative-type-confusion-leading-to-an-indirect-branch"></a>Confusione di tipo speculativa iniziali a un ramo indiretto

Questo modello di codifica comporta il caso in cui una confusione speculativa di tipo può comportare un ramo indiretto unsafe durante l'esecuzione speculativa. In questo esempio, un contesto che esegue l'attacco potrebbe causare il contesto vittima eseguire `ProcessType` più volte con un oggetto di tipo `CType2` (`type` è uguale al campo `Type2`). Ciò avrà l'effetto del training la diramazione condizionale per i primi `if` istruzione da eseguire e `else if` istruzione non da adottare. Il contesto che esegue l'attacco può quindi causare contesto vittima eseguire `ProcessType` con un oggetto di tipo `CType1`. Ciò può comportare una confusione tipo speculativa se creare un ramo condizionale per i primi `if` istruzione consente di stimare eseguita e il `else if` istruzione consente di stimare non eseguito, in modo da eseguire il corpo del `else if` ed eseguendo il cast di un oggetto di tipo `CType1` a `CType2`. Poiché il `CType2::dispatch_routine` si sovrappone a campo di `char` matrice `CType1::field1`, ciò può comportare un ramo speculativo indiretto a una destinazione branch non intenzionali. Se il contesto che esegue l'attacco può controllare i valori di byte nel `CType1::field1` matrice, potrebbe essere in grado di controllare l'indirizzo di destinazione ramo.

## <a name="speculative-uninitialized-use"></a>Uso non inizializzata speculativa

Questa categoria di scrittura del codice include scenari in cui l'esecuzione speculativa possa accedere alla memoria non inizializzata e usarlo per inserire un caricamento successivo o un ramo indiretta. Per questi modelli di codifica sia sfruttabile, deve essere in grado di controllare o influire in modo significativo il contenuto della memoria che viene usato senza inizializzato dal contesto che è usato in un utente malintenzionato.

### <a name="speculative-uninitialized-use-leading-to-an-out-of-bounds-load"></a>Uso non inizializzata speculativa portano a un carico non compresi nell'intervallo

Un uso non inizializzato speculativo può potenzialmente causare un carico non compresi nell'intervallo usando un valore di autore dell'attacco controllato. Nell'esempio seguente, il valore di `index` viene assegnato `trusted_index` in tutti i percorsi dell'architettura e `trusted_index` presuppone che sia minore o uguale a `buffer_size`. Tuttavia, a seconda del codice generato dal compilatore, è possibile che possa verificarsi che consente il caricamento da un bypass store speculativa `buffer[index]` e le espressioni dipendenti da eseguire prima dell'assegnazione a `index`. In questo caso, un valore non inizializzato per `index` verrà usato come offset nella `buffer` che è stato possibile abilitare un utente malintenzionato di leggere le informazioni riservate non compresi nell'intervallo e ciò comunicare tramite un canale lato attraverso il caricamento del dipendente `shared_buffer` .

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

### <a name="speculative-uninitialized-use-leading-to-an-indirect-branch"></a>Uso non inizializzata speculativa iniziali a un ramo indiretto

Un utilizzo non inizializzato speculativo potrebbe provocare un ramo indiretta in cui la destinazione branch viene controllata da un utente malintenzionato. Nell'esempio seguente, `routine` viene assegnato a una delle due `DefaultMessageRoutine1` oppure `DefaultMessageRoutine` a seconda del valore di `mode`. Nel percorso dell'architettura, l'operazione comporterà `routine` sempre in fase di inizializzazione prima del ramo indiretto. Tuttavia, a seconda del codice generato dal compilatore, un bypass store speculativa può verificarsi che consente il ramo indiretto tramite `routine` speculativo da eseguire prima dell'assegnazione a `routine`. Se in questo caso, un utente malintenzionato potrebbe essere in grado di eseguire speculativo da un indirizzo arbitrario, presupponendo che l'autore dell'attacco può influenzare o controllare il valore inizializzato di `routine`.

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

## <a name="mitigation-options"></a>Opzioni di mitigazione

Per ridurre la probabilità di vulnerabilità del canale sul lato dell'esecuzione speculativa è possibile apportare modifiche al codice sorgente. Queste modifiche possono comportare mitigazione specifiche istanze di una vulnerabilità, ad esempio aggiungendo un *barriera*, o se si apportano modifiche alla progettazione di un'applicazione per rendere le informazioni riservate inaccessibile ai speculativa esecuzione.

### <a name="speculation-barrier-via-manual-instrumentation"></a>Barriera tramite strumentazione manuale

Oggetto *barriera* è possibile inserire manualmente da uno sviluppatore per impedire l'esecuzione speculativa proseguimento lungo un tracciato non architetturale. Ad esempio, uno sviluppatore può inserire una barriera prima di un modello di codifica pericoloso nel corpo di un blocco condizionale, sia all'inizio del blocco (dopo la diramazione condizionale) o prima del primo caricamento che costituiscono un problema. Sarà in grado di soddisfare un ramo condizionale dell'esecuzione del codice dannoso in un percorso UNC non architetturale serializzando l'esecuzione. La sequenza di barriera di speculazione differisce dall'architettura hardware, come descritto nella tabella seguente:

|Architettura|Barriera intrinseco per CVE 2017-5753|Barriera intrinseco per CVE-2018-3639|
|----------------|----------------|----------------|
|x86 o x64|_mm_lfence()|_mm_lfence()|
|ARM|Attualmente non disponibile|__dsb(0)|
|ARM64|Attualmente non disponibile|__dsb(0)|

Ad esempio, il modello di codice seguente può essere ridotta mediante l'utilizzo di `_mm_lfence` intrinseco come illustrato di seguito.

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

### <a name="speculation-barrier-via-compiler-time-instrumentation"></a>Barriera tramite strumentazione in fase di compilazione

Il compilatore Visual C++ in Visual Studio 2017 (a partire dalla versione 15.5.5) include il supporto per il `/Qspectre` commutatore automaticamente inserisce una barriera per un set limitato di modelli di codice potenzialmente vulnerabili correlati per CVE 2017-5753. La documentazione per il [/Qspectre](https://docs.microsoft.com/cpp/build/reference/qspectre) flag vengono fornite ulteriori informazioni sul relativo utilizzo e gli effetti. È importante notare che questo flag non copre tutti i modelli di scrittura di codice potenzialmente vulnerabili e di conseguenza gli sviluppatori non devono affidarsi a essa come una mitigazione completa per questa classe di vulnerabilità.

### <a name="masking-array-indices"></a>Gli indici di matrice di maschera

In casi in cui un speculativo non compresi nell'intervallo caricare può verificarsi, l'indice della matrice possa essere limitata fortemente nel sia il percorso dell'architettura e non dell'architettura mediante l'aggiunta di logica per associare in modo esplicito l'indice della matrice. Ad esempio, se una matrice può essere allocata a una dimensione che è allineata a una potenza di due, quindi una maschera semplice può essere introdotti. Questo è illustrato nell'esempio riportato di seguito in cui si presuppone che `buffer_size` è allineato a una potenza di due. Ciò assicura che `untrusted_index` è sempre minore `buffer_size`, anche se si verifica di soddisfare un ramo condizionale e `untrusted_index` passato con un valore maggiore o uguale a `buffer_size`.

Si noti che il mascheramento indice eseguito qui potrebbe essere soggetti a bypass store speculative in base al codice generato dal compilatore.

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

### <a name="removing-sensitive-information-from-memory"></a>Rimozione di informazioni riservate dalla memoria

Un'altra tecnica che consente di ridurre le vulnerabilità del canale sul lato di esecuzione speculativa consiste nel rimuovere informazioni riservate dalla memoria. Gli sviluppatori di software possono individuare le opportunità per effettuare il refactoring la loro applicazione in modo che le informazioni riservate non sono accessibile durante l'esecuzione speculativa. Questa operazione può essere eseguita effettuando il refactoring di progettazione di un'applicazione per isolare le informazioni riservate in processi separati. Ad esempio, un'applicazione web browser può tentare di isolare i dati associati a ogni origine web in processi separati, evitando così che un processo in grado di accedere tra le origini dati tramite l'esecuzione speculativa.

## <a name="see-also"></a>Vedere anche

[Materiale sussidiario per ridurre le vulnerabilità di esecuzione speculativa canale laterale](https://portal.msrc.microsoft.com/security-guidance/advisory/ADV180002)<br/>
[Mitigazione delle vulnerabilità di esecuzione speculativa side channel hardware](https://blogs.technet.microsoft.com/srd/2018/03/15/mitigating-speculative-execution-side-channel-hardware-vulnerabilities/)
