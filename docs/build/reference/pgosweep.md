---
title: pgosweep | Documenti Microsoft
ms.custom: ''
ms.date: 03/14/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- pgosweep program
- profile-guided optimizations, pgosweep
ms.assetid: f39dd3b7-1cd9-4c3b-8e8b-fb794744b757
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ded5b692d7c51e5a46a325a69ad6969083025ff5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378925"
---
# <a name="pgosweep"></a>pgosweep

Utilizzato nell'ottimizzazione PGO per scrivere il file pgc tutti i dati di profilo da un programma in esecuzione.

## <a name="syntax"></a>Sintassi

> **pgosweep** [*opzioni*] *immagine* *pgcfile*

### <a name="parameters"></a>Parametri

*opzioni* (facoltativo)<br/>
I valori validi per *opzioni* sono:

- **/?** o **/Help** viene visualizzato il messaggio della Guida.

- **/noreset** mantiene il conteggio nelle strutture di dati di runtime.

*Immagine*<br/>
Il percorso completo di un file .exe o DLL che è stato creato utilizzando il [/GENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md), [/FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md), o [/LTCG: PGINSTRUMENT](ltcg-link-time-code-generation.md) opzione.

*pgcfile*<br/>
Il file. pgc presenti in questo comando scrive i dati di conteggi.

## <a name="remarks"></a>Note

Il **pgosweep** comando funziona sui programmi che sono stati compilati usando la [/GENPROFILE o /fastgenprofile.](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) opzione o deprecata [/LTCG: PGINSTRUMENT](ltcg-link-time-code-generation.md) opzione. Interrompe un programma in esecuzione e scrive i dati di profilo in un nuovo file pgc. Per impostazione predefinita, il comando Reimposta i conteggi dopo ogni operazione di scrittura. Se si specifica il **/noreset** opzione, il comando verrà registrare i valori, ma non reimpostarli nel programma in esecuzione. Se si recuperano i dati del profilo in un secondo momento, questa opzione fornisce i dati duplicati.

Un utilizzo alternativo per **pgosweep** è quello di recuperare informazioni sul profilo solo per il normale funzionamento dell'applicazione. Ad esempio, è possibile eseguire **pgosweep** subito dopo l'avvio dell'applicazione e ignorare il file. Verranno rimossi i dati di profilo associati costi di avvio. Quindi, è possibile eseguire **pgosweep** prima di terminare l'applicazione. I dati raccolti dispone ora informazioni sul profilo solo dal momento in cui l'utente può interagire con il programma.

Quando un nome a un file pgc (usando il *pgcfile* parametro) è possibile utilizzare il formato standard, ovvero *NomeApp! n*. pgc. Se si utilizza questo formato, il compilatore rileva automaticamente i dati nel **/LTCG /USEPROFILE** oppure **/LTCG: PGO** fase. Se non si utilizza il formato standard, è necessario utilizzare [pgomgr](pgomgr.md) per unire i file pgc.

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

Per informazioni su come acquisire i dati di profilo all'interno del file eseguibile, vedere [PgoAutoSweep](pgoautosweep.md).

## <a name="example"></a>Esempio

In questo esempio, **pgosweep** scrive le informazioni sul profilo corrente per myapp.exe myapp!1.pgc.

`pgosweep myapp.exe myapp!1.pgc`

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni PGO](profile-guided-optimizations.md)<br/>
[PgoAutoSweep](pgoautosweep.md)<br/>
