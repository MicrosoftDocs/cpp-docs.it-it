---
title: Panoramica delle convenzioni ABI ARM64 | Microsoft Docs
ms.custom: ''
ms.date: 07/11/2018
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 585fd757c18c3a7c09645b64656e6ef77cde6dca
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48861384"
---
# <a name="overview-of-arm64-abi-conventions"></a>Panoramica delle convenzioni ABI ARM64

L'interfaccia ABI per Windows durante la compilazione e l'esecuzione su processori ARM in modalità a 64 bit (ARMv8 o architetture più avanti), nella maggior parte, base segue interfaccia EABI AArch64 standard di ARM. Questo articolo evidenzia alcune delle principali presupposti e modifiche da quelle documentate nell'interfaccia EABI. Per informazioni su ABI a 32 bit, vedere [convenzioni di panoramica dell'interfaccia ABI ARM](overview-of-arm-abi-conventions.md). Per altre informazioni sull'interfaccia EABI ARM standard, vedere [interfaccia applicativa binaria (ABI) per l'architettura ARM](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.subset.swdev.abi/index.html) (collegamento esterno).

## <a name="definitions"></a>Definizioni

Con l'introduzione del supporto a 64 bit, ARM è definito più termini:

- **AArch32** – il legacy a 32 set di istruzioni architettura (ISA) definito da ARM, inclusi l'esecuzione in modalità Thumb.
- **AArch64** : architettura (ISA) definito da ARM dei set delle nuove istruzioni a 64 bit.
- **ARMv7** : la specifica della "generazione 7" hardware ARM, che include solo il supporto per AArch32. Si tratta della versione dell'hardware ARM che la prima versione di Windows per ARM è supportata.
- **ARMv8** : la specifica della "generazione l'8" hardware ARM, che include il supporto per AArch32 sia AArch64.

Oltre a queste definizioni, Windows si usano questi termini:

- **ARM** : fa riferimento all'architettura ARM a 32 bit (AArch32). Ciò è talvolta detta dispositivi WoA (Windows su ARM).
- **ARM32** : uguale a ARM, precedente, è usato in questo documento per maggiore chiarezza.
- **ARM64** : fa riferimento all'architettura ARM a 64 bit (AArch64). Non è disponibile come WoA64.

Infine, quando si fa riferimento ai tipi di dati, le definizioni seguenti da ARM vengono fatto riferimento:

- **Breve vettore** – si tratta di un tipo di dati che sono direttamente rappresentabile in SIMD, ad esempio, un vettore dei relativi elementi, allineato alle dimensioni (byte di 8 o 16), in cui ogni elemento può essere 1, 2, 4 o 8 byte a 8 o 16 byte
- **(A virgola mobile omogenei aggregazione) HFA** – si tratta di un tipo di dati con 2-4 a virgola mobile e i membri identici (float o Double)
- **HVA (omogenei Short Vector Aggregate)** – si tratta di un tipo di dati con i membri di Short Vector identici 2-4

## <a name="base-requirements"></a>Requisiti di base

La versione ARM64 di Windows presuppone che è in esecuzione su un ARMv8 o architettura più avanti in qualsiasi momento. Entrambi a virgola mobile e supporto NEON sono presuppone che sia presente nell'hardware.

Sebbene la specifica di ARMv8 consente il supporto completo delle applicazioni AArch32, non esistono attualmente si prevede di supportare l'esecuzione di applicazioni ARM32 esistenti nella versione ARM64 di Windows (ad esempio, non i piani per WOW64). Si tratta di soggetti a una nuova valutazione in futuro, ma è l'ipotesi di lavoro corrente.

La specifica di ARMv8 descrive nuova crittografia facoltativo e codici operativi helper CRC per AArch32 sia AArch64. Supporto per questi è attualmente facoltativo ma consigliato. Codice che vuole sfruttare i vantaggi di questi codici operativi deve eseguire controlli di runtime per la loro esistenza.

## <a name="endianness"></a>Ordine dei byte

Come con la ARM32 versione di Windows, in ARM64 Windows viene eseguito in modalità little-endian. Ordine dei byte il passaggio è difficile da conseguire senza il supporto della modalità kernel in AArch64, pertanto è più facile da applicare.

## <a name="alignment"></a>Allineamento

