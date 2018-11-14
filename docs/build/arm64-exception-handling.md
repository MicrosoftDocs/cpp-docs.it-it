---
title: Gestione delle eccezioni ARM64
ms.date: 07/11/2018
ms.openlocfilehash: 5189c399a4cbff071d2ec846008229ba76306882
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51333589"
---
# <a name="arm64-exception-handling"></a>Gestione delle eccezioni ARM64

Windows su ARM64 Usa la stessa gestione strutturata delle eccezioni meccanismo per le eccezioni asincrone generate da hardware ed eccezioni sincrone generate da software. I gestori di eccezioni specifici del linguaggio sono costruiti sulla base della gestione strutturata delle eccezioni di Windows mediante le funzioni helper del linguaggio. Questo documento descrive in Windows su ARM64 e gli helper del linguaggio utilizzati dal codice generato dal compilatore Visual C++ e dell'assembler ARM Microsoft di gestione delle eccezioni.

## <a name="goals-and-motivation"></a>Gli obiettivi generali e motivazione

Le convenzioni di eccezione rimozione dei dati e la descrizione, sono destinati a:

1. Fornire sufficienti descrizione per consentire la rimozione dell'operazione senza codice di probe in tutti i casi.

   - L'analisi del codice richiede il codice venga paginato. Ciò impedisce che in alcuni casi in cui è utile per la rimozione (traccia, il campionamento, il debug).

   - L'analisi del codice è complessa. il compilatore deve prestare attenzione a generare solo le istruzioni che l'agente di rimozione è in grado di decodifica.

   - Se per la rimozione non possono essere descritta completamente tramite l'utilizzo di codici di rimozione, quindi in alcuni casi deve eseguire il fallback alla decodifica (istruzione). Ciò aumenta la complessità globale e in una situazione ideale sarebbe evitare.

1. Supporto a metà di epilogo e di rimozione nel prologo intermedio.

   - Per la rimozione viene usata in Windows per più di gestione delle eccezioni, pertanto è fondamentale che è in grado di eseguire un'accurata di rimozione anche quando all'interno di una sequenza di codice di prologo o epilogo.

1. Richiedere una quantità minima di spazio.

   - I codici di rimozione non è necessario aggregare per aumentare notevolmente le dimensioni binarie.

   - Poiché i codici di rimozione sono probabilmente deve essere bloccata in memoria, un footprint ridotto garantisce un overhead minimo per ogni file binario caricato.

## <a name="assumptions"></a>Presupposti

Queste sono le ipotesi nella descrizione di gestione delle eccezioni:

1. Prologhi ed epiloghi tendono a eseguire il mirroring di entrambi altro. Per sfruttare questa caratteristica comune, le dimensioni dei metadati necessari per descrivere la rimozione possono essere notevolmente ridotto. All'interno del corpo della funzione, non è importante se le operazioni del prologo vengono annullate o se le operazioni dell'epilogo vengono eseguite in avanti. Entrambi devono produrre risultati identici.

1. Le funzioni nel complesso tendono a essere relativamente piccole. Diverse ottimizzazioni per lo spazio si basano su questo per ottenere la compressione dei dati più efficiente.

1. Non è presente codice condizionale nell'epilogo di una funzione.

1. Registro dei puntatori frame dedicato: se la stored procedure sp viene salvata in un altro registro (r29) nel prologo, che si registrano rimane invariati in tutta la funzione, in modo che il sp di origine può essere recuperato in qualsiasi momento.

1. A meno che il Service Pack viene salvato in un altro registro, tutte le relative modifiche del puntatore dello stack avviene esclusivamente all'interno di prologo ed epilogo.

1. Il layout dello stack frame è organizzato come descritto nella sezione successiva.

## <a name="arm64-stack-frame-layout"></a>Layout dello stack frame ARM64

![layout dello stack frame](../build/media/arm64-exception-handling-stack-frame.png "layout dello stack frame")

Per le funzioni di frame concatenati, la coppia fp e lr può essere salvata in qualsiasi posizione nell'area di variabile locale in base a considerazioni di ottimizzazione. L'obiettivo è ottimizzare il numero di variabili locali che può essere raggiunto da una singola istruzione basata su puntatore ai frame (r29) o il puntatore dello stack (sp). Tuttavia per `alloca` funzioni, deve essere collegato e r29 deve puntare alla parte inferiore dello stack. Per consentire una migliore copertura di register-coppia-addressing-modalità, non volatile registrare aave aree sono posizionate nella parte superiore dello stack dell'area locale. Ecco alcuni esempi che illustrano alcune delle sequenze di prologo della query più efficiente. Per ragioni di semplicità e migliore località della cache, l'ordine di archiviazione dei registri salvati dal chiamato in tutti i prologhi canonici è in ordine "in continua crescita di". `#framesz` di seguito rappresenta la dimensione dell'intero stack (escluso alloca area). `#localsz` e `#outsz` indicano le dimensioni di rete locale (tra cui Salva area per il \<r29, lr > coppia) e in uscita di dimensioni del parametro, rispettivamente.

1. Concatenate, #localsz \<= 512

    ```asm
        stp    r19,r20,[sp,-96]!        // pre-indexed, save in 1st FP/INT pair
        stp    d8,d9,[sp,16]            // save in FP regs (optional)
        stp    r0,r1,[sp,32]            // home params (optional)
        stp    r2,r3,[sp, 48]
        stp    r4,r5,[sp,64]
        stp    r6,r7,[sp,72]
        stp    r29, lr, [sp, -#localsz]!    // save <r29,lr> at bottom of local area
        mov    r29,sp                   // r29 points to bottom of local
        sub    sp, #outsz               // (optional for #outsz != 0)
    ```

