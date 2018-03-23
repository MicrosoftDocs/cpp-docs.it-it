---
title: Le variabili di ambiente per le ottimizzazioni PGO | Documenti Microsoft
ms.custom: ''
ms.date: 03/14/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- profile-guided optimizations, environment variables
ms.assetid: f95a6d1e-49a4-4802-a144-092026b600a3
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 701f0292d9960801139abc698946122718247645
ms.sourcegitcommit: ee7d74683af7631441c8c7f65ef5ceceaee4a5ee
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/22/2018
---
# <a name="environment-variables-for-profile-guided-optimizations"></a>Variabili d'ambiente per le ottimizzazioni GPO

Esistono tre variabili di ambiente che interessano gli scenari di test in un'immagine creata con **/LTCG: PGI** per le ottimizzazioni PGO:

- **PogoSafeMode** specifica se utilizzare la modalità veloce o in modalità provvisoria per la profilatura dell'applicazione.

- **VCPROFILE_ALLOC_SCALE** aggiunge memoria aggiuntiva per l'utilizzo dal profiler.

- **VCPROFILE_PATH** consente di specificare la cartella utilizzata per i file pgc.

**Le variabili di ambiente PogoSafeMode e VCPROFILE_ALLOC_SCALE sono deprecate a partire da Visual Studio 2015.** Le opzioni del linker [/GENPROFILE o /fastgenprofile.](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) e [/USEPROFILE](useprofile.md) specificare lo stesso comportamento del linker come queste variabili di ambiente.

## <a name="pogosafemode"></a>PogoSafeMode

Questa variabile di ambiente è deprecata. Usare la **EXACT** o **NOEXACT** argomenti **/GENPROFILE** o **/FASTGENPROFILE** per controllare questo comportamento.

Impostare o deselezionare le **PogoSafeMode** variabile di ambiente per specificare se utilizzare la modalità veloce o in modalità provvisoria per la profilatura dell'applicazione nel x86 sistemi.

Ottimizzazione guidata da profilo (PGO) è disponibili due modalità possibili durante la fase di profilo: *modalità veloce* e *modalità provvisoria*. Quando l'analisi è in modalità veloce, utilizza il **INC** istruzione per aumentare i contatori di dati. Il **INC** istruzione è più veloce, ma non è thread-safe. Quando l'analisi è in modalità provvisoria, utilizza il **LOCK INC** istruzione per aumentare i contatori di dati. Il **LOCK INC** istruzione ha la stessa funzionalità di **INC** istruzione ed è thread-safe, ma risulta più lenta il **INC** istruzione.

Per impostazione predefinita, profilazione opera in modalità veloce. **PogoSafeMode** è obbligatorio solo se si desidera utilizzare la modalità provvisoria.

Per eseguire la profilazione in modalità provvisoria, è necessario utilizzare la variabile di ambiente **PogoSafeMode** o l'opzione del linker **/PogoSafeMode**, a seconda del sistema. Se si sta eseguendo la profilatura di un x64 computer, è necessario utilizzare l'opzione del linker. Se si sta eseguendo la profilatura di x86 computer, è possibile utilizzare il linker passare o impostare il **PogoSafeMode** variabile di ambiente a qualsiasi valore prima di iniziare il processo di ottimizzazione.

### <a name="pogosafemode-syntax"></a>Sintassi PogoSafeMode

> **set PogoSafeMode**[**=**_value_]

Impostare **PogoSafeMode** qualsiasi valore per attivare la modalità provvisoria. Impostare senza un valore per cancellare un valore precedente e abilitare di nuovo la modalità veloce.

## <a name="vcprofileallocscale"></a>VCPROFILE_ALLOC_SCALE

Questa variabile di ambiente è deprecata. Utilizzare il **MEMMIN** e **MEMMAX** argomenti **/GENPROFILE** oppure **/FASTGENPROFILE** per controllare questo comportamento.

Modificare il **VCPROFILE_ALLOC_SCALE** variabile di ambiente per modificare la quantità di memoria allocata per contenere i dati di profilo. In rari casi, non sarà disponibile memoria sufficiente supportare la raccolta dei dati di profilo durante l'esecuzione di scenari di test. In questi casi, è possibile aumentare la quantità di memoria impostando **VCPROFILE_ALLOC_SCALE**. Se si riceve un messaggio di errore durante un'esecuzione dei test che indica la presenza di memoria insufficiente, assegnare un valore maggiore di **VCPROFILE_ALLOC_SCALE**, fino a quando non le esecuzioni dei test completata senza errori di memoria insufficiente.

### <a name="vcprofileallocscale-syntax"></a>Sintassi VCPROFILE_ALLOC_SCALE

> **set VCPROFILE_ALLOC_SCALE**[__=__*scale_value*]

Il *scale_value* parametro è un fattore di scala per la quantità di memoria desiderata per l'esecuzione di scenari di test.  Il valore predefinito è 1. Ad esempio, questa riga di comando imposta il fattore di scala di 2:

`set VCPROFILE_ALLOC_SCALE=2`

## <a name="vcprofilepath"></a>VCPROFILE_PATH

Usare la **VCPROFILE_PATH** variabile di ambiente per specificare la directory per creare i file. pgc. Per impostazione predefinita, i file pgc vengono creati nella stessa directory del file binario sottoposto a profilatura. Tuttavia, se il percorso assoluto del file binario non esiste, come quando si esegue gli scenari di profilo in un computer diverso da in cui è stato compilato il file binario può essere il caso, è possibile impostare **VCPROFILE_PATH** a un percorso esistente nel computer di destinazione.

### <a name="vcprofilepath-syntax"></a>Sintassi VCPROFILE_PATH

> **impostare VCPROFILE_PATH**[**=**_percorso_]

Impostare il *percorso* parametro per il percorso della directory in cui si desidera aggiungere i file. pgc. Ad esempio, questa riga di comando imposta la cartella per C:\profile:

`set VCPROFILE_PATH=c:\profile`

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md)<br/>
[/ GENPROFILE e /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md)<br/>
[/USEPROFILE](useprofile.md)<br/>
