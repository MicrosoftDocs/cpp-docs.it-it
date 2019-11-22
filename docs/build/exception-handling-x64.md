---
title: Gestione delle eccezioni x64
ms.date: 10/14/2019
helpviewer_keywords:
- C++ exception handling, x64
- exception handling, x64
ms.assetid: 41fecd2d-3717-4643-b21c-65dcd2f18c93
ms.openlocfilehash: eff4f1a22512b597b5479dbcaabcc9d5fc93c940
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303199"
---
# <a name="x64-exception-handling"></a>Gestione delle eccezioni x64

Panoramica della gestione delle eccezioni strutturata C++ e delle convenzioni di codifica e del comportamento di gestione delle eccezioni in x64. Per informazioni generali sulla gestione delle eccezioni, vedere [gestione delle eccezioni C++in Visual ](../cpp/exception-handling-in-visual-cpp.md).

## <a name="unwind-data-for-exception-handling-debugger-support"></a>Dati di rimozione per la gestione delle eccezioni, supporto del debugger

Per la gestione delle eccezioni e il supporto del debug sono necessarie diverse strutture di dati.

### <a name="struct-runtime_function"></a>struct RUNTIME_FUNCTION

Per la gestione delle eccezioni basata su tabella è richiesta una voce di tabella per tutte le funzioni che allocano lo spazio dello stack o chiamano un'altra funzione (ad esempio, funzioni non foglia). Il formato delle voci della tabella di funzioni è:

|||
|-|-|
|ULONG|Indirizzo iniziale della funzione|
|ULONG|Indirizzo finale funzione|
|ULONG|Indirizzo informazioni di rimozione|

La struttura di RUNTIME_FUNCTION deve essere DWORD allineata in memoria. Tutti gli indirizzi sono relativi all'immagine, ovvero sono offset a 32 bit dall'indirizzo iniziale dell'immagine che contiene la voce della tabella di funzioni. Queste voci vengono ordinate e inserite nella sezione. pData di un'immagine di PE32 +. Per le funzioni generate dinamicamente [compilatori JIT], il runtime per supportare queste funzioni deve usare RtlInstallFunctionTableCallback o RtlAddFunctionTable per fornire queste informazioni al sistema operativo. In caso contrario, si otterrà una gestione delle eccezioni non affidabile e il debug dei processi.

### <a name="struct-unwind_info"></a>struct UNWIND_INFO

La struttura delle informazioni sui dati di rimozione viene utilizzata per registrare gli effetti di una funzione sul puntatore dello stack e la posizione in cui vengono salvati i registri non volatili nello stack:

|||
|-|-|
|UBYTE: 3|Version|
|UBYTE: 5|Flag|
|UBYTE|Dimensioni del prologo|
|UBYTE|Conteggio dei codici di rimozione|
|UBYTE: 4|Registro frame|
|UBYTE: 4|Offset registro frame (ridimensionato)|
|USHORT \* n|Matrice codici di rimozione|
|variabile|Può essere di tipo (1) o (2) sotto|

(1) gestore eccezioni

|||
|-|-|
|ULONG|Indirizzo del gestore di eccezioni|
|variabile|Dati del gestore specifici della lingua (facoltativo)|

(2) informazioni di rimozione concatenate

|||
|-|-|
|ULONG|Indirizzo iniziale della funzione|
|ULONG|Indirizzo finale funzione|
|ULONG|Indirizzo informazioni di rimozione|

La struttura di UNWIND_INFO deve essere DWORD allineata in memoria. Ecco cosa significa ogni campo:

- **Versione**

   Numero di versione dei dati di rimozione, attualmente 1.