1. Concatenate, #localsz > 512

    ```asm
        stp    r19,r20,[sp,-96]!        // pre-indexed, save in 1st FP/INT pair
        stp    d8,d9,[sp,16]            // save in FP regs (optional)
        stp    r0,r1,[sp,32]            // home params (optional)
        stp    r2,r3,[sp, 48]
        stp    r4,r5,[sp,64]
        stp    r6,r7,[sp,72]
        sub    sp,#localsz+#outsz       // allocate remaining frame
        stp    r29, lr, [sp, #outsz]    // save <r29,lr> at bottom of local area
        add    r29,sp, #outsz           // setup r29 points to bottom of local area
    ```

1. Ai, le funzioni foglia (lr non salvati)

    ```asm
        stp    r19,r20,[sp, -72]!       // pre-indexed, save in 1st FP/INT reg-pair
        stp    r21,r22,[sp, 16]
        str    r23 [sp,32]
        stp    d8,d9,[sp,40]            // save FP regs (optional)
        stp    d10,d11,[sp,56]
        sub    sp,#framesz-72           // allocate the remaining local area
    ```

   Tutte le variabili locali sono accessibili basato su provider di servizi. \<R29, lr > punta al frame precedente. Per le dimensioni del fotogramma \<= 512, il "sub sp,..." può essere ottimizzato se l'area regs salvato viene spostato nella parte inferiore dello stack. Lo svantaggio di che è che non è coerenza con altri layout precedente e salvato regs prendere parte dell'intervallo per la coppia regs e modalità di indirizzamento offset pre-elaborazione e post-indicizzate.

