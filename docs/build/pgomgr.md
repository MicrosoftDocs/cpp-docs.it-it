---
title: pgomgr
ms.date: 03/14/2018
helpviewer_keywords:
- pgomgr program
- profile-guided optimizations, pgomgr
ms.assetid: 74589126-df18-42c9-8739-26d60e148d6a
ms.openlocfilehash: 4e3eb08c88db9d0ed4e47649014a600c3e0ccb78
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295253"
---
# <a name="pgomgr"></a>pgomgr

Aggiunge i dati del profilo da uno o più file. pgc per il file pgd.

## <a name="syntax"></a>Sintassi

> **pgomgr** [*options*] *pgcfiles* *pgdfile*

### <a name="parameters"></a>Parametri

*options*<br/>
Le opzioni seguenti possono essere specificate da **pgomgr**:

- **/Help** o **/?** Consente di visualizzare disponibili **pgomgr** opzioni.

- **/ cancellare** fa sì che il file pgd essere cancellate tutte le informazioni di profilo. Non è possibile specificare un. pgc file quando **/Clear** è specificato.

- **/Detail** vengono visualizzate statistiche dettagliate, incluse le informazioni di code coverage grafico del flusso.

- **/ summary** consente di visualizzare le statistiche per ogni funzione.

- **/ univoci** quando abbinata **/summary**, determina decorati i nomi delle funzioni da visualizzare. L'impostazione predefinita, quando **/ univoco** non viene utilizzato sia per i nomi di funzione non decorati da visualizzare.

- **/ merge**\[**:**<em>n</em>] fa sì che i dati nel file. pgc o dei file da aggiungere al file pgd. Il parametro facoltativo *n*, consente di specificare che i dati devono essere aggiunte *n* volte. Ad esempio, se uno scenario comunemente sarebbe sei volte eseguite in modo da riflettere la frequenza avviene da parte dei clienti, è possibile eseguire una volta in un'esecuzione dei test e aggiungerlo al file pgd con sei volte **/merge: 6 pgomgr**.

*pgcfiles*<br/>
Uno o più file pgc cui dati di profilo che si desidera unire il file pgd. È possibile specificare un file pgc singolo o più file. pgc. Se non si specifica tutti i file. pgc **pgomgr** unisce tutti i file. pgc cui nomi sono gli stessi file pgd.

*pgdfile*<br/>
Il file pgd in cui vengono uniti i dati dal file. pgc o dei file.

## <a name="remarks"></a>Note

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per gli sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

## <a name="example"></a>Esempio

Questo comando Cancella il file pgd di dati di profilo:

`pgomgr /clear myapp.pgd`

Questo comando di esempio consente di aggiungere i dati del profilo in MyApp1 al file pgd tre volte:

`pgomgr /merge:3 myapp1.pgc myapp.pgd`

In questo esempio, i dati del profilo da tutti i file. pgc & myapp viene aggiunto al file pgd.

`pgomgr -merge myapp1.pgd`

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni PGO](profile-guided-optimizations.md)<br/>
[PgoAutoSweep](pgoautosweep.md)<br/>
[pgosweep](pgosweep.md)<br/>
