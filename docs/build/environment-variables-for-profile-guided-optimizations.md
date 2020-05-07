---
title: Variabili d'ambiente per le ottimizzazioni GPO
ms.date: 03/14/2018
helpviewer_keywords:
- profile-guided optimizations, environment variables
ms.assetid: f95a6d1e-49a4-4802-a144-092026b600a3
ms.openlocfilehash: 099e57f1ac69223adafe7bec1af4cc3452915e86
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62195273"
---
# <a name="environment-variables-for-profile-guided-optimizations"></a>Variabili d'ambiente per le ottimizzazioni GPO

Sono disponibili tre variabili di ambiente che interessano gli scenari di test in un'immagine creata con **/LTCG: IGP** per le ottimizzazioni PGO:

- **PogoSafeMode** specifica se utilizzare la modalità rapida o sicura per la profilatura dell'applicazione.

- **VCPROFILE_ALLOC_SCALE** aggiunge memoria aggiuntiva per l'uso da parte del profiler.

- **VCPROFILE_PATH** consente di specificare la cartella utilizzata per i file PGC.

**Le variabili di ambiente PogoSafeMode e VCPROFILE_ALLOC_SCALE sono deprecate a partire da Visual Studio 2015.** Le opzioni del linker [/GENPROFILE o/FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) e [/USEPROFILE](reference/useprofile.md) specificano lo stesso comportamento del linker delle variabili di ambiente.

## <a name="pogosafemode"></a>PogoSafeMode

Questa variabile di ambiente è deprecata. Usare gli argomenti **esatti** o **noesatti** per **/GENPROFILE** o **/FASTGENPROFILE** per controllare questo comportamento.

Deselezionare o impostare la variabile di ambiente **PogoSafeMode** per specificare se usare la modalità rapida o sicura per la profilatura delle applicazioni in sistemi x86.

L'ottimizzazione PGO (PGO) dispone di due modalità possibili durante la fase di profilatura: *modalità veloce* e *modalità provvisoria*. Quando la profilatura è in modalità rapida, usa l'istruzione **Inc** per aumentare i contatori dei dati. L'istruzione **Inc** è più veloce ma non è thread-safe. Quando la profilatura è in modalità provvisoria, usa l'istruzione **Lock Inc** per aumentare i contatori dei dati. L'istruzione **Lock Inc** ha la stessa funzionalità dell'istruzione **Inc** ed è thread-safe, ma è più lenta dell'istruzione **Inc** .

Per impostazione predefinita, la profilatura di PGO funziona in modalità veloce. **PogoSafeMode** è necessario solo se si desidera utilizzare la modalità provvisoria.

Per eseguire la profilatura di PGO in modalità provvisoria, è necessario usare la variabile di ambiente **PogoSafeMode** o l'opzione del linker **/PogoSafeMode**, a seconda del sistema. Se si sta eseguendo la profilatura in un computer x64, è necessario usare l'opzione del linker. Se si sta eseguendo la profilatura in un computer x86, è possibile usare l'opzione del linker o impostare la variabile di ambiente **PogoSafeMode** su qualsiasi valore prima di avviare il processo di ottimizzazione.

### <a name="pogosafemode-syntax"></a>Sintassi di PogoSafeMode

> **set PogoSafeMode**[**=**_valore_]

Impostare **PogoSafeMode** su qualsiasi valore per abilitare la modalità provvisoria. Impostare senza un valore per cancellare un valore precedente e riabilitare la modalità rapida.

## <a name="vcprofile_alloc_scale"></a>VCPROFILE_ALLOC_SCALE

Questa variabile di ambiente è deprecata. Per controllare questo comportamento, usare gli argomenti **MEMMIN** e **MEMMAX** per **/GENPROFILE** o **/FASTGENPROFILE** .

Modificare la variabile di ambiente **VCPROFILE_ALLOC_SCALE** per modificare la quantità di memoria allocata per conservare i dati del profilo. In rari casi, non sarà disponibile memoria sufficiente per supportare la raccolta dei dati di profilo durante l'esecuzione di scenari di test. In questi casi, è possibile aumentare la quantità di memoria impostando **VCPROFILE_ALLOC_SCALE**. Se durante un'esecuzione dei test viene visualizzato un messaggio di errore che indica che la memoria è insufficiente, assegnare un valore maggiore a **VCPROFILE_ALLOC_SCALE**, finché il test non viene completato senza errori di memoria esaurita.

### <a name="vcprofile_alloc_scale-syntax"></a>Sintassi VCPROFILE_ALLOC_SCALE

> **imposta VCPROFILE_ALLOC_SCALE**[__=__*scale_value*]

Il parametro *scale_value* rappresenta un fattore di scala per la quantità di memoria desiderata per l'esecuzione di scenari di test.  Il valore predefinito è 1. Questa riga di comando, ad esempio, imposta il fattore di scala su 2:

`set VCPROFILE_ALLOC_SCALE=2`

## <a name="vcprofile_path"></a>VCPROFILE_PATH

Utilizzare la variabile di ambiente **VCPROFILE_PATH** per specificare la directory per la creazione di file PGC. Per impostazione predefinita, i file con estensione PGC vengono creati nella stessa directory del file binario sottofilato. Tuttavia, se il percorso assoluto del file binario non esiste, come può accade quando si eseguono gli scenari di profilo in un computer diverso da cui è stato compilato il file binario, è possibile impostare **VCPROFILE_PATH** su un percorso esistente nel computer di destinazione.

### <a name="vcprofile_path-syntax"></a>Sintassi VCPROFILE_PATH

> **imposta VCPROFILE_PATH**[**=**_percorso_]

Impostare il parametro *path* sul percorso della directory in cui aggiungere i file PGC. Questa riga di comando, ad esempio, imposta la cartella su C:\profile:

`set VCPROFILE_PATH=c:\profile`

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni guidate da profilo (PGO)](profile-guided-optimizations.md)<br/>
[/GENPROFILE e/FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/USEPROFILE](reference/useprofile.md)<br/>
