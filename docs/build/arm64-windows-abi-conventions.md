---
title: Panoramica delle convenzioni ABI ARM64
ms.date: 03/27/2019
ms.openlocfilehash: 07d58bbd64795235ad63a7b26b6f18fcffdcd1d2
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303262"
---
# <a name="overview-of-arm64-abi-conventions"></a>Panoramica delle convenzioni ABI ARM64

L'interfaccia ABI (Basic Application Binary Interface) per Windows quando viene compilata ed eseguita nei processori ARM in modalità a 64 bit (ARMv8 o nelle architetture successive), nella maggior parte dei casi, segue la interfaccia EABI AArch64 standard di ARM. Questo articolo illustra alcuni presupposti chiave e le modifiche rispetto a quanto documentato in interfaccia EABI. Per informazioni sull'ABI a 32 bit, vedere [Panoramica delle convenzioni ARM ABI](overview-of-arm-abi-conventions.md). Per altre informazioni sulla interfaccia EABI ARM standard, vedere [l'interfaccia ABI (Application Binary Interface) per l'architettura ARM](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.subset.swdev.abi/index.html) (collegamento esterno).

## <a name="definitions"></a>Definizioni

Con l'introduzione del supporto a 64 bit, ARM ha definito diversi termini:

- **AArch32** : l'architettura del set di istruzioni (ISA) a 32 bit legacy definita da ARM, inclusa l'esecuzione in modalità Thumb.
- **AArch64** : la nuova architettura del set di istruzioni (ISA) a 64 bit definita da ARM.
- **ARMv7** : specifica l'hardware ARM "SetTime generazione", che include solo il supporto per AArch32. Questa versione dell'hardware ARM è la prima versione di Windows per ARM supportata.
- **ARMv8** : specifica l'hardware ARM "8a generazione", che include il supporto per AArch32 e AArch64.

Windows utilizza inoltre i termini seguenti:

- **ARM** : si riferisce all'architettura arm a 32 bit (AArch32), a volte definita WoA (Windows on ARM).
- **ARM32** : uguale a ARM, sopra; usato in questo documento per maggiore chiarezza.
- **Arm64** : si riferisce all'architettura ARM a 64 bit (AArch64). Non c'è nulla di simile a WoA64.

Infine, quando si fa riferimento ai tipi di dati, vengono riportate le seguenti definizioni da ARM:

- **Short vector** : tipo di dati direttamente rappresentabile in SIMD, un vettore di 8 byte o 16 byte di elementi. È allineata alle dimensioni, a 8 byte o a 16 byte, dove ogni elemento può essere 1, 2, 4 o 8 byte.
- **HFA (aggregazione a virgola mobile omogenea)** : un tipo di dati con 2 o 4 membri a virgola mobile identici, ovvero float o Double.
- **HVA (aggregato short vector aggregate)** : tipo di dati con 2 o 4 membri con vettore corto identici.

## <a name="base-requirements"></a>Requisiti di base

La versione ARM64 di Windows presuppone che venga eseguita in qualsiasi momento in un'architettura ARMv8 o successiva. Il supporto per la virgola mobile e il NEON sono presumibilmente presenti nell'hardware.

La specifica ARMv8 descrive nuovi opcode Helper crittografici e CRC facoltativi per AArch32 e AArch64. Il supporto per questi elementi è attualmente facoltativo, ma consigliato. Per sfruttare i vantaggi di questi OpCode, le app devono prima di tutto verificare il runtime per verificarne l'esistenza.

## <a name="endianness"></a>Ordine dei byte

Come per la versione ARM32 di Windows, in ARM64 Windows viene eseguito in modalità little-endian. Il cambio di un tipo di impostazione è difficile da raggiungere senza il supporto della modalità kernel in AArch64, quindi è più semplice da applicare.

## <a name="alignment"></a>Alignment

Windows in esecuzione su ARM64 consente all'hardware della CPU di gestire in modo trasparente gli accessi non allineati. In un miglioramento di AArch32, questo supporto funziona ora anche per tutti gli accessi di tipo Integer (inclusi gli accessi a più parole) e per gli accessi a virgola mobile.

Tuttavia, gli accessi alla memoria non memorizzata nella cache (dispositivo) devono comunque essere sempre allineati. Se il codice potrebbe leggere o scrivere dati disallineati dalla memoria non memorizzata nella cache, è necessario assicurarsi di allineare tutti gli accessi.

Allineamento layout predefinito per variabili locali:

| Dimensioni in byte | Allineamento in byte |
| - | - |
| 1 | 1 |
| 2 | 2 |
| 3, 4 | 4 |
| > 4 | 8 |

