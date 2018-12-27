---
title: x64 la gestione delle eccezioni
ms.date: 12/17/2018
helpviewer_keywords:
- C++ exception handling, x64
- exception handling, x64
ms.assetid: 41fecd2d-3717-4643-b21c-65dcd2f18c93
ms.openlocfilehash: 33206dfb885239839c3a64436b6b540fc7d4e6e5
ms.sourcegitcommit: ff3cbe4235b6c316edcc7677f79f70c3e784ad76
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/19/2018
ms.locfileid: "53627540"
---
# <a name="x64-exception-handling"></a>x64 la gestione delle eccezioni

Panoramica della gestione strutturata delle eccezioni e gestione delle eccezioni C++ convenzioni di codifica e comportamento su x64. Per informazioni generali sulla gestione delle eccezioni, vedere [gestione delle eccezioni in Visual C++](../cpp/exception-handling-in-visual-cpp.md).

## <a name="unwind-data-for-exception-handling-debugger-support"></a>Rimozione dei dati per la gestione delle eccezioni, supporto del debugger

Diverse strutture di dati sono necessari per la gestione e supporto per il debug delle eccezioni.

### <a name="struct-runtimefunction"></a>struct RUNTIME_FUNCTION

La gestione delle eccezioni basato su tabella richiede una voce della tabella per tutte le funzioni che allocano lo spazio dello stack o chiamare un'altra funzione (ad esempio, le funzioni non foglia). Le voci della tabella (funzione) hanno il formato:

|||
|-|-|
|ULONG|Indirizzo iniziale (funzione)|
|ULONG|Indirizzo finale (funzione)|
|ULONG|Indirizzo di UNWIND_INFO|

La struttura RUNTIME_FUNCTION deve essere allineata DWORD in memoria. Tutti gli indirizzi sono relativa immagine, vale a dire, sono offset a 32 bit di indirizzo iniziale dell'immagine che contiene la voce della tabella (funzione). Queste voci sono ordinate e inserite nella sezione pdata di un'immagine di PE32 +. Per le funzioni generate in modo dinamico [compilatori JIT], il runtime per supportare queste funzioni è necessario usare RtlInstallFunctionTableCallback o RtlAddFunctionTable per fornire queste informazioni al sistema operativo. In caso contrario genererà eccezione non affidabili la gestione e il debug dei processi.

### <a name="struct-unwindinfo"></a>struct UNWIND_INFO

La struttura di informazioni sulla rimozione dei dati viene usata per registrare gli effetti di una funzione nel puntatore dello stack e in cui vengono salvati i registri non volatili sullo stack:

|||
|-|-|
|UBYTE: 3|Versione|
|UBYTE: 5|Flag|
|UBYTE|Dimensione del prologo della query|
|UBYTE|Numero di codici di rimozione|
|UBYTE: 4|Registra fotogramma|
|UBYTE: 4|Offset del Registro di frame (scala)|
|USHORT \* n|Matrice di codici di rimozione|
|variabile|Può essere del form (1) o (2) di seguito|

(1) gestore di eccezioni

|||
|-|-|
|ULONG|Indirizzo del gestore di eccezioni|
|variabile|Dati del gestore specifico del linguaggio (facoltativo)|

(2) concatenate Unwind_info

|||
|-|-|
|ULONG|Indirizzo iniziale (funzione)|
|ULONG|Indirizzo finale (funzione)|
|ULONG|Indirizzo di UNWIND_INFO|

La struttura UNWIND_INFO deve essere allineata DWORD in memoria. Ecco cosa significa che ogni campo:

- **Version**

   Numero di versione dei dati di rimozione, attualmente 1.

