---
title: Ridistribuzione di file Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- application deployment [C++], file redistributing
- redistributing applications [C++]
- deploying applications [C++], file redistributing
- file redistribution [C++]
- redistributing applications [C++], about redistributing applications
ms.assetid: d201b2ce-36f1-44e5-a96c-0db81a1ba652
caps.latest.revision: "50"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a89795e19df46b3701cf8dcc7a402540f693db94
ms.sourcegitcommit: 6f40bba1772a09ff0e3843d5f70b553e1a15ab50
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2018
---
# <a name="redistributing-visual-c-files"></a>Ridistribuzione di file Visual C++

> [!NOTE]
> Sei qui perché si sta cercando un download di uno dei file di Runtime di Visual C++? Passare al [Microsoft](http://www.microsoft.com/) sito Web e immettere **Visual C++ Redistributable** nella casella di ricerca. Scaricare e installare il pacchetto ridistribuibile per l'architettura del computer (ad esempio, x64 se si esegue Windows a 64 bit) e la versione di Visual C++ che è necessario.   
  
Quando si distribuisce un'applicazione, è necessario distribuire i file necessari per il suo supporto. Se alcuni di questi file sono forniti da Microsoft, verificare di disporre dell'autorizzazione per ridistribuirli. Per esaminare le condizioni di licenza di Visual Studio, vedere il collegamento di condizioni di licenza nella finestra di dialogo informazioni su Microsoft Visual Studio nell'IDE o scaricare il [condizioni di licenza Software Microsoft](http://go.microsoft.com/fwlink/p/?LinkId=831114) file. Per visualizzare "l'elenco REDIST" a cui fa riferimento nella sezione "Codice distribuibile" delle condizioni di licenza Software Microsoft per alcune edizioni di Visual Studio, vedere [codice distribuibile per Microsoft Visual Studio 2017 e Microsoft Visual Studio 2017 SDK (include utilità e file di compilazione)](http://go.microsoft.com/fwlink/p/?LinkId=823098), o per Visual Studio 2015, vedere [codice distribuibile per Microsoft Visual Studio 2015 e Microsoft Visual Studio 2015 SDK](http://go.microsoft.com/fwlink/p/?LinkId=523763). Per ulteriori informazioni sui file ridistribuibili, vedere [determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md) e [esempi di distribuzione](../ide/deployment-examples.md).  
  
 Per distribuire i file ridistribuibili di Visual C++, è possibile utilizzare Visual C++ Redistributable Package (VCRedist\_x86.exe, VCRedist\_x64.exe o VCRedist\_arm.exe) che sono inclusi in Visual Studio. In Visual Studio 2017, è possano trovare questi file nei file di programma [(x86)]\\Microsoft Visual Studio\\2017\\_edition_\\VC\\Redist\\ Opzioni: MSVC\\_lib versione_ cartella in cui _edition_ è installato, l'edizione di Visual Studio e _lib versione_ è la versione del librerie da ridistribuire. In Visual Studio 2015, questi file sono reperibile nella directory di installazione di Visual Studio in Program Files [(x86)] \Microsoft Visual Studio *versione*\vc\redist.\\*internazionali* \\. Un'altra opzione consiste nell'utilizzare i moduli unione ridistribuibili (file MSM), reperibile in Visual Studio 2017 nei file di programma [(x86)]\\Microsoft Visual Studio\\2017\\_edition_ \\ VC\\Redist\\opzioni: MSVC\\_lib versione_\\MergeModules\\ cartella. In Visual Studio 2015 tali informazioni sono disponibili in Program Files [(x86)] \Common moduli\\. È inoltre possibile installare direttamente le DLL ridistribuibili di Visual C++ nel *cartella locale dell'applicazione*, ovvero la cartella che contiene il file eseguibile dell'applicazione. Per motivi di manutenzione, non è consigliabile utilizzare questo percorso di installazione.  
  
 Con Visual C++ Redistributable Package vengono installate e registrate tutte le librerie di Visual C++. Se si utilizza uno di questi pacchetti, è necessario impostarlo affinché venga eseguito nel sistema di destinazione come prerequisito dell'installazione dell'applicazione. È consigliabile utilizzare questi pacchetti per le distribuzioni perché consentono l'aggiornamento automatico delle librerie di Visual C++. Per un esempio su come utilizzare questi pacchetti, vedere [procedura dettagliata: distribuzione di un Visual C++ applicazione mediante Visual C++ Redistributable Package](../ide/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).  
  
 Ogni pacchetto Visual C++ Redistributable verifica l’esistenza di una versione più recente nel computer. Se viene trovata una versione più recente, il pacchetto non viene installato. A partire da Visual Studio 2015, i pacchetti ridistribuibili visualizzano un messaggio di errore che informa della mancata riuscita dell’installazione. Se un pacchetto viene eseguito utilizzando il **/quiet** flag, nessun messaggio di errore viene visualizzato. In entrambi i casi, viene registrato un errore dal programma di installazione di Microsoft e al chiamante viene restituito un risultato di errore. A partire da Visual Studio 2015 pacchetti, è possibile evitare questo errore controllando il Registro di sistema per scoprire se è installata una versione più recente. La versione attualmente installata è archiviata nel \Microsoft\VisualStudio HKEY_LOCAL_MACHINE\SOFTWARE [\Wow6432Node]\\_versione vs_\VC\Runtimes\\{x86 | x64 | Chiave ARM}, dove _versione vs_ è il numero di versione per Visual Studio (14.0 per Visual Studio 2015 e Visual Studio 2017, perché il 2017 aggiornato redistributable è binario compatibile con la versione 2015), e in cui la chiave è ARM, x86 o x64 a seconda di versioni vcredist installato per la piattaforma. (Non è necessario controllare nella sottochiave Wow6432Node a meno che non si utilizza RegEdit per visualizzare la versione x86 installato pacchetto x64 platform.) Il numero di versione viene archiviato nel valore stringa REG_SZ **versione** e anche nel set di **principali**, **secondaria**, **Bld**e **Rbld** valori REG_DWORD. Per evitare un errore in fase di installazione, è necessario ignorare l'installazione del pacchetto ridistribuibile se la versione attualmente installata è più recente.  
  
 Se si utilizza un modello merge contenente una DLL Visual C++, è necessario includerlo nel pacchetto di Windows Installer (o un pacchetto di installazione simile) utilizzato per distribuire l'applicazione. Per ulteriori informazioni, vedere [ridistribuzione da tramite modelli unione](../ide/redistributing-components-by-using-merge-modules.md). Per un esempio, vedere [procedura dettagliata: distribuzione di un Visual C++ applicazione mediante un progetto di installazione](../ide/walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md), cui viene illustrato come usare InstallShield Limited Edition per creare un pacchetto di installazione.  
  
## <a name="potential-run-time-errors"></a>Possibili errori di runtime  
 Se una DLL della libreria di Visual C++ non è raggiungibile e non è possibile caricarlo per l'applicazione Windows, potrebbe essere visualizzato questo messaggio: **questa applicazione non è stato avviato perché MSVCR\<numero di versione >. dll non è stato trovato. Il problema potrebbe essere risolto reinstallando l'applicazione.**  
  
 Per risolvere questo tipo di errore, assicurarsi che l'applicazione venga compilata correttamente e che le librerie di Visual C++ vengano distribuite correttamente nel sistema di destinazione. Per ulteriori informazioni, vedere [le dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md).  
  
## <a name="related-topics"></a>Argomenti correlati  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[Ridistribuzione tramite modelli unione](../ide/redistributing-components-by-using-merge-modules.md)|Viene descritto come utilizzare i modelli unione ridistribuibili di Visual C++ per installare le librerie di runtime di Visual C++ come DLL condivise nella cartella %Windir%\system32\..|  
|[Ridistribuzione di controlli ActiveX di Visual C++](../ide/redistributing-visual-cpp-activex-controls.md)|Viene illustrato come ridistribuire un'applicazione che utilizza controlli ActiveX.|  
|[Ridistribuzione dei file di supporto del database](../ide/redistributing-database-support-files.md)|Viene illustrato come ridistribuire i file di supporto per DAO (Data Access Objects) e vengono descritte le tecnologie di database disponibili in Microsoft Data Access SDK.|  
|[Ridistribuzione della libreria MFC](../ide/redistributing-the-mfc-library.md)|Viene illustrato come ridistribuire un'applicazione che utilizza MFC.|  
|[Ridistribuzione di un'applicazione ATL](../ide/redistributing-an-atl-application.md)|Viene illustrato come ridistribuire un'applicazione che utilizza ATL. A partire da Visual Studio 2012, è necessaria nessuna libreria ridistribuibile per ATL.|  
|[Esempi di distribuzione](../ide/deployment-examples.md)|Collegamenti a esempi che illustrano come distribuire le applicazioni di Visual C++.|  
|[Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)|Vengono introdotti i concetti e le tecnologie di distribuzione di Visual C++.|