- **Flag**

   Sono attualmente definiti tre flag:

   |Flag|description|
   |-|-|
   |`UNW_FLAG_EHANDLER`| La funzione dispone di un gestore di eccezioni che deve essere chiamato durante la ricerca di funzioni che devono esaminare le eccezioni.|
   |`UNW_FLAG_UHANDLER`| La funzione dispone di un gestore di terminazione che deve essere chiamato durante la rimozione di un'eccezione.|
   |`UNW_FLAG_CHAININFO`| Questa struttura delle informazioni di rimozione non è quella primaria per la procedura. Al contrario, la voce di informazioni di rimozione concatenata è il contenuto di una voce di RUNTIME_FUNCTION precedente. Per informazioni, vedere [strutture di informazioni di rimozione concatenate](#chained-unwind-info-structures). Se questo flag è impostato, i flag di UNW_FLAG_EHANDLER e di UNW_FLAG_UHANDLER devono essere cancellati. Inoltre, il registro frame e i campi di allocazione dello stack fisso devono avere gli stessi valori delle informazioni di rimozione primarie.|

- **Dimensioni del prologo**

   Lunghezza del prologo della funzione in byte.

- **Conteggio dei codici di rimozione**

   Numero di slot nella matrice di codici di rimozione. Alcuni codici di rimozione, ad esempio UWOP_SAVE_NONVOL, richiedono più di uno slot nella matrice.

- **Registro frame**

   Se è diverso da zero, la funzione usa un puntatore a frame (FP) e questo campo è il numero del registro non volatile usato come puntatore al frame, usando la stessa codifica per il campo informazioni sull'operazione dei nodi UNWIND_CODE.

- **Offset registro frame (ridimensionato)**

   Se il campo del registro dei frame è diverso da zero, questo campo è l'offset ridimensionato da RSP applicato al Registro FP quando viene stabilito. Il Registro FP effettivo è impostato su RSP + 16 \* questo numero, consentendo gli offset da 0 a 240. Questo offset consente di puntare il Registro FP al centro dell'allocazione dello stack locale per gli stack frame dinamici, consentendo una maggiore densità di codice tramite istruzioni più brevi. Ovvero, più istruzioni possono utilizzare il formato con segno a 8 bit.

- **Matrice codici di rimozione**

   Matrice di elementi che illustra l'effetto del prologo sui registri non volatili e RSP. Vedere la sezione UNWIND_CODE per il significato dei singoli elementi. Ai fini dell'allineamento, questa matrice contiene sempre un numero pari di voci e la voce finale è potenzialmente inutilizzata. In tal caso, la matrice è più lunga di quella indicata dal campo numero di codici di rimozione.

- **Indirizzo del gestore di eccezioni**

   Puntatore relativo all'immagine per il gestore di terminazione o eccezione specifica della funzione, se flag UNW_FLAG_CHAININFO è chiaro e uno dei flag UNW_FLAG_EHANDLER o UNW_FLAG_UHANDLER è impostato.

- **Dati del gestore specifici della lingua**

   Dati del gestore eccezioni specifici della funzione. Il formato dei dati non è specificato e completamente determinato dal gestore di eccezioni specifico in uso.

- **Informazioni di rimozione concatenate**

   Se il flag UNW_FLAG_CHAININFO è impostato, la struttura UNWIND_INFO termina con tre UWORDs.  Questi UWORDs rappresentano le informazioni RUNTIME_FUNCTION per la funzione della rimozione concatenata.

### <a name="struct-unwind_code"></a>struct UNWIND_CODE

La matrice di codice di rimozione viene usata per registrare la sequenza di operazioni nel prologo che interessano i registri non volatili e RSP. Il formato di ogni elemento di codice è il seguente:

|||
|-|-|
|UBYTE|Offset nel prologo|
|UBYTE: 4|Codice dell'operazione di rimozione|
|UBYTE: 4|Informazioni operazione|

La matrice viene ordinata in base all'ordine decrescente di offset nel prologo.

#### <a name="offset-in-prolog"></a>Offset nel prologo

Offset (dall'inizio del prologo) della fine dell'istruzione che esegue questa operazione, più 1 (ovvero l'offset dell'inizio dell'istruzione successiva).

#### <a name="unwind-operation-code"></a>Codice dell'operazione di rimozione

Nota: per determinati codici operativi è necessario un offset senza segno a un valore nel stack frame locale. Questo offset è dall'inizio, ovvero l'indirizzo più basso dell'allocazione dello stack fisso. Se il campo Registro frame nel UNWIND_INFO è zero, questo offset è da RSP. Se il campo del registro dei frame è diverso da zero, questo offset viene da dove RSP si trovava al momento della creazione del Registro FP. È uguale al Registro FP meno l'offset del Registro FP (16 \* offset del registro frame scalato nel UNWIND_INFO). Se viene usato un registro FP, qualsiasi codice di rimozione che accetta un offset deve essere usato solo dopo che è stato stabilito il Registro FP nel prologo.

Per tutti i codici operativi eccetto `UWOP_SAVE_XMM128` e `UWOP_SAVE_XMM128_FAR`, l'offset è sempre un multiplo di 8, poiché tutti i valori dello stack di interesse vengono archiviati su limiti di 8 byte (lo stack stesso è sempre allineato a 16 byte). Per i codici operativi che accettano un offset breve (minore di 512K), l'oggetto USHORT finale nei nodi del codice include l'offset diviso per 8. Per i codici operativi che accettano un offset lungo (512K < = offset < 4 GB), i due nodi USHORT finali per questo codice contengono l'offset (in formato little endian).

Per i codici operativi `UWOP_SAVE_XMM128` e `UWOP_SAVE_XMM128_FAR`, l'offset è sempre un multiplo di 16, perché tutte le operazioni XMM a 128 bit devono essere eseguite nella memoria allineata a 16 byte. Un fattore di scala pari a 16 viene pertanto usato per `UWOP_SAVE_XMM128`, consentendo gli offset inferiori a 1 milione.

Il codice dell'operazione di rimozione è uno dei valori seguenti:

- `UWOP_PUSH_NONVOL` (0) 1 nodo

  Eseguire il push di un registro di tipo integer non volatile, diminuendo RSP da 8. Le informazioni sull'operazione sono il numero del registro. A causa dei vincoli su epilogo, `UWOP_PUSH_NONVOL` codici di rimozione devono essere visualizzati per primi nel prologo e corrispondenti, ultimo nella matrice di codice di rimozione. Questo ordinamento relativo si applica a tutti gli altri codici di rimozione tranne `UWOP_PUSH_MACHFRAME`.

- `UWOP_ALLOC_LARGE` (1) 2 o 3 nodi

  Allocare un'area di grandi dimensioni nello stack. Esistono due formati. Se le informazioni sull'operazione sono uguali a 0, la dimensione dell'allocazione divisa per 8 viene registrata nello slot successivo, consentendo un'allocazione fino a 512K-8. Se le informazioni sull'operazione sono uguali a 1, le dimensioni non ridimensionate dell'allocazione vengono registrate nei due slot successivi nel formato little endian, consentendo allocazioni fino a 4GB-8.

- `UWOP_ALLOC_SMALL` (2) 1 nodo

  Allocare un'area di piccole dimensioni nello stack. La dimensione dell'allocazione è il campo informazioni sull'operazione \* 8 + 8, consentendo allocazioni da 8 a 128 byte.

  Il codice di rimozione per un'allocazione dello stack deve sempre usare la codifica più breve possibile:

  |**Dimensioni di allocazione**|**Codice di rimozione**|
  |-|-|
  |da 8 a 128 byte|`UWOP_ALLOC_SMALL`|
  |da 136 a 512K-8 byte|`UWOP_ALLOC_LARGE`, informazioni sull'operazione = 0|
  |da 512K a 4G-8 byte|`UWOP_ALLOC_LARGE`, informazioni sull'operazione = 1|

- `UWOP_SET_FPREG` (3) 1 nodo

  Stabilire il registro del puntatore del frame impostando il registro su un offset del RSP corrente. L'offset è uguale al campo offset del registro frame (ridimensionato) nell'UNWIND_INFO \* 16, consentendo gli offset da 0 a 240. L'uso di un offset consente di stabilire un puntatore a un frame che punta al centro dell'allocazione dello stack fisso, aiutando la densità del codice consentendo a più accessi di usare moduli di istruzioni brevi. Il campo informazioni sull'operazione è riservato e non deve essere usato.

- `UWOP_SAVE_NONVOL` (4) 2 nodi

  Salvare un registro di tipo integer non volatile nello stack usando un MOV anziché un PUSH. Questo codice viene usato principalmente per la *riduzione del wrapping*, in cui un registro non volatile viene salvato nello stack in una posizione allocata in precedenza. Le informazioni sull'operazione sono il numero del registro. L'offset dello stack ridimensionato per 8 viene registrato nello slot di codice di un'operazione di rimozione successiva, come descritto nella nota sopra.

- `UWOP_SAVE_NONVOL_FAR` (5) 3 nodi

  Salvare un registro di tipo integer non volatile nello stack con un offset lungo, usando un MOV anziché un PUSH. Questo codice viene usato principalmente per la *riduzione del wrapping*, in cui un registro non volatile viene salvato nello stack in una posizione allocata in precedenza. Le informazioni sull'operazione sono il numero del registro. L'offset dello stack non ridimensionato viene registrato nei due slot di codice delle operazioni di rimozione successivi, come descritto nella nota sopra.

- `UWOP_SAVE_XMM128` (8) 2 nodi

  Salvare tutti i 128 bit di un registro XMM non volatile nello stack. Le informazioni sull'operazione sono il numero del registro. L'offset dello stack ridimensionato per 16 viene registrato nello slot successivo.

- `UWOP_SAVE_XMM128_FAR` (9) 3 nodi

  Salvare tutti i 128 bit di un registro XMM non volatile nello stack con un offset lungo. Le informazioni sull'operazione sono il numero del registro. L'offset dello stack non ridimensionato viene registrato nei due slot successivi.

- `UWOP_PUSH_MACHFRAME` (10) 1 nodo

  Eseguire il push di un frame del computer.  Questo codice di rimozione viene usato per registrare l'effetto di un'interruzione dell'hardware o di un'eccezione. Esistono due formati. Se le informazioni sull'operazione sono uguali a 0, uno di questi frame è stato inserito nello stack:

  |||
  |-|-|
  |RSP+32|SS|
  |RSP+24|RSP precedente|
  |RSP+16|EFLAGS|
  |RSP+8|CS|
  |RSP|RIP|

  Se le informazioni sull'operazione sono uguali a 1, è stato eseguito il push di uno di questi frame:

  |||
  |-|-|
  |RSP+40|SS|
  |RSP+32|RSP precedente|
  |RSP+24|EFLAGS|
  |RSP+16|CS|
  |RSP+8|RIP|
  |RSP|Codice di errore|

  Questo codice di rimozione viene sempre visualizzato in un prologo fittizio, che non viene mai effettivamente eseguito, ma viene invece visualizzato prima del punto di ingresso reale di una routine di interrupt ed esiste solo per fornire una posizione per simulare il push di un frame del computer. `UWOP_PUSH_MACHFRAME` registra la simulazione, che indica che il computer ha eseguito concettualmente questa operazione:

  1. Pop RIP Address return dall'inizio dello stack in *Temp*
  
  1. Push SS

  1. Push del vecchio RSP

  1. Push EFLAGS

  1. Push di CS

  1. *Temp* push

  1. Codice di errore push (se le informazioni op sono uguali a 1)

  L'operazione di `UWOP_PUSH_MACHFRAME` simulata decrementa RSP di 40 (info op è uguale a 0) o 48 (le informazioni sulle op sono pari a 1).

#### <a name="operation-info"></a>Informazioni operazione

Il significato dei bit delle informazioni sull'operazione dipende dal codice operativo. Per codificare un registro di utilizzo generico (Integer), viene usato questo mapping:

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
|da 8 a 15|Da R8 a R15|

### <a name="chained-unwind-info-structures"></a>Strutture di informazioni di rimozione concatenate

Se viene impostato il flag di UNW_FLAG_CHAININFO, una struttura delle informazioni di rimozione è secondaria e il campo dell'indirizzo di gestione delle eccezioni condivise/concatenato-info contiene le informazioni di rimozione primarie. Questo codice di esempio recupera le informazioni di rimozione primarie, supponendo che `unwindInfo` sia la struttura con il flag di UNW_FLAG_CHAININFO impostato.

```cpp
PRUNTIME_FUNCTION primaryUwindInfo = (PRUNTIME_FUNCTION)&(unwindInfo->UnwindCode[( unwindInfo->CountOfCodes + 1 ) & ~1]);
```

Le informazioni concatenate sono utili in due situazioni. Per prima cosa, può essere usato per segmenti di codice non contigui. Usando le informazioni concatenate, è possibile ridurre le dimensioni delle informazioni di rimozione richieste, perché non è necessario duplicare la matrice di codici di rimozione dalle informazioni di rimozione primarie.

È anche possibile usare le informazioni concatenate per raggruppare i salvataggi di registro volatili. Il compilatore può ritardare il salvataggio di alcuni registri volatili fino a quando non è al di fuori del prologo della voce di funzione. È possibile registrarli con le informazioni di rimozione primarie per la parte della funzione prima del codice raggruppato e quindi impostare le informazioni concatenate con una dimensione diversa da zero del prologo, dove i codici di rimozione nelle informazioni concatenate riflettono i salvataggi dei registri non volatili. In tal caso, i codici di rimozione sono tutte istanze di UWOP_SAVE_NONVOL. Un raggruppamento che salva registri non volatili usando un PUSH o modifica il registro RSP usando un'allocazione dello stack fissa aggiuntiva non è supportato.

Un elemento UNWIND_INFO che dispone di UNW_FLAG_CHAININFO set può contenere una voce di RUNTIME_FUNCTION il cui elemento UNWIND_INFO dispone anche di un set di UNW_FLAG_CHAININFO, talvolta denominato *multiplo-wrapping*. Infine, i puntatori delle informazioni di rimozione concatenati arrivano a un elemento UNWIND_INFO UNW_FLAG_CHAININFO cancellato. Questo elemento è l'elemento UNWIND_INFO primario, che fa riferimento al punto di ingresso della procedura effettivo.

## <a name="unwind-procedure"></a>Procedura di rimozione

La matrice di codice di rimozione è ordinata in ordine decrescente. Quando si verifica un'eccezione, il contesto completo viene archiviato dal sistema operativo in un record di contesto. Viene quindi richiamata la logica di invio delle eccezioni, che esegue ripetutamente questi passaggi per trovare un gestore di eccezioni:

1. Utilizzare il RIP corrente archiviato nel record di contesto per cercare una voce di tabella RUNTIME_FUNCTION che descriva la funzione corrente (o la parte della funzione, per le voci di UNWIND_INFO concatenate).

1. Se non viene trovata alcuna voce della tabella di funzioni, si trova in una funzione foglia e RSP indirizza direttamente il puntatore restituito. Il puntatore restituito in [RSP] viene archiviato nel contesto aggiornato, il RSP simulato viene incrementato di 8 e il passaggio 1 viene ripetuto.

1. Se viene trovata una voce della tabella di funzioni, RIP può trovarsi all'interno di tre aree: a) in un epilogo, b) nel prologo o in c) nel codice che può essere coperto da un gestore di eccezioni.

   - Caso a) se il RIP si trova all'interno di un epilogo, il controllo sta lasciando la funzione, non è possibile associare alcun gestore di eccezioni a questa eccezione per questa funzione e gli effetti dell'epilogo devono continuare a calcolare il contesto della funzione chiamante. Per determinare se il RIP si trova all'interno di un epilogo, viene esaminato il flusso di codice da RIP in avanti. Se tale flusso di codice può essere associato alla parte finale di un epilogo legittimo, si trova in un epilogo e la parte rimanente dell'epilogo viene simulata, con il record di contesto aggiornato quando ogni istruzione viene elaborata. Dopo questa elaborazione, il passaggio 1 si ripete.

   - Caso b) se il RIP si trova all'interno del prologo, il controllo non è entrato nella funzione, non è possibile associare alcun gestore di eccezioni a questa eccezione per questa funzione e gli effetti del prologo devono essere annullati per calcolare il contesto della funzione chiamante. Il RIP si trova all'interno del prologo se la distanza dalla funzione inizia con il RIP è minore o uguale alla dimensione del prologo codificata nelle informazioni di rimozione. Gli effetti del prologo vengono rimossi eseguendo l'analisi tramite la matrice di codici di rimozione per la prima voce con un offset minore o uguale all'offset del RIP dall'inizio della funzione, quindi annotando l'effetto di tutti gli elementi rimanenti nella matrice di codice di rimozione. Il passaggio 1 viene quindi ripetuto.

   - Caso c) se il RIP non si trova all'interno di un prologo o di un epilogo e la funzione dispone di un gestore di eccezioni (UNW_FLAG_EHANDLER è impostato), viene chiamato il gestore specifico della lingua. Il gestore esegue l'analisi dei dati e chiama le funzioni di filtro in base alle esigenze. Il gestore specifico della lingua può restituire che l'eccezione è stata gestita o che la ricerca deve essere continuata. Può anche avviare direttamente una rimozione.