- **flag**

   Attualmente sono definiti tre flag:

   |Flag|Descrizione|
   |-|-|
   |`UNW_FLAG_EHANDLER`| La funzione ha un gestore di eccezioni che deve essere chiamato durante la ricerca per le funzioni che devono esaminare le eccezioni.|
   |`UNW_FLAG_UHANDLER`| La funzione ha un gestore di terminazione che deve essere chiamato durante la rimozione di un'eccezione.|
   |`UNW_FLAG_CHAININFO`| Ciò UNWIND_INFO struttura non corrisponde a quello primario per la procedura. Al contrario, concatenati UNWIND_INFO voce è il contenuto di una voce RUNTIME_FUNCTION precedente. Per informazioni, vedere [Chained strutture UNWIND_INFO](#chained-unwind-info-structures). Se questo flag è impostato, i flag UNW_FLAG_EHANDLER e UNW_FLAG_UHANDLER devono essere cancellati. Inoltre, i campi di allocazione register e fissa dello stack frame devono avere gli stessi valori come il database primario UNWIND_INFO.|

- **Dimensione del prologo della query**

   Lunghezza del prologo della funzione in byte.

- **Numero di codici di rimozione**

   Il numero di slot nella matrice di codici di rimozione. Alcuni codici di rimozione, ad esempio, UWOP_SAVE_NONVOL, richiedono più di uno slot della matrice.

- **Registra fotogramma**

   Se diverso da zero, la funzione Usa quindi un puntatore ai frame (FP) e questo campo è il numero di registro non volatile usato come puntatore ai frame, usando la stessa codifica per il campo di informazioni sul funzionamento dei nodi UNWIND_CODE.

- **Frame registrare offset (scala)**

   Se il campo frame register è diverso da zero, questo campo è l'offset in scala da RSP che viene applicato a FP registrare quando viene eseguita. Il registro fp effettiva è impostata su 16 + RSP \* questo numero, consentendo di offset da 0 a 240. Questo offset consente che punta il registro fp al centro dell'allocazione dello stack locali per i frame dello stack dinamico, consentendo una migliore densità di codice tramite le istruzioni più breve (più istruzioni possono utilizzare il formato di offset con segno a 8 bit).

- **Matrice di codici di rimozione**

   Matrice di elementi che descrive gli effetti del prologo sui registri non volatili e RSP. Vedere la sezione relativa alla struttura UNWIND_CODE per il significato dei singoli elementi. Ai fini dell'allineamento, questa matrice ha sempre un numero pari di voci e la voce finale è potenzialmente inutilizzata. In tal caso, la matrice è uno più tempo indicato dal numero di campi di codici di rimozione.

- **Indirizzo del gestore di eccezioni**

   Un puntatore relativo dell'immagine per la funzione eccezioni specifiche della lingua o il gestore di terminazione, se il flag UNW_FLAG_CHAININFO sia chiaro e uno dei flag UNW_FLAG_EHANDLER o UNW_FLAG_UHANDLER è impostato.

- **Dati del gestore specifico del linguaggio**

   Dati del gestore di eccezioni specifiche del linguaggio della funzione. Il formato dei dati è specificato e determinare completamente dal gestore di eccezioni specifiche in uso.

- **Concatenate Unwind_info**

   Se è impostato il flag UNW_FLAG_CHAININFO la struttura UNWIND_INFO termina con tre che.  Che rappresentano le informazioni di RUNTIME_FUNCTION per la funzione della struttura UNWIND_INFO.

### <a name="struct-unwindcode"></a>struct UNWIND_CODE

Matrice di codice di rimozione è utilizzata per registrare la sequenza delle operazioni nel prologo che interessano i registri non volatili e RSP. Ogni elemento di codice presenta questo formato:

|||
|-|-|
|UBYTE|Offset nel prologo|
|UBYTE: 4|Codice di operazione di rimozione|
|UBYTE: 4|Informazioni sulle operazioni|

La matrice viene ordinata per ordine decrescente di offset nel prologo.

#### <a name="offset-in-prolog"></a>Offset nel prologo

Offset dall'inizio del prologo di fine dell'istruzione che esegue questa operazione, più 1 (vale a dire, l'offset dell'inizio dell'istruzione successiva).

#### <a name="unwind-operation-code"></a>Codice di operazione di rimozione

Nota: Alcuni codici operativi richiedono un offset a un valore nel frame dello stack locali non firmato. Questo offset è dall'inizio, vale a dire, l'indirizzo più basso dell'allocazione dello stack predefinito. Se il campo registrare Frame in UNWIND_INFO è zero, questo offset è from RSP. Se il campo registrare Frame è diverso da zero, questo è l'offset dal quale RSP era presente quando il registro fp è stata stabilita. Questo corrisponde a registro FP meno l'offset di registro FP (16 \* cornice ridimensionata registrare offset in UNWIND_INFO). Se viene usato un registro FP, quindi qualsiasi codice di rimozione che accetta un offset deve essere usato solo dopo aver stabilito il registro fp nel prologo.

Per tutti i codici operativi tranne `UWOP_SAVE_XMM128` e `UWOP_SAVE_XMM128_FAR`, l'offset è sempre un multiplo di 8, perché tutti stack di interesse vengono archiviati nei limiti di 8 byte (lo stesso stack è sempre allineamento a 16 byte). Per i codici di operazione che accettano un offset breve (meno di 512 KB), il USHORT finale nei nodi per il codice contiene l'offset diviso per 8. Per i codici operativi che accettano un offset lungo (512K < = offset < 4GB), i due nodi USHORT finali per questo codice tenendo l'offset (in formato little-endian).

Per i codici operativi `UWOP_SAVE_XMM128` e `UWOP_SAVE_XMM128_FAR`, l'offset è sempre un multiplo di 16, poiché tutte le operazioni di registri XMM 128 bit devono verificarsi in memoria con allineamento a 16 byte. Pertanto, viene usato un fattore di scala pari a 16 per `UWOP_SAVE_XMM128`, consentendo l'offset di minore di 1 milione.

Il codice di operazione di rimozione è uno dei valori seguenti:

- `UWOP_PUSH_NONVOL` (0) 1 nodo

  Eseguire il push register un integer non volatili, decrementando RSP di 8. Le informazioni sulle operazioni è il numero del registro. A causa dei vincoli negli epiloghi, `UWOP_PUSH_NONVOL` codici di rimozione devono visualizzati per primi nel prologo e di conseguenza, alla fine nella matrice di codice di rimozione. Questo ordinamento relativo si applica a tutti gli altri codici di rimozione tranne `UWOP_PUSH_MACHFRAME`.

- `UWOP_ALLOC_LARGE` (1) 2 o 3 nodi

  Allocare un'area di grandi dimensioni nello stack. Esistono due forme. Se le informazioni sulle operazioni è uguale a 0, la dimensione dell'allocazione diviso per 8 viene registrato nella successiva fascia, consentendo un'allocazione fino a 512 K - 8. Se le informazioni sulle operazioni è uguale a 1, quindi la dimensione dell'allocazione non ridimensionata viene registrata nei prossimi due slot in formato little-endian, consentendo di allocazioni fino a 4GB - 8.

- `UWOP_ALLOC_SMALL` (2) 1 nodo

  Allocare un'area di piccole dimensioni nello stack. La dimensione dell'allocazione è il campo di informazioni sull'operazione \* 8 + 8, che consente di allocazioni da 8 a 128 byte.

  Il codice di rimozione per un'allocazione di stack debba usare sempre la codifica più breve possibile:

  |**Dimensione di allocazione**|**Codice di rimozione**|
  |-|-|
  |8 e 128 byte|`UWOP_ALLOC_SMALL`|
  |136 per 512K - 8 byte|`UWOP_ALLOC_LARGE`, informazioni sulle operazioni = 0|
  |G 512 KB e 4-8 byte|`UWOP_ALLOC_LARGE`, informazioni sulle operazioni = 1|

- `UWOP_SET_FPREG` (3) 1 nodo

  Stabilire il registro dei puntatori frame tramite l'impostazione del registro da un offset rispetto al valore corrente di RSP. L'offset è uguale al Frame registrare offset (ridimensionato) campo in UNWIND_INFO \* 16, che consente di offset da 0 a 240. L'uso di un offset permette di definire un puntatore ai frame che punta al centro dell'allocazione fissa dello stack, consentendo la densità di codice, consentendo più accessi di utilizzare formati di istruzioni brevi. Il campo di informazioni sull'operazione è riservato e non deve essere utilizzato.

- `UWOP_SAVE_NONVOL` (4) 2 nodi

  Salvare un registro integer non volatili nello stack utilizzando un'istruzione MOV invece di un'operazione PUSH. Questo codice viene utilizzato principalmente per *wrapping*, in cui viene salvato un registro non volatile per lo stack in una posizione che in precedenza è stato allocato. Le informazioni sulle operazioni è il numero del registro. L'offset dello stack in scala-by-8 viene registrata entro i prossimi di rimozione dello slot di codice dell'operazione, come descritto in precedenza.

- `UWOP_SAVE_NONVOL_FAR` (5) 3 nodi

  Salvare un registro integer non volatili nello stack con un offset lungo, utilizzando un'istruzione MOV invece di un'operazione PUSH. Questo codice viene utilizzato principalmente per *wrapping*, in cui viene salvato un registro non volatile per lo stack in una posizione che in precedenza è stato allocato. Le informazioni sulle operazioni è il numero del registro. L'offset dello stack non ridimensionato viene registrata entro i prossimi due rimozione slot di codice dell'operazione, come descritto in precedenza.

- `UWOP_SAVE_XMM128` (8) 2 nodi

  Salvare tutti i 128 bit di un registro XMM non volatile nello stack. Le informazioni sulle operazioni è il numero del registro. L'offset in scala per 16 stack viene registrato nella successiva fascia.

- `UWOP_SAVE_XMM128_FAR` (9) 3 nodi

  Salvare tutti i 128 bit di un registro XMM non volatile nello stack con una differenza di tempo. Le informazioni sulle operazioni è il numero del registro. L'offset dello stack non ridimensionato viene registrato nei prossimi due slot.

- `UWOP_PUSH_MACHFRAME` (10) 1 nodo

  Push di un frame di computer.  Viene utilizzato per registrare l'effetto di un'eccezione o un interrupt hardware. Esistono due forme. Se le informazioni sulle operazioni è uguale a 0, uno dei frame è stato inserito nello stack:

  |||
  |-|-|
  |RSP + 32|SS|
  |RSP + 24|RSP precedente|
  |RSP + 16|CONTENUTO|
  |RSP + 8|CS|
  |RSP|RIP|

  Se le informazioni sull'operazione equivale a 1, quindi uno dei frame è stato eseguito il push:

  |||
  |-|-|
  |RSP + 40|SS|
  |RSP + 32|RSP precedente|
  |RSP + 24|CONTENUTO|
  |RSP + 16|CS|
  |RSP + 8|RIP|
  |RSP|Codice di errore|

  Questo codice di rimozione viene sempre visualizzata in un prologo fittizio, che non viene mai eseguito, ma invece precede il punto di ingresso reale di una routine di interrupt ed esiste solo per fornire un'area per simulare il push di una cornice della macchina. `UWOP_PUSH_MACHFRAME` Registra la simulazione, che indica che la macchina è concettualmente eseguita questa operazione:

  1. Apri nuova finestra dell'indirizzo restituito RIP dall'inizio dello stack in *Temp*
  
  1. SS push

  1. Eseguire il push RSP precedente

  1. Push contenuto

  1. Eseguire il push. CS

  1. Eseguire il push *Temp*

  1. Push del codice di errore (se le informazioni di binding è uguale a 1)

  Simulato `UWOP_PUSH_MACHFRAME` decrementa operazione RSP di 40 (informazioni di binding è uguale a 0) o 48 (informazioni di binding è uguale a 1).

#### <a name="operation-info"></a>Informazioni sulle operazioni

Il significato dei bit info operazione varia a seconda del codice operativo. Per codificare un registro per utilizzo generico (integer), viene usato questo mapping:

|||
|-|-|
|0|RAX|
|1|RCX|
|2|RDX|
|3|RBX|
|4|RSP|
|5|RBP|
|6|RSI|
|7|RDI|
|da 8 a 15|R8 a R15|

### <a name="chained-unwind-info-structures"></a>Concatenate strutture UNWIND_INFO

Se è impostato il flag UNW_FLAG_CHAININFO, significa che una struttura di informazioni di rimozione è uno secondario e il campo indirizzo eccezione gestore/concatenate-info condiviso contiene le informazioni di rimozione primario. Questo codice di esempio consente di recuperare il database primario informazioni, supponendo che di rimozione `unwindInfo` è la struttura che contiene il UNW_FLAG_CHAININFO flag impostato.

```cpp
PRUNTIME_FUNCTION primaryUwindInfo = (PRUNTIME_FUNCTION)&(unwindInfo->UnwindCode[( unwindInfo->CountOfCodes + 1 ) & ~1]);
```

Questa struttura è utile in due situazioni. In primo luogo, può essere utilizzato per segmenti di codice non contigui. Con questa struttura, è possibile ridurre le dimensioni delle informazioni di rimozione necessarie, perché non è necessario duplicare la matrice di codici di rimozione dalla UNWIND_INFO principale.

È anche possibile usare UNWIND_INFO per raggruppare i salvataggi dei registri volatili. Il compilatore può ritardare il salvataggio alcuni registri volatili fino a quando non è di fuori di prologo di ingresso della funzione. È possibile registrare la voce UNWIND_INFO principale per la parte della funzione prima del codice raggruppato e configurando UNWIND_INFO con una dimensione diversa da zero di prologo, in cui i codici di rimozione in tale struttura riflettono i salvataggi dei registri non volatili. In tal caso, i codici di rimozione sono tutte le istanze di UWOP_SAVE_NONVOL. Un raggruppamento che consente di salvare i registri non volatili tramite un'operazione PUSH o modifica il registro RSP usando un'allocazione fissa aggiuntiva dello stack non è supportato.

Un elemento UNWIND_INFO con UNW_FLAG_CHAININFO set può contenere una voce RUNTIME_FUNCTION il cui elemento UNW_FLAG_CHAININFO dispone anche di impostare, talvolta chiamato *Shrink*. Saranno successivamente concatenati UNWIND_INFO puntatori arrivano a un elemento UNWIND_INFO con UNW_FLAG_CHAININFO cancellato; si tratta dell'elemento UNWIND_INFO principale, che fa riferimento al punto di ingresso di procedura effettiva.

## <a name="unwind-procedure"></a>Procedura di rimozione

Matrice di codice di rimozione è disposta in ordine decrescente. Quando si verifica un'eccezione, il contesto completo verrà archiviato dal sistema operativo in un record di contesto. Viene quindi richiamata la logica di invio di eccezione, che viene eseguita ripetutamente questi passaggi per trovare un gestore di eccezioni:

1. Usare RIP archiviato nel record del contesto corrente per cercare una voce della tabella RUNTIME_FUNCTION che descrive la funzione corrente (o parte della funzione, per voci UNWIND_INFO concatenate).

1. Se viene trovata alcuna voce di tabella (funzione), quindi è una funzione foglia e RSP risponde direttamente il puntatore restituito. Il puntatore restituito in [RSP] viene archiviato nel contesto aggiornato, RSP simulato viene incrementato di 8 e il passaggio 1 viene ripetuto.

1. Se viene trovata una voce della tabella (funzione), RIP possono trovarsi in tre aree: a) in un epilogo, b) nel prologo o c) nel codice che può essere nascosto da un gestore di eccezioni.

   - Case un) se RIP è all'interno di un epilogo, quindi controllo esce dalla funzione, non può essere presente alcun gestore di eccezioni associati a questa eccezione per questa funzione e gli effetti dell'epilogo devono proseguire per calcolare il contesto della funzione chiamante. Viene esaminato per determinare se RIP si trova all'interno di un epilogo, il flusso di codice da RIP in. Se tale flusso di codice può essere associato alla parte finale di un epilogo, quindi si trova in un epilogo, e viene simulata la parte rimanente dell'epilogo, con il record di contesto aggiornato come ogni istruzione viene elaborato. Al termine, il passaggio 1 viene ripetuto.

   - Caso b) se RIP si trova all'interno di prologo, controllo non ha immesso la funzione, non può essere presente alcun gestore di eccezioni associati a questa eccezione per questa funzione e gli effetti del prologo devono essere annullati per calcolare il contesto della funzione chiamante. RIP rientra il prologo della query se la distanza dall'inizio della funzione a RIP è minore o uguale alla dimensione del prologo con codificata in UNWIND_INFO. Gli effetti del prologo sono svuotati l'analisi in avanti attraverso la matrice di codici di rimozione per la prima voce con un offset inferiore o uguale all'offset del RIP dall'inizio della funzione e quindi annullare l'effetto di tutti gli elementi rimanenti nella matrice di codice di rimozione. Passaggio 1 viene quindi ripetuto.

   - Caso c) se RIP non all'interno di un prologo o epilogo e la funzione con un gestore di eccezioni (UNW_FLAG_EHANDLER è impostato), quindi viene chiamato il gestore specifico del linguaggio. Il gestore esegue l'analisi dei dati e chiama filtro funzioni come appropriato. Il gestore specifico del linguaggio può restituire che venisse gestita l'eccezione o che la ricerca deve essere ripreso. Anche possibile avviare direttamente un'operazione di rimozione.

