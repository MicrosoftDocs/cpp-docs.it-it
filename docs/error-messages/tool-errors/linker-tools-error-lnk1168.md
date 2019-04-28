---
title: Errore degli strumenti del linker LNK1168
ms.date: 11/04/2016
f1_keywords:
- LNK1168
helpviewer_keywords:
- LNK1168
ms.assetid: 97ead151-fd99-46fe-9a1d-7e84dc0b8cc8
ms.openlocfilehash: d18aacd23a7ce9ed49f12a62f8358bb6d668c778
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62254936"
---
# <a name="linker-tools-error-lnk1168"></a>Errore degli strumenti del linker LNK1168

impossibile aprire 'nomefile' per la scrittura

Il linker non è in grado di scrivere in `filename`. Il file potrebbe essere in uso e il relativo handle potrebbe essere bloccato da un altro processo oppure si potrebbe non disporre dell'autorizzazione di scrittura per il file, per la directory o per la condivisione di rete in cui si trova. Questo errore è spesso causato da una condizione temporanea, ad esempio, un blocco imposto da un programma antivirus, processo di indicizzazione di ricerca di un file o un ritardo nel rilasciare un blocco mantenuto dal sistema di compilazione di Visual Studio.

Per risolvere il problema, verificare che l'handle di file `filename` non sia bloccato e di disporre dell'autorizzazione di scrittura per il file. Se si tratta di un eseguibile, verificare che non sia già in esecuzione.

È possibile usare l'utilità di Windows SysInternals [gestire](http://technet.microsoft.com/sysinternals/bb896655.aspx) oppure [Process Explorer](http://technet.microsoft.com/sysinternals/bb896653) per determinare quale processo ha un file di blocco sull'handle su `filename`. È inoltre possibile utilizzare Process Explorer per rilasciare i blocchi imposti su handle di file aperti. Per informazioni su come utilizzare queste utilità, vedere i file della Guida relativi.

Se il file è bloccato da un programma antivirus, è possibile risolvere il problema escludendo le directory di output della build dall'analisi automatica del programma antivirus. I processi di analisi antivirus, spesso attivati dalla creazione di nuovi file nel file system, impongono blocchi sui file durante l'analisi. Consultare la documentazione del programma antivirus per informazioni dettagliate sull'esclusione di directory specifiche dall'analisi.

Se il file è bloccato da un servizio di indicizzazione di ricerca, è possibile risolvere il problema escludendo le directory di output della build dall'indicizzazione automatica. Per ulteriori informazioni, vedere la documentazione del servizio di indicizzazione. Per modificare il servizio di indicizzazione di ricerca di Windows, usare **opzioni di indicizzazione** nella finestra di Windows **Pannello di controllo**. Per altre informazioni, vedere [Windows di migliorare le ricerche tramite l'indice: domande frequenti](http://windows.microsoft.com/windows/improve-windows-searches-using-index-faq#1TC=windows-7).

Se il file eseguibile non può essere sovrascritto dal processo di compilazione, è possibile che sia bloccato da Esplora file. Se il **esperienza applicativa** servizio è stato disabilitato, Esplora File potrebbe mantenere un blocco di handle di file eseguibile per un periodo di tempo prolungato. Per risolvere questo problema, eseguire **Services. msc** e quindi aprire il **proprietà** la finestra di dialogo per il **esperienza applicativa** servizio. Modifica il **tipo di avvio** dalla **disabilitato** al **manuale**.