1. Se il gestore specifico della lingua restituisce uno stato gestito, l'esecuzione continua a usare il record di contesto originale.

1. Se non è presente alcun gestore specifico della lingua o il gestore restituisce uno stato "continua ricerca", il record di contesto deve essere rimosso allo stato del chiamante. Questa operazione viene eseguita elaborando tutti gli elementi della matrice di codice di rimozione, annullando l'effetto di ciascuno di essi. Il passaggio 1 viene quindi ripetuto.

Quando le informazioni di rimozione concatenate sono necessarie, questi passaggi di base sono ancora seguiti. L'unica differenza consiste nel fatto che, mentre si esamina la matrice di codice di rimozione per rimuovere gli effetti di un prologo, una volta raggiunta la fine della matrice, questa viene collegata alle informazioni di rimozione padre e l'intera matrice di codice di rimozione viene trovata. Questo collegamento continua fino a ottenere le informazioni di rimozione senza il flag di UNW_CHAINED_INFO, quindi completa la relativa matrice di codice di rimozione.

Il set più piccolo di dati di rimozione è di 8 byte. Questo rappresenterebbe una funzione che ha allocato solo 128 byte di stack o meno ed è possibile che sia stato salvato un registro non volatile. È anche la dimensione di una struttura di informazioni di rimozione concatenata per un prologo di lunghezza zero senza codici di rimozione.

