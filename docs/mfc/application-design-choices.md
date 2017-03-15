---
title: "Scelte di progettazione delle applicazioni | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "progettazione di applicazioni [C++], obiettivi di progettazione"
  - "progettazione di applicazioni [C++], applicazioni Internet"
  - "applicazioni [MFC], Internet"
  - "applicazioni client [C++], e applicazioni server su Internet"
  - "progettazione"
  - "Internet [C++], e Intranet"
  - "applicazioni Internet [C++], progettazione di applicazioni"
  - "applicazioni server, e applicazioni client su Internet"
ms.assetid: 9b96172c-b4d4-4c69-bfb2-226ce0de6d08
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Scelte di progettazione delle applicazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo vengono illustrati alcuni problemi di progettazione da considerare durante la programmazione per internet.  
  
 Gli argomenti trattati in questo articolo sono:  
  
-   [Intranet o internet](#_core_intranet_versus_internet)  
  
-   [Applicazione client o server](#_core_client_or_server_application)  
  
-   [La pagina Web: HTML, documenti attivi, controlli ActiveX](#_core_the_web_page.3a_.html.2c_.activex_documents.2c_.activex_controls)  
  
-   [Browser o applicazione autonoma](#_core_browser_or_stand.2d.alone_application)  
  
-   [COM su internet](#_core_com_on_the_internet)  
  
-   [Servizi client di download di dati](#_core_client_data_download_services)  
  
 Se si è pronti per avviare la scrittura del programma ora, vedere [Applicazioni MFC di scrittura](../mfc/writing-mfc-applications.md).  
  
##  <a name="_core_intranet_versus_internet"></a> Intranet o internet  
 Molte applicazioni eseguite in internet e sono accessibili a chiunque disponga di un browser e un accesso Internet.  I consentono anche stanno implementando gli intranet, ovvero reti d'appalto tramite protocolli e i Web browser TCP\/IP.  Gli intranet offrono un modo semplice aggiornabile, l'origine di centrale per informazioni d'appalto.  Possono essere utilizzati per l'aggiornamento del software, sulla distribuzione e la tabulazione delle analisi, per servizio clienti e per la consegna di informazioni.  Nella tabella seguente vengono confrontate le funzionalità internet e di rete intranet.  
  
|Internet|Intranet|  
|--------------|--------------|  
|Breve larghezza di banda|Larghezza di banda elevata|  
|Sicurezza una riduzione dei dati e dei sistemi|Accesso ai dati e sistemi archiviati|  
|Controllo minimo del contenuto|Controllo elevato del contenuto|  
  
##  <a name="_core_client_or_server_application"></a> Applicazione client o server  
 L'applicazione può essere eseguita in un computer client o su un server.  L'applicazione può anche essere archiviato in un server e quindi essere scaricato tramite internet e l'esecuzione su un computer client.  Le classi MFC WinInet vengono utilizzate per le applicazioni client scaricare i file.  MFC e le classi asincrone del moniker vengono utilizzati per scaricare i file e le proprietà del controllo.  Le classi per i controlli ActiveX e documenti attivi vengono utilizzate per le applicazioni client e per le applicazioni scaricate dal server da eseguire in un client.  
  
##  <a name="_core_the_web_page.3a_.html.2c_.activex_documents.2c_.activex_controls"></a> La pagina Web: HTML, documenti attivi, controlli ActiveX  
 Microsoft offre diversi metodi per fornire un contenuto in una pagina Web.  Le pagine Web possono utilizzare lo standard HTML o estensioni html, ad esempio il tag object, per fornire contenuto dinamico come controlli ActiveX.  
  
 I Web browser in genere vengono visualizzati pagine HTML.  I documenti attivi possono inoltre possibile visualizzare i dati dell'applicazione nell'interfaccia punta\-e\-clicca semplice di un browser rimozione abilitato.  Il server di documenti attivi può visualizzare il documento, frame completo dell'intera area client, con i propri menu e barre degli strumenti.  
  
 I controlli ActiveX che si possono essere scaricati in modo asincrono dal server e visualizzate in una pagina Web.  È possibile utilizzare un linguaggio di script come VBScript per eseguire la convalida lato client prima di inviare informazioni al server.  
  
##  <a name="_core_browser_or_stand.2d.alone_application"></a> Browser o applicazione autonoma  
 È possibile scrivere controlli ActiveX incorporati nella pagina HTML e server di documenti attivi visualizzati in un browser.  È possibile scrivere le pagine HTML che contengono un pulsante per inviare una richiesta di eseguire l'applicazione ISAPI su un server Web.  È possibile scrivere un'applicazione autonoma che utilizza i protocolli Internet per scaricare file e visualizzare informazioni all'utente, senza mai utilizzando un'applicazione browser.  
  
##  <a name="_core_com_on_the_internet"></a> COM su internet  
 I controlli ActiveX, documenti attivi e i moniker asincroni tutti utilizzano le tecnologie COM \(Component Object Model\).  
  
 I controlli ActiveX forniscono il contenuto dinamico ai documenti e le pagine nei siti internet.  Con COM è possibile sviluppare controlli ActiveX e i documenti di completo\- frame l'utilizzo di documenti attivi.  
  
 I moniker asincroni forniscono le funzionalità per consentire a un controllo di eseguire correttamente in un ambiente internet, incluso un modo del progressivo o incrementale scaricare i dati.  I controlli devono inoltre essere adatte con altri controlli che possono inoltre possibile recuperare i dati in modo asincrono contemporaneamente.  
  
##  <a name="_core_client_data_download_services"></a> Servizi client di download di dati  
 Due set di API che consentono di trasferire i dati al client sono WinInet e moniker asincroni.  Se è grande .gif e file e di controlli ActiveX .avi nella pagina HTML, è possibile aumentare la risposta all'utente download in modo asincrono, utilizzando i moniker asincroni o tramite WinInet in modo asincrono.  
  
 Un'attività comune in internet è tramite trasferimento dei dati.  Se già si utilizza la tecnologia active \(ad esempio, se un controllo ActiveX\), è possibile utilizzare i moniker asincroni per eseguire il rendering progressivamente i dati come scaricate.  È possibile utilizzare WinInet per trasferire i dati utilizzando i protocolli IP comuni quali HTTP, FTP e il gopher.  Entrambi i metodi forniscono l'indipendenza di protocollo e forniscono un livello astratto utilizzando il Winsock e il protocollo TCP\/IP.  È comunque possibile utilizzare direttamente [Winsock](../mfc/windows-sockets-in-mfc.md).  
  
 Nella tabella seguente vengono riepilogati i diversi modi per utilizzare MFC per trasferire i dati tramite internet.  
  
|Utilizzare questo protocollo|In queste condizioni|Utilizzando queste classi|  
|----------------------------------|--------------------------|-------------------------------|  
|[Download internet utilizzando i moniker asincroni](../mfc/asynchronous-monikers-on-the-internet.md)|Per il trasferimento asincrono mediante COM, i controlli ActiveX e di qualsiasi protocollo Internet.|[CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md), [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md)|  
|[WinInet](../mfc/win32-internet-extensions-wininet.md)|Per i protocolli Internet per HTTP, FTP e il gopher.  I dati possono essere spostati in modalità sincrona o asincrona e memorizzati in una cache a livello di sistema.|[CInternetSession](../mfc/reference/cinternetsession-class.md), [CFtpFileFind](../mfc/reference/cftpfilefind-class.md), [CGopherFileFind](../mfc/reference/cgopherfilefind-class.md) e molto.|  
|[Winsock](../mfc/windows-sockets-in-mfc.md)|Per maggiore efficienza massimo e controllo.  Conoscenza Requires sockets e protocolli TCP\/IP.|[CSocket](../mfc/reference/csocket-class.md), [CAsyncSocket](../mfc/reference/casyncsocket-class.md)|  
  
## Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)   
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)   
 [Moniker asincroni in Internet](../mfc/asynchronous-monikers-on-the-internet.md)