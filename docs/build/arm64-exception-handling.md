---
title: Gestione delle eccezioni ARM64
description: Descrive le convenzioni e i dati di gestione delle eccezioni usati da Windows su ARM64.
ms.date: 11/19/2018
ms.openlocfilehash: abc77aa683e73a2740c71ffbd7ddead07f91ff7d
ms.sourcegitcommit: 5bb421fdf61d290cac93a03e16a6a80959accf6d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/26/2020
ms.locfileid: "83854827"
---
# <a name="arm64-exception-handling"></a>Gestione delle eccezioni ARM64

Windows su ARM64 utilizza lo stesso meccanismo di gestione delle eccezioni strutturato per le eccezioni generate dall'hardware asincrone e le eccezioni generate dal software sincrono. I gestori di eccezioni specifici del linguaggio sono costruiti sulla base della gestione strutturata delle eccezioni di Windows mediante le funzioni helper del linguaggio. Questo documento descrive la gestione delle eccezioni in Windows su ARM64 e gli helper del linguaggio usati dal codice generato dall'assembler ARM Microsoft e dal compilatore MSVC.

## <a name="goals-and-motivation"></a>Obiettivi e motivazioni

Le convenzioni dei dati di rimozione dell'eccezione e la descrizione sono destinate a:

1. Fornire una descrizione sufficiente per consentire la rimozione senza sondaggio del codice in tutti i casi.

   - Per analizzare il codice è necessario che il codice venga sottopaginato in. In questo modo si impedisce la rimozione in alcune circostanze in cui è utile (traccia, campionamento, debug).

   - L'analisi del codice è complessa. il compilatore deve prestare attenzione a generare solo le istruzioni che possono essere decodificate dall'autorimozione.

   - Se non è possibile descrivere completamente la rimozione tramite l'uso di codici di rimozione, in alcuni casi è necessario eseguire il fallback alla decodifica delle istruzioni. Ciò aumenta la complessità complessiva e idealmente deve essere evitato.

1. Supporto della rimozione in prologo e Mid-epilogo.

   - La rimozione viene utilizzata in Windows per più della gestione delle eccezioni. È fondamentale che il codice possa essere rimosso in modo accurato anche quando al centro di una sequenza di codice di prologo o epilogo.

1. Occupi una quantità minima di spazio.

   - I codici di rimozione non devono essere aggregati per aumentare significativamente la dimensione binaria.

   - Poiché i codici di rimozione sono probabilmente bloccati in memoria, un footprint ridotto garantisce un sovraccarico minimo per ogni binario caricato.

## <a name="assumptions"></a>Presupposti

Questi presupposti vengono creati nella descrizione della gestione delle eccezioni:

1. I Prolog e epilogo tendono a reciprocamente il mirroring. Sfruttando questo tratto comune, le dimensioni dei metadati necessari per descrivere la rimozione possono essere notevolmente ridotte. All'interno del corpo della funzione, non importa se le operazioni del prologo vengono annullate o se le operazioni dell'epilogo vengono eseguite in modo diretto. Entrambi devono produrre risultati identici.

1. Le funzioni tendono a essere relativamente piccole. Diverse ottimizzazioni per lo spazio si basano su questo fatto per ottenere la compressione dei dati più efficiente.

1. In epilogo non è presente alcun codice condizionale.

1. Registro del puntatore ai frame dedicato: se il SP viene salvato in un altro registro (x29) nel prologo, tale registro rimane invariato in tutta la funzione. Ciò significa che l'SP originale può essere recuperato in qualsiasi momento.

1. A meno che SP non venga salvato in un altro registro, tutte le modifiche del puntatore dello stack si verificano esclusivamente nel prologo e nell'epilogo.

1. Il layout del stack frame è organizzato come descritto nella sezione successiva.

## <a name="arm64-stack-frame-layout"></a>Layout stack frame ARM64

![layout stack frame](media/arm64-exception-handling-stack-frame.png "layout di stack frame")

