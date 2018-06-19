---
title: 'Procedura: unire più profili PGO in un unico profilo | Documenti Microsoft'
ms.custom: ''
ms.date: 03/14/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- merging profiles
- profile-guided optimizations, merging profiles
ms.assetid: aab686b5-59dd-40d1-a04b-5064690f65a6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6ca8fd6ef94af290d568f3186747c659b918c0fd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32372282"
---
# <a name="how-to-merge-multiple-pgo-profiles-into-a-single-profile"></a>Procedura: unire più profili PGO in un unico profilo

Ottimizzazione guidata da profilo (PGO) è un ottimo strumento per la creazione di file binari ottimizzati in base a uno scenario di analisi. Ma cosa accade se si dispone di un'applicazione che dispone di diversi scenari importanti, ma distinti? Come si crea un unico profilo PGO utilizzabile da numerosi scenari diversi? In Visual Studio, la gestione PGO [pgomgr.exe](pgomgr.md), vengono eseguite in questo processo.

La sintassi per l'unione dei profili è:

`pgomgr /merge[:num] [.pgc_files] .pgd_files`

dove `num` rappresenta un peso facoltativo da utilizzare per i file pgc aggiunti da questa unione. I pesi vengono comunemente usati se sono presenti alcuni scenari che sono più importanti o se esistono scenari in cui devono essere eseguiti più volte.

> [!NOTE]
> La gestione di ottimizzazione PGO non funziona con dati di profilo non aggiornati. Per unire un file pgc in un file pgd, il file pgc deve essere generato da un eseguibile a cui è stato creato con la stessa chiamata di collegamento che ha generato il file pgd.

## <a name="examples"></a>Esempi

In questo esempio, l'ottimizzazione PGO gestione aggiunge riportato pgdFile sei volte:

`pgomgr /merge:6 pgcFile.pgc pgdFile.pgd`

In questo esempio, il gestore PGO aggiunti pgcFile1. pgc e pgcFile2. pgc pgdFile, due volte per ogni file. pgc:

`pgomgr /merge:2 pgcFile1.pgc pgcFile2.pgc pgdFile.pgd`

Se il gestore PGO viene eseguito senza alcun argomento di file. pgc, Cerca la directory locale per tutti i file pgc con lo stesso nome di basa come il file pgd seguito da un punto esclamativo (!) e quindi uno o più arbitrari caratteri. Se, ad esempio, nella directory locale sia file pgd, test!1.pgc, test2 e presenti, e viene eseguito il comando seguente dalla directory locale, quindi **pgomgr** unisce test!1.pgc e presenti in pgd.

`pgomgr /merge test.pgd`

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md)
