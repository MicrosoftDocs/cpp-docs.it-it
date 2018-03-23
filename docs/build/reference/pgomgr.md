---
title: pgomgr | Microsoft Docs
ms.custom: ''
ms.date: 03/14/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- pgomgr program
- profile-guided optimizations, pgomgr
ms.assetid: 74589126-df18-42c9-8739-26d60e148d6a
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 743665bbe0ee9c3df08d197d203e95d08542f613
ms.sourcegitcommit: ee7d74683af7631441c8c7f65ef5ceceaee4a5ee
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/22/2018
---
# <a name="pgomgr"></a>pgomgr

Aggiunge dati di profilo da uno o più file. pgc al file pgd.

## <a name="syntax"></a>Sintassi

> **pgomgr** [*opzioni*] *pgcfiles* *pgdfile*

### <a name="parameters"></a>Parametri

*options*<br/>
Le opzioni seguenti possono essere specificate per **pgomgr**:

- **/Help** o **/?** Consente di visualizzare disponibili **pgomgr** opzioni.

- **/ deselezionare** fa sì che il file pgd da cancellare tutte le informazioni sul profilo. Non è possibile specificare un pgc file quando **/Clear** specificato.

- **/Detail** vengono visualizzate statistiche dettagliate, incluse le informazioni di code coverage grafico del flusso.

- **/ summary** Visualizza statistiche per ogni funzione.

- **/ univoco** se utilizzata con **/summary**, nomi di funzione per visualizzare decorati vengono illustrate le cause. L'impostazione predefinita, quando **/ univoco** non viene utilizzato per i nomi delle funzioni non decorato da visualizzare.

- **/ merge**[**: * * * n*] fa sì che i dati nel file devono essere aggiunti al file pgd o. pgc file. Il parametro facoltativo *n*, consente di specificare che i dati devono essere aggiunti *n* volte. Ad esempio, se uno scenario comunemente sei volte fatto in modo da riflettere la frequenza con cui viene eseguita da parte dei clienti, è possibile eseguire una volta in un'esecuzione dei test e aggiungerlo al file pgd sei volte con **pgomgr /merge: 6**.

*pgcfiles*<br/>
Uno o più file pgc i cui dati di profilo che si desidera unire il file pgd. È possibile specificare un file pgc singolo o più file. pgc. Se non si specifica tutti i file pgc **pgomgr** unisce tutti i file pgc cui nomi corrispondono a quelle come il file pgd.

*pgdFile* il file pgd in cui si uniscono i dati da file. pgc o i file.

## <a name="remarks"></a>Note

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

## <a name="example"></a>Esempio

Questo comando di esempio cancella il file pgd di dati di profilo:

`pgomgr /clear myapp.pgd`

Questo comando di esempio consente di aggiungere dati di profilo in MyApp1 al file pgd tre volte:

`pgomgr /merge:3 myapp1.pgc myapp.pgd`

In questo esempio, i dati di profilo da tutti i file #. pgc myapp vengono aggiunti al file pgd.

`pgomgr -merge myapp1.pgd`

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni PGO](profile-guided-optimizations.md)<br/>
[PgoAutoSweep](pgoautosweep.md)<br/>
[pgosweep](pgosweep.md)<br/>
