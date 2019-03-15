---
title: 'Procedura: Unire più profili PGO in un unico profilo'
ms.date: 03/14/2018
helpviewer_keywords:
- merging profiles
- profile-guided optimizations, merging profiles
ms.assetid: aab686b5-59dd-40d1-a04b-5064690f65a6
ms.openlocfilehash: 451c0f30a271f5dce3974e172766da4a23340b93
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57826940"
---
# <a name="how-to-merge-multiple-pgo-profiles-into-a-single-profile"></a>Procedura: Unire più profili PGO in un unico profilo

Ottimizzazione PGO (PGO) è un ottimo strumento per la creazione di file binari ottimizzati basati su uno scenario in cui viene sottoposta a profilatura. Ma cosa accade se si dispone di un'applicazione che dispone di diversi scenari importanti, ma distinti? Come si crea un unico profilo che è possibile usare ottimizzazione PGO da numerosi scenari diversi? In Visual Studio, la gestione PGO [pgomgr.exe](pgomgr.md), esegue il processo per l'utente.

La sintassi per l'unione dei profili è:

`pgomgr /merge[:num] [.pgc_files] .pgd_files`

in cui `num` rappresenta un peso facoltativo da usare per i file. pgc aggiunti da questo tipo di merge. I pesi vengono usati comunemente se sono presenti alcuni scenari in cui sono più importanti rispetto ad altri o se non esistono scenari in cui devono essere eseguiti più volte.

> [!NOTE]
> La gestione di ottimizzazione PGO non funziona con i dati del profilo non aggiornati. Per unire un file pgc in un file PDG, il file. pgc deve essere generato da un eseguibile che è stato creato tramite la stessa chiamata di collegamento che ha generato il file pgd.

## <a name="examples"></a>Esempi

In questo esempio, la gestione di ottimizzazione PGO aggiunge riportato al pgdFile sei volte:

`pgomgr /merge:6 pgcFile.pgc pgdFile.pgd`

In questo esempio, la gestione di ottimizzazione PGO aggiunge pgcFile1. pgc e pgcFile2. pgc al pgdFile, due volte per ogni file. pgc:

`pgomgr /merge:2 pgcFile1.pgc pgcFile2.pgc pgdFile.pgd`

Se il gestore di ottimizzazione PGO viene eseguito senza argomenti di file. pgc, Cerca nella directory locale per tutti i file. pgc che hanno lo stesso nome di base del file con estensione pgd seguito da un punto esclamativo (!) e quindi uno o più arbitrari caratteri. Ad esempio, se la directory locale con file pgd, test!1.pgc, test2 e presenti e viene eseguito il comando seguente dalla directory locale, quindi **pgomgr** unisce test!1.pgc e presenti in pgd.

`pgomgr /merge test.pgd`

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni PGO](profile-guided-optimizations.md)