## <a name="language-specific-handler"></a>Gestore specifico della lingua

L'indirizzo relativo del gestore specifico della lingua è presente nel UNWIND_INFO ogni volta che vengono impostati i flag UNW_FLAG_EHANDLER o UNW_FLAG_UHANDLER. Come descritto nella sezione precedente, il gestore specifico della lingua viene chiamato come parte della ricerca di un gestore di eccezioni o come parte di una rimozione. Il prototipo è il seguente:

```cpp
typedef EXCEPTION_DISPOSITION (*PEXCEPTION_ROUTINE) (
    IN PEXCEPTION_RECORD ExceptionRecord,
    IN ULONG64 EstablisherFrame,
    IN OUT PCONTEXT ContextRecord,
    IN OUT PDISPATCHER_CONTEXT DispatcherContext
);
```

**ExceptionRecord** fornisce un puntatore a un record di eccezione, che ha la definizione Win64 standard.

**EstablisherFrame** è l'indirizzo della base dell'allocazione dello stack fisso per questa funzione.

**ContextRecord** punta al contesto dell'eccezione nel momento in cui è stata generata l'eccezione (nel caso del gestore di eccezioni) o nel contesto di rimozione corrente (nel caso del gestore di terminazione).

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

**ControlPc** è il valore di RIP all'interno di questa funzione. Questo valore è un indirizzo di eccezione o l'indirizzo a cui il controllo ha lasciato la funzione di definizione. Il RIP viene usato per determinare se il controllo si trova all'interno di un costrutto sorvegliato all'interno di questa funzione, ad esempio un blocco di `__try` per `__try`/`__except` o `__try`/`__finally`.