Windows in esecuzione su ARM64 consente all'hardware di CPU gestire gli accessi non allineati in modo trasparente. Un miglioramento da AArch32, questo supporto ora funziona anche per tutti gli accessi di integer (inclusi gli accessi da più parole) e per gli accessi a virgola mobile.

Tuttavia, gli accessi alla memoria non memorizzati nella cache (dispositivo) ancora devono sempre essere allineati. Ciò significa che se il codice che può essere utilizzate per leggere e scrivere i dati disallineati dalla memoria non memorizzati nella cache, è necessario svolgere le cose sicuro e assicurarsi che tutti gli accessi siano allineati.

## <a name="integer-registers"></a>Registri integer

L'architettura AArch64 supporta 32 registri integer, riepilogati di seguito:

|Registrazione|Volatile?|Ruolo|
|-|-|-|
X0|Volatile|Parametro/zero registrare 1, registrare risultati
x1 x7|Volatile|Register/zero parametro 2 a 8
x8 x15|Volatile|Registri temporanei
x16 x17|Volatile|Registri temporanei intra-procedure-chiamata
x18|Non volatile|Registro di piattaforma: in modalità kernel, punta a KPCR l'utilizzo del processore corrente; in modalità utente, punta a TEB
x19 x28|Non volatile|Registri temporanei
x29/fp|Non volatile|Puntatori ai frame
X30/lr|Non volatile|Registri di collegamento

Ogni registro sono accessibili come valore completo a 64 bit (tramite x0-x30) o come un valore a 32 bit (tramite w30-w0). le operazioni di 32-bit zero-estendono i risultati fino a 64 bit.

Vedere il passaggio sezione per informazioni dettagliate sull'uso dei registri parametro dei parametri.

Si noti che a differenza di AArch32, il PC e stored procedure non sono registri indicizzati e pertanto sono limitate nel modo in cui sia possibile accedervi. Si noti che non vi sia alcun x31 anche la registrazione (che codifica viene utilizzata per scopi speciali).

L'uso di puntatore ai frame (x29) è necessaria per la compatibilità con rapida dello stack utilizzate da ETW e altri servizi. Deve puntare al precedente {x29, x 30} coppia nello stack.

## <a name="floating-pointsimd-registers"></a>Registri a virgola mobile/SIMD

L'architettura AArch64 supporta anche 32 registri di virgola mobile/SIMD, riepilogati di seguito:

Registrazione|Volatile?|Ruolo
|-|-|-|
V0|Volatile|Parametro/zero registrare 1, registrare risultati
V1-v7|Volatile|Parametro/zero registra 2 a 8
v8-versione 15|Non volatile|Registri (si noti che solo i 64 bit bassi sono non volatile) dei file temporanei
V16 v31|Volatile|Registri temporanei

Ogni registratore di cassa è possibile accedere come un valore a 128 bit completo (tramite v0 v31 o q0 q31), come valore a 64 bit (tramite d0-d31), come un valore a 32 bit (tramite s0-s31), come un valore a 16 bit (tramite h0-h31) o come un valore a 8 bit (tramite b0-b31). Gli accessi inferiori a 128 bit accedere solo i bit inferiori del registro completo a 128 bit e lasciare invariati i bit rimanenti non diversamente specificato. Si noti che questo è molto diverso dalla AArch32, in cui sono stati compressi registri più piccoli all'inizio di registri più capaci.

Oltre ai registri dei dati, il Registro di controllo a virgola mobile (FPCR) presenta determinati requisiti di diversi campi di bit all'interno di esso:

BITS|Significato|Volatile?|Ruolo
|-|-|-|-|
26|AHP|Non Volatile|Controllo di mezza precisione alternativa
25|DN|Non Volatile|Controllo modalità NaN predefinito
24|FZ|Non volatile|Controllo modalità scaricamento fino ad azzeramento
23-22|RMode|Non volatile|Controllo modalità di arrotondamento
15,12-8|IDE/IXE/e così via|Non Volatile|Bit abilitazione trap eccezioni, deve sempre essere 0

## <a name="system-registers"></a>Registri di sistema

Ad esempio AArch32, la specifica AArch64 fornisce tre e controllato dal sistema "ID thread" registri che sono utilizzata/allocate come indicato di seguito:

Registrazione|Ruolo
|-|-|
TPIDR_EL0|Riservata
TPIDRRO_EL0|Contiene il numero di CPU per processore corrente
TPIDR_EL1|Punti alla struttura KPCR per processore corrente

## <a name="floating-point-exceptions"></a>Eccezioni a virgola mobile