1. Se il gestore specifico del linguaggio restituisce uno stato gestito, l'esecuzione continua con il record di contesto originale.

1. Se non vi è alcun gestore specifico del linguaggio o il gestore restituisce uno stato "continua ricerca", il record di contesto deve essere reimpostato nello stato del chiamante. Questa operazione viene eseguita attraverso l'elaborazione di tutti gli elementi di matrice codice di rimozione, annullando l'effetto della ognuno. Passaggio 1 viene quindi ripetuto.

In caso di rimozione concatenate, le operazioni di base sono ancora validi. L'unica differenza è che, mentre walking la matrice di codice di rimozione per rimuovere gli effetti del prologo, quando viene raggiunta la fine della matrice, viene quindi collegato UNWIND_INFO padre e la matrice di codice di rimozione intero trovata viene esaminata. Questo tipo di collegamento continua fino a quando in arrivo presso un UNWIND_INFO senza il flag UNW_CHAINED_INFO e quindi al termine della relativa matrice di codici di rimozione.

Il set più piccolo di dati di rimozione è di 8 byte. Rappresenta una funzione che solo allocati 128 byte di stack o meno e possibilmente salvato un registro non volatile. Si tratta anche le dimensioni di un concatenate struttura di informazioni per un prologo di lunghezza zero con nessun codici di rimozione di rimozione.