**ImageBase sul** è la base dell'immagine (indirizzo di caricamento) del modulo contenente questa funzione, da aggiungere agli offset a 32 bit usati nella voce della funzione e le informazioni di rimozione per registrare gli indirizzi relativi.

**FunctionEntry** fornisce un puntatore alla voce della funzione RUNTIME_FUNCTION che contiene la funzione e la rimozione delle informazioni sugli indirizzi relativi per questa funzione.

**EstablisherFrame** è l'indirizzo della base dell'allocazione dello stack fisso per questa funzione.

**TargetIp** Fornisce un indirizzo di istruzione facoltativo che specifica l'indirizzo di continuazione della rimozione. Questo indirizzo viene ignorato se **EstablisherFrame** non è specificato.

**ContextRecord** punta al contesto dell'eccezione, per l'uso da parte del codice di invio/rimozione delle eccezioni di sistema.

**LanguageHandler** punta alla routine del gestore del linguaggio specifico del linguaggio da chiamare.

**HandlerData** punta ai dati del gestore specifici della lingua per questa funzione.

## <a name="unwind-helpers-for-masm"></a>Helper di rimozione per MASM

Per scrivere routine di assembly appropriate, è disponibile un set di pseudo-operazioni che possono essere usate in parallelo con le istruzioni di assembly effettive per creare i. pdata e. XData appropriati. È disponibile un set di macro che consentono di usare in modo semplificato le pseudo-operazioni per gli usi più comuni.

