---
title: Panoramica delle convenzioni ABI ARM
ms.date: 07/11/2018
ms.assetid: 23f4ae8c-3148-4657-8c47-e933a9f387de
ms.openlocfilehash: 8737f7b1cbe0651b43eb3b9990a4035b60bd01b9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320723"
---
# <a name="overview-of-arm32-abi-conventions"></a>Panoramica delle convenzioni ABI ARM32

L'interfaccia applicativa binaria (ABI, Application Binary Interface) per il codice compilato per Windows su processori ARM si basa sull'interfaccia EABI ARM standard. Questo articolo evidenzia le principali differenze tra Windows su ARM e lo standard. Questo documento riguarda l'ABI ARM32. Per informazioni sull'interfaccia ABI ARM64, vedere [Panoramica delle convenzioni ABI ARM64](arm64-windows-abi-conventions.md). Per altre informazioni sull'EABI ARM standard, vedere [Application Binary Interface (ABI) per l'architettura ARM](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.subset.swdev.abi/index.html) (collegamento esterno).

## <a name="base-requirements"></a>Requisiti di base

Si presume che Windows su ARM sia sempre in esecuzione su un'architettura ARMv7. Il supporto della virgola mobile nel formato VFPv3-D32 o successivo deve essere presente nell'hardware. VFP deve supportare la virgola mobile sia a precisione singola che a precisione doppia nell'hardware. Windows Runtime non supporta l'emulazione della virgola mobile per consentire l'esecuzione su hardware non VFP.

Anche il supporto avanzato per le estensioni SIMD (NEON), che include operazioni sia con numeri interi che con virgola mobile, deve essere presente nell'hardware. Non viene offerto supporto in fase di esecuzione per l'emulazione.

Il supporto per la divisione di numeri interi (UDIV/SDIV) è fortemente consigliato, ma non obbligatorio. Le piattaforme prive del supporto per la divisione dei numeri interi possono subire una riduzione delle prestazioni perché queste operazioni devono essere intercettate ed eventualmente corrette.

## <a name="endianness"></a>Ordine dei byte

Windows su ARM viene eseguito in modalità little endian. Sia il compilatore MSVC che il runtime di Windows prevedono sempre dati little-endian. Anche se l'istruzione SETEND nell'architettura ISA (Instruction Set Architecture) ARM consente anche al codice in modalità utente di cambiare l'ordine dei byte corrente, è sconsigliato farlo perché è pericoloso per un'applicazione. Se viene generata un'eccezione in modalità big endian, il comportamento non è prevedibile e può provocare un errore dell'applicazione in modalità utente o un controllo errori in modalità kernel.

## <a name="alignment"></a>Alignment

Anche se Windows consente all'hardware ARM di gestire in modo trasparente gli accessi ai numeri interi disallineati, in alcune situazioni possono tuttavia essere generati errori di allineamento. Seguire queste regole per l'allineamento:

- I carichi e gli archivi di numeri interi con dimensione half word (16 bit) e con dimensione word (32 bit) non devono essere allineati. L'hardware li gestisce in modo efficiente e trasparente.

- I carichi e gli archivi a virgola mobile devono essere allineati. Il kernel gestisce i carichi e gli archivi non allineati in modo trasparente, ma con un considerevole sovraccarico.

- Le operazioni di caricamento o archiviazione doppie (LDRD/STRD) e multiple (LDM/STM) devono essere allineate. Il kernel ne gestisce la maggior parte in modo trasparente, ma con un considerevole sovraccarico.

- Tutti gli accessi alla memoria non cache devono essere allineati, anche per gli accessi ai numeri interi. Gli accessi non allineati causano un errore di allineamento.

## <a name="instruction-set"></a>Set di istruzioni

Il set di istruzioni per Windows su ARM è limitato esclusivamente a Thumb-2. È previsto che tutto il codice eseguito su questa piattaforma inizi e rimanga sempre in modalità Thumb. È possibile che si riesca a passare al set di istruzioni ARM legacy, ma in questo caso eventuali eccezioni o interrupt possono causare un errore dell'applicazione in modalità utente o un controllo errori in modalità kernel.