## <a name="language-specific-handler"></a>Gestore specifico del linguaggio

L'indirizzo relativo del gestore specifico del linguaggio è presente in UNWIND_INFO ogni volta che vengono impostati flag UNW_FLAG_EHANDLER o UNW_FLAG_UHANDLER. Come descritto nella sezione precedente, viene chiamato il gestore specifico del linguaggio come parte della ricerca per un gestore di eccezioni o come parte di un'operazione di rimozione. Ha questo prototipo:

```cpp
typedef EXCEPTION_DISPOSITION (*PEXCEPTION_ROUTINE) (
    IN PEXCEPTION_RECORD ExceptionRecord,
    IN ULONG64 EstablisherFrame,
    IN OUT PCONTEXT ContextRecord,
    IN OUT PDISPATCHER_CONTEXT DispatcherContext
);
```

**ExceptionRecord** fornisce un puntatore a un record di eccezione, che presenta la definizione di Win64 standard.

**EstablisherFrame** è l'indirizzo di base dell'allocazione dello stack predefinito per questa funzione.

**ContextRecord** punta al contesto dell'eccezione corrente o l'ora (nel caso del gestore di eccezioni) è stata generata l'eccezione "Rimuovi" contesto (nel caso del gestore di terminazione).

**DispatcherContext** punta al contesto del dispatcher per questa funzione. Ha questa definizione:

```cpp
typedef struct _DISPATCHER_CONTEXT {
    ULONG64 ControlPc;
    ULONG64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
    ULONG64 EstablisherFrame;
    ULONG64 TargetIp;
    PCONTEXT ContextRecord;
    PEXCEPTION_ROUTINE LanguageHandler;
    PVOID HandlerData;
} DISPATCHER_CONTEXT, *PDISPATCHER_CONTEXT;
```

**ControlPc** JE hodnotou RIP all'interno di questa funzione. Questo valore è un indirizzo di eccezione o l'indirizzo in corrispondenza del quale controllo uscita della funzione. RIP consente di determinare se controllo è all'interno di un costrutto sorvegliato all'interno di questa funzione, ad esempio, un `__try` per bloccare `__try` / `__except` oppure `__try` / `__finally`.

**ImageBase** rappresenta l'immagine di base (indirizzo di caricamento) del modulo contenente questa funzione, per essere aggiunti agli offset a 32 bit utilizzati nella voce di funzione e UNWIND_INFO per registrare indirizzi relativi.

**FunctionEntry** fornisce un puntatore al RUNTIME_FUNCTION funzione voce che contiene la funzione e gli indirizzi relativi informazioni sull'immagine di base per questa funzione.

**EstablisherFrame** è l'indirizzo di base dell'allocazione dello stack predefinito per questa funzione.

