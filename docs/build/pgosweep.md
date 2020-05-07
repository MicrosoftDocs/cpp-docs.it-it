---
title: pgosweep
ms.date: 03/14/2018
helpviewer_keywords:
- pgosweep program
- profile-guided optimizations, pgosweep
ms.assetid: f39dd3b7-1cd9-4c3b-8e8b-fb794744b757
ms.openlocfilehash: 3ba31671fc3794e1cc959d86d914ba1eef2e01e4
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64341190"
---
# <a name="pgosweep"></a>pgosweep

Usato nell'ottimizzazione PGO per scrivere tutti i dati di profilo da un programma in esecuzione nel file PGC.

## <a name="syntax"></a>Sintassi

> **pgosweep** [*Opzioni*] *immagine* *pgcfile*

### <a name="parameters"></a>Parametri

*options*<br/>
Opzionale I valori validi per le *Opzioni* sono:

- **/?** o **/Help** Visualizza il messaggio della guida.

- **/noreset** conserva il conteggio nelle strutture dei dati di Runtime.

*image*<br/>
Percorso completo di un file con estensione exe o dll creato con l'opzione [/GENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md), [/FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md)o [/LTCG: PGINSTRUMENT](reference/ltcg-link-time-code-generation.md) .

*pgcfile*<br/>
Il file con estensione PGC in cui questo comando scrive i conteggi dei dati.

## <a name="remarks"></a>Osservazioni

Il comando **pgosweep** funziona sui programmi compilati con l'opzione [/GENPROFILE o/FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) o l'opzione deprecated [/LTCG: PGINSTRUMENT](reference/ltcg-link-time-code-generation.md) . Interrompe un programma in esecuzione e scrive i dati del profilo in un nuovo file PGC. Per impostazione predefinita, il comando Reimposta i conteggi dopo ogni operazione di scrittura. Se si specifica l'opzione **/noreset** , il comando registrerà i valori, ma non li Reimposta nel programma in esecuzione. Questa opzione fornisce dati duplicati se i dati del profilo vengono recuperati in un secondo momento.

In alternativa, è possibile usare **pgosweep** per recuperare le informazioni sul profilo solo per il normale funzionamento dell'applicazione. Ad esempio, è possibile eseguire **pgosweep** subito dopo l'avvio dell'applicazione e l'eliminazione del file. Verranno rimossi i dati di profilo associati ai costi di avvio. Quindi, è possibile eseguire **pgosweep** prima di terminare l'applicazione. Ora i dati raccolti hanno informazioni sul profilo solo dal momento in cui l'utente può interagire con il programma.

Quando si assegna un nome a un file con estensione PGC (usando il parametro *pgcfile* ), è possibile usare il formato standard, ovvero *appname! n*. pgc. Se si usa questo formato, il compilatore trova automaticamente questi dati nella fase **/LTCG/USEPROFILE** o **/LTCG: PGO** . Se non si utilizza il formato standard, è necessario utilizzare [pgomgr](pgomgr.md) per unire i file PGC.

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per gli sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

Per informazioni su come acquisire i dati del profilo dall'interno dell'eseguibile, vedere [PgoAutoSweep](pgoautosweep.md).

## <a name="example"></a>Esempio

In questo comando di esempio, **pgosweep** scrive le informazioni sul profilo corrente per MyApp. exe in myapp! 1. pgc.

`pgosweep myapp.exe myapp!1.pgc`

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni guidate da profilo (PGO)](profile-guided-optimizations.md)<br/>
[PgoAutoSweep](pgoautosweep.md)<br/>