Allineamento del layout predefinito per gli elementi globali e statici:

| Dimensioni in byte | Allineamento in byte |
| - | - |
| 1 | 1 |
| 2 - 7 | 4 |
| 8 - 63 | 8 |
| >= 64 | 16 |

## <a name="integer-registers"></a>Registri integer

L'architettura AArch64 supporta i registri di 32 Integer:

| Register | Volatile? | Ruolo |
| - | - | - |
| X0 | Volatile | Registro parametri/Scratch 1, registro risultati |
| X1-X7 | Volatile | Registro parametri/Scratch 2-8 |
| X8-x15 | Volatile | Registri Scratch |
| x16-x17 | Volatile | Registri temporanei di chiamata intra-routine |
| x18 | Non volatile | Registro della piattaforma: in modalità kernel punta a KPCR per il processore corrente; in modalità utente punta a TEB |
| x19-X28 | Non volatile | Registri Scratch |
| x29/FP | Non volatile | Puntatori ai frame |
| X30/LR | Non volatile | Registri di collegamento |

È possibile accedere a ogni registro come valore a 64 bit completo (tramite X0-X30) o come valore a 32 bit (tramite W0-W30). operazioni a 32 bit zero-estendono i risultati fino a 64 bit.

Per informazioni dettagliate sull'uso dei registri dei parametri, vedere la sezione passaggio di parametri.

A differenza di AArch32, il contatore del programma (PC) e il puntatore dello stack (SP) non sono registri indicizzati. Sono limitate al modo in cui è possibile accedervi. Si noti anche che non esiste alcun registro X31. Tale codifica viene utilizzata per scopi speciali.

Il puntatore a frame (x29) è necessario per la compatibilità con Fast Stack Walking utilizzato da ETW e altri servizi. Deve puntare alla coppia {x29, X30} precedente nello stack.

## <a name="floating-pointsimd-registers"></a>Registri a virgola mobile/SIMD

L'architettura AArch64 supporta anche i registri a virgola mobile/SIMD 32, riepilogati di seguito:

| Register | Volatile? | Ruolo |
| - | - | - |
| V0 | Volatile | Registro parametri/Scratch 1, registro risultati |
| V1-V7 | Volatile | Registri parametri/Scratch 2-8 |
| V8-versione 15 | Non volatile | Registri Scratch (solo i bit 64 Bassi sono non volatili) |
| V16-V31 | Volatile | Registri Scratch |

È possibile accedere a ogni registro come valore a 128 bit completo (tramite V0-V31 o Q0-q31). È possibile accedervi come valore a 64 bit (tramite D0-D31), come valore a 32 bit (tramite S0-S31), come valore a 16 bit (tramite H0-H31) o come valore a 8 bit (tramite B0-B31). Gli accessi di dimensioni inferiori a 128 bit accedono solo ai bit inferiori del registro completo a 128 bit. Lasciano invariati i restanti bit se non diversamente specificato. (AArch64 è diverso da AArch32, dove i registri più piccoli venivano compressi sopra i registri più grandi).

Il registro di controllo a virgola mobile (FPCR) ha determinati requisiti per i vari campi al suo interno:

| BITS | Significato | Volatile? | Ruolo |
| - | - | - | - |
| 26 | AHP | Non volatile | Controllo alternativo a metà precisione. |
| 25 | DN | Non volatile | Controllo modalità NaN predefinito. |
| 24 | FZ | Non volatile | Controllo modalità flush-to-zero. |
| 23-22 | RMode | Non volatile | Controllo della modalità di arrotondamento. |
| 15, 12-8 | IDE/IXE/ecc. | Non volatile | Bit di abilitazione della trap delle eccezioni. deve essere sempre 0. |

## <a name="system-registers"></a>Registri di sistema

Analogamente a AArch32, la specifica AArch64 fornisce tre registri "ID thread" controllati dal sistema:

| Register | Ruolo |
| - | - |
| TPIDR_EL0 | Riservato. |
| TPIDRRO_EL0 | Contiene il numero di CPU per il processore corrente. |
| TPIDR_EL1 | Punta alla struttura KPCR per il processore corrente. |

## <a name="floating-point-exceptions"></a>Eccezioni a virgola mobile

Il supporto per le eccezioni a virgola mobile IEEE è facoltativo nei sistemi AArch64. Per le varianti del processore con eccezioni a virgola mobile hardware, il kernel Windows rileva automaticamente le eccezioni e le Disabilita in modo implicito nel registro FPCR. Questo trap garantisce un comportamento normalizzato tra le varianti del processore. In caso contrario, il codice sviluppato su una piattaforma senza supporto per le eccezioni potrebbe rilevare l'esecuzione di eccezioni impreviste durante l'esecuzione su una piattaforma con supporto.