**TargetIp** fornisce un indirizzo dell'istruzione facoltativa che specifica l'indirizzo di continuazione della rimozione. Questo indirizzo viene ignorato se **EstablisherFrame** non è specificato.

**ContextRecord** punta al contesto dell'eccezione, viene utilizzato per il codice di invio/rimozione a eccezione di sistema.

**LanguageHandler** punta al chiamato la routine del gestore del linguaggio specifico del linguaggio.

**HandlerData** punta ai dati del gestore specifico del linguaggio per questa funzione.

## <a name="unwind-helpers-for-masm"></a>Helper di rimozione per MASM

Per poter scrivere routine assembly appropriato, è disponibile un set di pseudo-operazioni che può essere usata in parallelo con le istruzioni di assembly effettivo per creare le appropriate. pdata e. xdata. È presente anche un set di macro che forniscono semplifica l'utilizzo delle pseudo-operazioni per la maggior parte delle situazioni.

### <a name="raw-pseudo-operations"></a>Pseudo-operazioni di non elaborate

|Operazione pseudo|Descrizione|
|-|-|
|FRAME PROC \[:*il parametro ehandler*]|Cause MASM per generare una funzione in pdata la voce di tabella e le informazioni contenute in. XData di rimozione per strutturata di una funzione il comportamento di rimozione delle eccezioni.  Se *il parametro ehandler* è presente, questa procedura viene inserita nella finestra di. xdata come gestore specifico del linguaggio.<br /><br /> Quando viene usato l'attributo FRAME, deve essere seguita da una. Direttiva ENDPROLOG.  Se la funzione è una funzione foglia (come definito in [tipi di funzione](../build/stack-usage.md#function-types)) non è necessario, perché sono il resto di queste pseudo-operazioni l'attributo FRAME.|
|. PUSHREG *registrare*|Genera una voce di codice UWOP_PUSH_NONVOL rimozione per il numero di registro specificato con l'offset corrente nel prologo.<br /><br /> Questo deve essere usato solo con registri integer non volatili.  Per i push di registri volatili, usare un. 8 ALLOCSTACK, invece|
|. SETFRAME *registrare*, *offset*|Compila nel frame registra campo e l'offset nelle informazioni di rimozione tramite il registro specificato e l'offset. L'offset deve essere un multiplo di 16 e minore o uguale a 240. Questa direttiva genera anche una rimozione codice UWOP_SET_FPREG per il registro specificato con l'offset corrente di prologo.|
|. ALLOCSTACK *dimensioni*|Genera una voce UWOP_ALLOC_SMALL o UWOP_ALLOC_LARGE con le dimensioni specificate per l'offset corrente nel prologo.<br /><br /> Il *dimensioni* operando deve essere un multiplo di 8.|
|. SAVEREG *registrare*, *offset*|Genera un UWOP_SAVE_NONVOL o una voce di codice di rimozione UWOP_SAVE_NONVOL_FAR per il registro specificato e l'offset con l'offset corrente di prologo. MASM sceglie la codifica più efficiente.<br /><br /> *offset* deve essere positivo e un multiplo di 8. *offset* è relativo alla base del frame della stored procedure, disponibile a livello generale in RSP, o, se si usa un puntatore ai frame, i puntatori ai frame non in scala.|
|. SAVEXMM128 *registrare*, *offset*|Genera un UWOP_SAVE_XMM128 o una voce di codice di rimozione UWOP_SAVE_XMM128_FAR per il registro XMM specificato e l'offset con l'offset corrente di prologo. MASM sceglie la codifica più efficiente.<br /><br /> *offset* deve essere positivo e un multiplo di 16.  *offset* è relativo alla base del frame della stored procedure, disponibile a livello generale in RSP, o, se si usa un puntatore ai frame, i puntatori ai frame non in scala.|
|. PUSHFRAME \[ *codice*]|Genera una voce di codice di rimozione UWOP_PUSH_MACHFRAME. Se l'opzione facoltativa *codice* è specificato, la voce di codice di rimozione ha un modificatore di 1. In caso contrario, il modificatore è 0.|
|.ENDPROLOG|Segnala la fine delle dichiarazioni di prologo.  Deve essere presente nei primi 255 byte della funzione.|

