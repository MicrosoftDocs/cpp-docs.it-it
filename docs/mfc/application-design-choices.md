---
title: Scelte di progettazione delle applicazioni
ms.date: 09/12/2019
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
ms.openlocfilehash: 89f3e5c108de1cf7b3b73a33a08e2c50b1333c92
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374634"
---
# <a name="application-design-choices"></a>Scelte di progettazione delle applicazioni

In questo articolo vengono illustrati alcuni dei problemi di progettazione da considerare durante la programmazione per Internet.

Gli argomenti trattati in questo articolo includono:Topics covered in this article include:

- [Confronto tra Intranet e Internet](#_core_intranet_versus_internet)

- [Applicazione client o server](#_core_client_or_server_application)

- [La pagina Web](#_core_the_web_page)

- [Browser o applicazione autonoma](#_core_browser_or_standalone)

- [COM su Internet](#_core_com_on_the_internet)

- [Servizi di download dati client](#_core_client_data_download_services)

Se si è pronti per iniziare a scrivere il programma ora, vedere [Scrittura di applicazioni MFC](../mfc/writing-mfc-applications.md).

## <a name="intranet-versus-internet"></a><a name="_core_intranet_versus_internet"></a>Confronto tra Intranet e Internet

Molte applicazioni vengono eseguite su Internet e sono accessibili a chiunque disponga di un browser e di un accesso a Internet. Le aziende stanno anche implementando intranet, che sono reti a livello aziendale che utilizzano protocolli TCP/IP e browser Web. Le reti Intranet offrono una fonte centrale facilmente aggiornabile per le informazioni a livello aziendale. Possono essere utilizzati per l'aggiornamento del software, per la distribuzione e la tabulazione di sondaggi, per l'assistenza clienti e per la distribuzione di informazioni. Nella tabella seguente vengono confrontate le funzionalità di Internet e delle reti Intranet.

|Internet|Intranet|
|--------------|--------------|
|Larghezza di banda ridotta|Larghezza di banda elevata|
|Riduzione della sicurezza dei dati e dei sistemi|Accesso controllato a dati e sistemi|
|Controllo minimo dei contenuti|Elevato controllo dei contenuti|

## <a name="client-or-server-application"></a><a name="_core_client_or_server_application"></a>Applicazione client o server

L'applicazione può essere eseguita in un computer client o in un computer server. L'applicazione può anche essere archiviata in un server e quindi scaricata su Internet ed eseguita in un computer client. Le classi WinInet MFC vengono utilizzate per le applicazioni client per scaricare i file. MFC e le classi di moniker asincrone vengono utilizzate per scaricare file e proprietà di controllo. Le classi per i controlli ActiveX e i documenti attivi vengono utilizzate per le applicazioni client e per le applicazioni scaricate dal server per l'esecuzione in un client.

## <a name="the-web-page-html-active-documents-activex-controls"></a><a name="_core_the_web_page"></a>Pagina Web: HTML, documenti attivi, controlli ActiveX

Microsoft offre diversi modi per fornire contenuto in una pagina Web. Le pagine Web possono utilizzare estensioni HTML o HTML standard, ad esempio il tag object, per fornire contenuto dinamico, ad esempio controlli ActiveX.

I browser Web in genere visualizzano pagine HTML. I documenti attivi possono anche visualizzare i dati dell'applicazione nella semplice interfaccia point-and-click di un browser abilitato per COM. Il server di documenti attivi può visualizzare il documento, frame completo in tutta l'area client, con i propri menu e barre degli strumenti.

I controlli ActiveX scritti possono essere scaricati in modo asincrono dal server e visualizzati in una pagina Web. È possibile utilizzare un linguaggio di script come VBScript per eseguire la convalida lato client prima di inviare informazioni al server.

## <a name="browser-or-stand-alone-application"></a><a name="_core_browser_or_standalone"></a>Browser o applicazione autonoma

È possibile scrivere controlli ActiveX incorporati in una pagina HTML e server di documenti attivi visualizzati in un browser. È possibile scrivere pagine HTML contenenti un pulsante per inviare una richiesta di esecuzione dell'applicazione ISAPI su un server Web. È possibile scrivere un'applicazione autonoma che utilizza protocolli Internet per scaricare file e visualizzare le informazioni all'utente, senza mai utilizzare un'applicazione browser.

## <a name="com-on-the-internet"></a><a name="_core_com_on_the_internet"></a>COM su Internet

I controlli ActiveX, i documenti attivi e i moniker asincroni utilizzano tutti le tecnologie COM (Component Object Model).

I controlli ActiveX forniscono contenuto dinamico a documenti e pagine nei siti Internet. Con COM, è possibile creare controlli ActiveX e documenti full-frame utilizzando documenti attivi.

I moniker asincroni forniscono funzionalità che consentono a un controllo di funzionare bene in un ambiente Internet, incluso un mezzo incrementale o progressivo per scaricare i dati. I controlli devono funzionare bene anche con altri controlli che possono anche recuperare i dati in modo asincrono contemporaneamente.

## <a name="client-data-download-services"></a><a name="_core_client_data_download_services"></a>Servizi di download dati client

Due set di API che consentono di trasferire i dati al client sono WinInet e moniker asincroni. Se nella pagina HTML sono disponibili file gif e avi di grandi dimensioni e controlli ActiveX, è possibile aumentare la velocità di risposta all'utente scaricando in modo asincrono, utilizzando moniker asincroni o WinInet in modo asincrono.

Un'attività comune su Internet è il trasferimento dei dati. Se si utilizza già la tecnologia Active (ad esempio, se si dispone di un controllo ActiveX), è possibile utilizzare i moniker asincroni per eseguire progressivamente il rendering dei dati durante il download. È possibile utilizzare WinInet per trasferire dati utilizzando protocolli Internet comuni come HTTP, FTP e gopher. Entrambi i metodi forniscono l'indipendenza del protocollo e forniscono un livello astratto all'utilizzo di WinSock e TCP/IP. È comunque possibile utilizzare direttamente [WinSock.](../mfc/windows-sockets-in-mfc.md)

Nella tabella seguente vengono riepilogati diversi modi di utilizzo di MFC per trasferire dati attraverso Internet.

|Utilizzare questo protocollo|In queste condizioni|Utilizzo di queste classi|
|-----------------------|----------------------------|-------------------------|
|[Download su Internet tramite Moniker asincroni](../mfc/asynchronous-monikers-on-the-internet.md)|Per il trasferimento asincrono tramite COM, i controlli ActiveX e qualsiasi protocollo Internet.|[CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md), [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md)|
|[WinInet](../mfc/win32-internet-extensions-wininet.md)|Per i protocolli Internet per HTTP, FTP e gopher. I dati possono essere trasferiti in modo sincrono o asincrono e vengono archiviati in una cache a livello di sistema.|[CInternetSession](../mfc/reference/cinternetsession-class.md), [CFtpFileFind](../mfc/reference/cftpfilefind-class.md), [CGopherFileFind](../mfc/reference/cgopherfilefind-class.md)e molti altri.|
|[Winsock](../mfc/windows-sockets-in-mfc.md)|Per la massima efficienza e controllo. Richiede la comprensione dei socket e dei protocolli TCP/IP.|[CSocket](../mfc/reference/csocket-class.md), [CAsyncSocket](../mfc/reference/casyncsocket-class.md)|

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)<br/>
[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Moniker asincroni in Internet](../mfc/asynchronous-monikers-on-the-internet.md)
