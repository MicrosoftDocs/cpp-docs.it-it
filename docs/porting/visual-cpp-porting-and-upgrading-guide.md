---
title: "Guida al porting e aggiornamento in Visual C++ | Microsoft Docs"
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
ms.assetid: f5fbcc3d-aa72-41a6-ad9a-a706af2166fb
caps.latest.revision: 8
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Guida al porting e aggiornamento in Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo argomento presenta una guida per aggiornare il codice di Visual C\+\+.  Verrà illustrato come ottenere il codice da compilare ed eseguire correttamente in una versione più recente degli strumenti e usufruire delle nuove funzionalità del linguaggio e di Visual Studio.  Questo argomento fornisce anche informazioni su come eseguire la migrazione da app legacy a piattaforme più moderne.  
  
## Motivi per aggiornare il codice Visual C\+\+  
 Motivi per cui è consigliabile aggiornare il codice:  
  
-   Codice più veloce, grazie alle ottimizzazioni migliorate del compilatore.  
  
-   Compilazioni più rapide, grazie a miglioramenti delle prestazioni nel compilatore stesso.  
  
-   Funzionalità del linguaggio.  Visual C\+\+ ora implementa numerose funzionalità degli standard C\+\+ più recenti.  
  
-   Maggiore sicurezza.  Funzionalità di sicurezza, ad esempio la protezione del flusso di controllo.  
  
### Porting del codice  
 Prima di eseguire l'aggiornamento, valutare i progetti e il codice dell'applicazione.  L'applicazione è compilata con Visual Studio?  In tal caso, identificare i progetti coinvolti.  Si usano script di compilazione personalizzati?  Se si preferisce usare script di compilazione personalizzati anziché il sistema di compilazione di Visual Studio, il tempo impiegato per le operazioni di aggiornamento sarà maggiore, in quanto Visual Studio non aggiornerà automaticamente i file di progetto e le impostazioni di compilazione.  
  
 Il sistema di compilazione e il formato dei file di progetto in Visual Studio è passato da vcbuild nelle versioni fino a Visual Studio 2008 al formato MSBuild nelle versioni di Visual Studio a partire da Visual Studio 2010.  Se si esegue l'aggiornamento da una versione precedente alla versione 2010 e si dispone di un sistema di compilazione altamente personalizzato, saranno necessarie più operazioni.  Se invece si esegue l'aggiornamento da Visual Studio 2010 o versioni successive, i progetti usano già il formato MSBuild, quindi l'aggiornamento del progetto e la compilazione dell'applicazione risulteranno più semplici.  
  
 Se non si usa il sistema di compilazione di Visual Studio, è consigliabile eseguire l'aggiornamento per usare il formato MSBuild.  Se si esegue l'aggiornamento per usare il formato MSBuild, gli aggiornamenti futuri risulteranno più semplici e sarà più facile usare i servizi online, ad esempio Visual Studio Online.  Il formato MSBuild supporta tutte le piattaforme di destinazione supportate da Visual Studio.  
  
### Porting dei progetti di Visual Studio  
 Per i progetti di grandi dimensioni, è consigliabile aggiornare solo una versione di Visual Studio alla volta, perché altrimenti potrebbe risultare difficile individuare in quale versione è stata introdotta una modifica importante che ha influito sul codice.  
  
 Per iniziare ad aggiornare un progetto o una soluzione, aprire la soluzione nella nuova versione di Visual Studio e seguire le istruzioni per avviare l'aggiornamento.  Quando si aggiorna un progetto, viene generato un report di aggiornamento che è salvato nella cartella di progetto con il nome UpgradeLog.htm.  Il report di aggiornamento mostra un riepilogo dei problemi rilevati durante il processo di aggiornamento e alcune informazioni sulle modifiche apportate o sui problemi che non è stato possibile risolvere automaticamente.  
  
1.  Proprietà di progetti  
  
2.  File di inclusione  
  
3.  Codice che non viene più compilato correttamente a causa di modifiche di conformità del compilatore  
  
4.  Codice basato su funzionalità di Visual Studio o di Windows non più disponibili o file di intestazione che non sono inclusi in un'installazione predefinita di Visual Studio o che sono stati rimossi dal prodotto  
  
5.  Codice che non viene più compilato a seguito di modifiche introdotte nelle API, ad esempio API rinominate, firme di funzione modificate o funzioni deprecate  
  
6.  Codice che non viene più compilato a seguito di modifiche alla diagnostica, ad esempio un avviso che è diventato un errore  
  
7.  Errori del linker a seguito di modifiche alle librerie, specialmente quando si usa \/NODEFAULTLIB.  
  
8.  Errori di runtime o risultati imprevisti a seguito di modifiche del comportamento  
  
