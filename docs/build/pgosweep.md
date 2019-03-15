---
title: pgosweep
ms.date: 03/14/2018
helpviewer_keywords:
- pgosweep program
- profile-guided optimizations, pgosweep
ms.assetid: f39dd3b7-1cd9-4c3b-8e8b-fb794744b757
ms.openlocfilehash: 3ba31671fc3794e1cc959d86d914ba1eef2e01e4
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827429"
---
# <a name="pgosweep"></a>pgosweep

Usata nell'ottimizzazione PGO per scrivere nel file. pgc tutti i dati di profilo da un programma in esecuzione.

## <a name="syntax"></a>Sintassi

> **pgosweep** [*options*] *image* *pgcfile*

### <a name="parameters"></a>Parametri

*options*<br/>
(Facoltativo) I valori validi per *opzioni* sono:

- **/?** oppure **/Help** viene visualizzato il messaggio della Guida.

- **/noreset** mantiene il conteggio nelle strutture di dati di runtime.

*image*<br/>
Il percorso completo di un file .exe o DLL che è stato creato utilizzando il [/GENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md), [/FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md), o [/LTCG: PGINSTRUMENT](reference/ltcg-link-time-code-generation.md) opzione.

*pgcfile*<br/>
Il file. pgc in cui questo comando scrive i dati di conteggi.

## <a name="remarks"></a>Note

Il **pgosweep** comando funziona sui programmi che sono stati compilati usando la [/GENPROFILE o /fastgenprofile.](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) opzione o deprecata [/LTCG: PGINSTRUMENT](reference/ltcg-link-time-code-generation.md) opzione. Interrompe un programma in esecuzione e scrive i dati del profilo in un nuovo file. pgc. Per impostazione predefinita, il comando Reimposta conteggi dopo ogni operazione di scrittura. Se si specifica la **/noreset** opzione, il comando verrà registrare i valori, ma non li Reimposta nel programma in esecuzione. Questa opzione fornisce i dati duplicati se si recuperano i dati di profilo in un secondo momento.

Un'alternativa, l'utilizzo per **pgosweep** consiste nel recuperare informazioni sul profilo per il normale funzionamento dell'applicazione. Ad esempio, è possibile eseguire **pgosweep** subito dopo l'avvio dell'applicazione e ignorare il file. Questo potrebbe rimuovere i dati di profilo associati i costi di avvio. Quindi, è possibile eseguire **pgosweep** prima di terminare l'applicazione. Ora i dati raccolti contengono le informazioni sul profilo solo dal momento in cui l'utente può interagire con il programma.

Quando si assegna un nome in un file pgc (usando il *pgcfile* parametro) è possibile usare il formato standard, ovvero *NomeApp! n*. pgc. Se si usa questo formato, il compilatore rileva automaticamente i dati nel **//USEPROFILE LTCG** oppure **/LTCG: PGO** fase. Se non si utilizza il formato standard, è necessario utilizzare [pgomgr](pgomgr.md) per unire i file. pgc.

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per gli sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

Per informazioni su come acquisire i dati di profilo all'interno del file eseguibile, vedere [PgoAutoSweep](pgoautosweep.md).

## <a name="example"></a>Esempio

In questo esempio, **pgosweep** scrive le informazioni sul profilo corrente per myapp.exe myapp!1.pgc.

`pgosweep myapp.exe myapp!1.pgc`

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni PGO](profile-guided-optimizations.md)<br/>
[PgoAutoSweep](pgoautosweep.md)<br/>
