---
title: Variabili d'ambiente per le ottimizzazioni GPO
ms.date: 03/14/2018
helpviewer_keywords:
- profile-guided optimizations, environment variables
ms.assetid: f95a6d1e-49a4-4802-a144-092026b600a3
ms.openlocfilehash: 099e57f1ac69223adafe7bec1af4cc3452915e86
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827509"
---
# <a name="environment-variables-for-profile-guided-optimizations"></a>Variabili d'ambiente per le ottimizzazioni GPO

Esistono tre variabili di ambiente che interessano gli scenari di test su un'immagine creata con **/LTCG: PGI** per le ottimizzazioni PGO:

- **PogoSafeMode** specifica se utilizzare la modalità veloce o modalità sicura per la profilatura dell'applicazione.

- **VCPROFILE_ALLOC_SCALE** aggiunge altra memoria per l'utilizzo dal profiler.

- **VCPROFILE_PATH** consente di specificare la cartella usata per i file. pgc.

**Le variabili di ambiente PogoSafeMode e VCPROFILE_ALLOC_SCALE sono deprecate a partire da Visual Studio 2015.** Le opzioni del linker [/GENPROFILE o /fastgenprofile.](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) e [/USEPROFILE](reference/useprofile.md) specificare lo stesso comportamento del linker come queste variabili di ambiente.

## <a name="pogosafemode"></a>PogoSafeMode

Questa variabile di ambiente è deprecata. Usare il **EXACT** o **NOEXACT** argomenti **/GENPROFILE** oppure **/FASTGENPROFILE** per controllare questo comportamento.

Impostare o deselezionare i **PogoSafeMode** variabile di ambiente per specificare se utilizzare la modalità veloce o modalità sicura per la profilatura dell'applicazione su x86 sistemi.

Ottimizzazione PGO (PGO) dispone di due possibili modalità durante la fase di analisi: *modalità veloce* e *modalità provvisoria*. Una volta profilatura in modalità veloce, utilizza il **INC** (istruzione) per aumentare i contatori di dati. Il **INC** istruzione è più veloce ma non è thread-safe. Una volta profilatura in modalità provvisoria, Usa il **blocco INC** (istruzione) per aumentare i contatori di dati. Il **blocco INC** istruzione ha la stessa funzionalità il **INC** istruzione ed è thread-safe, ma è più lenta la **INC** (istruzione).

Per impostazione predefinita, profilazione PGO viene eseguita in modalità veloce. **PogoSafeMode** è necessaria solo se si desidera utilizzare la modalità provvisoria.

Per eseguire la profilazione PGO in modalità provvisoria, è necessario usare la variabile di ambiente **PogoSafeMode** o l'opzione del linker **/PogoSafeMode**, a seconda del sistema. Se si sta eseguendo la profilatura su un x64 computer, è necessario usare l'opzione del linker. Se si sta eseguendo la profilatura su un x86 computer, è possibile usare il linker cambiare o impostare il **PogoSafeMode** variabile di ambiente su qualsiasi valore prima di iniziare il processo di ottimizzazione.

### <a name="pogosafemode-syntax"></a>Sintassi PogoSafeMode

> **impostare PogoSafeMode**[**=**_valore_]

Impostare **PogoSafeMode** qualsiasi valore per attivare la modalità provvisoria. Impostare senza un valore per cancellare un valore precedente e abilitare di nuovo la modalità veloce.

## <a name="vcprofileallocscale"></a>VCPROFILE_ALLOC_SCALE

Questa variabile di ambiente è deprecata. Usare il **MEMMIN** e **MEMMAX** argomenti **/GENPROFILE** oppure **/FASTGENPROFILE** per controllare questo comportamento.

Modificare il **VCPROFILE_ALLOC_SCALE** variabile di ambiente per modificare la quantità di memoria allocata per contenere i dati del profilo. In rari casi, non sia disponibile memoria sufficiente per supportare la raccolta dei dati di profilo durante l'esecuzione di scenari di test. In questi casi, è possibile aumentare la quantità di memoria impostando **VCPROFILE_ALLOC_SCALE**. Se si riceve un messaggio di errore durante l'esecuzione di un test che indica la presenza di memoria insufficiente, assegnare un valore maggiore di **VCPROFILE_ALLOC_SCALE**, fino a quando l'esecuzione del test completato senza errori di memoria insufficiente.

### <a name="vcprofileallocscale-syntax"></a>Sintassi VCPROFILE_ALLOC_SCALE

> **impostare VCPROFILE_ALLOC_SCALE**[__=__*scale_value*]

Il *scale_value* parametro è un fattore di scala per la quantità di memoria che si desidera per l'esecuzione di scenari di test.  Il valore predefinito è 1. Ad esempio, questa riga di comando imposta il fattore di scala su 2:

`set VCPROFILE_ALLOC_SCALE=2`

## <a name="vcprofilepath"></a>VCPROFILE_PATH

Usare la **VCPROFILE_PATH** variabile di ambiente per specificare la directory per creare i file. pgc. Per impostazione predefinita, i file. pgc vengono creati nella stessa directory del file binario sottoposto a profilatura. Tuttavia, se non esiste, il percorso assoluto del file binario, come può verificarsi quando gli scenari profilo vengono eseguiti in un computer diverso da in cui è stato compilato il file binario, è possibile impostare **VCPROFILE_PATH** a un percorso esistente nel computer di destinazione.

### <a name="vcprofilepath-syntax"></a>Sintassi VCPROFILE_PATH

> **impostare VCPROFILE_PATH**[**=**_percorso_]

Impostare il *percorso* parametro per il percorso della directory in cui aggiungere i file. pgc. Ad esempio, questa riga di comando imposta la cartella per C:\profile:

`set VCPROFILE_PATH=c:\profile`

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni PGO](profile-guided-optimizations.md)<br/>
[/ GENPROFILE e /FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/USEPROFILE](reference/useprofile.md)<br/>