### <a name="raw-pseudo-operations"></a>Pseudo-operazioni RAW

|Operazione pseudo|description|
|-|-|
|\[FRAME PROC:*ehandler*]|Fa in modo che MASM generi una voce della tabella di funzione in. pdata e le informazioni di rimozione in. xdata per il comportamento di rimozione della gestione delle eccezioni strutturate di una funzione.  Se *ehandler* è presente, questa procedura viene immessa in. xdata come gestore specifico del linguaggio.<br /><br /> Quando si usa l'attributo FRAME, deve essere seguito da un oggetto. Direttiva ENDPROLOG.  Se la funzione è una funzione foglia (come definito nei [tipi di funzione](../build/stack-usage.md#function-types)) l'attributo frame non è necessario, così come il resto di queste pseudo-operazioni.|
|. *Registro* pushreg|Genera una voce di codice di rimozione UWOP_PUSH_NONVOL per il numero di registro specificato usando l'offset corrente nel prologo.<br /><br /> Utilizzarlo solo con registri di tipo integer non volatili.  Per i push di registri volatili, usare un oggetto. ALLOCSTACK 8, invece|
|. *Registro*seframe, *offset*|Inserisce il campo Registro frame e l'offset nelle informazioni di rimozione utilizzando il registro e l'offset specificati. L'offset deve essere un multiplo di 16 e minore o uguale a 240. Questa direttiva genera anche una voce di codice di rimozione UWOP_SET_FPREG per il registro specificato usando l'offset del prologo corrente.|
|. *Dimensioni* ALLOCSTACK|Genera un UWOP_ALLOC_SMALL o un UWOP_ALLOC_LARGE con le dimensioni specificate per l'offset corrente nel prologo.<br /><br /> L'operando *size* deve essere un multiplo di 8.|
|. *Registro*savereg, *offset*|Genera una UWOP_SAVE_NONVOL o una voce di codice di rimozione UWOP_SAVE_NONVOL_FAR per il registro e l'offset specificati usando l'offset del prologo corrente. MASM sceglie la codifica più efficiente.<br /><br /> *offset* deve essere positivo e un multiplo di 8. *offset* è relativo alla base del frame della procedura, che in genere si trova in RSP o, se si usa un puntatore a frame, il puntatore ai frame non ridimensionato.|
|. *Registro*SAVEXMM128, *offset*|Genera una UWOP_SAVE_XMM128 o una voce di codice di rimozione UWOP_SAVE_XMM128_FAR per il registro e l'offset di XMM specificati usando l'offset del prologo corrente. MASM sceglie la codifica più efficiente.<br /><br /> *offset* deve essere positivo e un multiplo di 16.  *offset* è relativo alla base del frame della procedura, che in genere si trova in RSP o, se si usa un puntatore a frame, il puntatore ai frame non ridimensionato.|
|. PUSHFRAME *codice*\[]|Genera una voce di codice di rimozione UWOP_PUSH_MACHFRAME. Se viene specificato il *codice* facoltativo, alla voce di codice di rimozione viene assegnato un modificatore pari a 1. In caso contrario, il modificatore è 0.|
|.ENDPROLOG|Segnala la fine delle dichiarazioni di prologo.  Deve essere presente nei primi 255 byte della funzione.|