Supporto per le eccezioni a virgola mobile IEEE è facoltativo nei sistemi AArch64. Per varianti del processore aventi eccezioni a virgola mobile hardware, il kernel di Windows rileva automaticamente le eccezioni e le disabilita in modo implicito nel registro FPCR. Si tratta per garantire un comportamento normalizzato nelle varianti del processore (in caso contrario, il codice sviluppato su una piattaforma senza supporto delle eccezioni può risultare stesso accettando le eccezioni impreviste durante l'esecuzione in una piattaforma con supporto).

## <a name="parameter-passing"></a>Passaggio dei parametri

Per le funzioni non variadic, l'ABI di Windows segue le regole specificate dalla ARM per il passaggio di parametri. Queste regole sono state estratte per l'architettura AArch64 direttamente da Standard di chiamare routine:

### <a name="stage-a--initialization"></a>Fase A-inizializzazione

Questa fase viene eseguita una sola volta, prima di avviare l'elaborazione degli argomenti.

1. Il protocollo successivo per l'uso generico registrare numero (NGRN) è impostato su zero.

1. Il successivo SIMD e numero di registro a virgola mobile (NSRN) è impostato su zero.

1. L'indirizzo dell'argomento in pila avanti (l'indirizzo NSAA) è impostata sul valore di puntatore dello stack corrente (SP).

### <a name="stage-b--pre-padding-and-extension-of-arguments"></a>Fase B-pre-spaziatura interna e l'estensione di argomenti

Per ogni argomento nell'elenco viene applicata la prima regola corrispondente nell'elenco seguente. Se nessuna corrispondenza regola viene utilizzato l'argomento non modificata.

1. Se il tipo di argomento è un tipo composito la cui dimensione non è possibile determinare in modo statico per il chiamante e chiamato, l'argomento viene copiato in memoria e l'argomento viene sostituito da un puntatore alla copia. (Non sono disponibili tali tipi in C/C++, ma sono presenti in altri linguaggi o nelle estensioni di linguaggio).

1. Se il tipo di argomento è un HFA o un tipo HVA, quindi viene utilizzato l'argomento non modificato.

1. Se il tipo di argomento è un tipo composito che è maggiore di 16 byte, l'argomento viene copiato per la memoria allocata dal chiamante e l'argomento viene sostituito da un puntatore alla copia.

1. Se il tipo di argomento è un tipo composito la dimensione dell'argomento viene arrotondata al multiplo più vicino di 8 byte.

### <a name="stage-c--assignment-of-arguments-to-registers-and-stack"></a>Fase C-assegnazione di argomenti ai registri e allo stack

Per ogni argomento nell'elenco le seguenti regole vengono applicate a sua volta, fino a quando l'argomento è stato allocato. Quando un argomento è assegnato a un registro non valore sono specificati bit qualsiasi inutilizzati nel registro. Quando un argomento è assegnato a uno slot di stack non valore sono specificati i byte di spaziatura interna inutilizzati.

1. Se l'argomento è una metà-, Single-, Double - o Quad-precisione a virgola mobile o tipo Short Vector e il NSRN è minore di 8, l'argomento viene allocato per i bit meno significativi del registratore di cassa v [NSRN]. Il NSRN viene incrementato di uno. L'argomento a questo punto è stato allocato.

1. Se l'argomento è un HFA o un tipo HVA e sono presenti sufficienti SIMD non allocato e registri a virgola mobile (NSRN + numero di membri ≤ 8), l'argomento viene allocato per SIMD e registri a virgola mobile (con un registratore di cassa per ogni membro della HFA o HVA). Il NSRN viene incrementato del numero di registri usati. L'argomento a questo punto è stato allocato.

1. Se l'argomento è un HFA o un tipo HVA il NSRN è impostata su 8 e le dimensioni dell'argomento viene arrotondata per eccesso al più vicino di 8 byte.

1. Se l'argomento è un HFA, un tipo HVA, un vettore di breve o a virgola mobile e precisione doppia Quad digitare l'indirizzo NSAA viene arrotondato un massimo di dimensioni maggiori di 8 o l'allineamento naturale del tipo dell'argomento.

1. Se l'argomento è un tipo a virgola mobile e precisione singola o metà, la dimensione dell'argomento è impostata su 8 byte. L'effetto è come se l'argomento non fosse stato copiato bit meno significativi di un registro a 64 bit e i bit rimanenti compilati con i valori non specificati.

1. Se l'argomento è un HFA, alla memoria in corrispondenza dell'indirizzo NSAA viene copiato un tipo HVA, Half-, Single-, Double - o Quad-precisione a virgola mobile o breve del tipo vettore, quindi l'argomento. L'indirizzo NSAA viene incrementato della dimensione dell'argomento. L'argomento a questo punto è stato allocato.

1. Se l'argomento è un tipo di puntatore o integrale, la dimensione dell'argomento è minore o uguale a 8 byte e il NGRN è minore di 8, l'argomento viene copiato il bit meno significativi in x [NGRN]. Il NGRN viene incrementato di uno. L'argomento a questo punto è stato allocato.

1. Se l'argomento ha un allineamento pari a 16 quindi il NGRN viene arrotondato per eccesso al successivo numero pari.

1. Se l'argomento è un tipo integrale, la dimensione dell'argomento è uguale a 16 e il NGRN è inferiore a 7, l'argomento viene copiato per x [NGRN] e x [NGRN + 1]. x [NGRN] deve contenere il più basso indirizzata-parola doppia della rappresentazione di memoria dell'argomento. Il NGRN viene incrementato a due. L'argomento a questo punto è stato allocato.

1. Se l'argomento è un tipo composito e le dimensioni in valore double-parole dell'argomento non sono maggiore di 8 meno NGRN, allora l'argomento viene copiato nei registri di utilizzo generale consecutivi, a partire da x [NGRN]. L'argomento viene passato come se fosse stato caricato nei registri da un indirizzo allineato a double word con una sequenza appropriata di istruzioni LDR caricamento registri consecutivi dalla memoria (il contenuto di eventuali parti non utilizzate di registri non è specificato da questo standard). Il NGRN viene incrementato del numero di registri usati. L'argomento a questo punto è stato allocato.

1. Il NGRN è impostata su 8.

1. L'indirizzo NSAA viene arrotondato per eccesso il maggiore di 8 o l'allineamento naturale del tipo dell'argomento...

1. Se l'argomento è un tipo composito alla memoria in corrispondenza dell'indirizzo NSAA viene copiato l'argomento. L'indirizzo NSAA viene incrementato della dimensione dell'argomento. L'argomento a questo punto è stato allocato.

1. Se la dimensione dell'argomento è minore di 8 byte a 8 byte è impostare la dimensione dell'argomento. L'effetto è come se l'argomento è stato copiato il bit meno significativi di un registro a 64 bit e i bit rimanenti compilati con i valori non specificati.

1. L'argomento viene copiato nella memoria in corrispondenza dell'indirizzo NSAA. L'indirizzo NSAA viene incrementato della dimensione dell'argomento. L'argomento a questo punto è stato allocato.

### <a name="addendum-variadic-functions"></a>Supplemento: Le funzioni Variadic

Le funzioni che accettano un numero variabile di argomenti vengono gestite in modo diverso rispetto di sopra, come indicato di seguito:

1. Tutti i componenti vengono trattati allo stesso modo; Nessun trattamento speciale di HFAs ossia le.

1. SIMD e registri a virgola mobile non vengono utilizzati.

In modo efficace ciò equivale a C.12–C.15 allocare argomenti da uno stack immaginario, in cui i primi 64 byte dello stack vengono caricati in x0 x7, e qualsiasi rimanenti argomenti dello stack vengono inseriti in genere le regole seguenti.

## <a name="return-values"></a>Valori restituiti

I valori integrali vengono restituiti in x0. Valori a virgola mobile vengono restituiti in s0/d0/v0 come appropriato.

Per restituire in base al valore che non può essere passato tramite registri, il chiamante conserva un blocco di memoria di dimensioni sufficienti e l'allineamento per contenere il risultato. L'indirizzo del blocco di memoria deve essere passato come argomento aggiuntivo alla funzione in x8 di tipo POD o x0 (o x1 se $ viene passato in x0) per il tipo non POD. Il chiamato può modificare il blocco di memoria del risultato in qualsiasi momento durante l'esecuzione della subroutine (c'è Nessun requisito per il chiamato mantenere il valore archiviato in x8, ma per non-POD, l'indirizzo del buffer deve essere restituito nello x0 anche dal chiamato).

## <a name="stack"></a>Stack

In seguito l'ABI da ARM, lo stack deve rimanere a 16 byte sempre l'allineamento. AArch64 contiene una funzionalità hardware che genera l'errore di allineamento dello stack errori ogni volta che viene eseguito un carico di SP relativo o l'archivio e stored procedure è di 16 byte non allineati. Windows esegue con questa funzionalità è abilitata in qualsiasi momento.

Funzioni che allocano 4 KB o più importante dello stack devono garantire che ogni pagina prima che la pagina finale sia elaborata in ordine, non garantendo così nessun codice può "andare oltre" i guard page che Windows utilizza per espandere lo stack. In genere questa operazione viene eseguita `__chkstk` helper, che usa una convenzione di chiamata personalizzata che supera l'allocazione totale dello stack diviso per 16 in x8.

## <a name="red-zone"></a>Zona rossa

L'area di 16 byte immediatamente sotto il puntatore dello stack corrente è riservato per l'uso da analisi e scenari di applicazione di patch dinamica. In questo modo attentamente il codice generato da inserire che archivia 2 registri in [sp, # 16] e usati temporaneamente per scopi arbitrari. Il kernel Windows garantisce che i 16 byte non verrà sovrascritto se un'eccezione o l'interruzione è in uso, in modalità utente e kernel.

## <a name="kernel-stack"></a>Stack del kernel

Lo stack in modalità kernel predefinito in Windows è sei pagine (24k). Prestare particolare attenzione alle funzioni con grandi buffer di stack in modalità kernel. Un interrupt intempestivo potrebbe provenire con pochissimo capacità aggiuntiva e creare un controllo errori gravi dello stack.

## <a name="stack-walking"></a>Analisi dello stack

Codice all'interno di Windows viene compilato con puntatori ai frame abilitati ([/Oy-](../build/reference/oy-frame-pointer-omission.md)) per abilitare l'analisi rapida dello stack. Il risultato è che x29 (fp) in genere fa riferimento al collegamento successivo nella catena, ovvero un {fp, lr} coppia che indica il puntatore al frame precedente nello stack e l'indirizzo del mittente. Codice di terze parti è consigliabile abilitare i puntatori ai frame anche per consentire di traccia e profilatura migliorata.

## <a name="exception-unwinding"></a>Rimozione delle eccezioni

Rimozione durante la gestione delle eccezioni è assistita tramite l'utilizzo di codici di rimozione. I codici di rimozione sono sequenze di byte archiviata nella sezione. XData dell'eseguibile che descrivono il funzionamento di prologo ed epilogo in modo astratto, in modo che gli effetti del prologo di una funzione possono essere annullati in preparazione per il backup sul stack frame del chiamante. Per altre informazioni sui codici di rimozione, vedere [la gestione delle eccezioni ARM64](arm64-exception-handling.md).

L'interfaccia EABI ARM specifica inoltre un modello di rimozione delle eccezioni che utilizza i codici di rimozione. Tuttavia, la specifica come viene presentato non è sufficiente per la rimozione in Windows, che deve gestire casi in cui il PC è al centro del prologo o epilogo di una funzione.

È necessario descrivere il codice che viene generato dinamicamente con le tabelle di funzione dinamica tramite `RtlAddFunctionTable` e le funzioni associate, in modo che il codice generato può far parte di gestione delle eccezioni.

## <a name="cycle-counter"></a>Contatore di cicli

Tutte le CPU ARMv8 necessari per supportare un ciclo di registro del contatore. Si tratta di un registro a 64 bit che consente di configurare Windows per essere leggibili in qualsiasi livello di eccezione (tra cui modalità utente). È possibile accedervi tramite la speciale PMCCNTR_EL0 registrare, tramite il codice operativo MSR nel codice dell'assembly, o `_ReadStatusReg` intrinseco in codice C/C++.

Si noti che il contatore di cicli di seguito è un contatore di cicli true, non un orologio muro e pertanto la frequenza del conteggio varia con la frequenza del processore. Se si ritiene che è necessario conoscere la frequenza del contatore del ciclo, è consigliabile non usare il contatore di cicli. Al contrario, si vuole misurare tempo di clock, per cui è consigliabile usare `QueryPerformanceCounter`.

## <a name="see-also"></a>Vedere anche

[Problemi comuni relativi alla migrazione di Visual C++ ARM](../build/common-visual-cpp-arm-migration-issues.md)<br/>
[Gestione delle eccezioni ARM64](../build/arm64-exception-handling.md)
