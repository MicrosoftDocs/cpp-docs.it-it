---
title: pgosweep
description: Usare il comando pgosweep per scrivere i dati di profilo in un file PGC per l'uso nell'ottimizzazione PGO.
ms.date: 10/23/2020
helpviewer_keywords:
- pgosweep program
- profile-guided optimizations, pgosweep
ms.openlocfilehash: be96d0f092ff65867c304ddf5eb41c0754f6e4be
ms.sourcegitcommit: bf54b407169900bb668c85a67b31dbc0f069fe65
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2020
ms.locfileid: "92497185"
---
# <a name="pgosweep"></a>pgosweep

Usato nell'ottimizzazione PGO per scrivere tutti i dati di profilo da un programma in esecuzione nel file PGC.

## <a name="syntax"></a>Sintassi

> **`pgosweep`**[*Opzioni*] *image* *pgcfile* immagine

### <a name="parameters"></a>Parametri

*Opzioni*\
Opzionale I valori validi per le *Opzioni* sono:

- **`/?`** in alternativa **`/help`** , Visualizza il messaggio della guida.

- **`/reset`** Reimposta i conteggi su zero dopo lo sweep. Questo è il comportamento predefinito.

- **`/pid:n`** consente di spazzare solo il PID specificato, dove *n* è il numero pid.

- **`/wait`** attende la terminazione del PID specificato prima di raccogliere i conteggi.

- **`/onlyzero`** non salva un file PGC, ma solo zero conteggi.

- **`/pause`** sospende la raccolta dei conteggi nel sistema.

- **`/resume`** riprende la raccolta di conteggi nel sistema.

- **`/noreset`** conserva il conteggio nelle strutture dei dati di Runtime.

*image*\
Percorso completo di un file EXE o DLL creato utilizzando l' [`/GENPROFILE`](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) [`/FASTGENPROFILE`](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) opzione, o [`/LTCG:PGINSTRUMENT`](reference/ltcg-link-time-code-generation.md) .

*pgcfile*\
File PGC in cui questo comando scrive i conteggi dei dati.

## <a name="remarks"></a>Commenti

Il **`pgosweep`** comando funziona sui programmi compilati usando l'opzione [ `/GENPROFILE` o `/FASTGENPROFILE` ](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) o l'opzione deprecata [`/LTCG:PGINSTRUMENT`](reference/ltcg-link-time-code-generation.md) . Interrompe un programma in esecuzione e scrive i dati del profilo in un nuovo file PGC. Per impostazione predefinita, il comando Reimposta i conteggi dopo ogni operazione di scrittura. Se si specifica l' **`/noreset`** opzione, il comando registrerà i valori, ma non li Reimposta nel programma in esecuzione. Questa opzione fornisce dati duplicati se i dati del profilo vengono recuperati in un secondo momento.

In alternativa **`pgosweep`** , è possibile recuperare le informazioni sul profilo solo per il normale funzionamento dell'applicazione. Ad esempio, è possibile eseguire **`pgosweep`** poco dopo l'avvio dell'applicazione ed eliminare tale file. Questo comando rimuoverà i dati di profilo associati ai costi di avvio. Quindi, è possibile eseguire **`pgosweep`** prima di terminare l'applicazione. Ora i dati raccolti hanno informazioni sul profilo solo dal momento in cui l'utente può interagire con il programma.

Quando si assegna un nome a un file PGC (usando il parametro *pgcfile* ), è possibile usare il formato standard, ovvero *`appname!n.pgc`* . *N* rappresenta un valore numerico crescente per ogni file. Se si usa questo formato, il compilatore trova automaticamente questi dati nella **`/LTCG /USEPROFILE`** fase o **`/LTCG:PGO`** . Se non si usa il formato standard, è necessario usare [`pgomgr`](pgomgr.md) per unire i file PGC.

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per gli sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora file.

Per informazioni su come acquisire i dati del profilo dall'interno dell'eseguibile, vedere [`PgoAutoSweep`](pgoautosweep.md) .

## <a name="example"></a>Esempio

In questo comando di esempio, **`pgosweep`** scrive le informazioni sul profilo corrente per *`myapp.exe`* in *`myapp!1.pgc`* .

`pgosweep myapp.exe myapp!1.pgc`

## <a name="see-also"></a>Vedi anche

[Ottimizzazioni PGO](profile-guided-optimizations.md)\
[PgoAutoSweep](pgoautosweep.md)
