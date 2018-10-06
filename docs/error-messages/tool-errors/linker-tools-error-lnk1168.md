---
title: Strumenti del linker LNK1168 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1168
dev_langs:
- C++
helpviewer_keywords:
- LNK1168
ms.assetid: 97ead151-fd99-46fe-9a1d-7e84dc0b8cc8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0910c23202b975999e10ef2effaebc470c62fb9d
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48821075"
---
# <a name="linker-tools-error-lnk1168"></a>Errore degli strumenti del linker LNK1168

impossibile aprire 'nomefile' per la scrittura

Il linker non è in grado di scrivere in `filename`. Il file potrebbe essere in uso e il relativo handle potrebbe essere bloccato da un altro processo oppure si potrebbe non disporre dell'autorizzazione di scrittura per il file, per la directory o per la condivisione di rete in cui si trova. Questo errore è spesso causato da una condizione temporanea, ad esempio, un blocco imposto da un programma antivirus, processo di indicizzazione di ricerca di un file o un ritardo nel rilasciare un blocco mantenuto dal sistema di compilazione di Visual Studio.

Per risolvere il problema, verificare che l'handle di file `filename` non sia bloccato e di disporre dell'autorizzazione di scrittura per il file. Se si tratta di un eseguibile, verificare che non sia già in esecuzione.

È possibile usare l'utilità di Windows SysInternals [gestire](http://technet.microsoft.com/sysinternals/bb896655.aspx) oppure [Process Explorer](http://technet.microsoft.com/sysinternals/bb896653) per determinare quale processo ha un file di blocco sull'handle su `filename`. È inoltre possibile utilizzare Process Explorer per rilasciare i blocchi imposti su handle di file aperti. Per informazioni su come utilizzare queste utilità, vedere i file della Guida relativi.

Se il file è bloccato da un programma antivirus, è possibile risolvere il problema escludendo le directory di output della build dall'analisi automatica del programma antivirus. I processi di analisi antivirus, spesso attivati dalla creazione di nuovi file nel file system, impongono blocchi sui file durante l'analisi. Consultare la documentazione del programma antivirus per informazioni dettagliate sull'esclusione di directory specifiche dall'analisi.

Se il file è bloccato da un servizio di indicizzazione di ricerca, è possibile risolvere il problema escludendo le directory di output della build dall'indicizzazione automatica. Per ulteriori informazioni, vedere la documentazione del servizio di indicizzazione. Per modificare il servizio di indicizzazione di ricerca di Windows, usare **opzioni di indicizzazione** nella finestra di Windows **Pannello di controllo**. Per altre informazioni, vedere [Windows di migliorare le ricerche tramite l'indice: domande frequenti](http://windows.microsoft.com/windows/improve-windows-searches-using-index-faq#1TC=windows-7).

Se il file eseguibile non può essere sovrascritto dal processo di compilazione, è possibile che sia bloccato da Esplora file. Se il **esperienza applicativa** servizio è stato disabilitato, Esplora File potrebbe mantenere un blocco di handle di file eseguibile per un periodo di tempo prolungato. Per risolvere questo problema, eseguire **Services. msc** e quindi aprire il **proprietà** la finestra di dialogo per il **esperienza applicativa** servizio. Modifica il **tipo di avvio** dalla **disabilitato** al **manuale**.

## <a name="see-also"></a>Vedere anche

[È possibile che venga visualizzato un "Errore PRJ0008" o un messaggio di errore "Errore irreversibile LNK1168" quando si prova a compilare una soluzione o un progetto ActiveX in Visual C++](http://support.microsoft.com/kb/308358)