Ecco un prologo della funzione di esempio con un utilizzo corretto della maggior parte dei codici operativi:

```MASM
sample PROC FRAME
    db      048h; emit a REX prefix, to enable hot-patching
    push rbp
    .pushreg rbp
    sub rsp, 040h
    .allocstack 040h
    lea rbp, [rsp+020h]
    .setframe rbp, 020h
    movdqa [rbp], xmm7
    .savexmm128 xmm7, 020h ;the offset is from the base of the frame
                           ;not the scaled offset of the frame
    mov [rbp+018h], rsi
    .savereg rsi, 038h
    mov [rsp+010h], rdi
    .savereg rdi, 010h ; you can still use RSP as the base of the frame
                       ; or any other register you choose
    .endprolog

; you can modify the stack pointer outside of the prologue (similar to alloca)
; because we have a frame pointer.
; if we didn’t have a frame pointer, this would be illegal
; if we didn’t make this modification,
; there would be no need for a frame pointer

    sub rsp, 060h

; we can unwind from the next AV because of the frame pointer

    mov rax, 0
    mov rax, [rax] ; AV!

; restore the registers that weren’t saved with a push
; this isn’t part of the official epilog, as described in section 2.5

    movdqa xmm7, [rbp]
    mov rsi, [rbp+018h]
    mov rdi, [rbp-010h]

; Here’s the official epilog

    lea rsp, [rbp-020h]
    pop rbp
    ret
sample ENDP
```

### <a name="masm-macros"></a>Macro MASM

Per semplificare l'utilizzo dei [Raw Pseudo-operazioni](#raw-pseudo-operations), è disponibile un set di macro, definite in ksamd64.inc, che può essere usato per creare procedure tipiche prologhi ed epiloghi.

|Macro|Descrizione|
|-|-|
|alloc_stack(n)|Alloca uno stack frame di n byte (usando `sub rsp, n`), quindi genera informazioni (allocstack n) di rimozione appropriato|
|save_reg *reg*, *loc*|Consente di salvare un registro non volatile *reg* nello stack al RSP offset *loc*, quindi genera informazioni di rimozione appropriato. (savereg reg, loc)|
|push_reg *reg*|Effettua il push di un registro non volatile *reg* nello stack, quindi genera informazioni di rimozione appropriato. . pushreg (reg)|
|rex_push_reg *reg*|Salvare un registro non volatile nello stack utilizzando un'operazione push 2byte, quindi genera informazioni (pushreg reg) deve essere utilizzato se la notifica push è la prima istruzione nella funzione per garantire che la funzione è inserimento di rimozione appropriato.|
|save_xmm128 *reg*, *loc*|Consente di salvare un registro XMM nonvolatile *reg* nello stack al RSP offset *loc*ed emette informazioni (reg savexmm128, loc) di rimozione appropriato|
|set_frame *reg*, *offset*|Imposta il Registro di frame *reg* essere RSP + *offset* (utilizzando un `mov`, o un `lea`) ed emette informazioni (set_frame reg, offset) di rimozione appropriato|
|push_eflags|Inserisce il contenuto con un `pushfq` (istruzione) ed emette informazioni (alloc_stack 8) di rimozione appropriato|