Ecco un prologo della funzione di esempio con l'uso corretto della maggior parte dei codici operativi:

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
; if we didn't have a frame pointer, this would be illegal
; if we didn't make this modification,
; there would be no need for a frame pointer

    sub rsp, 060h

; we can unwind from the next AV because of the frame pointer

    mov rax, 0
    mov rax, [rax] ; AV!

; restore the registers that weren't saved with a push
; this isn't part of the official epilog, as described in section 2.5

    movdqa xmm7, [rbp]
    mov rsi, [rbp+018h]
    mov rdi, [rbp-010h]

; Here's the official epilog

    lea rsp, [rbp+020h] ; deallocate both fixed and dynamic portions of the frame
    pop rbp
    ret
sample ENDP
```

Per ulteriori informazioni sull'esempio di epilogo, vedere [codice di epilogo](prolog-and-epilog.md#epilog-code) in [prologo x64 e epilogo](prolog-and-epilog.md).

### <a name="masm-macros"></a>Macro MASM

Per semplificare l'uso delle [pseudo-operazioni non elaborate](#raw-pseudo-operations), è disponibile un set di macro, definito in ksamd64. Inc, che può essere usato per creare prologhi ed epiloghi delle procedure tipiche.

|Macro|description|
|-|-|
|alloc_stack (n)|Alloca un stack frame di n byte (usando `sub rsp, n`) e genera le informazioni di rimozione appropriate (. allocstack n)|
|save_reg *reg*, *loc*|Salva un *reg* di registro non volatile nello stack all'offset RSP *loc*e genera le informazioni di rimozione appropriate. (SAVEREG reg, loc)|
|push_reg *reg*|Inserisce un *reg* di registro non volatile nello stack e genera le informazioni di rimozione appropriate. (reg. pushreg)|
|rex_push_reg *reg*|Salva un registro non volatile nello stack utilizzando un push a 2 byte e genera le informazioni di rimozione appropriate (pushreg reg).  Usare questa macro se il push è la prima istruzione nella funzione, per garantire che la funzione sia a patch a caldo.|
|save_xmm128 *reg*, *loc*|Salva *una registrazione di registro XMM* non volatile nello stack all'offset RSP *loc*e genera le informazioni di rimozione appropriate (. SAVEXMM128 reg, loc)|
|set_frame *reg*, *offset*|Imposta il *reg* del registro del frame su RSP + *offset* (usando un `mov`o un `lea`) e genera le informazioni di rimozione appropriate (. set_frame reg, offset)|
|push_eflags|Inserisce il EFLAGS con un'istruzione `pushfq` e genera le informazioni di rimozione appropriate (. alloc_stack 8)|

Ecco un prologo della funzione di esempio con l'utilizzo corretto delle macro:

```MASM
sampleFrame struct
    Fill     dq ?; fill to 8 mod 16
    SavedRdi dq ?; Saved Register RDI
    SavedRsi dq ?; Saved Register RSI
sampleFrame ends

sample2 PROC FRAME
    alloc_stack(sizeof sampleFrame)
    save_reg rdi, sampleFrame.SavedRdi
    save_reg rsi, sampleFrame.SavedRsi
    .end_prolog

; function body

    mov rsi, sampleFrame.SavedRsi[rsp]
    mov rdi, sampleFrame.SavedRdi[rsp]

; Here's the official epilog

    add rsp, (sizeof sampleFrame)
    ret
sample2 ENDP
```

## <a name="unwind-data-definitions-in-c"></a>Definizioni dei dati di rimozione in C

Ecco una descrizione C dei dati di rimozione:

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

[Convenzioni del software x64](../build/x64-software-conventions.md)
