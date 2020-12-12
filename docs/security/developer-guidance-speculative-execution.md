---
description: 'Altre informazioni su: linee guida per sviluppatori C++ per canali laterali di esecuzione speculativa'
title: Linee guida per sviluppatori C++ per canali laterali di esecuzione speculativa
ms.date: 07/10/2018
helpviewer_keywords:
- Visual C++, security
- security [C++]
- security [C++], best practices
- Spectre
- CVE-2017-5753
- Speculative Execution
ms.openlocfilehash: 41376f02c04a9baf83fec19791d77c169c73fa31
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320079"
---
# <a name="c-developer-guidance-for-speculative-execution-side-channels"></a>Linee guida per sviluppatori C++ per canali laterali di esecuzione speculativa

Questo articolo contiene indicazioni per gli sviluppatori che assistono all'identificazione e alla mitigazione di vulnerabilità hardware del canale laterale per l'esecuzione speculativa nel software C++. Queste vulnerabilità possono divulgare informazioni riservate attraverso i confini del trust e possono influenzare il software eseguito su processori che supportano l'esecuzione speculativa e non ordinata delle istruzioni. Questa classe di vulnerabilità è stata descritta per la prima volta nel 2018 di gennaio, oltre a informazioni aggiuntive e indicazioni aggiuntive nell' [avviso di sicurezza di Microsoft](https://portal.msrc.microsoft.com/security-guidance/advisory/ADV180002).

Le linee guida fornite in questo articolo sono correlate alle classi di vulnerabilità rappresentate da:

1. CVE-2017-5753, noto anche come Spectre Variant 1. Questa classe di vulnerabilità hardware è correlata ai canali laterali che possono verificarsi a causa di un'esecuzione speculativa che si verifica in seguito a una stima errata del ramo condizionale. Il compilatore Microsoft C++ in Visual Studio 2017 (a partire dalla versione 15.5.5) include il supporto per l' `/Qspectre` opzione che fornisce una mitigazione in fase di compilazione per un set limitato di modelli di codifica potenzialmente vulnerabili correlati a CVE-2017-5753. L' `/Qspectre` opzione è disponibile anche in Visual Studio 2015 Update da 3 a [KB 4338871](https://support.microsoft.com/help/4338871). La documentazione relativa al [`/Qspectre`](../build/reference/qspectre.md) flag fornisce ulteriori informazioni sugli effetti e sull'utilizzo.

2. CVE-2018-3639, noto anche come [SSB (speculative Store bypass)](https://aka.ms/sescsrdssb). Questa classe di vulnerabilità hardware è correlata ai canali laterali che possono verificarsi a causa di un'esecuzione speculativa di un carico in anticipo rispetto a un archivio dipendente in seguito a una stima errata dell'accesso alla memoria.

Un'introduzione accessibile alle vulnerabilità del canale laterale per l'esecuzione speculativa si trova nella presentazione denominata [caso di Spectre e Meltdown](https://www.youtube.com/watch?v=_4O0zMW-Zu4) da parte di uno dei team di ricerca che ha individuato questi problemi.

## <a name="what-are-speculative-execution-side-channel-hardware-vulnerabilities"></a>Che cosa sono le vulnerabilità hardware del canale laterale per l'esecuzione speculativa?

Le CPU moderne forniscono livelli di prestazioni più elevati usando un'esecuzione speculativa e non ordinata delle istruzioni. Ad esempio, questa operazione viene spesso eseguita tramite la stima della destinazione dei rami (condizionale e indiretto), che consente alla CPU di avviare speculativamente di esecuzione delle istruzioni nella destinazione del ramo stimato, evitando in tal modo un blocco fino a quando non viene risolta la destinazione effettiva del ramo. Nel caso in cui la CPU rileva in un secondo momento che si è verificata una stima errata, tutto lo stato del computer calcolato speculativamente viene ignorato. In questo modo si garantisce che non vi siano effetti visivi visibili della speculazione non stimata.

Anche se l'esecuzione speculativa non influisce sullo stato visibile dall'architettura, può lasciare tracce residue nello stato non architettonico, ad esempio le varie cache usate dalla CPU. Si tratta di tracce residue di esecuzione speculativa che possono dare luogo a vulnerabilità del canale laterale. Per comprendere meglio questo problema, prendere in considerazione il seguente frammento di codice, che fornisce un esempio di CVE-2017-5753 (bypass del controllo dei limiti):

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

In questo esempio `ReadByte` viene fornito un buffer, le dimensioni del buffer e un indice in tale buffer. Il parametro di indice, come specificato da `untrusted_index` , viene fornito da un contesto meno privilegiato, ad esempio un processo non amministrativo. Se `untrusted_index` è minore di `buffer_size` , il carattere in corrispondenza dell'indice viene letto `buffer` e utilizzato per indicizzare in un'area di memoria condivisa a cui fa riferimento `shared_buffer` .

Dal punto di vista dell'architettura, questa sequenza di codice è perfettamente sicura perché garantisce che `untrusted_index` sarà sempre inferiore a `buffer_size` . Tuttavia, in presenza di un'esecuzione speculativa, è possibile che la CPU imprevedibili in modo improprio il ramo condizionale ed esegua il corpo dell'istruzione If anche quando `untrusted_index` è maggiore o uguale a `buffer_size` . Di conseguenza, la CPU può speculativamente leggere un byte oltre i limiti di `buffer` (che potrebbe essere un segreto) e quindi usare tale valore byte per calcolare l'indirizzo di un carico successivo tramite `shared_buffer` .

Mentre la CPU rileverà la stima errata, potrebbero essere presenti effetti collaterali residui nella cache della CPU che rivelano informazioni sul valore byte che è stato letto fuori dai limiti da `buffer` . Questi effetti collaterali possono essere rilevati da un contesto meno privilegiato in esecuzione nel sistema eseguendo il probe della velocità con cui viene eseguito l'accesso a ogni riga della cache `shared_buffer` . Di seguito sono riportati i passaggi che è possibile eseguire per eseguire questa operazione:

1. **Richiama `ReadByte` più volte con `untrusted_index` minore di `buffer_size`**. Il contesto di attacco può causare il richiamo del contesto della vittima, `ReadByte` ad esempio tramite RPC, in modo che il predittore del ramo venga sottoposto a training in modo da non essere eseguito come `untrusted_index` è minore di `buffer_size` .

2. **Svuotare tutte le righe `shared_buffer` della cache in**. Il contesto di attacco deve scaricare tutte le righe della cache nell'area condivisa di memoria a cui fa riferimento `shared_buffer` . Poiché l'area di memoria è condivisa, è semplice e può essere eseguita usando intrinseci come `_mm_clflush` .

3. **Invoke `ReadByte` con `untrusted_index` maggiore di `buffer_size`**. Il contesto di attacco fa in modo che il contesto della vittima richiami in `ReadByte` modo che non venga correttamente stimato che il ramo non verrà utilizzato. In questo modo, il processore speculativamente l'esecuzione del corpo del blocco if con `untrusted_index` maggiore di, causando la `buffer_size` lettura di `buffer` . Di conseguenza, `shared_buffer` viene indicizzato usando un valore potenzialmente segreto che è stato letto fuori limite, causando in tal modo la carica della rispettiva riga della cache da parte della CPU.

4. **Leggere ogni riga della cache in `shared_buffer` per vedere quali sono gli accessi più rapidi**. Il contesto di attacco può leggere ogni riga della cache in `shared_buffer` e rilevare la riga della cache che viene caricata significativamente più velocemente rispetto alle altre. Si tratta della riga della cache che probabilmente è stata introdotta nel passaggio 3. Poiché in questo esempio esiste una relazione 1:1 tra il valore di byte e la riga della cache, questo consente all'autore dell'attacco di dedurre il valore effettivo del byte che è stato letto fuori limite.

I passaggi precedenti forniscono un esempio di uso di una tecnica nota come SCARICAmento e ricarica insieme a exploiting di un'istanza di CVE-2017-5753.

## <a name="what-software-scenarios-can-be-impacted"></a>Quali scenari software possono essere interessati?

Lo sviluppo di software protetti tramite un processo come [Security Development Lifecycle](https://www.microsoft.com/sdl/) (SDL) richiede in genere agli sviluppatori di identificare i limiti di trust presenti nella propria applicazione. Un limite di attendibilità esiste nei punti in cui un'applicazione può interagire con i dati forniti da un contesto meno attendibile, ad esempio un altro processo nel sistema o un processo in modalità utente non amministratore nel caso di un driver di dispositivo in modalità kernel. La nuova classe di vulnerabilità che coinvolgono i canali laterali di esecuzione speculativa è rilevante per molti dei limiti di trust nei modelli di sicurezza software esistenti che isolano il codice e i dati in un dispositivo.

La tabella seguente fornisce un riepilogo dei modelli di sicurezza del software in cui gli sviluppatori possono avere la necessità di preoccuparsi di queste vulnerabilità:

|Limite di attendibilità|Description|
|----------------|----------------|
|Limite macchina virtuale|Le applicazioni che isolano i carichi di lavoro in macchine virtuali separate che ricevono dati non attendibili da un'altra macchina virtuale possono essere a rischio.|
|Limite kernel|Un driver di dispositivo in modalità kernel che riceve dati non attendibili da un processo in modalità utente non amministratore può essere a rischio.|
|Limite processo|Un'applicazione che riceve dati non attendibili da un altro processo in esecuzione nel sistema locale, ad esempio tramite una chiamata di procedura remota (RPC), una memoria condivisa o altri meccanismi di comunicazione Inter-Process (IPC) può essere a rischio.|
|Confine enclave|Un'applicazione che viene eseguita all'interno di un enclave sicuro (ad esempio Intel SGX) che riceve dati non attendibili dall'esterno dell'enclave può essere a rischio.|
|Confine della lingua|Un'applicazione che interpreta o JIT (just-in-Time) compila ed esegue codice non attendibile scritto in una lingua di livello superiore può essere a rischio.|

Le applicazioni che presentano una superficie di attacco esposta a uno dei limiti di attendibilità precedenti devono esaminare il codice sulla superficie di attacco per identificare e attenuare le possibili istanze delle vulnerabilità del canale laterale per l'esecuzione speculativa. Si noti che i limiti di attendibilità esposti alle superfici di attacco remote, ad esempio i protocolli di rete remota, non sono stati dimostrati a rischio di vulnerabilità del canale laterale per l'esecuzione speculativa.

## <a name="potentially-vulnerable-coding-patterns"></a>Modelli di codifica potenzialmente vulnerabili

Le vulnerabilità del canale laterale per l'esecuzione speculativa possono verificarsi come conseguenza di più modelli di codifica. In questa sezione vengono descritti i modelli di codifica potenzialmente vulnerabili e vengono forniti esempi per ognuno di essi, ma è necessario riconoscere che possono esistere variazioni su questi temi. Per questo motivo, gli sviluppatori sono invitati a adottare questi modelli come esempi e non come un elenco esaustivo di tutti i modelli di codifica potenzialmente vulnerabili. Le stesse classi di vulnerabilità di sicurezza della memoria che possono esistere attualmente nel software possono esistere anche lungo percorsi di esecuzione speculativi e non ordinati, tra cui, tra l'altro, i sovraccarichi del buffer, gli accessi alla matrice out-of-Bound, l'utilizzo non inizializzato della memoria, la confusione dei tipi e così via. Le stesse primitive che possono essere usate dagli utenti malintenzionati per sfruttare le vulnerabilità di sicurezza della memoria lungo i percorsi architetturali possono anche essere applicate ai percorsi speculativi.

In generale, i canali laterali di esecuzione speculativa correlati alla stima errata del ramo condizionale possono verificarsi quando un'espressione condizionale opera sui dati che possono essere controllati o influenzati da un contesto meno attendibile. Questo può includere, ad esempio, espressioni condizionali utilizzate nelle **`if`** **`for`** istruzioni,,, **`while`** **`switch`** , o ternarie. Per ognuna di queste istruzioni, il compilatore può generare un ramo condizionale che la CPU può quindi stimare per la destinazione del ramo in fase di esecuzione.

Per ogni esempio, viene inserito un commento con la frase "SPECULAtion BARRIER", in cui uno sviluppatore può introdurre una barriera come mitigazione. Questo argomento viene illustrato più dettagliatamente nella sezione sulle misure di mitigazione.

## <a name="speculative-out-of-bounds-load"></a>Carico speculativo fuori limite

Questa categoria di modelli di codifica prevede una stima errata del ramo condizionale che comporta l'accesso a una memoria fuori limite speculativa.

### <a name="array-out-of-bounds-load-feeding-a-load"></a>Caricamento di un carico da un array fuori limite

Questo modello di codifica è il modello di codifica vulnerabile descritto originariamente per CVE-2017-5753 (bypass del controllo dei limiti). Questo modello è illustrato in dettaglio nella sezione relativa allo sfondo di questo articolo.

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

Analogamente, è possibile che venga eseguito il caricamento di una matrice fuori limite insieme a un ciclo che supera la condizione di terminazione a causa di una stima errata. In questo esempio, il ramo condizionale associato all' `x < buffer_size` espressione può prevedere una stima errata e speculativamente eseguire il corpo del **`for`** ciclo quando `x` è maggiore o uguale a `buffer_size` , causando così un carico speculativo fuori limite.

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

### <a name="array-out-of-bounds-load-feeding-an-indirect-branch"></a>Il caricamento della matrice non è associato ad alcun ramo indiretto

Questo modello di codifica prevede il caso in cui una stima errata del ramo condizionale possa causare un accesso out-of-Bound a una matrice di puntatori a funzione che quindi conduce a un ramo indiretto all'indirizzo di destinazione che è stato letto fuori limite. Il frammento di codice seguente fornisce un esempio che illustra questa operazione.

In questo esempio viene fornito un identificatore di messaggio non attendibile per DispatchMessage tramite il `untrusted_message_id` parametro. Se `untrusted_message_id` è minore di `MAX_MESSAGE_ID` , viene usato per eseguire l'indicizzazione in una matrice di puntatori a funzione e creare un ramo per la destinazione del ramo corrispondente. Questo codice è indipendente dall'architettura, ma se la CPU non esegue una stima errata del ramo condizionale, può `DispatchTable` comportare l'indicizzazione in base a `untrusted_message_id` quando il valore è maggiore o uguale a `MAX_MESSAGE_ID` , causando un accesso out-of-Bound. Questo può comportare un'esecuzione speculativa da un indirizzo di destinazione del ramo che è derivato oltre i limiti della matrice, causando la divulgazione di informazioni a seconda del codice eseguito speculativamente.

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

Come nel caso di un carico di matrici out-of-Bounds che alimenta un altro carico, questa condizione può verificarsi anche in combinazione con un ciclo che supera la condizione di terminazione a causa di una stima errata.

### <a name="array-out-of-bounds-store-feeding-an-indirect-branch"></a>Archivio out-of-Bounds dell'array che invia un ramo indiretto

Mentre nell'esempio precedente è stato illustrato il modo in cui un carico speculativo di tipo out-of-Bounds può influenzare una destinazione di Branch indiretta, è anche possibile che un archivio out-of-Bound modifichi una destinazione di Branch indiretta, ad esempio un puntatore a funzione o un indirizzo mittente. Questo può causare un'esecuzione speculativa da un indirizzo specificato dagli utenti malintenzionati.

In questo esempio, un indice non attendibile viene passato tramite il `untrusted_index` parametro. Se `untrusted_index` è minore del numero di elementi della `pointers` matrice (256 elementi), il valore del puntatore fornito in `ptr` viene scritto nella `pointers` matrice. Questo codice è indipendente dall'architettura, ma se la CPU non prevede una stima errata del ramo condizionale, può comportare la `ptr` scrittura speculativamente oltre i limiti della matrice allocata dallo stack `pointers` . Questo potrebbe causare un danneggiamento speculativo dell'indirizzo mittente per `WriteSlot` . Se un utente malintenzionato può controllare il valore di `ptr` , potrebbe essere in grado di causare un'esecuzione speculativa da un indirizzo arbitrario quando viene `WriteSlot` restituito lungo il percorso speculativo.

```cpp
unsigned char WriteSlot(unsigned int untrusted_index, void *ptr) {
    void *pointers[256];
    if (untrusted_index < 256) {
        // SPECULATION BARRIER
        pointers[untrusted_index] = ptr;
    }
}
```

Analogamente, se una variabile locale del puntatore a funzione `func` è stata allocata nello stack, potrebbe essere possibile speculativamente modificare l'indirizzo a cui si `func` riferisce quando si verifica l'errore di stima del ramo condizionale. Questo potrebbe causare un'esecuzione speculativa da un indirizzo arbitrario quando il puntatore a funzione viene chiamato tramite.

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

Si noti che entrambi questi esempi comportano una modifica speculativa dei puntatori a rami indiretti allocati nello stack. È possibile che si verifichino modifiche speculative anche per variabili globali, memoria allocata dall'heap e persino memoria di sola lettura in alcune CPU. Per la memoria allocata nello stack, il compilatore Microsoft C++ esegue già i passaggi per rendere più difficile speculativamente modificare le destinazioni dei rami indiretti allocati dallo stack, ad esempio riordinando le variabili locali in modo che i buffer vengano posizionati accanto a un cookie di sicurezza come parte della [`/GS`](../build/reference/gs-buffer-security-check.md) funzionalità di sicurezza del compilatore.

## <a name="speculative-type-confusion"></a>Confusione tra tipi speculativi

Questa categoria riguarda i modelli di codifica che possono dare luogo a una confusione speculativa dei tipi. Questo errore si verifica quando si accede alla memoria utilizzando un tipo errato lungo un percorso non architettonico durante l'esecuzione speculativa. Sia la stima del ramo condizionale che il bypass dello Store speculativo possono causare una confusione dei tipi speculativi.

Per il bypass di archivio speculativo, questo problema può verificarsi negli scenari in cui un compilatore riutilizza un percorso dello stack per variabili di più tipi. Ciò è dovuto al fatto che l'archivio dell'architettura di una variabile di tipo `A` può essere ignorato, consentendo così l'esecuzione del caricamento del tipo `A` in speculativamente prima dell'assegnazione della variabile. Se la variabile precedentemente archiviata è di un tipo diverso, è possibile creare le condizioni per una confusione di tipo speculativo.

Per la stima errata del ramo condizionale, il frammento di codice seguente verrà usato per descrivere le diverse condizioni che possono essere generate dalla confusione dei tipi speculativi.

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

### <a name="speculative-type-confusion-leading-to-an-out-of-bounds-load"></a>Confusione dei tipi speculativi che causa un carico fuori limite

Questo modello di codifica prevede il caso in cui una confusione di tipo speculativo può comportare l'accesso a un campo non associato o confuso del tipo, in cui il valore caricato inserisce un indirizzo di caricamento successivo. Questa operazione è simile al modello di codifica out-of-Bounds della matrice, ma viene manifestata tramite una sequenza di codifica alternativa, come illustrato in precedenza. In questo esempio, un contesto di attacco può causare l'esecuzione più volte del contesto della vittima `ProcessType` con un oggetto di tipo `CType1` (il `type` campo è uguale a `Type1` ). In questo modo verrà effettuato il training del ramo condizionale per la prima **`if`** istruzione da stimare non eseguita. Il contesto di attacco può quindi causare l'esecuzione del contesto della vittima `ProcessType` con un oggetto di tipo `CType2` . Ciò può comportare una confusione del tipo speculativo se il ramo condizionale per la prima **`if`** istruzione esegue una stima errata ed esegue il corpo dell' **`if`** istruzione, eseguendo così il cast di un oggetto di tipo `CType2` a `CType1` . Poiché `CType2` il valore di è minore di `CType1` , l'accesso alla memoria a comporterà `CType1::field2` un carico di dati out-of-Bound speculativo che potrebbe essere segreto. Questo valore viene quindi utilizzato in un carico da `shared_buffer` cui è possibile creare effetti collaterali osservabili, come con l'esempio di out-of-Bounds descritto in precedenza.

### <a name="speculative-type-confusion-leading-to-an-indirect-branch"></a>Confusione del tipo speculativo che conduce a un ramo indiretto

Questo modello di codifica prevede il caso in cui una confusione di tipo speculativa può causare un ramo indiretto non sicuro durante l'esecuzione speculativa. In questo esempio, un contesto di attacco può causare l'esecuzione più volte del contesto della vittima `ProcessType` con un oggetto di tipo `CType2` (il `type` campo è uguale a `Type2` ). In questo modo verrà effettuato il training del ramo condizionale per la prima **`if`** istruzione da intraprendere e l' `else if` istruzione non verrà eseguita. Il contesto di attacco può quindi causare l'esecuzione del contesto della vittima `ProcessType` con un oggetto di tipo `CType1` . Ciò può comportare una confusione del tipo speculativo se il ramo condizionale per la prima **`if`** istruzione esegue la stima e l' `else if` istruzione non viene eseguita, in modo da eseguire il corpo di ed eseguire il `else if` cast di un oggetto di tipo `CType1` a `CType2` . Poiché il `CType2::dispatch_routine` campo si sovrappone alla **`char`** matrice `CType1::field1` , potrebbe verificarsi un ramo indiretto speculativo a una destinazione di Branch non intenzionale. Se il contesto di attacco può controllare i valori di byte nella `CType1::field1` matrice, potrebbe essere in grado di controllare l'indirizzo di destinazione del ramo.

## <a name="speculative-uninitialized-use"></a>Uso non inizializzato speculativo

Questa categoria di modelli di codifica prevede scenari in cui l'esecuzione speculativa può accedere a una memoria non inizializzata e usarla per inserire un successivo carico o un ramo indiretto. Affinché questi modelli di codifica possano essere sfruttabili, un utente malintenzionato deve essere in grado di controllare o influenzare significativamente il contenuto della memoria utilizzata senza essere inizializzata dal contesto in cui viene utilizzata.

### <a name="speculative-uninitialized-use-leading-to-an-out-of-bounds-load"></a>Uso non inizializzato speculativo che causa un carico fuori limite

Un uso speculativo non inizializzato può potenzialmente causare un carico fuori limite usando un valore controllato da un utente malintenzionato. Nell'esempio seguente il valore di `index` viene assegnato a `trusted_index` tutti i percorsi architetturali e `trusted_index` si presuppone che sia minore o uguale a `buffer_size` . Tuttavia, a seconda del codice prodotto dal compilatore, è possibile che si verifichi un bypass di archivio speculativo che consente di eseguire il caricamento da `buffer[index]` e le espressioni dipendenti prima dell'assegnazione a `index` . In tal caso, verrà utilizzato un valore non inizializzato per `index` come offset in `buffer` che potrebbe consentire a un utente malintenzionato di leggere le informazioni riservate fuori dal limite e di trasportarlo tramite un canale laterale tramite il carico dipendente di `shared_buffer` .

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

### <a name="speculative-uninitialized-use-leading-to-an-indirect-branch"></a>Uso non inizializzato speculativo che conduce a un ramo indiretto

Un uso non inizializzato speculativo può potenzialmente causare un ramo indiretto in cui la destinazione del ramo è controllata da un utente malintenzionato. Nell'esempio seguente `routine` viene assegnato a `DefaultMessageRoutine1` o a `DefaultMessageRoutine` seconda del valore di `mode` . Nel percorso dell'architettura, questo comporterà `routine` l'inizializzazione sempre prima del ramo indiretto. Tuttavia, a seconda del codice prodotto dal compilatore, è possibile che si verifichi un bypass di archivio speculativo che consenta l'esecuzione del ramo indiretto tramite `routine` speculativamente prima dell'assegnazione a `routine` . In tal caso, un utente malintenzionato potrebbe essere in grado di eseguire speculativamente da un indirizzo arbitrario, supponendo che l'utente malintenzionato possa influenzare o controllare il valore non inizializzato di `routine` .

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

Le vulnerabilità del canale laterale per l'esecuzione speculativa possono essere mitigate apportando modifiche al codice sorgente. Queste modifiche possono implicare la mitigazione di istanze specifiche di una vulnerabilità, ad esempio l'aggiunta di una *barriera speculativa* o la modifica della progettazione di un'applicazione per rendere le informazioni riservate inaccessibili all'esecuzione speculativa.

### <a name="speculation-barrier-via-manual-instrumentation"></a>Ostacolo alla speculazione tramite strumentazione manuale

Una *barriera di speculazione* può essere inserita manualmente da uno sviluppatore per evitare che l'esecuzione speculativa prosegue in un percorso non architettonico. Ad esempio, uno sviluppatore può inserire una barriera speculativa prima di un modello di codifica pericoloso nel corpo di un blocco condizionale, all'inizio del blocco (dopo il ramo condizionale) o prima del primo carico di interesse. In questo modo si impedisce a un ramo condizionale di prevedere l'esecuzione del codice pericoloso in un percorso non architettonico serializzando l'esecuzione. La sequenza di barriera speculativa è diversa dall'architettura hardware descritta nella tabella seguente:

|Architettura|Intrinseco della barriera speculativa per CVE-2017-5753|Intrinseco della barriera speculativa per CVE-2018-3639|
|----------------|----------------|----------------|
|x86/x64|_mm_lfence ()|_mm_lfence ()|
|ARM|Attualmente non disponibile|__dsb (0)|
|ARM64|Attualmente non disponibile|__dsb (0)|

Ad esempio, il modello di codice seguente può essere mitigato usando il `_mm_lfence` intrinseco, come illustrato di seguito.

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

### <a name="speculation-barrier-via-compiler-time-instrumentation"></a>Barriera alla speculazione tramite strumentazione in fase di compilazione

Il compilatore Microsoft C++ in Visual Studio 2017 (a partire dalla versione 15.5.5) include il supporto per l' `/Qspectre` opzione che inserisce automaticamente una barriera di speculazione per un set limitato di modelli di codifica potenzialmente vulnerabili correlati a CVE-2017-5753. La documentazione relativa al [`/Qspectre`](../build/reference/qspectre.md) flag fornisce ulteriori informazioni sugli effetti e sull'utilizzo. È importante notare che questo flag non copre tutti i modelli di codifica potenzialmente vulnerabili e che tali sviluppatori non devono basarsi su di esso come mitigazione completa per questa classe di vulnerabilità.

### <a name="masking-array-indices"></a>Mascheramento degli indici di matrice

Nei casi in cui è possibile che si verifichi un carico speculativo fuori limite, è possibile che l'indice della matrice sia fortemente vincolato sia al percorso architettonico che a quello non dell'architettura aggiungendo la logica per associare in modo esplicito l'indice della matrice. Se, ad esempio, una matrice può essere allocata a una dimensione allineata a una potenza di due, è possibile introdurre una maschera semplice. Questa procedura è illustrata nell'esempio seguente, in cui si presuppone che `buffer_size` sia allineata a una potenza di due. `untrusted_index`In questo modo si garantisce che sia sempre minore di `buffer_size` , anche se si verifica un errore di stima del ramo condizionale che `untrusted_index` è stato passato con un valore maggiore o uguale a `buffer_size` .

Si noti che la maschera dell'indice eseguita qui potrebbe essere soggetta a un bypass di archivio speculativo a seconda del codice generato dal compilatore.

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

Un'altra tecnica che può essere usata per attenuare le vulnerabilità del canale laterale per l'esecuzione speculativa consiste nel rimuovere le informazioni riservate dalla memoria. Gli sviluppatori di software possono cercare le opportunità di effettuare il refactoring dell'applicazione in modo che le informazioni riservate non siano accessibili durante l'esecuzione speculativa. Questa operazione può essere eseguita effettuando il refactoring della progettazione di un'applicazione per isolare le informazioni riservate in processi distinti. Ad esempio, un'applicazione Web browser può tentare di isolare i dati associati a ogni origine Web in processi distinti, impedendo in tal modo a un processo di accedere ai dati tra origini mediante un'esecuzione speculativa.

## <a name="see-also"></a>Vedi anche

[Linee guida per attenuare le vulnerabilità del canale laterale per l'esecuzione speculativa](https://portal.msrc.microsoft.com/security-guidance/advisory/ADV180002)<br/>
[Attenuazione di vulnerabilità hardware del canale lato esecuzione speculativa](https://blogs.technet.microsoft.com/srd/2018/03/15/mitigating-speculative-execution-side-channel-hardware-vulnerabilities/)
