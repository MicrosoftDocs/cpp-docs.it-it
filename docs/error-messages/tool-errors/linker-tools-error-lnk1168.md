---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1168'
title: Errore degli strumenti del linker LNK1168
ms.date: 11/04/2016
f1_keywords:
- LNK1168
helpviewer_keywords:
- LNK1168
ms.assetid: 97ead151-fd99-46fe-9a1d-7e84dc0b8cc8
ms.openlocfilehash: 692bfbcc744307f32c8017b41ec27f5f421ea17c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97253494"
---
# <a name="linker-tools-error-lnk1168"></a>Errore degli strumenti del linker LNK1168

impossibile aprire 'nomefile' per la scrittura

Il linker non è in grado di scrivere in `filename`. Il file potrebbe essere in uso e il relativo handle potrebbe essere bloccato da un altro processo oppure si potrebbe non disporre dell'autorizzazione di scrittura per il file, per la directory o per la condivisione di rete in cui si trova. Questo errore è spesso causato da una condizione temporanea, ad esempio un blocco utilizzato da un programma antivirus, un processo di indicizzazione di ricerca di file o un ritardo nel rilascio di un blocco utilizzato dal sistema di compilazione di Visual Studio.

Per risolvere il problema, verificare che l'handle di file `filename` non sia bloccato e di disporre dell'autorizzazione di scrittura per il file. Se si tratta di un eseguibile, verificare che non sia già in esecuzione.

Per determinare il processo con un blocco di handle di file in, è possibile utilizzare l' [handle](/sysinternals/downloads/handle) delle utilità di Windows Sysinternals o [Esplora processi](/sysinternals/downloads/process-explorer) `filename` . È inoltre possibile utilizzare Process Explorer per rilasciare i blocchi imposti su handle di file aperti. Per informazioni su come utilizzare queste utilità, vedere i file della Guida relativi.

Se il file è bloccato da un programma antivirus, è possibile risolvere il problema escludendo le directory di output della build dall'analisi automatica del programma antivirus. I processi di analisi antivirus, spesso attivati dalla creazione di nuovi file nel file system, impongono blocchi sui file durante l'analisi. Consultare la documentazione del programma antivirus per informazioni dettagliate sull'esclusione di directory specifiche dall'analisi.

Se il file è bloccato da un servizio di indicizzazione di ricerca, è possibile risolvere il problema escludendo le directory di output della build dall'indicizzazione automatica. Per ulteriori informazioni, vedere la documentazione del servizio di indicizzazione. Per modificare il servizio di indicizzazione di Windows Search, utilizzare le **Opzioni di indicizzazione** nel **Pannello di controllo** di Windows. Per altre informazioni, vedere [ricerca di indicizzazione in Windows 10: domande frequenti](https://support.microsoft.com/help/4098843/windows-10-search-indexing-faq).

Se il file eseguibile non può essere sovrascritto dal processo di compilazione, è possibile che sia bloccato da Esplora file. Se il servizio **esperienza applicazione** è stato disabilitato, Esplora file può mantenere un blocco di handle di file eseguibile per un periodo di tempo prolungato. Per risolvere il problema, eseguire **Services. msc** , quindi aprire la finestra di dialogo **Proprietà** per il servizio **esperienza applicazione** . Modificare il **tipo di avvio** da **disattivato** a **manuale**.
