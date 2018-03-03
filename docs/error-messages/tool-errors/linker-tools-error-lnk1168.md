---
title: Strumenti del linker LNK1168 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1168
dev_langs:
- C++
helpviewer_keywords:
- LNK1168
ms.assetid: 97ead151-fd99-46fe-9a1d-7e84dc0b8cc8
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 12dfce4243f0872735158df7ccd81b7c6e29efc8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1168"></a>Errore degli strumenti del linker LNK1168
impossibile aprire 'nomefile' per la scrittura  
  
 Il linker non è in grado di scrivere in `filename`. Il file potrebbe essere in uso e il relativo handle potrebbe essere bloccato da un altro processo oppure si potrebbe non disporre dell'autorizzazione di scrittura per il file, per la directory o per la condivisione di rete in cui si trova. Questo errore è in genere causato da una condizione temporanea, ad esempio un blocco imposto da un programma antivirus, un processo di indicizzazione per la ricerca di file o un ritardo nel rilasciare un blocco imposto dal sistema di compilazione di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)].  
  
 Per risolvere il problema, verificare che l'handle di file `filename` non sia bloccato e di disporre dell'autorizzazione di scrittura per il file. Se si tratta di un eseguibile, verificare che non sia già in esecuzione.  
  
 È possibile utilizzare l'utilità Windows SysInternals [gestire](http://technet.microsoft.com/sysinternals/bb896655.aspx) o [Process Explorer](http://technet.microsoft.com/sysinternals/bb896653) per determinare quale processo dispone di un file di handle di blocco nel `filename`. È inoltre possibile utilizzare Process Explorer per rilasciare i blocchi imposti su handle di file aperti. Per informazioni su come utilizzare queste utilità, vedere i file della Guida relativi.  
  
 Se il file è bloccato da un programma antivirus, è possibile risolvere il problema escludendo le directory di output della build dall'analisi automatica del programma antivirus. I processi di analisi antivirus, spesso attivati dalla creazione di nuovi file nel file system, impongono blocchi sui file durante l'analisi. Consultare la documentazione del programma antivirus per informazioni dettagliate sull'esclusione di directory specifiche dall'analisi.  
  
 Se il file è bloccato da un servizio di indicizzazione di ricerca, è possibile risolvere il problema escludendo le directory di output della build dall'indicizzazione automatica. Per ulteriori informazioni, vedere la documentazione del servizio di indicizzazione. Per modificare il servizio di indicizzazione di ricerca di Windows, utilizzare **opzioni di indicizzazione** nelle finestre **Pannello di controllo**. Per ulteriori informazioni, vedere [Windows di migliorare le ricerche mediante l'indice: domande frequenti](http://windows.microsoft.com/en-us/windows/improve-windows-searches-using-index-faq#1TC=windows-7).  
  
 Se il file eseguibile non può essere sovrascritto dal processo di compilazione, è possibile che sia bloccato da Esplora file. Se il **applicazione esperienza** servizio è stato disabilitato, Esplora File potrebbe mantenere un blocco sull'handle del file eseguibile per un periodo di tempo prolungato. Per risolvere questo problema, eseguire **services.msc** e quindi aprire il **proprietà** la finestra di dialogo per la **applicazione esperienza** servizio. Modifica il **tipo di avvio** da **disabilitato** a **manuale**.  
  
## <a name="see-also"></a>Vedere anche  
 [Si potrebbe ricevere un "Errore PRJ0008" o un messaggio di errore "Errore irreversibile LNK1168" quando si tenta di compilare una soluzione o un progetto ActiveX in Visual C++](http://support.microsoft.com/kb/308358)