## <a name="parameter-passing"></a>Passaggio dei parametri

Per le funzioni non Variadic, l'interfaccia ABI di Windows segue le regole specificate da ARM per il passaggio dei parametri. Queste regole sono tratte direttamente dallo standard di chiamata della procedura per l'architettura AArch64:

### <a name="stage-a--initialization"></a>Fase A: inizializzazione

Questa fase viene eseguita esattamente una volta, prima dell'inizio dell'elaborazione degli argomenti.

1. Il successivo numero di registro per utilizzo generico (NGRN) è impostato su zero.

1. Il successivo SIMD e il numero di registro a virgola mobile (NSRN) è impostato su zero.

1. Il successivo indirizzo dell'argomento in pila (indirizzo NSAA) viene impostato sul valore del puntatore dello stack corrente (SP).

### <a name="stage-b--pre-padding-and-extension-of-arguments"></a>Fase B: pre-riempimento ed estensione degli argomenti

Per ogni argomento nell'elenco, viene applicata la prima regola di corrispondenza dall'elenco seguente. Se nessuna regola corrisponde, l'argomento viene usato senza modifiche.

1. Se il tipo di argomento è un tipo composito le cui dimensioni non possono essere determinate in modo statico dal chiamante e dal chiamato, l'argomento viene copiato in memoria e l'argomento viene sostituito da un puntatore alla copia. In C/C++ non sono presenti tipi di questo tipo, ma esistono in altre lingue o in estensioni di linguaggio.

1. Se il tipo di argomento è un HFA o un HVA, l'argomento viene usato senza modifiche.

1. Se il tipo di argomento è un tipo composito superiore a 16 byte, l'argomento viene copiato nella memoria allocata dal chiamante e l'argomento viene sostituito da un puntatore alla copia.

1. Se il tipo di argomento è un tipo composito, la dimensione dell'argomento viene arrotondata al multiplo più vicino di 8 byte.

### <a name="stage-c--assignment-of-arguments-to-registers-and-stack"></a>Fase C: assegnazione di argomenti a registri e stack

Per ogni argomento nell'elenco, le regole seguenti vengono applicate a sua volta fino a quando l'argomento non è stato allocato. Quando un argomento viene assegnato a un registro, i bit inutilizzati nel registro hanno un valore non specificato. Se un argomento viene assegnato a uno slot dello stack, i byte di riempimento inutilizzati hanno un valore non specificato.

1. Se l'argomento è un tipo a virgola mobile a precisione doppia o a virgola mobile e precisione doppia, mentre il valore di NSRN è minore di 8, l'argomento viene allocato ai bit meno significativi di Register v\[NSRN]. Il NSRN viene incrementato di uno. L'argomento è ora allocato.

1. Se l'argomento è un HFA o un HVA e sono presenti registri SIMD e a virgola mobile sufficienti e non allocati (NSRN + numero di membri ≤ 8), l'argomento viene allocato a SIMD e ai registri a virgola mobile, un registro per ogni membro di HFA o HVA. Il valore di NSRN viene incrementato in base al numero di registri utilizzati. L'argomento è ora allocato.

1. Se l'argomento è un HFA o un HVA, NSRN è impostato su 8 e la dimensione dell'argomento viene arrotondata al multiplo più vicino di 8 byte.

1. Se l'argomento è un oggetto HFA, un HVA, un tipo a virgola mobile e con precisione quadre, il valore di indirizzo NSAA viene arrotondato per eccesso al più grande di 8 o all'allineamento naturale del tipo dell'argomento.

1. Se l'argomento è un tipo a virgola mobile a precisione metà o singola, le dimensioni dell'argomento sono impostate su 8 byte. L'effetto è come se l'argomento fosse stato copiato nei bit meno significativi di un registro a 64 bit e i bit rimanenti riempissero con valori non specificati.

1. Se l'argomento è un tipo HFA, un HVA, un tipo a virgola mobile a precisione doppia o a virgola mobile e precisione Quadrupla, l'argomento viene copiato in memoria in corrispondenza dell'oggetto indirizzo NSAA modificato. L'indirizzo NSAA viene incrementato della dimensione dell'argomento. L'argomento è ora allocato.

1. Se l'argomento è un tipo integrale o puntatore, le dimensioni dell'argomento sono minori o uguali a 8 byte e NGRN è minore di 8, l'argomento viene copiato nei bit meno significativi in x\[NGRN]. Il NGRN viene incrementato di uno. L'argomento è ora allocato.