9. Errori causati da errori introdotti negli strumenti.  Se si verifica un errore, segnalarlo al team di Visual C\+\+ tramite i canali di supporto tradizionali o il [Feedback Center di Visual Studio](http://connect.microsoft.com/VisualStudio/Feedback).  
  
 Oltre alle modifiche che non possono essere evitate a causa di errori del compilatore, altre modifiche nel processo di aggiornamento sono facoltative, ad esempio:  
  
1.  Nuovi avvisi possono indicare che è necessario eseguire la pulizia del codice.  A seconda delle informazioni di diagnostica specifiche, questi avvisi possono contribuire a migliorare la portabilità, la conformità agli standard e la sicurezza del codice.  
  
2.  È inoltre possibile usufruire delle nuove funzionalità del compilatore, ad esempio l'opzione [\/guard:cf \(Abilita protezione del flusso di controllo\)](../build/reference/guard-enable-control-flow-guard.md), che aggiunge controlli per l'esecuzione non autorizzata del codice.  
  
3.  È possibile aggiornare il codice per usare nuove funzionalità del linguaggio che semplificano il codice, migliorano le prestazioni dei programmi o aggiornano il codice per l'uso di librerie moderne e garantire la conformità agli standard e alle procedure consigliate più recenti.  
  
 Dopo aver aggiornato il progetto \(e averlo testato\) è possibile migliorare ulteriormente il codice o pianificarne la direzione futura, se non riconsiderare l'architettura del progetto.  È importante che il codice possa essere eseguito su altre piattaforme?  In caso affermativo, quali piattaforme?  C\+\+ è un linguaggio standardizzato che è stato progettato tenendo conto della portabilità e dello sviluppo multipiattaforma, sebbene il codice per molte applicazioni Windows sia strettamente legato alla piattaforma Windows.  Si intende effettuare il refactoring del codice, per separare le parti più legate alla piattaforma Windows?  
  
 E per quanto riguarda l'interfaccia utente?  Se si usa MFC, è consigliabile aggiornare l'interfaccia utente.  Si è scelto di usare alcune funzionalità MFC più recenti introdotte nella versione 2008 come Feature Pack?  Se si vuole semplicemente conferire un nuovo aspetto all'app senza riscriverla completamente, è possibile provare a usare le API per la barra multifunzione in MFC o alcune delle nuove funzionalità di MFC.  
  
 Per aggiungere una nuova interfaccia utente per Windows desktop, è possibile usare C\+\+\/CX \(estensioni del componente\) o aggiungere codice gestito in C\# e un livello di interoperabilità in C\+\+\/CLI per la connessione di C\# al codice nativo.  
  
 È possibile che siano emersi nuovi requisiti o si preveda l'esigenza di fornire il supporto di piattaforme diverse da Windows desktop, ad esempio Windows Phone o i dispositivi Android.  In questo caso, è possibile eseguire il porting del codice dell'interfaccia utente in una libreria dell'interfaccia utente multipiattaforma.  Grazie a questi framework dell'interfaccia utente, è possibile supportare più dispositivi continuando a usare Visual Studio e il debugger di Visual Studio come ambiente di sviluppo.  
  
## Argomenti correlati  
  
|Titolo|Descrizione|  
|------------|-----------------|  
|[Aggiornamento di progetti da versioni precedenti di Visual C\+\+](../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md)|Illustra come usare i progetti creati nelle versioni precedenti di Visual C\+\+.|  
|[Modifiche importanti in Visual C\+\+ 2015](../porting/visual-cpp-change-history-2003-20151.md)|Fornisce un elenco di modifiche apportate alle librerie di Visual C\+\+ e agli strumenti di compilazione che potrebbero richiedere modifiche del codice corrente.|  
|[Porting e aggiornamento: esempi e case study](../porting/porting-and-upgrading-examples-and-case-studies.md)|In questa sezione viene illustrato il processo di porting e aggiornamento di vari esempi e applicazioni e vengono descritte le esperienze e i risultati.  La lettura di questi esempi offre una panoramica delle operazioni coinvolte nel processi di porting e aggiornamento.  Vengono inoltre presentati suggerimenti e indicazioni per l'aggiornamento e viene descritto come risolvere errori specifici.|  
|[Porting alla piattaforma Windows Universal](../porting/porting-to-the-universal-windows-platform-cpp.md)|Contiene informazioni sul porting di codice a Windows 10|  
|[Introduzione a Visual C\+\+ per utenti UNIX](../porting/introduction-to-visual-cpp-for-unix-users.md)|Fornisce informazioni per gli utenti UNIX che non hanno familiarità con [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] e che desiderano aumentare la produttività.|  
|[Porting da UNIX a Win32](../porting/porting-from-unix-to-win32.md)|Illustra le opzioni per la migrazione di applicazioni UNIX a Windows.|  
|[Nozioni di base della migrazione in C\+\+\/CLI](../dotnet/cpp-cli-migration-primer.md)|Fornisce informazioni dettagliate su come eseguire l'aggiornamento delle estensioni gestite per la sintassi C\+\+ per usare la nuova sintassi.  Per altre informazioni, vedere [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md).|  
  
## Vedere anche  
 [Modifiche importanti in Visual C\+\+ 2015](../porting/visual-cpp-change-history-2003-20151.md)