1. Funzioni di ai e non foglia (lr viene salvato nell'area di Int salvato)

    ```asm
        stp    r19,r20,[sp,-80]!        // pre-indexed, save in 1st FP/INT reg-pair
        stp    r21,r22,[sp,16]          // ...
        stp    r23, lr,[sp, 32]         // save last Int reg and lr
        stp    d8,d9,[sp, 48]           // save FP reg-pair (optional)
        stp    d10,d11,[sp,64]          // ...
        sub    sp,#framesz-80           // allocate the remaining local area
    ```

   Oppure, con numero pari salvato registri Int,

    ```asm
        stp    r19,r20,[sp,-72]!        // pre-indexed, save in 1st FP/INT reg-pair
        stp    r21,r22,[sp,16]          // ...
        str    lr,[sp, 32]              // save lr
        stp    d8,d9,[sp, 40]           // save FP reg-pair (optional)
        stp    d10,d11,[sp,56]          // ...
        sub    sp,#framesz-72           // allocate the remaining local area
    ```

   Solo r19 salvato:

    ```asm
        sub    sp, sp, #16              // reg save area allocation*
        stp    r19,lr,[sp,0]            // save r19, lr
        sub    sp,#framesz-16           // allocate the remaining local area
    ```

   \* Il reg Salva allocazione dell'area non è stata ridotta nel stp perché un stp pre-indicizzate reg-lr non può essere rappresentato con i codici di rimozione.

   Tutte le variabili locali sono accessibili basato su provider di servizi. \<R29 > punta al frame precedente.

1. Concatenate, #framesz \<= 512, #outsz = 0

    ```asm
        stp    r29, lr, [sp, -#framesz]!    // pre-indexed, save <r29,lr>
        mov    r29,sp                       // r29 points to bottom of stack
        stp    r19,r20,[sp, #framesz -32]   // save INT pair
        stp    d8,d9,[sp, #framesz -16]     // save FP pair
    ```

   Rispetto a prologo di #1 precedente, il vantaggio è che register tutte le istruzioni di salvataggio sono pronti per essere eseguita subito dopo un solo stack allocando (istruzione). Pertanto, non è disponibile alcuna dipendenza anti-dalla su sp che impedisce il parallelismo a livello di istruzione.

1. Concatenate, frame dimensioni > 512 (facoltativo per le funzioni senza allocazione)

    ```asm
        stp    r29, lr, [sp, -80]!          // pre-indexed, save <r29,lr>
        stp    r19,r20,[sp,16]              // save in INT regs
        stp    r21,r22,[sp,32]              // ...
        stp    d8,d9,[sp,48]                // save in FP regs
        stp    d10,d11,[sp,64]
        mov    r29,sp                       // r29 points to top of local area
        sub    sp,#framesz-80               // allocate the remaining local area
    ```

   A scopo di ottimizzazione, r29 possono essere inseriti in una posizione qualsiasi nell'area locale per fornire una migliore copertura per "reg-coppia" pre/post indexed offset e modalità di indirizzamento. Variabili locali sotto i puntatori ai frame sono accessibili basato su provider di servizi.

1. Concatenate, frame di dimensioni > 4 KB, con o senza alloca(),

    ```asm
        stp    r29, lr, [sp, -80]!          // pre-indexed, save <r29,lr>
        stp    r19,r20,[sp,16]              // save in INT regs
        stp    r21,r22,[sp,32]              // ...
        stp    d8,d9,[sp,48]                // save in FP regs
        stp    d10,d11,[sp,64]
        mov    r29,sp                       // r29 points to top of local area
        mov    r8, #framesz/16
        bl     chkstk
        sub    sp, r8*16                    // allocate remaining frame
                                            // end of prolog
        ...
        sp = alloca                         // more alloca() in body
        ...
                                            // beginning of epilog
        mov    sp,r29                       // sp points to top of local area
        ldp    d10,d11, [sp,64],
        ...
        ldp    r29, lr, [sp], -80           // post-indexed, reload <r29,lr>
    ```

## <a name="arm64-exception-handling-information"></a>Informazioni sulla gestione delle eccezioni di ARM64

### <a name="pdata-records"></a>record. pdata

I record. pdata sono una matrice ordinata di elementi a lunghezza fissa che descrivono ogni funzione di manipolazione dello stack in un file binario PE. Si noti con attenzione la frase "manipolazione dello stack": le funzioni foglia che non richiedono qualsiasi risorsa di archiviazione locale e che non è necessario salvare/ripristinare registri non volatili non richiedono un record. pdata. questi deve essere omessa in modo esplicito per risparmiare spazio. Una rimozione da una di queste funzioni possa ottenere semplicemente l'indirizzo del mittente dal LR per risalire al chiamante.

Ogni record. pdata per ARM64 è 8 byte in lunghezza. Il formato generale di avviare il RVA a 32 bit della funzione nella prima parola, seguita da un secondo con cui ogni posizioni record contiene un puntatore a un blocco. XData a lunghezza variabile oppure una parola compressa che descrive una sequenza di rimozione (funzione canonica).

![layout di record. pdata](../build/media/arm64-exception-handling-pdata-record.png "layout di record. pdata")

I campi sono come segue:

- **Funzione avviare RVA** è il RVA a 32 bit dell'inizio della funzione.

- **Flag** è un campo a 2 bit che indica come interpretare i restanti 30 bit della seconda parola. pdata. Se **Flag** è 0, quindi i bit restanti formano un' **RVA informazioni eccezione** (con i due bit inferiori implicitamente 0). Se **Flag** è diverso da zero, i bit restanti formano una **Data di rimozione compressi** struttura.

- **Eccezione informazioni RVA** è l'indirizzo della struttura di informazioni di eccezione a lunghezza variabile, archiviata nella sezione. xdata. Questi dati devono essere allineati a 4 byte.

- **Data di rimozione compressi** è una descrizione compressa delle operazioni necessarie per la rimozione da una funzione, supponendo una forma canonica. In questo caso non sono necessari record .xdata.

### <a name="xdata-records"></a>record. XData

Quando il formato di rimozione compresso non è sufficiente per descrivere la rimozione di una funzione, è necessario creare un record .xdata a lunghezza variabile. L'indirizzo di questo record è archiviato nella seconda parola del record .pdata. Il formato di. XData è un set a lunghezza variabile compresso di parole:

![layout di record. XData](../build/media/arm64-exception-handling-xdata-record.png "layout di record. XData")

Questi dati viene suddiviso in quattro sezioni:

1. Una 1 o 2 parole intestazione che descrivono la dimensione complessiva della struttura e la fornitura di dati di funzione chiave. La seconda parola è presente solo se entrambi i **conteggio di epilogo** e **parole di codice** campi vengono impostati su 0. Questi sono i campi di bit nell'intestazione:

   a. **Funzione lunghezza** è un campo a 18 bit che indica la lunghezza totale della funzione in byte, diviso 4. Se una funzione è maggiore di 1 milione, più record pdata e xdata devono essere utilizzati per descrivere la funzione. Vedere le [funzioni di grandi dimensioni](#large-functions) sezione per altri dettagli.

   b. **Vers=2.1** è un campo a 2 bit che descrive la versione degli xdata rimanenti. Al momento della stesura di questo articolo, viene definita solo la versione 0 e pertanto non sono consentiti valori 1-3.

   c. **X** è un campo a 1 bit che indica la presenza (1) o l'assenza (0) di dati dell'eccezione.

   d. **E** è un campo di bit indica che le informazioni che descrivono un singolo epilogo è compresse nell'intestazione (1) invece di richiedere l'ambito aggiuntivo parole successive (0).

   e. **Conteggio di epilogo** è un campo di bit 5 che ha due significati, a seconda dello stato del **elettronica** bit:

      1. Se **elettronica** è impostato su 0: Specifica il conteggio del numero totale di ambiti di eccezione descritti nella sezione 2. Se è presente più di 31 ambiti nella funzione, il **parole codice** campo deve essere impostato su 0 per indicare che è necessaria una parola di estensione.

      2. Se **elettronica** è impostato su 1, questo campo specifica l'indice del primo codice di rimozione che descrive solo epilogo e quello.

   f. **Codice parole** è un campo di 5 bit che specifica il numero di parole a 32 bit necessari per contenere tutti i codici di rimozione nella sezione 4. Se sono necessari più di 31 parole (ad esempio, più di 124 rimozione byte del codice), questo campo deve essere impostato su 0 per indicare che è necessaria una parola di estensione.

   g. **Il conteggio di epilogo estesa** e **estesi parole codice** campi corrispondono a 16 bit e a 8 bit, rispettivamente, che forniscono più spazio per la codifica di un numero di epiloghi insolitamente ampio o un numero insolitamente elevato di parole di codice di rimozione. La parola di estensione contenente questi campi è presente solo se entrambi i **conteggio di epilogo** e **parole di codice** campi nella prima parola di intestazione sono impostati su 0.

1. Dopo i dati dell'eccezione, se **conteggio di epilogo** è diverso da zero, è un elenco di informazioni sugli ambiti di epilogo, compresse una per una parola e archiviate in ordine di inizio offset crescente. Ogni ambito contiene i bit seguenti:

   a. **Offset di avviare epilogo** è un campo a 18 bit che descrive l'offset in byte, diviso 4, dell'epilogo rispetto all'inizio della funzione

   b. **Res** è un campo a 4 bit riservato per l'espansione futura. Il suo valore deve essere 0.

   c. **Indice iniziale di epilogo** una sorta di 10 (2 più bit rispetto **estesi parole di codice**) campo che indica l'indice byte della prima riga di codice che descrive questo epilogo di rimozione.

1. Dopo che l'elenco di ambiti di epilogo è disponibile una matrice di byte che contengono codici di rimozione, descritti in dettaglio in una sezione successiva. Questa matrice viene riempita alla fine fino al più vicino confine di parola completa. I byte sono archiviati in ordine little-endian, in modo da essere direttamente recuperabili in modalità little-endian.

1. Infine, dopo i byte di codice di rimozione (e, se il **X** bit nell'intestazione è stato impostato su 1) include le informazioni del gestore di eccezioni. Si tratta di una singola **eccezione gestore RVA** fornendo l'indirizzo del gestore eccezioni stesso, seguito immediatamente da una quantità a lunghezza variabile di dati richiesti dal gestore di eccezioni.

Il precedente del record. XData è progettato in modo che sia possibile recuperare i primi 8 byte e dal calcolo della dimensione totale del record (meno la lunghezza dei dati a dimensione variabile eccezione che segue). Il frammento di codice seguente calcola le dimensioni dei record:

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

Si noti che anche se il prologo e ogni epilogo ha un proprio indice nei codici di rimozione, la tabella è condivisa tra di essi ed è assolutamente possibile (e non del tutto insolito) che possano condividere tutti i codici di stesso (vedere l'esempio 2 nell'appendice di seguito). Writer di compilatori necessario ottimizzare questo caso, in particolare perché l'indice più grande che è possibile specificare è 255, limitando in tal modo il numero totale di codici di rimozione per una determinata funzione.

### <a name="unwind-codes"></a>Codici di rimozione

La matrice di codici di rimozione è pool di sequenze che descrive esattamente come annullare gli effetti del prologo, nell'ordine in cui le operazioni devono essere annullate. I codici di rimozione possono essere considerati come un mini set di istruzioni, codificato come stringa di byte. Una volta completata l'esecuzione, l'indirizzo restituito alla funzione chiamante è nel registro LR e tutti i registri non volatili vengono ripristinati i valori al momento che della chiamata della funzione.

Se fosse garantito che le eccezioni possono verificarsi solo all'interno di un corpo di funzione (e mai con un prologo o epilogo qualsiasi), quindi solo una singola sequenza sarebbe necessaria. Modello di rimozione di Windows richiede tuttavia che è in grado di rimozione dall'interno una parzialmente eseguito prologo o epilogo. Per soddisfare questo requisito, i codici di rimozione sono stati progettati accuratamente in modo che in modo non ambiguo di mapping 1:1 a ogni opcode pertinente nel prologo ed epilogo. Questo ha diverse implicazioni:

1. Contando il numero di codici di rimozione, è possibile calcolare la lunghezza del prologo ed epilogo.

1. Contando il numero di istruzioni dopo l'inizio di un ambito di epilogo, è possibile saltare il numero equivalente di codici di rimozione ed eseguire il resto di una sequenza per completare il parzialmente eseguita in modo che l'epilogo stava eseguendo di rimozione.

1. Contando il numero di istruzioni prima della fine del prologo, è possibile saltare il numero equivalente di codici di rimozione ed eseguire il resto della sequenza per annullare solo le parti di prologo già eseguite completamente.

I codici di rimozione sono codificati in base alla tabella riportata di seguito. Tutti i codici di rimozione sono un byte singolo o doppie, ad eccezione di quello che alloca uno stack di grandi dimensioni. Esistono totalmente 21 codice di rimozione. Ogni rimozione codice mappe esattamente un'istruzione nel prologo/epilogo per consentire la rimozione di parzialmente eseguiti prologhi ed epiloghi.

|Codice di rimozione|BITS e l'interpretazione|
|-|-|
|`alloc_s`|000xxxxx: allocazione dello stack di piccole dimensioni con dimensioni \< 512 (2 ^ 5 * 16).|
|`save_r19r20_x`|    001zzzzz: salvare \<r19, r20 > coppia in [sp-#Z * 8]!, offset pre-indicizzate > =-248 |
|`save_fplr`|        01zzzzzz: salvare \<r29, lr > associa in [sp + #Z * 8], offset \<= 504. |
|`save_fplr_x`|        10zzzzzz: salvare \<r29, lr > associa in [sp-(#Z + 1) * 8]!, offset pre-indicizzate > = -512 |
|`alloc_m`|        11000xxx'xxxxxxxx: allocazione dello stack di grandi dimensioni con dimensioni \< 16 KB (2 ^ 11 * 16). |
|`save_regp`|        110010xx'xxzzzzzz: salvare r(19+#X) coppia in [sp + #Z * 8], offset \<= 504 |
|`save_regp_x`|        110011xx'xxzzzzzz: salvare r(19+#X) coppia in [sp-(#Z + 1) * 8]!, offset pre-indicizzate > = -512 |
|`save_reg`|        110100xx'xxzzzzzz: salvare r(19+#X) reg in [sp + #Z * 8], offset \<= 504 |
|`save_reg_x`|        x 1101010'xxxzzzzz: salvare r(19+#X) reg in [sp-(#Z + 1) * 8]!, offset pre-indicizzate > = -256 |
|`save_lrpair`|         x 1101011'xxzzzzzz: salvare coppia \<r19 + 2 *#x10, lr > in [sp + #Z*8], offset \<= 504 |
|`save_fregp`|        x 1101100'xxzzzzzz: salvare d(8+#X) coppia in [sp + #Z * 8], offset \<= 504 |
|`save_fregp_x`|        x 1101101'xxzzzzzz: salvare d(8+#X) coppia, in [sp-(#Z + 1) * 8]!, offset pre-indicizzate > = -512 |
|`save_freg`|        x 1101110'xxzzzzzz: salvare d(8+#X) reg in [sp + #Z * 8], offset \<= 504 |
|`save_freg_x`|        11011110' xxxzzzzz: salvare d(8+#X) reg in [sp-(#Z + 1) * 8]!, offset pre-indicizzate > = -256 |
|`alloc_l`|         11100000' xxxxxxxx 'xxxxxxxx' xxxxxxxx: allocazione dello stack di grandi dimensioni con dimensioni \< 256M (2 ^ 24 * 16) |
|`set_fp`|        11100001: configurare r29: con: r29 mov, sp |
|`add_fp`|        11100010' xxxxxxxx: configurare r29 con: aggiungere r29, sp, #x10 * 8 |
|`nop`|            11100011: nessuna rimozione operazione è necessaria. |
|`end`|            11100100: fine del codice di rimozione. Implica ret nell'epilogo. |
|`end_c`|        11100101: fine del codice di rimozione nell'ambito corrente concatenata. |
|`save_next`|        11100110: salvare successivo Int non volatile o FP registrare coppia. |
|`arithmetic(add)`|    11100111' 000zxxxx: aggiungere reg(z) cookie a lr (0 = x28, 1 = sp); aggiungere lr, lr, reg(z) |
|`arithmetic(sub)`|    11100111' 001zxxxx: sub reg(z) cookie da lr (0 = x28, 1 = sp); Sub lr, lr, reg(z) |
|`arithmetic(eor)`|    11100111' 010zxxxx: eor lr con cookie reg(z) (0 = x28, 1 = sp); EOR lr, lr, reg(z) |
|`arithmetic(rol)`|    11100111' 0110xxxx: rol simulato di lr con cookie reg (x28); xip0 = neg x28; ROR lr, xip0 |
|`arithmetic(ror)`|    11100111' 100zxxxx: ror lr con cookie reg(z) (0 = x28, 1 = sp); ROR lr, lr, reg(z) |
| |            11100111: xxxz---:---riservato |
| |              11101xxx: riservato per casi di stack personalizzata riportati di seguito vengono generati solo per le routine di asm |
| |              11101001: personalizzato stack per MSFT_OP_TRAP_FRAME |
| |              11101010: personalizzato stack per MSFT_OP_MACHINE_FRAME |
| |              11101011: personalizzato stack per MSFT_OP_CONTEXT |
| |              1111xxxx: riservato |

Nelle istruzioni con valori di grandi dimensioni che coprono più byte, i bit più significativi vengono archiviati prima di tutto. I codici di rimozione sopra sono progettati in modo che cercando semplicemente il primo byte del codice, è possibile conoscere le dimensioni totali in byte del codice di rimozione. Dato che ogni codice di rimozione è mappato esattamente a un'istruzione di prologo/epilogo, per calcolare la dimensione del prologo o epilogo, deve essere eseguita è sufficiente scorrere dall'inizio della sequenza alla fine, usando una tabella di ricerca o un dispositivo simile per determinare quanto tempo il cor opcode risponde è.

Si noti che post-indicizzate addressing offset non sono consentito nel prologo della query. Tutti gli intervalli offset (#Z) corrispondono alla codifica di STP/STR addressing tranne `save_r19r20_x` quali 248 è sufficiente per tutte le aree (registri Int 10 + 8 FP registri + 8 registri inpui) è possibile risparmiare.

`save_next` è necessario seguire un salvataggio per Int o volatile FP registrare coppia: `save_regp`, `save_regp_x`, `save_fregp`, `save_fregp_x`, `save_r19r20_x`, o un altro `save_next`. Salva successiva coppia register nello slot a 16 byte successivo nell'ordine "scalabilità". `save-next` segue un `save_next` che indica l'ultima coppia register Int si riferisce a prima coppia di registro FP.

Poiché le dimensioni dei normali restituire e passare le istruzioni sono gli stessi, non è senza bisogno di un separati `end` codice di rimozione per gli scenari di chiamata tail.

`end_c` è progettato per gestire i frammenti di funzione non contigui a scopo di ottimizzazione. Oggetto `end_c` che indica la fine di codici di rimozione nell'ambito corrente deve essere seguita da un'altra serie di codice di rimozione è stata completata con un reale `end`. I codici di rimozione tra `end_c` e `end` rappresentano le operazioni di prologo della query nell'area padre (prologo "fantasma").  Altre informazioni dettagliate ed esempi sono descritte nella sezione seguente.

### <a name="packed-unwind-data"></a>Compressi dati di rimozione

Per le funzioni cui prologhi ed epiloghi seguire la forma canonica descritta sotto, compresse di rimozione dati possono essere utilizzati, eliminando la necessità di un record. XData interamente e riducendo in modo significativo il costo della fornitura di dati di rimozione. I prologhi canonici ed epiloghi sono progettati per soddisfare i requisiti comuni di una funzione semplice che non richiedono un gestore di eccezioni e che esegue le operazioni di impostazione e teardown in un ordine standard.

Il formato di un record. pdata con compresso di rimozione ha un aspetto dei dati simile al seguente:

![dati di rimozione di record. pdata con compressi](../build/media/arm64-exception-handling-packed-unwind-data.png "dati di rimozione di record. pdata con compresso")

I campi sono come segue:

- **Funzione avviare RVA** è il RVA a 32 bit dell'inizio della funzione.
- **Flag** è un campo di bit 2 come descritto in precedenza, con i significati seguenti:
  - 00 = compresso di rimozione dei dati non utilizzati; bit restanti punti al record. xdata, sotto
  - 01 = compresso utilizzati come descritto di seguito con singolo prologo ed epilogo all'inizio e alla fine dell'ambito di dati di rimozione
  - 10 = compresso utilizzati come descritto di seguito per il codice senza epilogo; prologo e di dati di rimozione Ciò è utile per descrivere i segmenti separati (funzione).
  - 11 = riservati;
- **Funzione lunghezza** è un campo a 11 bit che fornisce la lunghezza dell'intera funzione in byte, diviso 4. Se la funzione è maggiore di 8 KB, debba invece usare un record. XData completo.
- **Dimensione dei frame** è un campo di bit 9 che indica il numero di byte di stack allocato per questa funzione, divisa per 16. Le funzioni che allocano più grande (8k-16) byte dello stack è necessario usare un record. XData completo. Ciò include l'area di variabile locale, in uscita area dei parametri, salvati dal chiamato Int e FP area e area parametri home, ma escludendo area Allocazione dinamica.
- **CR** è un flag a 2 bit che indica se la funzione include istruzioni aggiuntive per configurare una catena di frame e il collegamento restituito:
  - 00 = funzione ai, \<r29, lr > coppia non viene salvata nello stack.
  - 01 = funzione ai, \<lr > viene salvato nello stack
  - 10 = riservati;
  - 11 = funzione concatenate, viene utilizzata un'istruzione di coppia di archivio/carico prologo/epilogo \<r29, lr >
- **H** è un flag a 1 bit che indica se la funzione privo di parametro di tipo integer (r0-r7) di registra archiviandoli all'inizio della funzione. (0 = non ospita i registri, 1 = ospita i registri).
- **RegI** è un campo a 4 bit che indica il numero di registri INT non volatile (r19-r28) salvato nel percorso canonico dello stack.
- **RegF** è un campo di 3 bit che indica il numero di registri FP non volatile (d8-d15) salvato nel percorso canonico dello stack. (0 non = Nessun FP registra salvato, m > 0: m + 1 FP registri vengono salvate). Per la funzione Salva un solo registro FP, compresse di rimozione non è possibile applicare i dati.

Prologhi canoniche che rientrano nelle categorie 1, 2 (senza area dei parametri in uscita), 3 e 4 nella sezione precedente possono essere rappresentati dal formato di rimozione compresso.  L'epilogo di una funzione per funzioni canoniche seguono un form molto simile, eccetto **H** non ha alcun effetto il `set_fp` istruzione viene omesso e l'ordine dei passaggi, nonché le istruzioni in ogni passaggio vengono invertiti nell'epilogo. L'algoritmo per compresso xdata segue questi passaggi, descritta in dettaglio nella tabella riportata di seguito:

Passaggio 0: Eseguire il pre-calcolo delle dimensioni di ogni area.

Passaggio 1: Salvare i registri salvati dal chiamato Int.

Passaggio 2: Questo passaggio è specifico di tipo 4 nelle sezioni iniziali. LR viene salvata alla fine dell'area di Int.

Passaggio 3: Salvare i registri salvati dal chiamato FP.

Passaggio 4: Salvare gli argomenti di input nell'area dei parametri home.

Passaggio 5: Allocare stack restante, tra cui LAN, \<r29, lr > di associazione e in uscita area dei parametri. 5a corrisponde al tipo canonico 1. 5b e 5C sono per il tipo canonico 2. 5D e 5e per entrambi tipo 3 e 4 di tipo.

Passaggio &|Valori di flag|n. di istruzioni|Codice operativo|Codice di rimozione
-|-|-|-|-
0|||`#intsz = RegI * 8;`<br/>`if (CR==01) #intsz += 8; // lr`<br/>`#fpsz = RegF * 8;`<br/>`if(RegF) #fpsz += 8;`<br/>`#savsz=((#intsz+#fpsz+8*H)+0xf)&~0xf)`<br/>`#locsz = #famsz - #savsz`|
1|0 < **regI** < = 10|RegI / 2 + **RegI** % 2|`stp r19,r20,[sp,#savsz]!`<br/>`stp r21,r22,[sp,16]`<br/>`...`|`save_regp_x`<br/>`save_regp`<br/>`...`
2|**CR**= = 01 *|1|`str lr,[sp, #intsz-8]`\*|`save_reg`
3|0 < **RegF** < = 7|(RegF + 1) / 2 +<br/>(RegF + 1) % 2).|`stp d8,d9,[sp, #intsz]`\*\*<br/>`stp d10,d11,[sp, #intsz+16]`<br/>`...`<br/>`str d(8+RegF),[sp, #intsz+#fpsz-8]`|`save_fregp`<br/>`...`<br/>`save_freg`
4|**H** = = 1|4|`stp r0,r1,[sp, #intsz+#fpsz]`<br/>`stp r2,r3,[sp, #intsz+#fpsz+16]`<br/>`stp r4,r5,[sp, #intsz+#fpsz+32]`<br/>`stp r6,r7,[sp, #intsz+#fpsz+48]`|`nop`<br/>`nop`<br/>`nop`<br/>`nop`
5a|**CR** = = 11 & & #locsz<br/> < = 512|2|`stp r29,lr,[sp,-#locsz]!`<br/>`mov r29,sp`\*\*\*|`save_fplr_x`<br/>`set_fp`
5b|**CR** = = 11 &AMP; &AMP;<br/>512 < #locsz < = 4088|3|`sub sp,sp, #locsz`<br/>`stp r29,lr,[sp,0]`<br/>`add r29, sp, 0`|`alloc_m`<br/>`save_fplr`<br/>`set_fp`
5C|**CR** = = 11 & & #locsz > 4088|4|`sub sp,sp,4088`<br/>`sub sp,sp, (#locsz-4088)`<br/>`stp r29,lr,[sp,0]`<br/>`add r29, sp, 0`|`alloc_m`<br/>`alloc_s`/`alloc_m`<br/>`save_fplr`<br/>`set_fp`
5D|(**CR** = = 00 \| \| **CR**= = 01) &AMP; &AMP;<br/>#locsz < = 4088|1|`sub sp,sp, #locsz`|`alloc_s`/`alloc_m`
5E|(**CR** = = 00 \| \| **CR**= = 01) &AMP; &AMP;<br/>#locsz > 4088|2|`sub sp,sp,4088`<br/>`sub sp,sp, (#locsz-4088)`|`alloc_m`<br/>`alloc_s`/`alloc_m`

\* Se **CR** = = 01 e **RegI** è un numero dispari, il passaggio 2 e ultimo save_rep nel passaggio 1 viene unito in uno save_regp.

\*\* Se **RegI** == **CR** = = 0, e **RegF** ! = 0, il primo stp per la virgola mobile non di decremento prefisso.

\*\*\* Nessuna istruzione corrispondente a `mov r29, sp` è presente nell'epilogo. Se una funzione richiede il ripristino di sp dal r29 quindi non è possibile usare compresse dei dati di rimozione.

### <a name="unwinding-partial-prologs-and-epilogs"></a>Epilogo di una funzione e rimozione di prologhi parziale

La situazione di rimozione più comune è uno in cui l'eccezione o chiamata si è verificato nel corpo della funzione, lontano dal prologo ed epilogo tutti. In questo caso, la rimozione dell'operazione è semplice: l'agente di rimozione semplicemente inizia l'esecuzione di codici di nella matrice di rimozione iniziando dall'indice 0 e continuando fino a quando non viene rilevato un codice operativo finale.

È più difficile per la corretta rimozione nel caso in cui si verifica un'eccezione o un interrupt durante l'esecuzione di un prologo o epilogo. In questi casi, lo stack frame viene costruito solo parzialmente e lo stratagemma consiste nel determinare esattamente quali sono stati eseguiti per poterle annullare correttamente.

Ad esempio, eseguire questa sequenza di prologo ed epilogo:

```asm
0000:    stp    r29, lr, [sp, -256]!        // save_fplr_x  256 (pre-indexed store)
0004:    stp    d8,d9,[sp,224]              // save_fregp 0, 224
0008:    stp    r19,r20,[sp,240]            // save_regp 0, 240
000c:    mov    r29,sp                      // set_fp
         ...
0100:    mov    sp,r29                      // set_fp
0104:    ldp    r19,r20,[sp,240]            // save_regp 0, 240
0108:    ldp    d8,d9,[sp,224]              // save_fregp 0, 224
010c:    ldp    r29, lr, [sp, -256]!        // save_fplr_x  256 (post-indexed load)
0110:    ret     lr                         // end
```

Accanto a ogni opcode è il codice di rimozione appropriato che descrive questa operazione. La prima cosa da notare è che la serie di codici di rimozione per il prologo della query è un'immagine speculare dei codici di rimozione per l'epilogo (senza contare l'istruzione finale dell'epilogo). Si tratta di una situazione comune, che per questo motivo la rimozione codici per il prologo si presumono sempre da archiviare in ordine inverso dall'ordine di esecuzione del prologo.

Di conseguenza, per sia il prologo ed epilogo, ancora con un set comune di codici di rimozione:

`set_fp`, `save_regp 0,240`, `save_fregp,0,224`, `save_fplr_x_256`, `end`

A partire dal caso di epilogo (ulteriori informazioni sono estremamente semplice perché è in ordine normale), offset 0 all'interno di epilogo (che inizia in corrispondenza dell'offset 0x100 nella funzione), è prevedibile eseguire la sequenza di rimozione completa poiché non è ancora stato fatto alcuna operazione di pulizia. Se abbiamo spaziotemporale un'istruzione in (in corrispondenza dell'offset 2 nell'epilogo), è possibile eseguire la rimozione saltando il primo codice di rimozione. Generalizzazione di questa situazione, presupponendo un mapping 1:1 tra codici operativi e codici di rimozione, è possibile stato che se si sta per la rimozione da n istruzione nell'epilogo, si dovrebbe ignorare i primi codici di rimozione n e di iniziare a eseguire da qui.

Si scopre che una logica simile è applicabile per il prologo della query, tranne in ordine inverso. Se si sta per la rimozione dall'offset 0 nel prologo, si potrebbe voler eseguire alcuna operazione. Se viene rimosso dall'offset di 2, ovvero un'istruzione in, quindi si vuole avviare l'esecuzione di rimozione sequenza un codice di rimozione dalla fine (tenere presente che i codici vengono archiviati in ordine inverso). E qui troppo viene possibile generalizzare che si sta per la rimozione da n istruzione nel prologo, da dove cominciare l'esecuzione di codici di rimozione n dalla fine dell'elenco di codici.

A questo punto, non è sempre caso in cui i codici di epilogo e prologo della query corrispondono esattamente. Per questo motivo, potrebbe essere necessario la matrice di rimozione contenga più sequenze di codici. Per determinare l'offset del punto da cui iniziare l'elaborazione di codici, usare la logica seguente:

1. Se la rimozione dall'interno il corpo della funzione, iniziare a eseguire i codici di rimozione all'indice 0 e continua fino a raggiungere un codice operativo "end".

1. Se la rimozione dall'interno di un epilogo, usare l'indice iniziale di epilogo specifiche fornita con l'ambito di epilogo come punto di partenza. Calcolare il numero di byte del computer in questione è dall'inizio dell'epilogo. Passare quindi inoltrare tramite i codici di rimozione, ignorando i codici di rimozione fino a quando tutte le istruzioni già eseguite vengono presi in considerazione. Eseguire quindi a questo punto avvio.

1. Se la rimozione dall'interno il prologo della query, usare l'indice 0 come punto di partenza. Calcolare la lunghezza del codice di prologo dalla sequenza e quindi calcolare il numero di byte del computer in questione è dalla fine del prologo. Passare quindi inoltrare tramite i codici di rimozione, ignorando i codici di rimozione fino a quando tutte le istruzioni non ancora eseguite vengono presi in considerazione. Eseguire quindi a questo punto avvio.

Di conseguenza di queste regole, i codici di rimozione per il prologo della query devono essere sempre il primo elemento nella matrice e sono anche i codici usati per la rimozione in generale il caso di rimozione dall'interno del corpo. Tutte le sequenze di codice specifico dell'epilogo devono essere immediatamente successive.

### <a name="function-fragments"></a>Frammenti di funzione

Per scopi di ottimizzazione di codice e altri motivi, potrebbe essere preferibile dividere una funzione in frammenti separati (anche chiamati aree). Quando questa operazione viene eseguita, ogni frammento di funzione risultante richiede un proprio separato pdata (e probabilmente. XData) record.

Per frammento secondario separato che ha un proprio prologo, è previsto che il prologo della query non viene effettuato alcun regolazione dello stack. Spazio richiesto per il database secondario tutti stack aree devono essere pre-allocate dalla relativa area padre (o area host chiamato). In questo modo rigorosamente la modifica del puntatore dello stack nel prologo originale della funzione.

Un caso tipico di frammenti di funzione è "code" separazione con il compilatore può spostare un'area di codice non la relativa funzione di host. Esistono tre casi insoliti risultanti dalla separazione del codice.

#### <a name="example"></a>Esempio:

- (area 1: avviare)

    ```asm
        stp     r29, lr, [sp, -256]!    // save_fplr_x  256 (pre-indexed store)
        stp     r19,r20,[sp,240]        // save_regp 0, 240
        mov     r29,sp                  // set_fp
        ...
    ```

- (area 1: fine)
- (area 3: avviare)

    ```asm
        ...
    ```

- (area 3: fine)
- (area 2: iniziare)

    ```asm
    ...
        mov     sp,r29                  // set_fp
        ldp     r19,r20,[sp,240]        // save_regp 0, 240
        ldp     r29, lr, [sp, -256]!    // save_fplr_x  256 (post-indexed load)
        ret     lr                      // end
    ```

- (area 2: fine)

1. Solo prologo (area 1: epiloghi tutti si trovano in aree separate):

   Deve essere descritto solo il prologo della query. Questo non può essere rappresentato dal formato. pdata compatto. In caso di. XData completo, questo può essere rappresentato dall'impostazione del numero di epilogo = 0. Area 1 nell'esempio precedente, vedere.

   Codici di rimozione: `set_fp`, `save_regp 0,240`, `save_fplr_x_256`, `end`.

1. Solo epiloghi (area 2: prologo della query si trova nell'area host)

   Si presuppone che il controllo ora passare a quest'area, sono stati eseguiti tutti i codici di prologo. Rimozione parziale può verificarsi in epiloghi come avviene per una funzione normale. Questo tipo di area geografica non può essere rappresentato da. pdata compatto. Nel record xdata completo, può essere codificato con un prologo "fantasma", racchiuso tra un' `end_c` e `end` coppia di codice di rimozione.  L'interlinea `end_c` indica la dimensione del prologo è zero. Epilogo indice iniziale di punti di unico epilogo per `set_fp`.

   Codice di rimozione per area 2: `end_c`, `set_fp`, `save_regp 0,240`, `save_fplr_x_256`, `end`.

1. Nessun prologhi o epiloghi (area 3: prologhi ed epiloghi tutti sono in altri frammenti):

   Formato. pdata compatto può essere applicato tramite l'impostazione Flag = 10. Con un record. XData completo, il conteggio di epilogo = 1. Rimozione codice è lo stesso di quello per area 2 precedente, ma l'indice iniziale di epilogo punta anche verso `end_c`. Rimozione parziale si verificheranno mai in questa area di codice.

Un altro caso più complesso di frammenti di funzione è "riduzione di ritorno a capo" con il compilatore può decidere di ritardare il salvataggio di alcuni registri salvati dal chiamato fino a quando non di fuori di prologo di ingresso della funzione.

- (area 1: avviare)

    ```asm
        stp     r29, lr, [sp, -256]!    // save_fplr_x  256 (pre-indexed store)
        stp     r19,r20,[sp,240]        // save_regp 0, 240
        mov     r29,sp                  // set_fp
        ...
    ```

- (area 2: iniziare)

    ```asm
        stp     r21,r22,[sp,224]        // save_regp 2, 224
        ...
        ldp     r21,r22,[sp,224]        // save_regp 2, 224
    ```

- (area 2: fine)

    ```asm
        ...
        mov     sp,r29                  // set_fp
        ldp     r19,r20,[sp,240]        // save_regp 0, 240
        ldp     r29, lr, [sp, -256]!    // save_fplr_x  256 (post-indexed load)
        ret     lr                      // end
    ```

- (area 1: fine)

Nel prologo dell'area 1, è pre-allocato lo spazio dello stack. Si noti che area 2 avrà lo stesso codice di rimozione che anche se viene spostato fuori da relativa funzione di host.

Area 1: `set_fp`, `save_regp 0,240`, `save_fplr_x_256`, `end` con l'indice iniziale di epilogo punta a `set_fp` come di consueto.

Area 2: `save_regp 2, 224`, `end_c`, `set_fp`, `save_regp 0,240`, `save_fplr_x_256`, `end`. Indice iniziale di epilogo punta per primo codice di rimozione `save_regp 2, 224`.

### <a name="large-functions"></a>Funzioni di grandi dimensioni

Frammenti possono essere usati per descrivere le funzioni che superano il limite di 1 milione imposto dai campi di bit nell'intestazione. xdata. Per descrivere una funzione di dimensioni molto grande simile al seguente, deve semplicemente essere suddiviso in frammenti inferiori a 1 milione. Ogni frammento deve essere regolato in modo da non suddividere un epilogo in più parti.

Solo il primo frammento della funzione conterrà un prologo; gli altri frammenti sono contrassegnati come non prologo della query. A seconda del numero di epiloghi presente, ogni frammento può contenere zero o più epiloghi. Tenere presente che ogni ambito di epilogo in un frammento specifica l'offset di inizio rispetto all'inizio del frammento, non all'inizio della funzione.

Se un frammento ha nessun prologo della query e nessun epilogo, necessita di un proprio pdata (e probabilmente. XData) record, per descrivere come eseguire la rimozione da all'interno del corpo della funzione.

## <a name="examples"></a>Esempi

### <a name="example-1-frame-chained-compact-form"></a>Esempio 1: Frame concatenati, compact-modulo

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

### <a name="example-2-frame-chained-full-form-with-mirror-prolog--epilog"></a>Esempio 2: Frame-concatenate, in forma completa con mirror prologo della query & epilogo

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

Si noti che EpilogStart indice [0] punta per la stessa sequenza di codice di rimozione prologo della query.

### <a name="example-3-variadic-unchained-function"></a>Esempio 3: Variadic ai (funzione)

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

Nota: EpilogStart indice [4] punta al centro del codice di rimozione prologo (parzialmente riutilizzo rimozione array).

## <a name="see-also"></a>Vedere anche

[Panoramica delle convenzioni ABI ARM64](arm64-windows-abi-conventions.md)<br/>
[Gestione delle eccezioni ARM](../build/arm-exception-handling.md)
