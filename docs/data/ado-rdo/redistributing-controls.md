---
title: "Ridistribuzione dei controlli | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "controlli ActiveX [C++], ridistribuzione"
  - "controlli ridistribuibili"
ms.assetid: 32d03b95-d328-4f10-ad9b-f3ebbe03339d
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Ridistribuzione dei controlli
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ .NET fornisce controlli ActiveX che è possibile usare nelle applicazioni. È quindi possibile ridistribuire i controlli con le applicazioni. Nella finestra di dialogo **Inserisci controllo ActiveX**, evidenziare un controllo per visualizzare il relativo file ocx o DLL.  
  
 Per un elenco dei controlli ActiveX forniti da Visual C\+\+, vedere Programmi\\Microsoft Visual Studio .NET 2003\\redist.txt sul disco 2 del CD\-ROM del prodotto Visual C\+\+ .NET; i file ocx nella cartella Win\\System sono ridistribuibili.  
  
 [Controlli ActiveX MFC: distribuzione dei controlli ActiveX](../../mfc/mfc-activex-controls-distributing-activex-controls.md) illustra come installare e registrare i controlli ActiveX ridistribuibili.  
  
 [Progetti di modelli unione](http://msdn.microsoft.com/it-it/e92e4f85-fba5-45ee-a432-892a956daeb9) illustra in che modo la distribuzione di Visual Studio .NET gestisce la ridistribuzione dei file tramite moduli unione.  
  
 [Ridistribuzione dei file di supporto del database](../../ide/redistributing-database-support-files.md) illustra come ridistribuire i file di supporto per le tecnologie di database disponibili in Microsoft Data Access SDK.  
  
 Se l'applicazione usa un controllo ActiveX che si connette a un database, è necessario installare o eseguire le operazioni seguenti:  
  
-   **DCOM per Windows.** È necessario eseguire Dcom98.exe o Dcom95.exe in qualsiasi computer che esegua versioni di Windows precedenti a Windows 2000 \(Dcom98.exe è specifico per Windows 98; Dcom95.exe è specifico per Windows 95\).  
  
-   **MDAC 2.8 SDK.** È necessario installare Microsoft Data Access 2.8 SDK nel computer di destinazione. È possibile scaricarlo da [http:\/\/go.microsoft.com\/fwlink\/?LinkId\=205525](http://go.microsoft.com/fwlink/?LinkId=205525).  
  
-   **Programma di ridistribuzione di MDAC 2.8.** L'SDK di MDAC 2.8 è stato progettato per essere usato con il programma di ridistribuzione di MDAC 2.8 \(MDAC\_TYP.EXE\). È possibile scaricare MDAC\_TYP.EXE da [http:\/\/go.microsoft.com\/fwlink\/?LinkId\=164412](http://go.microsoft.com/fwlink/?LinkId=164412).  
  
-   **Replicare il DSN.** È anche necessario replicare il nome dell'origine dati nel computer di destinazione. Tale operazione può essere eseguita a livello di codice con le funzioni, ad esempio [ConfigDSN](https://msdn.microsoft.com/en-us/library/ms709275.aspx).  
  
## Note importanti sulla ridistribuzione dei componenti  
  
-   **Ridistribuzione dei componenti DAO.** Microsoft consiglia di usare Jet 4.0 SP3 \(versione 2927.04\) o versioni successive. Jet 4.0 SP3 viene fornito con Windows 2000 e Windows Me. Questa versione di Jet riduce il numero di versioni di Jet che devono essere verificate con l'applicazione.  
  
     Windows XP viene fornito con una versione aggiornata del Service pack di Jet non inclusa nelle versioni precedenti di Windows. Il test dell'applicazione in Windows XP verifica automaticamente la versione di Jet fornita con Windows XP. È necessario testare le applicazioni DAO su entrambe le versioni di Jet 4.0 prima di rilasciarle.  
  
     L'unica differenza nella versione di Windows XP è rappresentata dalle correzioni dei problemi rilevati dopo il rilascio di Windows 2000. Se gli utenti dell'applicazione non riscontrano problemi, non è necessario eseguire l'aggiornamento oltre Jet 4.0 SP3.  
  
-   **Problemi noti relativi ai controlli ActiveX.** Esiste un problema noto con la creazione dinamica di istanze di controlli ActiveX ridistribuibili su computer in cui non è stato installato Visual C\+\+, come descritto nell'articolo della Knowledge Base, "PRB: Dynamic Creation of Redistributable Control Fails" \(Q151804\). Gli articoli della Knowledge Base sono disponibili nel CD\-ROM di MSDN Library o all'indirizzo [http:\/\/support.microsoft.com](http://support.microsoft.com). Esiste anche un problema noto con l'inserimento di alcuni controlli ActiveX in una finestra di dialogo; si ottiene un messaggio di dialogo indicante che il controllo richiede una licenza in fase di progettazione, come descritto nell'articolo della Knowledge Base, "PRB: Need Design\-Time License for Microsoft ActiveX Controls" \(Q155059\). Gli articoli della Knowledge Base sono disponibili nel CD\-ROM di MSDN Library o all'indirizzo [http:\/\/support.microsoft.com](http://support.microsoft.com).  
  
-   **Controlli con licenza di Visual Studio.** I titolari di licenze di Visual Studio possono ridistribuire ulteriori controlli ActiveX specifici agli altri strumenti di sviluppo di Visual Studio. Ad esempio, il controllo Chart viene distribuito con Visual Basic, disponibile anche in Visual Studio. Quindi, se si usa Visual C\+\+ come parte di una licenza di Visual Studio, è possibile ridistribuire il controllo Chart. Tuttavia, se è stato acquistato solo Visual C\+\+, non è disponibile una licenza per ridistribuirlo.  
  
## Vedere anche  
 [Utilizzo dei controlli ActiveX](../../data/ado-rdo/using-activex-controls.md)   
 [Controlli ActiveX MFC: distribuzione dei controlli ActiveX](../../mfc/mfc-activex-controls-distributing-activex-controls.md)