Ecco un prologo della funzione di esempio con un utilizzo corretto delle macro:

```MASM
SkFrame struct
    Fill    dq ?; fill to 8 mod 16
    SavedRdi dq ?; saved register RDI
    SavedRsi dq ?; saved register RSI
SkFrame ends

sampleFrame struct
    Filldq?; fill to 8 mod 16
    SavedRdidq?; Saved Register RDI
    SavedRsi  dq?; Saved Register RSI
sampleFrame ends

sample2 PROC FRAME
    alloc_stack(sizeof sampleFrame)
    save_reg rdi, sampleFrame.SavedRdi
    save_reg rsi, sampleFrame.SavedRsi
    .end_prolog

; function body

    mov rsi, sampleFrame.SavedRsi[rsp]
    mov rdi, sampleFrame.SavedRdi[rsp]

; Here’s the official epilog

    add rsp, (sizeof sampleFrame)
    ret
sample2 ENDP
```

## <a name="unwind-data-definitions-in-c"></a>Rimozione di definizioni di dati c

Ecco una descrizione di C di dati di rimozione:

```C
typedef enum _UNWIND_OP_CODES {
    UWOP_PUSH_NONVOL = 0, /* info == register number */
    UWOP_ALLOC_LARGE,     /* no info, alloc size in next 2 slots */
    UWOP_ALLOC_SMALL,     /* info == size of allocation / 8 - 1 */
    UWOP_SET_FPREG,       /* no info, FP = RSP + UNWIND_INFO.FPRegOffset*16 */
    UWOP_SAVE_NONVOL,     /* info == register number, offset in next slot */
    UWOP_SAVE_NONVOL_FAR, /* info == register number, offset in next 2 slots */
    UWOP_SAVE_XMM128 = 8, /* info == XMM reg number, offset in next slot */
    UWOP_SAVE_XMM128_FAR, /* info == XMM reg number, offset in next 2 slots */
    UWOP_PUSH_MACHFRAME   /* info == 0: no error-code, 1: error-code */
} UNWIND_CODE_OPS;

typedef union _UNWIND_CODE {
    struct {
        UBYTE CodeOffset;
        UBYTE UnwindOp : 4;
        UBYTE OpInfo   : 4;
    };
    USHORT FrameOffset;
} UNWIND_CODE, *PUNWIND_CODE;

#define UNW_FLAG_EHANDLER  0x01
#define UNW_FLAG_UHANDLER  0x02
#define UNW_FLAG_CHAININFO 0x04

typedef struct _UNWIND_INFO {
    UBYTE Version       : 3;
    UBYTE Flags         : 5;
    UBYTE SizeOfProlog;
    UBYTE CountOfCodes;
    UBYTE FrameRegister : 4;
    UBYTE FrameOffset   : 4;
    UNWIND_CODE UnwindCode[1];
/*  UNWIND_CODE MoreUnwindCode[((CountOfCodes + 1) & ~1) - 1];
*   union {
*       OPTIONAL ULONG ExceptionHandler;
*       OPTIONAL ULONG FunctionEntry;
*   };
*   OPTIONAL ULONG ExceptionData[]; */
} UNWIND_INFO, *PUNWIND_INFO;

typedef struct _RUNTIME_FUNCTION {
    ULONG BeginAddress;
    ULONG EndAddress;
    ULONG UnwindData;
} RUNTIME_FUNCTION, *PRUNTIME_FUNCTION;

#define GetUnwindCodeEntry(info, index) \
    ((info)->UnwindCode[index])

#define GetLanguageSpecificDataPtr(info) \
    ((PVOID)&GetUnwindCodeEntry((info),((info)->CountOfCodes + 1) & ~1))

#define GetExceptionHandler(base, info) \
    ((PEXCEPTION_HANDLER)((base) + *(PULONG)GetLanguageSpecificDataPtr(info)))

#define GetChainedFunctionEntry(base, info) \
    ((PRUNTIME_FUNCTION)((base) + *(PULONG)GetLanguageSpecificDataPtr(info)))

#define GetExceptionDataPtr(info) \
    ((PVOID)((PULONG)GetLanguageSpecificData(info) + 1)
```

## <a name="see-also"></a>Vedere anche

[x64 convenzioni del software](../build/x64-software-conventions.md)