Per le funzioni concatenate ai frame, la coppia FP e LR può essere salvata in qualsiasi posizione nell'area della variabile locale, a seconda delle considerazioni sull'ottimizzazione. L'obiettivo è quello di ottimizzare il numero di variabili locali che possono essere raggiunte da una singola istruzione basata sul puntatore al frame (x29) o sul puntatore dello stack (SP). Per `alloca` le funzioni, tuttavia, deve essere concatenato e x29 deve puntare al lato inferiore dello stack. Per consentire una migliore copertura della modalità di indirizzamento delle coppie Register, le aree di salvataggio dei registri non volatili vengono posizionate nella parte superiore dello stack dell'area locale. Di seguito sono riportati alcuni esempi che illustrano diverse sequenze di prologo più efficienti. Per maggiore chiarezza e una migliore località della cache, l'ordine di archiviazione dei registri salvati dal chiamato in tutti i registri canonici è in ordine di crescita. `#framesz`di seguito rappresenta le dimensioni dell'intero stack (esclusa l'area alloca). `#localsz`e `#outsz` indicano le dimensioni dell'area locale (inclusa l'area di salvataggio per la \< coppia x29, LR>) e le dimensioni del parametro in uscita, rispettivamente.

1. Concatenato, #localsz \< = 512

    ```asm
        stp    x19,x20,[sp,#-96]!        // pre-indexed, save in 1st FP/INT pair
        stp    d8,d9,[sp,#16]            // save in FP regs (optional)
        stp    x0,x1,[sp,#32]            // home params (optional)
        stp    x2,x3,[sp,#48]
        stp    x4,x5,[sp,#64]
        stp    x6,x7,[sp,#72]
        stp    x29,lr,[sp,#-localsz]!   // save <x29,lr> at bottom of local area
        mov    x29,sp                   // x29 points to bottom of local
        sub    sp,sp,#outsz             // (optional for #outsz != 0)
    ```

1. Concatenato, #localsz > 512

    ```asm
        stp    x19,x20,[sp,#-96]!        // pre-indexed, save in 1st FP/INT pair
        stp    d8,d9,[sp,#16]            // save in FP regs (optional)
        stp    x0,x1,[sp,#32]            // home params (optional)
        stp    x2,x3,[sp,#48]
        stp    x4,x5,[sp,#64]
        stp    x6,x7,[sp,#72]
        sub    sp,sp,#(localsz+outsz)   // allocate remaining frame
        stp    x29,lr,[sp,#outsz]       // save <x29,lr> at bottom of local area
        add    x29,sp,#outsz            // setup x29 points to bottom of local area
    ```

1. Funzioni foglia non concatenate (LR non salvata)

    ```asm
        stp    x19,x20,[sp,#-80]!       // pre-indexed, save in 1st FP/INT reg-pair
        stp    x21,x22,[sp,#16]
        str    x23,[sp,#32]
        stp    d8,d9,[sp,#40]           // save FP regs (optional)
        stp    d10,d11,[sp,#56]
        sub    sp,sp,#(framesz-80)      // allocate the remaining local area
    ```

   È possibile accedere a tutte le variabili locali in base a SP. \<x29, LR> punta al frame precedente. Per dimensioni frame \< = 512, "Sub SP,..." può essere ottimizzato se l'area salvata REGS viene spostata nella parte inferiore dello stack. Lo svantaggio è che non è coerente con gli altri layout sopra indicati e i REGS salvati fanno parte dell'intervallo per la modalità di indirizzamento degli offset Pair-REGS e pre-indicizzata.

1. Funzioni non concatenate e non foglia (LR è salvato nell'area salvata int)

    ```asm
        stp    x19,x20,[sp,#-80]!       // pre-indexed, save in 1st FP/INT reg-pair
        stp    x21,x22,[sp,#16]         // ...
        stp    x23,lr,[sp,#32]          // save last Int reg and lr
        stp    d8,d9,[sp,#48]           // save FP reg-pair (optional)
        stp    d10,d11,[sp,#64]         // ...
        sub    sp,sp,#(framesz-80)      // allocate the remaining local area
    ```

   Oppure, con numero pari salvati in registri int,

    ```asm
        stp    x19,x20,[sp,#-80]!       // pre-indexed, save in 1st FP/INT reg-pair
        stp    x21,x22,[sp,#16]         // ...
        str    lr,[sp,#32]              // save lr
        stp    d8,d9,[sp,#40]           // save FP reg-pair (optional)
        stp    d10,d11,[sp,#56]         // ...
        sub    sp,sp,#(framesz-80)      // allocate the remaining local area
    ```

   Solo x19 salvati:

    ```asm
        sub    sp,sp,#16                // reg save area allocation*
        stp    x19,lr,[sp]              // save x19, lr
        sub    sp,sp,#(framesz-16)      // allocate the remaining local area
    ```

   \*L'allocazione dell'area di salvataggio reg non viene ripiegata in STP perché non è possibile rappresentare un reg-LR STP pre-indicizzato con i codici di rimozione.

   È possibile accedere a tutte le variabili locali in base a SP. \<x29> punta al frame precedente.

1. Concatenato, #framesz \< = 512, #outsz = 0

    ```asm
        stp    x29,lr,[sp,#-framesz]!       // pre-indexed, save <x29,lr>
        mov    x29,sp                       // x29 points to bottom of stack
        stp    x19,x20,[sp,#(framesz-32)]   // save INT pair
        stp    d8,d9,[sp,#(framesz-16)]     // save FP pair
    ```

   Rispetto al primo esempio di prologo precedente, il vantaggio è che tutte le istruzioni di salvataggio del registro sono pronte per l'esecuzione dopo una sola istruzione di allocazione dello stack. Ciò significa che non esiste alcuna dipendenza da SP che impedisce il parallelismo del livello di istruzione.

1. Dimensioni del frame concatenate > 512 (facoltativo per le funzioni senza alloca)

    ```asm
        stp    x29,lr,[sp,#-80]!            // pre-indexed, save <x29,lr>
        stp    x19,x20,[sp,#16]             // save in INT regs
        stp    x21,x22,[sp,#32]             // ...
        stp    d8,d9,[sp,#48]               // save in FP regs
        stp    d10,d11,[sp,#64]
        mov    x29,sp                       // x29 points to top of local area
        sub    sp,sp,#(framesz-80)          // allocate the remaining local area
    ```

   A scopo di ottimizzazione, x29 può essere posizionato in qualsiasi posizione nell'area locale per fornire una migliore copertura per la modalità di indirizzamento degli offset "reg-Pair" e pre-/post-indexed. È possibile accedere alle variabili locali sotto i puntatori ai frame basati su SP.

1. Dimensioni del frame concatenate > 4K, con o senza alloca (),

    ```asm
        stp    x29,lr,[sp,#-80]!            // pre-indexed, save <x29,lr>
        stp    x19,x20,[sp,#16]             // save in INT regs
        stp    x21,x22,[sp,#32]             // ...
        stp    d8,d9,[sp,#48]               // save in FP regs
        stp    d10,d11,[sp,#64]
        mov    x29,sp                       // x29 points to top of local area
        mov    x15,#(framesz/16)
        bl     __chkstk
        sub    sp,sp,x15,lsl#4              // allocate remaining frame
                                            // end of prolog
        ...
        sub    sp,sp,#alloca                // more alloca() in body
        ...
                                            // beginning of epilog
        mov    sp,x29                       // sp points to top of local area
        ldp    d10,d11,[sp,#64]
        ...
        ldp    x29,lr,[sp],#80              // post-indexed, reload <x29,lr>
    ```

## <a name="arm64-exception-handling-information"></a>Informazioni sulla gestione delle eccezioni ARM64

### <a name="pdata-records"></a>. pData record

I record. pData sono una matrice ordinata di elementi a lunghezza fissa che descrivono ogni funzione di modifica dello stack in un file binario PE. La frase "stack-manipolazione" è significativa: le funzioni foglia che non richiedono alcuna risorsa di archiviazione locale e non devono salvare/ripristinare i registri non volatili, non richiedono un record. pdata. Questi record devono essere omessi in modo esplicito per risparmiare spazio. Una rimozione da una di queste funzioni può ottenere l'indirizzo mittente direttamente da LR per passare al chiamante.

Ogni record. pData per ARM64 ha una lunghezza di 8 byte. Il formato generale di ogni record posiziona il RVA a 32 bit della funzione all'inizio nella prima parola, seguito da una seconda parola che contiene un puntatore a un blocco XData a lunghezza variabile o da una parola compressa che descrive una sequenza di rimozione di una funzione canonica.

![layout del record. pData](media/arm64-exception-handling-pdata-record.png "layout del record. pData")

I campi sono i seguenti:

- Il **primo RVA** della funzione è l'rva a 32 bit dell'inizio della funzione.

- **Flag** è un campo a 2 bit che indica come interpretare i restanti 30 bit della seconda parola. pdata. Se il **flag** è 0, i bit rimanenti formano un **RVA di informazioni sull'eccezione** (con i due bit più bassi implicitamente 0). Se **flag** è diverso da zero, i bit rimanenti formano una struttura di **dati di rimozione compresso** .

- **Informazioni sull'eccezione RVA** è l'indirizzo della struttura di informazioni sulle eccezioni a lunghezza variabile, archiviata nella sezione. XData. Questi dati devono essere allineati a 4 byte.

- I **dati di rimozione** compressi sono una descrizione compressa delle operazioni necessarie per la rimozione da una funzione, presumendo una forma canonica. In questo caso non sono necessari record .xdata.

### <a name="xdata-records"></a>record. XData

Quando il formato di rimozione compresso non è sufficiente per descrivere la rimozione di una funzione, è necessario creare un record .xdata a lunghezza variabile. L'indirizzo di questo record è archiviato nella seconda parola del record .pdata. Il formato di. XData è un set di parole di lunghezza variabile compresso:

![layout del record. XData](media/arm64-exception-handling-xdata-record.png "layout del record. XData")

Questi dati sono suddivisi in quattro sezioni:

1. Intestazione a 1 o 2 parole che descrive le dimensioni complessive della struttura e fornisce i dati della funzione chiave. La seconda parola è presente solo se i campi **conteggio epilogo** e **parole codice** sono impostati su 0. L'intestazione presenta questi campi di bit:

   a. La **lunghezza della funzione** è un campo a 18 bit. Indica la lunghezza totale della funzione in byte, divisa per 4. Se una funzione è maggiore di 1 milione, per descrivere la funzione è necessario usare più record. pdata e. XData. Per ulteriori informazioni, vedere la sezione [funzioni di grandi dimensioni](#large-functions) .

   b. **Vers** è un campo a 2 bit. Viene descritta la versione dei rimanenti. XData. Attualmente, è definita solo la versione 0, quindi i valori di 1-3 non sono consentiti.

   c. **X** è un campo a 1 bit. Indica la presenza (1) o l'assenza (0) dei dati dell'eccezione.

   d. **E** è un campo a 1 bit. Indica che le informazioni che descrivono un singolo epilogo vengono compresse nell'intestazione (1) anziché richiedere ulteriori parole di ambito in un secondo momento (0).

   e. Il **conteggio degli epiloghi** è un campo a 5 bit che ha due significati, a seconda dello stato del bit **E** :

      1. Se **E** è 0, specifica il conteggio del numero totale di ambiti di epilogo descritti nella sezione 2. Se nella funzione sono presenti più di 31 ambiti, il campo **parole del codice** deve essere impostato su 0 per indicare che è necessaria una parola di estensione.

      2. Se **e** è 1, questo campo specifica l'indice del primo codice di rimozione che descrive la sola e l'epilogo.

   f. **Code Words** è un campo a 5 bit che specifica il numero di parole a 32 bit necessarie per contenere tutti i codici di rimozione nella sezione 3. Se sono necessarie più di 31 parole, ovvero se sono presenti più di 124 byte di codice di rimozione, questo campo deve essere 0 per indicare che è necessaria una parola di estensione.

   g. Il **numero di epiloghi** estesi e le **parole di codice esteso** sono rispettivamente campi a 16 bit e a 8 bit. Forniscono più spazio per la codifica di un numero insolitamente elevato di epilogo o di un numero insolitamente elevato di parole di codice di rimozione. La parola di estensione che contiene questi campi è presente solo se i campi **conteggio epilogo** e **parole codice** nella prima parola di intestazione sono pari a 0.

1. Se il **conteggio degli epiloghi** non è zero, un elenco di informazioni sugli ambiti di epilogo, compresso uno in una parola, viene eseguito dopo l'intestazione e l'intestazione estesa facoltativa. Vengono archiviati in ordine di aumento dell'offset iniziale. Ogni ambito contiene i seguenti bit:

   a. L' **offset iniziale dell'epilogo** è un campo a 18 bit che presenta l'offset in byte, diviso per 4, dell'epilogo relativo all'inizio della funzione.

   b. **Res** è un campo a 4 bit riservato per l'espansione futura. Il suo valore deve essere 0.

   c. L' **indice iniziale epilogo** è un campo a 10 bit (2 più bit rispetto a **parole di codice esteso**). Indica l'indice di byte del primo codice di rimozione che descrive questo epilogo.

1. Dopo che l'elenco degli ambiti di epilogo è costituito da una matrice di byte che contiene codici di rimozione, descritti in dettaglio in una sezione successiva. Questa matrice viene riempita alla fine fino al più vicino confine di parola completa. I codici di rimozione vengono scritti in questa matrice. Iniziano con quello più vicino al corpo della funzione e si spostano verso i bordi della funzione. I byte per ogni codice di rimozione vengono archiviati in ordine big endian, in modo che possano essere recuperati direttamente, iniziando prima con il byte più significativo, che identifica l'operazione e la lunghezza del resto del codice.

1. Infine, dopo i byte del codice di rimozione, se il bit **X** nell'intestazione è stato impostato su 1, vengono fornite le informazioni del gestore di eccezioni. È costituito da un singolo **gestore di eccezioni RVA** che fornisce l'indirizzo del gestore di eccezioni. Viene seguita immediatamente da una quantità di dati a lunghezza variabile richiesta dal gestore di eccezioni.

Il record. XData è progettato in modo che sia possibile recuperare i primi 8 byte e usarli per calcolare le dimensioni complete del record, meno la lunghezza dei dati di eccezione di dimensioni variabili seguenti. Il frammento di codice seguente calcola le dimensioni del record:

```cpp
ULONG ComputeXdataSize(PULONG *Xdata)
{
    ULONG EpilogScopes;
    ULONG Size;
    ULONG UnwindWords;

    if ((Xdata[0] >> 27) != 0) {
        Size = 4;
        EpilogScopes = (Xdata[0] >> 22) & 0x1f;
        UnwindWords = (Xdata[0] >> 27) & 0x0f;
    } else {
        Size = 8;
        EpilogScopes = Xdata[1] & 0xffff;
        UnwindWords = (Xdata[1] >> 16) & 0xff;
    }

    Size += 4 * EpilogScopes;
    Size += 4 * UnwindWords;
    if (Xdata[0] & (1 << 20)) {
        Size += 4;        // exception handler RVA
    }
    return Size;
}
```

Anche se il prologo e ogni epilogo hanno un proprio indice nei codici di rimozione, la tabella viene condivisa tra di essi. È interamente possibile (e non completamente insolito) che possono condividere tutti gli stessi codici. Per un esempio, vedere l'esempio 2 nella sezione degli [esempi](#examples) . I writer del compilatore dovrebbero ottimizzare per questo caso, in particolare perché l'indice più grande che è possibile specificare è 255, che limita il numero totale di codici di rimozione per una funzione specifica.

### <a name="unwind-codes"></a>Codici di rimozione

La matrice di codici di rimozione è un pool di sequenze che descrivono esattamente come annullare gli effetti del prologo, archiviati nello stesso ordine in cui le operazioni devono essere annullate. I codici di rimozione possono essere considerati come un piccolo set di istruzioni, codificato come stringa di byte. Al termine dell'esecuzione, l'indirizzo restituito alla funzione chiamante si trova nel registro LR. Tutti i registri non volatili vengono ripristinati in base ai relativi valori nel momento in cui è stata chiamata la funzione.

Se le eccezioni si verificavano solo all'interno di un corpo della funzione e mai all'interno di un prologo o di un epilogo, sarebbe necessaria una sola sequenza. Tuttavia, il modello di rimozione di Windows richiede che il codice possa essere rimosso dall'interno di un prologo o epilogo parzialmente eseguito. Per soddisfare questo requisito, i codici di rimozione sono stati progettati accuratamente in modo da mappare senza ambiguità 1:1 a ogni codice operativo pertinente nel prologo e nell'epilogo. Questa progettazione presenta diverse implicazioni:

1. Contando il numero di codici di rimozione, è possibile calcolare la lunghezza del prologo e dell'epilogo.

1. Contando il numero di istruzioni oltre l'inizio di un ambito di epilogo, è possibile ignorare il numero equivalente di codici di rimozione. È quindi possibile eseguire il resto di una sequenza per completare la rimozione parzialmente eseguita dall'epilogo.

1. Contando il numero di istruzioni prima della fine del prologo, è possibile ignorare il numero equivalente di codici di rimozione. È quindi possibile eseguire il resto della sequenza per annullare solo le parti del prologo che hanno completato l'esecuzione.

I codici di rimozione sono codificati in base alla tabella seguente. Tutti i codici di rimozione sono un byte singolo o doppio, ad eccezione di quello che alloca un grande stack. Ci sono completamente 21 codici di rimozione. Ogni codice di rimozione esegue il mapping di una sola istruzione nel prologo/epilogo, per consentire la rimozione dei proregistri parzialmente eseguiti e di epilogo.

|Codice di rimozione|BITS e interpretazione|
|-|-|
|`alloc_s`|000xxxxx: allocare un piccolo stack con dimensioni pari a \< 512 (2 ^ 5 * 16).|
|`save_r19r20_x`|    001zzzzz: Save \< x19, x20> pair at `[sp-#Z*8]!` , offset pre-indicizzato >=-248 |
|`save_fplr`|        01zzzzzz: Save \< x29, lr> pair at `[sp+#Z*8]` , offset \< = 504. |
|`save_fplr_x`|        10zzzzzz: Save \< x29, lr> pair at `[sp-(#Z+1)*8]!` , offset pre-indicizzato >=-512 |
|`alloc_m`|        11000xxx'xxxxxxxx: allocare stack di grandi dimensioni con dimensioni \< 16K (2 ^ 11 * 16). |
|`save_regp`|        110010xx'xxzzzzzz: Salva la coppia x (19 + #X) a `[sp+#Z*8]` , offset \< = 504 |
|`save_regp_x`|        110011xx'xxzzzzzz: Save Pair x (19 + #X) at `[sp-(#Z+1)*8]!` , offset pre-indicizzato >=-512 |
|`save_reg`|        110100xx'xxzzzzzz: Salva reg x (19 + #X) at `[sp+#Z*8]` , offset \< = 504 |
|`save_reg_x`|        1101010x'xxxzzzzz: Salva reg x (19 + #X) at `[sp-(#Z+1)*8]!` , offset pre-indicizzato >=-256 |
|`save_lrpair`|         1101011x'xxzzzzzz: Save pair \< x (19 + 2 * #X), lr> at `[sp+#Z*8]` , offset \< = 504 |
|`save_fregp`|        1101100x'xxzzzzzz: Salva coppia d (8 + #X) a `[sp+#Z*8]` , offset \< = 504 |
|`save_fregp_x`|        1101101x'xxzzzzzz: Salva coppia d (8 + #X), a `[sp-(#Z+1)*8]!` , offset pre-indicizzato >=-512 |
|`save_freg`|        1101110x'xxzzzzzz: Salva reg d (8 + #X) at `[sp+#Z*8]` , offset \< = 504 |
|`save_freg_x`|        11011110' xxxzzzzz: Save reg d (8 + #X) at `[sp-(#Z+1)*8]!` , offset pre-indicizzato >=-256 |
|`alloc_l`|         11100000' xxxxxxxx'xxxxxxxx'xxxxxxxx: allocare stack di grandi dimensioni con dimensioni \< 256M (2 ^ 24 * 16) |
|`set_fp`|        11100001: configurare x29: con:`mov x29,sp` |
|`add_fp`|        11100010' xxxxxxxx: configurare x29 con:`add x29,sp,#x*8` |
|`nop`|            11100011: non è richiesta alcuna operazione di rimozione. |
|`end`|            11100100: fine del codice di rimozione. Implica RET in epilogo. |
|`end_c`|        11100101: fine del codice di rimozione nell'ambito concatenato corrente. |
|`save_next`|        11100110: salvare la coppia di registro int o FP successiva non volatile. |
| |            11100111: riservato |
| |              11101xxx: riservato per i casi di stack personalizzati indicati di seguito solo per le routine ASM |
| |              11101000: stack personalizzato per MSFT_OP_TRAP_FRAME |
| |              11101001: stack personalizzato per MSFT_OP_MACHINE_FRAME |
| |              11101010: stack personalizzato per MSFT_OP_CONTEXT |
| |              11101100: stack personalizzato per MSFT_OP_CLEAR_UNWOUND_TO_CALL |
| |              1111xxxx: riservato |

Nelle istruzioni con valori di grandi dimensioni che coprono più byte, i bit più significativi vengono archiviati per primi. Questa progettazione consente di trovare la dimensione totale in byte del codice di rimozione cercando solo il primo byte del codice. Poiché ogni codice di rimozione è mappato esattamente a un'istruzione in un prologo o un epilogo, è possibile calcolare la dimensione del prologo o dell'epilogo. È possibile spostarsi dall'inizio della sequenza fino alla fine e usare una tabella di ricerca o un dispositivo simile per determinare la durata del codice operativo corrispondente.

L'indirizzamento dell'offset dopo l'indicizzazione non è consentito in un prologo. Tutti gli intervalli di offset (#Z) corrispondono alla codifica dell'indirizzamento STP/STR eccetto `save_r19r20_x` , in cui 248 è sufficiente per tutte le aree di salvataggio (10 registri int + 8 registri FP + 8 registri di input).

`save_next`deve seguire una coppia di registri di salvataggio per int o FP volatile: `save_regp` ,, `save_regp_x` `save_fregp` , `save_fregp_x` , `save_r19r20_x` o un altro `save_next` . Salva la coppia di registri successiva nello slot a 16 byte successivo nell'ordine "crescente". Un `save_next` fa riferimento alla prima coppia di registri FP quando segue l'oggetto `save-next` che denota l'ultima coppia di registri int.

Poiché le dimensioni delle normali istruzioni return e Jump sono le stesse, non è necessario un `end` codice di rimozione separato per gli scenari di chiamata tail.

`end_c`è progettato per gestire frammenti di funzione non contigui ai fini dell'ottimizzazione. Un oggetto `end_c` che indica la fine dei codici di rimozione nell'ambito corrente deve essere seguito da un'altra serie di codice di rimozione terminata con un valore reale `end` . I codici di rimozione tra `end_c` e `end` rappresentano le operazioni di prologo nell'area padre (Prologo "fantasma").  Altri dettagli ed esempi sono descritti nella sezione seguente.

### <a name="packed-unwind-data"></a>Dati di rimozione compressi

Per le funzioni i cui Prolog e epilogo seguono la forma canonica descritta di seguito, è possibile usare i dati di rimozione compressi. Elimina la necessità di un record. XData completamente e riduce significativamente il costo di fornire dati di rimozione. I registri e epilogo canonici sono progettati per soddisfare i requisiti comuni di una funzione semplice: uno che non richiede un gestore di eccezioni e che esegue le operazioni di installazione e teardown in ordine standard.

Il formato di un record. pdata con dati di rimozione compressi ha un aspetto simile al seguente:

![record. pdata con dati di rimozione compressi](media/arm64-exception-handling-packed-unwind-data.png "record. pdata con dati di rimozione compressi")

I campi sono i seguenti:

- Il **primo RVA** della funzione è l'rva a 32 bit dell'inizio della funzione.
- **Flag** è un campo a 2 bit, come descritto in precedenza, con i significati seguenti:
  - 00 = dati di rimozione compressi non utilizzati; bit rimanenti che puntano a un record. XData
  - 01 = dati di rimozione compressi usati con un singolo prologo e un epilogo all'inizio e alla fine dell'ambito
  - 10 = dati di rimozione compressi utilizzati per il codice senza prologo ed epilogo. Utile per la descrizione di segmenti di funzione separati
  - 11 = riservato.
- La **lunghezza della funzione** è un campo a 11 bit che fornisce la lunghezza dell'intera funzione in byte, divisa per 4. Se la funzione è maggiore di 8K, è necessario usare un record. XData completo.
- **Dimensioni frame** è un campo a 9 bit che indica il numero di byte dello stack allocato per la funzione, divisa per 16. Le funzioni che allocano maggiore di (8 KB) byte dello stack devono usare un record. XData completo. Include l'area della variabile locale, l'area dei parametri in uscita, l'area int e FP salvata dal chiamato e l'area dei parametri Home, ma esclude l'area di allocazione dinamica.
- **CR** è un flag a 2 bit che indica se la funzione include istruzioni aggiuntive per la configurazione di una catena di frame e di un collegamento di ritorno:
  - 00 = la funzione non concatenata, \< x29, lr> coppia non viene salvata nello stack.
  - 01 = funzione non concatenata, \< lr> salvato nello stack
  - 10 = riservato;
  - 11 = funzione concatenata, viene usata un'istruzione di coppia Store/Load in prologo/epilogo \< x29, lr>
- **H** è un flag a 1 bit che indica se la funzione ospita i registri di parametri Integer (x0-x7) archiviando tali registri all'inizio della funzione. (0 = non Home registra, 1 = Home registers).
- **RegI** è un campo a 4 bit che indica il numero di registri int non volatili (x19-X28) salvati nella posizione dello stack canonica.
- **RegF** è un campo a 3 bit che indica il numero di registri FP non volatili (D8-D15) salvati nella posizione dello stack canonica. (RegF = 0: non è stato salvato alcun registro FP; RegF>0: RegF + 1 registri FP vengono salvati). Non è possibile usare i dati di rimozione compressi per la funzione che salva un solo registro FP.

I proregistri canonici che rientrano nelle categorie 1, 2 (senza area parametri in uscita), 3 e 4 nella sezione precedente possono essere rappresentati da un formato di rimozione compresso.  Il epilogo per le funzioni canoniche segue un formato simile, ad eccezione di **H** non ha alcun effetto, l' `set_fp` istruzione viene omessa e l'ordine dei passaggi e le istruzioni in ogni passaggio vengono invertiti nell'epilogo. L'algoritmo per compresso. XData segue questi passaggi, descritti in dettaglio nella tabella seguente:

Passaggio 0: pre-calcolo delle dimensioni di ogni area.

Passaggio 1: salvare i registri di tipo int chiamato-salvati.

Passaggio 2: questo passaggio è specifico per il tipo 4 nelle prime sezioni. LR viene salvato alla fine dell'area int.

Passaggio 3: salvare i registri salvati dal chiamato FP.

Passaggio 4: salvare gli argomenti di input nell'area dei parametri Home.

Passaggio 5: allocare lo stack rimanente, tra cui l'area locale, \< x29, la coppia di> LR e l'area parametri in uscita. 5a corrisponde a canonico di tipo 1. 5b e 5C sono per i tipi canonici 2. 5D e 5e sono per il tipo 3 e il tipo 4.

N.ro passaggio|Valori di flag|istruzioni|Opcode|Codice di rimozione
-|-|-|-|-
0|||`#intsz = RegI * 8;`<br/>`if (CR==01) #intsz += 8; // lr`<br/>`#fpsz = RegF * 8;`<br/>`if(RegF) #fpsz += 8;`<br/>`#savsz=((#intsz+#fpsz+8*8*H)+0xf)&~0xf)`<br/>`#locsz = #famsz - #savsz`|
1|0 < **RegI** <= 10|RegI/2 + **regi** %2|`stp x19,x20,[sp,#savsz]!`<br/>`stp x21,x22,[sp,#16]`<br/>`...`|`save_regp_x`<br/>`save_regp`<br/>`...`
2|**CR**= = 01 *|1|`str lr,[sp,#(intsz-8)]`\*|`save_reg`
3|0 < **RegF** <= 7|(RegF + 1)/2 +<br/>(RegF + 1) %2)|`stp d8,d9,[sp,#intsz]`\*\*<br/>`stp d10,d11,[sp,#(intsz+16)]`<br/>`...`<br/>`str d(8+RegF),[sp,#(intsz+fpsz-8)]`|`save_fregp`<br/>`...`<br/>`save_freg`
4|**H** = = 1|4|`stp x0,x1,[sp,#(intsz+fpsz)]`<br/>`stp x2,x3,[sp,#(intsz+fpsz+16)]`<br/>`stp x4,x5,[sp,#(intsz+fpsz+32)]`<br/>`stp x6,x7,[sp,#(intsz+fpsz+48)]`|`nop`<br/>`nop`<br/>`nop`<br/>`nop`
5a|**CR** = = 11 &&  # locsz<br/> <= 512|2|`stp x29,lr,[sp,#-locsz]!`<br/>`mov x29,sp`\*\*\*|`save_fplr_x`<br/>`set_fp`
5b|**CR** = = 11 &&<br/>512 < #locsz <= 4080|3|`sub sp,sp,#locsz`<br/>`stp x29,lr,[sp,0]`<br/>`add x29,sp,0`|`alloc_m`<br/>`save_fplr`<br/>`set_fp`
5C|**CR** = = 11 &&  # locsz > 4080|4|`sub sp,sp,4080`<br/>`sub sp,sp,#(locsz-4080)`<br/>`stp x29,lr,[sp,0]`<br/>`add x29,sp,0`|`alloc_m`<br/>`alloc_s`/`alloc_m`<br/>`save_fplr`<br/>`set_fp`
5D|(**CR** = = 00 \| \| **CR**= = 01)  &&<br/>#locsz <= 4080|1|`sub sp,sp,#locsz`|`alloc_s`/`alloc_m`
5e|(**CR** = = 00 \| \| **CR**= = 01)  &&<br/>#locsz > 4080|2|`sub sp,sp,4080`<br/>`sub sp,sp,#(locsz-4080)`|`alloc_m`<br/>`alloc_s`/`alloc_m`

\*Se **CR** = = 01 e **RegI** è un numero dispari, il passaggio 2 e l'ultimo save_rep nel passaggio 1 vengono uniti in una save_regp.

\*\*Se **RegI**  ==  **CR** = = 0 e **RegF** ! = 0, il primo STP per il punto a virgola mobile esegue il decremento.

\*\*\*Nessuna istruzione corrispondente a `mov x29,sp` è presente nell'epilogo. Non è possibile usare i dati di rimozione compressi se una funzione richiede il ripristino di SP da x29.

### <a name="unwinding-partial-prologs-and-epilogs"></a>Rimozione dei proregistri parziali e epilogo

La situazione di rimozione più comune è quella in cui si è verificata l'eccezione o la chiamata nel corpo della funzione, al di fuori del prologo e di tutti epilogo. In questa situazione, la rimozione è semplice: l'operazione di rimozione inizia semplicemente a eseguire i codici nella matrice di rimozione iniziando dall'indice 0 e continuando fino a quando non viene rilevato un codice operativo finale.

È più difficile eseguire correttamente la rimozione nel caso in cui si verifichi un'eccezione o un interrupt durante l'esecuzione di un prologo o di un epilogo. In queste situazioni, il stack frame viene costruito solo parzialmente. Il problema consiste nel determinare esattamente cosa è stato fatto, per annullarlo correttamente.

Ad esempio, prendere questa sequenza di prologo e di epilogo:

```asm
0000:    stp    x29,lr,[sp,#-256]!          // save_fplr_x  256 (pre-indexed store)
0004:    stp    d8,d9,[sp,#224]             // save_fregp 0, 224
0008:    stp    x19,x20,[sp,#240]           // save_regp 0, 240
000c:    mov    x29,sp                      // set_fp
         ...
0100:    mov    sp,x29                      // set_fp
0104:    ldp    x19,x20,[sp,#240]           // save_regp 0, 240
0108:    ldp    d8,d9,[sp,224]              // save_fregp 0, 224
010c:    ldp    x29,lr,[sp],#256            // save_fplr_x  256 (post-indexed load)
0110:    ret    lr                          // end
```

Accanto a ogni codice operativo è riportato il codice di rimozione appropriato che descrive questa operazione. È possibile vedere come la serie di codici di rimozione per il prologo è un'immagine speculare esatta dei codici di rimozione per l'epilogo (senza contare l'istruzione finale dell'epilogo). Si tratta di una situazione comune ed è il motivo per cui si presuppone sempre che i codici di rimozione per il prologo siano archiviati in ordine inverso rispetto all'ordine di esecuzione del prologo.

Quindi, per entrambi i prologo e l'epilogo, viene lasciato un set comune di codici di rimozione:

`set_fp`, `save_regp 0,240`, `save_fregp,0,224`, `save_fplr_x_256`, `end`

Il caso di epilogo è semplice, poiché è in ordine normale. A partire dall'offset 0 all'interno dell'epilogo (che inizia in corrispondenza dell'offset 0x100 nella funzione), si prevede di eseguire la sequenza di rimozione completa, perché non è ancora stata eseguita alcuna operazione di pulizia. Se si trova un'istruzione in (in corrispondenza dell'offset 2 nell'epilogo), è possibile eseguire la rimozione ignorando il primo codice di rimozione. È possibile generalizzare questa situazione e presupporre un mapping 1:1 tra i codici operativi e i codici di rimozione. Quindi, per avviare la rimozione dall'istruzione *n* nell'epilogo, è consigliabile ignorare i primi *n* codici di rimozione e iniziare l'esecuzione da questa posizione.

Si scopre che una logica simile funziona per il prologo, tranne che in senso inverso. Se si avvia la rimozione dall'offset 0 nel prologo, non si vuole eseguire alcuna operazione. Se si esegue la rimozione dall'offset 2, ovvero un'istruzione in, si vuole iniziare a eseguire la sequenza di rimozione un codice di rimozione dalla fine. Tenere presente che i codici vengono archiviati in ordine inverso. Inoltre, è possibile generalizzare: se si inizia la rimozione dall'istruzione n nel prologo, è consigliabile iniziare a eseguire n codici di rimozione dalla fine dell'elenco di codici.

Non è sempre il caso che i codici di prologo e di epilogo corrispondano esattamente. Per questo motivo è possibile che la matrice di rimozione debba contenere diverse sequenze di codici. Per determinare l'offset del punto in cui iniziare l'elaborazione dei codici, utilizzare la logica seguente:

1. Se si esegue la rimozione dall'interno del corpo della funzione, iniziare a eseguire i codici di rimozione in corrispondenza dell'indice 0 e continuare fino a raggiungere un codice operativo "end".

1. Se la rimozione dall'interno di un epilogo, usare l'indice iniziale specifico di epilogo fornito con l'ambito di epilogo come punto di partenza. Calcola il numero di byte che il PC in questione è dall'inizio dell'epilogo. Procedere quindi con i codici di rimozione, ignorando i codici di rimozione fino a quando non vengono riportate tutte le istruzioni già eseguite. Quindi eseguire a partire da quel punto.

1. Per la rimozione dall'interno del prologo, usare index 0 come punto di partenza. Calcolare la lunghezza del codice di prologo dalla sequenza, quindi calcolare il numero di byte che il PC in questione è alla fine del prologo. Procedere quindi con i codici di rimozione, ignorando i codici di rimozione fino a quando non vengono riportate tutte le istruzioni non ancora eseguite. Quindi eseguire a partire da quel punto.

Queste regole indicano che i codici di rimozione per il prologo devono sempre essere i primi nella matrice. E sono anche i codici usati per la rimozione nel caso generale di rimozione dall'interno del corpo. Tutte le sequenze di codice specifiche dell'epilogo devono essere seguite immediatamente dopo.

### <a name="function-fragments"></a>Frammenti di funzione

Per scopi di ottimizzazione del codice e altri motivi, può essere preferibile suddividere una funzione in frammenti separati (detti anche aree). Quando si divide, ogni frammento di funzione risultante richiede il proprio record. pData (ed eventualmente. XData) separato.

Per ogni frammento secondario separato con il proprio prologo, è previsto che non venga eseguita alcuna regolazione dello stack nel prologo. Tutti gli spazi dello stack richiesti da un'area secondaria devono essere pre-allocati dalla relativa area padre (o chiamata area host). Questo consente di mantenere rigorosamente la manipolazione del puntatore dello stack nel prologo originale della funzione.

Un caso tipico di frammenti di funzione è "separazione del codice" con tale compilatore può spostare un'area di codice dalla relativa funzione host. Esistono tre casi insoliti che potrebbero essere causati dalla separazione del codice.

#### <a name="example"></a>Esempio

- (area 1: inizio)

    ```asm
        stp     x29,lr,[sp,#-256]!      // save_fplr_x  256 (pre-indexed store)
        stp     x19,x20,[sp,#240]       // save_regp 0, 240
        mov     x29,sp                  // set_fp
        ...
    ```

- (regione 1: fine)

- (area 3: inizio)

    ```asm
        ...
    ```

- (area 3: fine)

- (regione 2: inizio)

    ```asm
        ...
        mov     sp,x29                  // set_fp
        ldp     x19,x20,[sp,#240]       // save_regp 0, 240
        ldp     x29,lr,[sp],#256        // save_fplr_x  256 (post-indexed load)
        ret     lr                      // end
    ```

- (regione 2: fine)

1. Solo prologo (area 1: tutte le epilogo si trovano in aree separate):

   È necessario descrivere solo il prologo. Questa operazione non può essere rappresentata nel formato Compact. pdata. Nel caso di XData completo, può essere rappresentato impostando il numero di epiloghi = 0. Vedere l'area 1 nell'esempio precedente.

   Codici di rimozione: `set_fp` , `save_regp 0,240` , `save_fplr_x_256` , `end` .

1. Solo epilogo (regione 2: prologo è nell'area host)

   Si presuppone che dal controllo del tempo che salta in questa area, siano stati eseguiti tutti i codici di prologo. La rimozione parziale può essere eseguita in epilogo allo stesso modo di una funzione normale. Questo tipo di area non può essere rappresentato da Compact. pdata. Nel record. XData completo, può essere codificato con un prologo "fantasma", racchiuso tra parentesi `end_c` e una `end` coppia di codici di rimozione.  Il leader `end_c` indica che le dimensioni del prologo sono pari a zero. L'indice iniziale dell'epilogo del singolo epilogo punta a `set_fp` .

   Codice di rimozione per Region 2: `end_c` , `set_fp` , `save_regp 0,240` , `save_fplr_x_256` , `end` .

1. Nessun Prolog o epilogo (area 3: ProLogs e tutti epilogo sono in altri frammenti):

   Il formato Compact. pData può essere applicato tramite il flag di impostazione = 10. Con il record Full. XData, il numero di epiloghi è pari a 1. Il codice di rimozione è identico al codice per l'area 2 precedente, ma l'indice iniziale dell'epilogo punta anche a `end_c` . La rimozione parziale non verrà mai eseguita in questa area di codice.

Un altro caso più complesso di frammenti di funzione è "compattazione del wrapping". Il compilatore può scegliere di ritardare il salvataggio di alcuni registri salvati dal chiamato fino all'esterno del prologo della voce di funzione.

- (area 1: inizio)

    ```asm
        stp     x29,lr,[sp,#-256]!      // save_fplr_x  256 (pre-indexed store)
        stp     x19,x20,[sp,#240]       // save_regp 0, 240
        mov     x29,sp                  // set_fp
        ...
    ```

- (regione 2: inizio)

    ```asm
        stp     x21,x22,[sp,#224]       // save_regp 2, 224
        ...
        ldp     x21,x22,[sp,#224]       // save_regp 2, 224
    ```

- (regione 2: fine)

    ```asm
        ...
        mov     sp,x29                  // set_fp
        ldp     x19,x20,[sp,#240]       // save_regp 0, 240
        ldp     x29,lr,[sp],#256        // save_fplr_x  256 (post-indexed load)
        ret     lr                      // end
    ```

- (regione 1: fine)

Nel prologo dell'area 1, lo spazio dello stack è pre-allocato. Si noterà che Region 2 avrà lo stesso codice di rimozione anche se viene spostato fuori dalla relativa funzione host.

Area 1: `set_fp` , `save_regp 0,240` , `save_fplr_x_256` , `end` con l'indice iniziale dell'epilogo punta a `set_fp` come di consueto.

Area 2: `save_regp 2, 224` , `end_c` , `set_fp` , `save_regp 0,240` , `save_fplr_x_256` , `end` . Epilogo Start index punta al primo codice di rimozione `save_regp 2, 224` .

### <a name="large-functions"></a>Funzioni di grandi dimensioni

I frammenti possono essere usati per descrivere funzioni di dimensioni maggiori rispetto al limite di 1 milione imposto dai campi di bit nell'intestazione. XData. Per descrivere una funzione molto grande come questa, è necessario suddividerla in frammenti inferiori a 1 milione. Ogni frammento deve essere regolato in modo da non suddividere un epilogo in più parti.

Solo il primo frammento della funzione conterrà un prologo; tutti gli altri frammenti sono contrassegnati come privi di prologo. A seconda del numero di epilogo presenti, ogni frammento può contenere zero o più epilogo. Tenere presente che ogni ambito di epilogo in un frammento specifica l'offset iniziale rispetto all'inizio del frammento, non all'inizio della funzione.

Se un frammento non ha un prologo e nessun epilogo, richiede comunque il proprio record. pData (ed eventualmente. XData), per descrivere la modalità di rimozione dall'interno del corpo della funzione.

## <a name="examples"></a>Esempi

### <a name="example-1-frame-chained-compact-form"></a>Esempio 1: concatenato a frame, formato compatto

```asm
|Foo|     PROC
|$LN19|
    str     x19,[sp,#-0x10]!        // save_reg_x
    sub     sp,sp,#0x810            // alloc_m
    stp     fp,lr,[sp]              // save_fplr
    mov     fp,sp                   // set_fp
                                    //  end of prolog
    ...

|$pdata$Foo|
    DCD     imagerel     |$LN19|
    DCD     0x416101ed
    ;Flags[SingleProEpi] functionLength[492] RegF[0] RegI[1] H[0] frameChainReturn[Chained] frameSize[2080]
```

### <a name="example-2-frame-chained-full-form-with-mirror-prolog--epilog"></a>Esempio 2: epilogo a catena, Full-Form con prologo speculare & epilogo

```asm
|Bar|     PROC
|$LN19|
    stp     x19,x20,[sp,#-0x10]!    // save_regp_x
    stp     fp,lr,[sp,#-0x90]!      // save_fplr_x
    mov     fp,sp                   // set_fp
                                    // end of prolog
    ...
                                    // begin of epilog, a mirror sequence of Prolog
    mov     sp,fp
    ldp     fp,lr,[sp],#0x90
    ldp     x19,x20,[sp],#0x10
    ret     lr

|$pdata$Bar|
    DCD     imagerel     |$LN19|
    DCD     imagerel     |$unwind$cse2|
|$unwind$Bar|
    DCD     0x1040003d
    DCD     0x1000038
    DCD     0xe42291e1
    DCD     0xe42291e1
    ;Code Words[2], Epilog Count[1], E[0], X[0], Function Length[6660]
    ;Epilog Start Index[0], Epilog Start Offset[56]
    ;set_fp
    ;save_fplr_x
    ;save_r19r20_x
    ;end
```

L'indice iniziale di epilogo [0] punta alla stessa sequenza di codice di rimozione del prologo.

### <a name="example-3-variadic-unchained-function"></a>Esempio 3: Variadic Unchained Function

```asm
|Delegate| PROC
|$LN4|
    sub     sp,sp,#0x50
    stp     x19,lr,[sp]
    stp     x0,x1,[sp,#0x10]        // save incoming register to home area
    stp     x2,x3,[sp,#0x20]        // ...
    stp     x4,x5,[sp,#0x30]
    stp     x6,x7,[sp,#0x40]        // end of prolog
    ...
    ldp     x19,lr,[sp]             // beginning of epilog
    add     sp,sp,#0x50
    ret     lr

    AREA    |.pdata|, PDATA
|$pdata$Delegate|
    DCD     imagerel |$LN4|
    DCD     imagerel |$unwind$Delegate|

    AREA    |.xdata|, DATA
|$unwind$Delegate|
    DCD     0x18400012
    DCD     0x200000f
    DCD     0xe3e3e3e3
    DCD     0xe40500d6
    DCD     0xe40500d6
    ;Code Words[3], Epilog Count[1], E[0], X[0], Function Length[18]
    ;Epilog Start Index[4], Epilog Start Offset[15]
    ;nop        // nop for saving in home area
    ;nop        // ditto
    ;nop        // ditto
    ;nop        // ditto
    ;save_lrpair
    ;alloc_s
    ;end
```

L'indice iniziale di epilogo [4] punta al centro del codice di rimozione del prologo (riutilizzare la matrice di rimozione parzialmente).

## <a name="see-also"></a>Vedere anche

[Panoramica delle convenzioni ABI ARM64](arm64-windows-abi-conventions.md)<br/>
[Gestione delle eccezioni ARM](arm-exception-handling.md)