Un effetto collaterale di questo requisito è che per tutti i puntatori di codice deve essere impostata una velocità in bit bassa. In questo modo, quando vengono caricati e viene creato un ramo con BLX o BX, il processore rimarrà in modalità Thumb e non proverà a eseguire il codice di destinazione come istruzioni ARM a 32 bit.

### <a name="it-instructions"></a>Istruzioni IT

L'uso di istruzioni IT nel codice Thumb-2 non è consentito, se non in questi casi specifici:

- L'istruzione IT può essere usata solo per modificare l'istruzione di destinazione.

- L'istruzione di destinazione deve essere un'istruzione a 16 bit.

- L'istruzione di destinazione deve essere una di queste:

   |Codici operativi a 16 bit|Classe|Restrizioni|
   |---------------------|-----------|------------------|
   |MOV, MVN|Spostamento|Rm != PC, Rd != PC|
   |LDR, LDR[S]B, LDR[S]H|Load from memory|Ma non formati letterali LDR|
   |STR, STRB, STRH|Store to memory||
   |ADD, ADC, RSB, SBC, SUB|Add or subtract|Ma non formati ADD/SUB SP, SP, imm7<br /><br /> Rm != PC, Rdn != PC, Rdm != PC|
   |CMP, CMN|Confronto|Rm != PC, Rn != PC|
   |MUL|Moltiplicazione||
   |ASR, LSL, LSR, ROR|Bit shift||
   |AND, BIC, EOR, ORR, TST|Bitwise arithmetic||
   |BX|Branch to register|Rm != PC|

Anche se le CPU ARMv7 correnti non riescono a segnalare l'uso di formati di istruzioni non consentiti, si prevede che le future generazioni saranno in grado di farlo. Se questi formati vengono rilevati, i programmi che li usano potrebbero essere terminati con un'eccezione di istruzione non definita.

### <a name="sdivudiv-instructions"></a>Istruzioni SDIV/UDIV

L'uso delle istruzioni di divisione dei numeri interi SDIV e UDIV è completamente supportato, anche su piattaforme senza hardware nativo per gestirle. Il sovraccarico per ogni divisione SDIV o UDIV su un processore Cortex-A9 è di circa 80 cicli, oltre al tempo di divisione generale di 20-250 cicli, in base agli input.

## <a name="integer-registers"></a>Registri di numeri interi

Il processore ARM supporta registri con 16 Integer:

|Register|Volatile?|Ruolo|
|--------------|---------------|----------|
|r0|Volatile|Parametro, risultato, registro temporaneo 1|
|r1|Volatile|Parametro, risultato, registro temporaneo 2|
|r2|Volatile|Parametro, risultato, registro temporaneo 3|
|r3|Volatile|Parametro, risultato, registro temporaneo 4|
|r4|Non volatile||
|r5|Non volatile||
|r6|Non volatile||
|r7|Non volatile||
|r8|Non volatile||
|r9|Non volatile||
|r10|Non volatile||
|r11|Non volatile|Puntatori ai frame|
|r12|Volatile|Registro temporaneo delle chiamate di procedura interne|
|r13 (SP)|Non volatile|Puntatore dello stack|
|r14 (LR)|Non volatile|Registro dei collegamenti|
|r15 (PC)|Non volatile|Contatore di programma|

Per i dettagli sull'uso del parametro e dei registri dei valori restituiti, vedere la sezione Passaggio dei parametri in questo articolo.

Windows usa r11 per analizzare rapidamente lo stack frame. Per altre informazioni, vedere la sezione Analisi dello stack. A causa di questo requisito, r11 deve sempre puntare al collegamento di livello superiore della catena. Non usare r11 per scopi generali perché il codice non genererà i percorsi stack corretti durante l'analisi.

## <a name="vfp-registers"></a>Registri VFP

Windows supporta solo varianti ARM con supporto per il coprocessore VFPv3-D32. I registri a virgola mobile sono quindi sempre presenti e possono essere ritenuti attendibili per il passaggio dei parametri e il set completo di 32 registri è disponibile per l'uso. I registri VFP e il loro utilizzo sono riepilogati in questa tabella:

|Singoli|Doppi|Quadrupli|Volatile?|Ruolo|
|-------------|-------------|-----------|---------------|----------|
|s0-s3|d0-d1|q0|Volatile|Parametri, risultato, registro temporaneo|
|s4-s7|d2-d3|q1|Volatile|Parametri, registro temporaneo|
|s8-s11|d4-d5|q2|Volatile|Parametri, registro temporaneo|
|s12-s15|d6-d7|q3|Volatile|Parametri, registro temporaneo|
|s16-s19|d8-d9|q4|Non volatile||
|s20-s23|d10-d11|q5|Non volatile||
|s24-s27|d12-d13|q6|Non volatile||
|s28-s31|d14-d15|q7|Non volatile||
||d16-d31|q8-q15|Volatile||

La tabella successiva illustra i campi di bit FPSCR (Floating-Point Status and Control Register):

|BITS|Significato|Volatile?|Ruolo|
|----------|-------------|---------------|----------|
|31-28|NZCV|Volatile|Flag di stato|
|27|QC|Volatile|Saturazione cumulativa|
|26|AHP|Non volatile|Controllo di mezza precisione alternativa|
|25|DN|Non volatile|Controllo modalità NaN predefinito|
|24|FZ|Non volatile|Controllo modalità scaricamento fino ad azzeramento|
|23-22|RMode|Non volatile|Controllo modalità di arrotondamento|
|21-20|Stride|Non volatile|Stride vettore, deve sempre essere 0|
|18-16|Len|Non volatile|Lunghezza vettore, deve sempre essere 0|
|15, 12-8|IDE, IXE e così via|Non volatile|Bit abilitazione trap eccezioni, deve sempre essere 0|
|7, 4-0|IDC, IXC e così via|Volatile|Flag di eccezione cumulativi|

## <a name="floating-point-exceptions"></a>Eccezioni a virgola mobile

La maggior parte dell'hardware ARM non supporta le eccezioni a virgola mobile IEEE. Nelle varianti del processore in cui si verificano eccezioni a virgola mobile dell'hardware, il kernel Windows intercetta le eccezioni senza avvisare e le disabilita in modo implicito nel registro FPSCR. Questo assicura un comportamento normalizzato nelle varianti del processore. In caso contrario, il codice sviluppato su una piattaforma senza supporto per le eccezioni potrebbe ricevere eccezioni impreviste quando è in esecuzione su una piattaforma con il supporto per le eccezioni.

## <a name="parameter-passing"></a>Passaggio dei parametri