1. Se l'argomento ha un allineamento di 16, il NGRN viene arrotondato per eccesso al numero pari successivo.

1. Se l'argomento è un tipo integrale, le dimensioni dell'argomento sono pari a 16 e il valore di NGRN è minore di 7, l'argomento viene copiato in x\[NGRN] e x\[NGRN + 1]. x\[NGRN] deve contenere la doppia parola doppia con indirizzo inferiore della rappresentazione di memoria dell'argomento. Il NGRN viene incrementato di due. L'argomento è ora allocato.

1. Se l'argomento è un tipo composito e la dimensione in parole doppie dell'argomento non è maggiore di 8 meno NGRN, l'argomento viene copiato in registri consecutivi di utilizzo generico, a partire da x\[NGRN]. L'argomento viene passato come se fosse stato caricato nei registri da un indirizzo allineato a doppia parola, con una sequenza appropriata di istruzioni LDR che caricano registri consecutivi dalla memoria. Il contenuto di tutte le parti non utilizzate dei registri non è specificato da questo standard. Il valore di NGRN viene incrementato in base al numero di registri utilizzati. L'argomento è ora allocato.

1. NGRN è impostato su 8.

1. Indirizzo NSAA viene arrotondato per eccesso al più grande di 8 o all'allineamento naturale del tipo dell'argomento.

1. Se l'argomento è un tipo composito, l'argomento viene copiato in memoria in corrispondenza della indirizzo NSAA regolata. L'indirizzo NSAA viene incrementato della dimensione dell'argomento. L'argomento è ora allocato.

1. Se la dimensione dell'argomento è minore di 8 byte, le dimensioni dell'argomento sono impostate su 8 byte. L'effetto è che l'argomento è stato copiato nei bit meno significativi di un registro a 64 bit e i bit rimanenti sono stati riempiti con valori non specificati.

1. L'argomento viene copiato in memoria in corrispondenza della indirizzo NSAA regolata. L'indirizzo NSAA viene incrementato della dimensione dell'argomento. L'argomento è ora allocato.

### <a name="addendum-variadic-functions"></a>Addendum: funzioni Variadic

Le funzioni che accettano un numero variabile di argomenti sono gestite in modo diverso rispetto al precedente, come indicato di seguito:

1. Tutti i compositi vengono trattati in modo analogo; nessun trattamento speciale di HFAs o ossia.

1. Non vengono usati i registri SIMD e a virgola mobile.

In realtà, è uguale alle regole seguenti C. 12 – C. 15 per allocare gli argomenti a uno stack immaginario, in cui i primi 64 byte dello stack vengono caricati in x0-x7 e gli eventuali argomenti dello stack rimanenti vengono inseriti normalmente.

## <a name="return-values"></a>Valori restituiti

I valori integrali vengono restituiti in x0.

I valori a virgola mobile vengono restituiti in S0, d0 o V0, a seconda dei casi.

I valori HFA e HVA vengono restituiti in S0-S3, D0-D3 o V0-V3, a seconda dei casi.

I tipi restituiti per valore vengono gestiti in modo diverso a seconda che abbiano determinate proprietà. Tipi con tutte queste proprietà,

- sono *aggregati* in base alla definizione standard di c++ 14, ovvero non hanno costruttori forniti dall'utente, né membri dati non statici privati o protetti, né classi base, né funzioni virtuali,
- hanno un semplice operatore di assegnazione di copia e
- hanno un distruttore semplice,

usare lo stile restituito seguente:

- I tipi minori o uguali a 8 byte vengono restituiti in x0.
- I tipi minori o uguali a 16 byte vengono restituiti in X0 e x1, con X0 che contiene l'ordine inferiore di 8 byte.
- Per i tipi maggiori di 16 byte, il chiamante deve riservare un blocco di memoria di dimensioni e allineamento sufficienti per conservare il risultato. L'indirizzo del blocco di memoria deve essere passato come argomento aggiuntivo alla funzione in x8. Il chiamato può modificare il blocco di memoria risultato in qualsiasi momento durante l'esecuzione della subroutine. Il chiamato non è necessario per mantenere il valore archiviato in x8.

Tutti gli altri tipi utilizzano questa convenzione:

- Il chiamante deve riservare un blocco di memoria di dimensioni e allineamento sufficienti per conservare il risultato. L'indirizzo del blocco di memoria deve essere passato come argomento aggiuntivo alla funzione in x0 oppure X1 se $this viene passato in x0. Il chiamato può modificare il blocco di memoria risultato in qualsiasi momento durante l'esecuzione della subroutine. Il chiamato restituisce l'indirizzo del blocco di memoria in x0.

