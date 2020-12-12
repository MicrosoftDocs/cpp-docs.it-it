---
description: 'Altre informazioni su: pgomgr'
title: pgomgr
ms.date: 03/14/2018
helpviewer_keywords:
- pgomgr program
- profile-guided optimizations, pgomgr
ms.assetid: 74589126-df18-42c9-8739-26d60e148d6a
ms.openlocfilehash: 3b6b969becde43b98ea06f2058dd235eaf0acbed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187351"
---
# <a name="pgomgr"></a>pgomgr

Aggiunge i dati di profilo da uno o più file PGC al file. pgd.

## <a name="syntax"></a>Sintassi

> **pgomgr** [*Opzioni*] *pgcfiles* *pgdFile*

### <a name="parameters"></a>Parametri

*options*<br/>
È possibile specificare le opzioni seguenti per **pgomgr**:

- **/help** o **/?** Visualizza le opzioni **pgomgr** disponibili.

- **/Clear** Consente di cancellare il file. PGD di tutte le informazioni sul profilo. Non è possibile specificare un file con estensione PGC quando viene specificato **/Clear** .

- **/detail** Visualizza le statistiche dettagliate, incluse le informazioni sul code coverage del diagramma di flusso.

- **/Summary** Visualizza le statistiche per ogni funzione.

- **—/Unique** Se usato con **/Summary**, determina la visualizzazione dei nomi di funzione decorati. Il valore predefinito, quando **—/Unique** non viene utilizzato, è per i nomi di funzione non decorati da visualizzare.

- **/merge** \[ **:**<em>n</em>] causa l'aggiunta dei dati nel file con estensione PGC o nei file con estensione PGD. Il parametro facoltativo, *n*, consente di specificare che i dati devono essere aggiunti *n* volte. Se, ad esempio, uno scenario viene in genere eseguito sei volte per riflettere la frequenza con cui viene eseguito dai clienti, è possibile eseguire una sola volta in un'esecuzione dei test e aggiungerlo sei volte al file. pgd con **pgomgr/merge: 6**.

*pgcfiles*<br/>
Uno o più file con estensione PGC i cui dati di profilo si desidera unire nel file. pgd. È possibile specificare un singolo file PGC o più file PGC. Se non si specifica alcun file con estensione PGC, **pgomgr** unisce tutti i file con estensione PGC i cui nomi sono uguali a quelli del file PGD.

*pgdFile*<br/>
Il file. PGD in cui si uniscono i dati dal file o dai file PGC.

## <a name="remarks"></a>Commenti

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per gli sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

## <a name="example"></a>Esempio

Questo comando di esempio cancella il file MyApp. PGD dei dati di profilo:

`pgomgr /clear myapp.pgd`

Questo comando di esempio aggiunge i dati di profilo in myapp1. PGC al file. PGD tre volte:

`pgomgr /merge:3 myapp1.pgc myapp.pgd`

In questo esempio, i dati di profilo di tutti i file MyApp #. pgc vengono aggiunti al file MyApp. pgd.

`pgomgr -merge myapp1.pgd`

## <a name="see-also"></a>Vedi anche

[Ottimizzazioni PGO](profile-guided-optimizations.md)<br/>
[PgoAutoSweep](pgoautosweep.md)<br/>
[pgosweep](pgosweep.md)<br/>