Per le funzioni non variadic, l'interfaccia ABI di Windows su ARM segue le regole ARM per il passaggio dei parametri, tra cui le estensioni SIMD avanzate e VFP. Queste regole seguono lo standard di chiamata di [procedura per l'architettura ARM](http://infocenter.arm.com/help/topic/com.arm.doc.ihi0042c/IHI0042C_aapcs.pdf), consolidato con le estensioni VFP. Per impostazione predefinita, i primi quattro argomenti Integer e fino a otto argomenti vettoriali o a virgola mobile vengono passati nei registri e gli argomenti aggiuntivi vengono passati nello stack. Gli argomenti vengono assegnati ai registri o allo stack con questa procedura:

### <a name="stage-a-initialization"></a>Fase A: Inizializzazione

L'inizializzazione viene eseguita una sola volta, prima dell'elaborazione degli argomenti:

1. Il numero NCRN (Next Core Register Number) viene impostato su r0.

1. I registri VFP vengono contrassegnati come non allocati.

1. L'indirizzo NSAA (Next Stacked Argument Address) viene impostato sull'SP corrente.

1. Se viene chiamata una funzione che restituisce un risultato in memoria, l'indirizzo per il risultato viene inserito in r0 e il numero NCRN viene impostato su r1.

### <a name="stage-b-pre-padding-and-extension-of-arguments"></a>Fase B: Pre-imbottitura ed estensione degli argomenti

Per ogni argomento nell'elenco, viene applicata la prima regola corrispondente dell'elenco seguente:

1. Se l'argomento è un tipo composito la cui dimensione non può essere determinata in modo statico sia dal chiamante che dal computer chiamato, l'argomento viene copiato in memoria e sostituito da un puntatore alla copia.

1. Se l'argomento è un byte o una half word a 16 bit, viene esteso in base a zero o con segno a una full word a 32 bit e trattato come argomento a 4 byte.

1. Se l'argomento è un tipo composito, la dimensione viene arrotondata per eccesso al più vicino multiplo di 4.

### <a name="stage-c-assignment-of-arguments-to-registers-and-stack"></a>Fase C: assegnazione di argomenti ai registri e allo stack

Per ogni argomento nell'elenco, vengono applicate una alla volta le regole seguenti finché l'argomento non viene allocato:

1. Se l'argomento è un tipo VFP e ci sono abbastanza registri VFP non allocati consecutivi del tipo appropriato, l'argomento viene allocato alla sequenza con la numerazione più bassa di questi registri.

1. Se l'argomento è un tipo VFP, tutti i rimanenti registri non allocati vengono contrassegnati come non disponibili. L'indirizzo NSAA viene adeguato verso l'alto finché non viene correttamente allineato per il tipo di argomento e l'argomento viene copiato nello stack in corrispondenza dell'indirizzo NSAA adeguato. L'indirizzo NSAA viene quindi incrementato della dimensione dell'argomento.

1. Se l'argomento richiede l'allineamento a 8 byte, il numero NCRN viene arrotondato per eccesso al successivo numero di registro pari.

1. Se la dimensione dell'argomento in word a 32 bit non è superiore a r4 meno NCRN, l'argomento viene copiato nei registri principali, a partire dal numero NCRN, con i bit più significativi che occupano i registri con la numerazione più bassa. Il numero NCRN viene incrementato del numero di registri usati.

1. Se il numero NCRN è minore di r4 e l'indirizzo NSAA è uguale all'SP, l'argomento viene suddiviso tra i registri principali e lo stack. La prima parte dell'argomento viene copiata nei registri principali, a partire dal numero NCRN, fino a includere r3. La parte restante dell'argomento viene copiata nello stack, a partire dall'indirizzo NSAA. Il numero NCRN viene impostato su r4 e l'indirizzo NSAA viene incrementato della dimensione dell'argomento meno la quantità passata nei registri.

1. Se l'argomento richiede l'allineamento a 8 byte, l'indirizzo NSAA viene arrotondato per eccesso al successivo indirizzo allineato a 8 byte.

1. L'argomento viene copiato in memoria in corrispondenza dell'indirizzo NSAA. L'indirizzo NSAA viene incrementato della dimensione dell'argomento.

I registri VFP non vengono usati per le funzioni variadic e le regole 1 e 2 della Fase C vengono ignorate. Ciò significa che una funzione variadic può iniziare con un push opzionale {r0-r3} per anteporre gli argomenti dei registri a qualsiasi altro argomento passato dal chiamante e quindi accedere all'intero elenco di argomenti direttamente dallo stack.

I valori di tipo Integer vengono restituiti in r0 e facoltativamente estesi a r1 per i valori restituiti a 64 bit. I valori di tipo SIMD o a virgola mobile VFP/NEON vengono restituiti in s0, d0 o q0, come appropriato.

## <a name="stack"></a>Stack

Lo stack deve mantenere sempre l'allineamento a 4 byte e deve avere l'allineamento a 8 byte in tutti i limiti delle funzioni. Questo è necessario per supportare l'uso frequente di operazioni con interlock su variabili di stack a 64 bit. L'interfaccia EABI ARM indica che lo stack è allineato a 8 byte in tutte le interfacce pubbliche. Per coerenza, l'interfaccia ABI di Windows su ARM considera i limiti delle funzioni un'interfaccia pubblica.

Le funzioni che devono usare un puntatore a un frame, ad esempio le funzioni che chiamano `alloca` o che cambiano il puntatore dello stack in modo dinamico, devono impostare il puntatore al frame in r11 nel prologo della funzione e lasciarlo invariato fino all'epilogo. Le funzioni che non richiedono un puntatore a un frame devono eseguire tutti gli aggiornamenti dello stack nel prologo e lasciare il puntatore dello stack invariato fino all'epilogo.

Le funzioni che allocano 4 KB o più nello stack devono verificare che ogni pagina prima di quella finale sia elaborata in ordine. Ciò garantisce che nessun codice può "saltare" le pagine di protezione che Windows utilizza per espandere lo stack. In genere, questa operazione viene eseguita dall'helper `__chkstk`, che ha superato l'allocazione totale dello stack in byte diviso 4 in r4 e che restituisce la quantità di allocazione finale dello stack in byte in r4.

### <a name="red-zone"></a>Area rossa

L'area a 8 byte immediatamente sotto il puntatore dello stack corrente è riservata all'analisi e all'applicazione di patch dinamica. Consente l'inserimento del codice generato. 2 registri vengono archiviati in [sp, #-8] e usati temporaneamente per scopi arbitrari. Il kernel Windows garantisce che questi 8 byte non verranno sovrascritti qualora si verifichi un'eccezione o un interrupt sia in modalità utente che in modalità kernel.

### <a name="kernel-stack"></a>Stack del kernel

Lo stack in modalità kernel predefinito in Windows è di tre pagine (12 KB). Prestare attenzione a non creare funzioni con grandi buffer di stack in modalità kernel. Potrebbe verificarsi un interrupt con una capacità aggiuntiva dello stack molto ridotta e causare un controllo errori gravi dello stack.

## <a name="cc-specifics"></a>Specifiche c/c

Le enumerazioni sono tipi Integer a 32 bit a meno che almeno un valore nell'enumerazione non richieda memoria double word a 64 bit. In questo caso, il livello dell'enumerazione viene alzato a un tipo Integer a 64 bit.

`wchar_t` è definito come equivalente a `unsigned short`, per mantenere la compatibilità con le altre piattaforme.

## <a name="stack-walking"></a>Stack walking

Il codice di Windows viene compilato con i puntatori ai frame abilitati ([/Oy (Omission frame Pointer)](reference/oy-frame-pointer-omission.md)) per consentire un'analisi rapida dello stack. In genere, il registro r11 punta al collegamento successivo nella catena, che è una coppia {r11, lr} che specifica il puntatore al frame precedente nello stack e l'indirizzo restituito. È consigliabile che anche il codice abiliti i puntatori ai frame per una profilatura e un'analisi migliori.

## <a name="exception-unwinding"></a>Rimozione delle eccezioniException unwinding

Lo svuotamento dello stack durante la gestione delle eccezioni è abilitato dall'uso di codici di rimozione. I codici di rimozione sono sequenze di byte memorizzate nella sezione .xdata dell'immagine eseguibile. Descrivono il funzionamento del codice del prologo e dell'epilogo della funzione in modo astratto, in modo che gli effetti del prologo di una funzione possano essere annullati in preparazione della rimozione nello stack frame del chiamante.

L'interfaccia EABI ARM specifica un modello di rimozione delle eccezioni che usa codici di rimozione. Questa specifica non è tuttavia sufficiente per la rimozione in Windows, che deve gestire casi in cui il processore è al centro del prologo o dell'epilogo di una funzione. Per ulteriori informazioni sui dati delle eccezioni di Windows su ARM e sulla rimozione, vedere [Gestione delle eccezioni ARM](arm-exception-handling.md).

È consigliabile che il codice generato in modo dinamico venga descritto con tabelle di funzioni dinamiche nelle Chiamate a `RtlAddFunctionTable` e le funzioni associate, in modo che il codice generato possa partecipare alla gestione delle eccezioni.

## <a name="cycle-counter"></a>Contatore ciclo

Per supportare un contatore di cicli, sono necessari processori ARM che eseguono Windows, ma l'uso diretto del contatore può causare problemi. Per evitare questi problemi, Windows su ARM usa un codice operativo non definito per richiedere un valore del contatore di cicli a 64 bit normalizzato. Da C o C++ usare l'intrinseco `__rdpmccntr64` per creare il codice operativo appropriato. Dall'assembly usare l'istruzione `__rdpmccntr64`. La lettura del contatore di cicli richiede circa 60 cicli su Cortex-A9.

Il contatore è un vero e proprio contatore di cicli, non un orologio, e quindi la frequenza del conteggio varia con la frequenza del processore. Per misurare il tempo trascorso, usare `QueryPerformanceCounter`.

## <a name="see-also"></a>Vedere anche

[Problemi comuni relativi alla migrazione di Visual C++ ARM](common-visual-cpp-arm-migration-issues.md)<br/>
[Gestione delle eccezioni ARM](arm-exception-handling.md)
