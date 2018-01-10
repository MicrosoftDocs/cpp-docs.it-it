---
title: Scelte di progettazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- design
- application design [MFC], design goals
- application design [MFC], Internet applications
- Internet applications [MFC], designing applications
- Internet [MFC], vs. intranets
- applications [MFC], Internet
- server applications [MFC], vs. client applications on Internet
- client applications [MFC], vs. server applications on Internet
ms.assetid: 9b96172c-b4d4-4c69-bfb2-226ce0de6d08
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4b78c4c086b40f786d86411c99279245704a48a8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="application-design-choices"></a>Scelte di progettazione delle applicazioni
In questo articolo vengono illustrati alcuni problemi di progettazione da prendere in considerazione durante la programmazione per Internet.  
  
 Gli argomenti trattati in questo articolo includono:  
  
-   [Intranet o Internet](#_core_intranet_versus_internet)  
  
-   [Applicazione client o Server](#_core_client_or_server_application)  
  
-   [](#_core_the_web_page)  
  
-   [Applicazione browser o autonoma](#_core_browser_or_standalone)  
  
-   [COM su Internet](#_core_com_on_the_internet)  
  
-   [Servizi di Download di dati client](#_core_client_data_download_services)  
  
 Se si è pronti a iniziare la scrittura a questo punto del programma, vedere [scrittura di applicazioni MFC](../mfc/writing-mfc-applications.md).  
  
##  <a name="_core_intranet_versus_internet"></a>Intranet o Internet  
 Molte applicazioni di eseguire in Internet e sono accessibili a tutti gli utenti con un browser e l'accesso a Internet. Le aziende sono anche l'implementazione di reti Intranet, reti aziendali usando i protocolli TCP/IP e browser Web. Intranet offrono un'origine facilmente aggiornabile, centrale per informazioni a livello aziendale. Possono essere utilizzati per l'aggiornamento software, la distribuzione e catalogazione sondaggi, per il supporto tecnico e diffusione di informazioni. Nella tabella seguente vengono confrontate le funzionalità di Internet e Intranet.  
  
|Internet|Intranet|  
|--------------|--------------|  
|Larghezza di banda ridotta|Larghezza di banda elevata|  
|Protezione ridotta di dati e sistemi|Controllo dell'accesso ai dati e sistemi|  
|Controllo minimo del contenuto|Controllo elevato del contenuto|  
  
##  <a name="_core_client_or_server_application"></a>Applicazione client o Server  
 L'applicazione potrebbe funzionare in un computer client o in un computer server. L'applicazione può anche essere archiviato in un server e quindi scaricato attraverso Internet ed eseguire in un computer client. Classi WinInet MFC vengono utilizzate per le applicazioni client per scaricare i file. MFC e le classi di moniker asincroni consentono di scaricare i file e le proprietà del controllo. Classi di controlli ActiveX e documenti attivi vengono utilizzate per le applicazioni client e per le applicazioni che vengono scaricate dal server per l'esecuzione in un client.  
  
##  <a name="_core_the_web_page"></a>La pagina Web: Controlli ActiveX HTML, i documenti attivi,  
 Microsoft offre diversi modi di specificare il contenuto in una pagina Web. Le pagine Web possono utilizzare codice HTML o standard estensioni, ad esempio il tag object, per fornire contenuto dinamico come controlli ActiveX.  
  
 Browser Web in genere visualizzare pagine HTML. Documenti attivi possono inoltre di visualizzare i dati dell'applicazione nell'interfaccia di mouse e semplice di un browser abilitato a COM. Server documenti attivi visualizzare un documento, i frame completa l'intera area client, con il proprio menu e barre degli strumenti.  
  
 I controlli ActiveX che scritti possono essere scaricati in modo asincrono dal server e visualizzati in una pagina Web. È possibile utilizzare un linguaggio di scripting come VBScript per eseguire la convalida lato client prima di inviare informazioni al server.  
  
##  <a name="_core_browser_or_standalone"></a>Applicazione browser o autonoma  
 È possibile scrivere controlli ActiveX incorporati in una pagina HTML e server documenti attivi che vengono visualizzati in un browser. È possibile scrivere le pagine HTML contenenti un pulsante per inviare una richiesta per eseguire l'applicazione ISAPI in un server Web. È possibile scrivere un'applicazione autonoma che utilizza protocolli Internet per scaricare i file e visualizzare le informazioni all'utente, senza mai tramite un'applicazione browser.  
  
##  <a name="_core_com_on_the_internet"></a>COM su Internet  
 Controlli ActiveX, documenti attivi e moniker asincroni utilizzare le tecnologie COM (Component Object Model).  
  
 Controlli ActiveX forniscono contenuto dinamico a documenti e pagine sui siti Internet. Con COM è possibile creare controlli ActiveX e documenti full frame tramite i documenti attivi.  
  
 Moniker asincroni forniscono funzionalità per consentire un controllo di eseguire anche in un ambiente di Internet, tra cui un incrementale o progressivo significa che per il download dei dati. I controlli devono funzionare correttamente con altri controlli che recuperano i dati in modo asincrono nello stesso momento.  
  
##  <a name="_core_client_data_download_services"></a>Servizi di Download di dati client  
 Due set di API che consentono di trasferire i dati al client sono WinInet e moniker asincroni. Se si dispone di grandi dimensioni con estensione gif e AVI e controlli ActiveX in una pagina HTML, è possibile aumentare la velocità di risposta all'utente mediante il download in modo asincrono, un moniker asincroni o utilizzando WinInet in modo asincrono.  
  
 Un'attività comune su Internet è il trasferimento dei dati. Se si sta già usando la tecnologia Active (ad esempio, se si dispone di un controllo ActiveX), è possibile utilizzare i moniker asincroni per progressivamente il rendering dei dati durante il download. È possibile utilizzare WinInet per trasferire dati tramite i protocolli Internet comuni quali HTTP, FTP e gopher. Entrambi i metodi forniscono indipendenza di protocollo e un livello astratto per l'utilizzo di WinSock e TCP/IP. È comunque possibile utilizzare [WinSock](../mfc/windows-sockets-in-mfc.md) direttamente.  
  
 Nella tabella seguente sono riepilogati i diversi modi di utilizzo di MFC per trasferire i dati attraverso la rete Internet.  
  
|Utilizzare questo protocollo|In queste condizioni|Utilizzo di queste classi|  
|-----------------------|----------------------------|-------------------------|  
|[Internet download utilizzando moniker asincroni](../mfc/asynchronous-monikers-on-the-internet.md)|Per il trasferimento asincrono con COM, controlli ActiveX e qualsiasi protocollo Internet.|[CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md), [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md)|  
|[WinInet](../mfc/win32-internet-extensions-wininet.md)|Per i protocolli Internet per HTTP, FTP e gopher. Dati possono essere trasferiti in modo sincrono o asincrono e viene archiviati in una cache a livello di sistema.|[CInternetSession](../mfc/reference/cinternetsession-class.md), [CFtpFileFind](../mfc/reference/cftpfilefind-class.md), [CGopherFileFind](../mfc/reference/cgopherfilefind-class.md)e molto altro ancora.|  
|[WinSock](../mfc/windows-sockets-in-mfc.md)|Per ottenere la massima efficienza e il controllo. Richiede la comprensione dei socket e protocolli TCP/IP.|[CSocket](../mfc/reference/csocket-class.md), [CAsyncSocket](../mfc/reference/casyncsocket-class.md)|  
  
## <a name="see-also"></a>Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Nozioni fondamentali di programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)   
 [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Moniker asincroni in Internet](../mfc/asynchronous-monikers-on-the-internet.md)