## <a name="stack"></a>Stack

Dopo l'ABI in base a ARM, lo stack deve rimanere sempre allineato a 16 byte. AArch64 contiene una funzionalità hardware che genera errori di allineamento dello stack ogni volta che SP non è allineato a 16 byte e viene eseguito un caricamento o un archivio relativo a SP. Windows viene eseguito con questa funzionalità abilitata in qualsiasi momento.

Le funzioni che allocano 4K o più di uno stack devono garantire che ogni pagina precedente alla pagina finale venga toccata nell'ordine. Questa azione garantisce che nessun codice possa "saltare" le pagine di Guard utilizzate da Windows per espandere lo stack. In genere il tocco viene eseguito dall' `__chkstk` helper, che dispone di una convenzione di chiamata personalizzata che supera l'allocazione totale dello stack divisa per 16 in x15.

## <a name="red-zone"></a>Zona rossa

L'area a 16 byte immediatamente sotto il puntatore dello stack corrente è riservata per l'utilizzo da parte degli scenari di analisi e di applicazione di patch dinamica. Questa area consente l'inserimento di codice generato con attenzione, che archivia due registri in [SP, #-16] e li utilizza temporaneamente a scopo arbitrario. Il kernel Windows garantisce che questi 16 byte non vengano sovrascritti se viene eseguita un'eccezione o un interrupt, in modalità utente e kernel.

## <a name="kernel-stack"></a>Stack kernel

Lo stack in modalità kernel predefinito in Windows è sei pagine (24K). Prestare maggiore attenzione alle funzioni con buffer dello stack di grandi dimensioni in modalità kernel. Un interrupt non programmato potrebbe entrare in uno spazio ridotto e creare un controllo del bug di panico dello stack.

## <a name="stack-walking"></a>Analisi dello stack

Il codice all'interno di Windows viene compilato con i puntatori ai frame abilitati ([/Oy-](reference/oy-frame-pointer-omission.md)) per abilitare Fast Stack Walking. In genere, x29 (FP) punta al collegamento successivo nella catena, ovvero una coppia {FP, LR}, che indica il puntatore al frame precedente nello stack e l'indirizzo di ritorno. Il codice di terze parti è consigliato per abilitare i puntatori ai frame, per consentire una migliore profilatura e tracciabilità.

## <a name="exception-unwinding"></a>Rimozione delle eccezioni

La rimozione durante la gestione delle eccezioni è assistita attraverso l'uso di codici di rimozione. I codici di rimozione sono una sequenza di byte archiviati nella sezione. XData del file eseguibile. Descrivono il funzionamento del prologo e dell'epilogo in modo astratto, in modo che gli effetti del prologo di una funzione possano essere annullati in preparazione per il backup nel stack frame del chiamante. Per altre informazioni sui codici di rimozione, vedere [gestione delle eccezioni arm64](arm64-exception-handling.md).

Il interfaccia EABI ARM specifica anche un modello di rimozione delle eccezioni che usa i codici di rimozione. Tuttavia, la specifica presentata non è sufficiente per la rimozione in Windows, che deve gestire i casi in cui il PC si trova al centro di un prologo o di un epilogo della funzione.

Il codice generato in modo dinamico deve essere descritto con le tabelle di funzioni `RtlAddFunctionTable` dinamiche tramite le funzioni associate, in modo che il codice generato possa partecipare alla gestione delle eccezioni.

## <a name="cycle-counter"></a>Contatore cicli

Tutte le CPU ARMv8 sono necessarie per supportare un registro del contatore di cicli, un registro a 64 bit che Windows configura per essere leggibile a qualsiasi livello di eccezione, inclusa la modalità utente. È possibile accedervi tramite lo speciale registro di PMCCNTR_EL0, usando il codice operativo MSR nel codice dell'assembly `_ReadStatusReg` o l'intrinseco nel codice C/C++.

Il contatore di cicli è un vero contatore di cicli, non un orologio a parete. La frequenza di conteggio varia in funzione della frequenza del processore. Se si ritiene che sia necessario essere a conoscenza della frequenza del contatore del ciclo, non è consigliabile utilizzare il contatore del ciclo. Si desidera invece misurare il tempo di clock, per il quale è necessario utilizzare `QueryPerformanceCounter`.

## <a name="see-also"></a>Vedere anche

[Problemi comuni relativi alla migrazione di Visual C++ ARM](common-visual-cpp-arm-migration-issues.md)<br/>
[Gestione delle eccezioni ARM64](arm64-exception-handling.md)
