---
title: "Ridistribuzione di file Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "distribuzione di applicazioni [C++], ridistribuzione di file"
  - "distribuzione di applicazioni [C++], ridistribuzione di file"
  - "ridistribuzione di file [C++]"
  - "ridistribuzione di applicazioni [C++]"
  - "ridistribuzione di applicazioni [C++], informazioni sulla ridistribuzione di applicazioni"
ms.assetid: d201b2ce-36f1-44e5-a96c-0db81a1ba652
caps.latest.revision: 50
caps.handback.revision: 48
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Ridistribuzione di file Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si distribuisce un'applicazione, è necessario distribuire i file necessari per il suo supporto.  Se alcuni di questi file sono forniti da Microsoft, verificare di disporre dell'autorizzazione per ridistribuirli.  Per leggere le Condizioni di licenza software Microsoft, vedere License.htm nella directory in cui è installato Visual Studio o sul supporto di installazione di Visual Studio.  Per visualizzare "l'elenco REDIST" a cui viene fatto riferimento nella sezione "Codice distribuibile" di Condizioni di licenza software Microsoft per alcune edizioni di Visual Studio, vedere [Codice ridistribuibile per Microsoft Visual Studio 2013 e Microsoft Visual Studio 2013 SDK](http://go.microsoft.com/fwlink/p/?LinkId=313603) sul sito Web Microsoft.  Per altre informazioni sui file ridistribuibili, vedere [Determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md) e [Esempi di distribuzione](../ide/deployment-examples.md).  
  
 Per distribuire i file Visual C\+\+ ridistribuibili è possibile utilizzare pacchetti Visual C\+\+ Redistributable \(VCRedist\_x86.exe, VCRedist\_x64.exe o VCRedist\_arm.exe\) inclusi in Visual Studio.  Questi file si trovano nella directory di installazione di Visual Studio in Program Files \[\(x86\)\]\\Microsoft Visual Studio *versione*\\VC\\redist\\*impostazioni locali*\\.  Un'altra opzione consiste nell'utilizzare i moduli unione ridistribuibili \(file MSM\), disponibili in Program Files \[\(x86\)\]\\Common Files\\Merge Modules\\.  È inoltre possibile installare direttamente le DLL ridistribuibili di Visual C\+\+ nella *cartella locale dell’applicazione*, vale a dire la cartella contenente il file eseguibile dell’applicazione.  Per motivi di manutenzione, non è consigliabile utilizzare questo percorso di installazione.  
  
 Con Visual C\+\+ Redistributable Package vengono installate e registrate tutte le librerie di Visual C\+\+.  Se si utilizza uno di questi pacchetti, è necessario impostarlo affinché venga eseguito nel sistema di destinazione come prerequisito dell'installazione dell'applicazione.  È consigliabile utilizzare questi pacchetti per le distribuzioni perché consentono l'aggiornamento automatico delle librerie di Visual C\+\+.  Per un esempio relativo all'uso di questi pacchetti, vedere [Procedura dettagliata: distribuire un'applicazione Visual C\+\+ tramite Visual C\+\+ Redistributable Package](../ide/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).  
  
 Ogni pacchetto Visual C\+\+ Redistributable verifica l’esistenza di una versione più recente nel computer.  Se viene trovata una versione più recente, il pacchetto non viene installato.  A partire da Visual Studio 2015, i pacchetti ridistribuibili visualizzano un messaggio di errore che informa della mancata riuscita dell’installazione.  Se un pacchetto viene eseguito utilizzando il flag **\/quiet**, non viene visualizzato alcun messaggio di errore.  In entrambi i casi, viene registrato un errore dal programma di installazione di Microsoft e al chiamante viene restituito un risultato di errore.  A partire dai pacchetti Visual Studio 2015, è possibile controllare un valore del Registro di sistema per scoprire se è installata una versione più recente.  La versione installata attualmente è archiviata come valore REG\_SZ nella chiave Version in HKEY\_LOCAL\_MACHINE\\SOFTWARE\[\\Wow6432Node\]\\Microsoft\\DevDiv\\vc\\Servicing\\14.0\\RuntimeMinimum.  Non è necessario installare il pacchetto ridistribuibile se la versione attualmente installata è più recente.  
  
 Se si utilizza un modello unione contenente una DLL Visual C\+\+, è necessario includerlo nel pacchetto di Windows Installer \(o un pacchetto di installazione simile\) utilizzato per distribuire l'applicazione.  Per altre informazioni, vedere [Ridistribuzione tramite modelli unione](../ide/redistributing-components-by-using-merge-modules.md).  Per un esempio, vedere [Procedura dettagliata: distribuire un'applicazione Visual C\+\+ tramite un progetto di installazione](../ide/walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md), in cui viene illustrato come usare InstallShield Limited Edition per creare un pacchetto di installazione.  
  
## Possibili errori di runtime  
 Se una DLL della libreria di Visual C\+\+ non è raggiungibile e non può essere caricata per l'applicazione, è possibile che venga visualizzato questo messaggio: **Avvio non riuscito dell'applicazione perché MSVCR\<numero versione\>.dll non è stato trovato. Il problema potrebbe essere risolto reinstallando l'applicazione.**  
  
 Per risolvere questo tipo di errore, assicurarsi che l'applicazione venga compilata correttamente e che le librerie di Visual C\+\+ vengano distribuite correttamente nel sistema di destinazione.  Per altre informazioni, vedere [Informazioni sulle dipendenze di un'applicazione Visual C\+\+](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md).  
  
## Argomenti correlati  
  
|Titolo|Descrizione|  
|------------|-----------------|  
|[Ridistribuzione tramite modelli unione](../ide/redistributing-components-by-using-merge-modules.md)|Viene illustrato come utilizzare i modelli unione ridistribuibili di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] per installare le librerie di runtime di Visual C\+\+ come DDL condivise nella cartella %windir%\\system32\\.|  
|[Ridistribuzione di controlli ActiveX di Visual C\+\+](../ide/redistributing-visual-cpp-activex-controls.md)|Viene illustrato come ridistribuire un'applicazione che utilizza controlli ActiveX.|  
|[Ridistribuzione dei file di supporto del database](../ide/redistributing-database-support-files.md)|Viene illustrato come ridistribuire i file di supporto per DAO \(Data Access Objects\) e vengono descritte le tecnologie di database disponibili in Microsoft Data Access SDK.|  
|[Ridistribuzione della libreria MFC](../ide/redistributing-the-mfc-library.md)|Viene illustrato come ridistribuire un'applicazione che utilizza MFC.|  
|[Ridistribuzione di un'applicazione ATL](../ide/redistributing-an-atl-application.md)|Viene illustrato come ridistribuire un'applicazione che utilizza ATL.  A partire da Visual Studio 2012, è necessaria nessuna libreria ridistribuibile per ATL.|  
|[Esempi di distribuzione](../ide/deployment-examples.md)|Collegamenti a esempi che illustrano come distribuire le applicazioni di Visual C\+\+.|  
|[Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)|Vengono introdotti i concetti e le tecnologie di distribuzione di Visual C\+\+.|