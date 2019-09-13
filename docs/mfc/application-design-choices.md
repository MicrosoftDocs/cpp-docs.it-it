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
ms.openlocfilehash: b205599ed3bf33e84516120b1855482797b86c9b
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70924907"
---
# <a name="application-design-choices"></a>Scelte di progettazione delle applicazioni

In questo articolo vengono illustrati alcuni dei problemi di progettazione da tenere in considerazione durante la programmazione per Internet.

Gli argomenti trattati in questo articolo includono:

- [Intranet rispetto a Internet](#_core_intranet_versus_internet)

- [Applicazione client o server](#_core_client_or_server_application)

- [Pagina Web](#_core_the_web_page)

- [Browser o applicazione autonoma](#_core_browser_or_standalone)

- [COM su Internet](#_core_com_on_the_internet)

- [Servizi di download dei dati client](#_core_client_data_download_services)

Se si è pronti per iniziare a scrivere il programma, vedere [scrittura di applicazioni MFC](../mfc/writing-mfc-applications.md).

##  <a name="_core_intranet_versus_internet"></a>Intranet rispetto a Internet

Molte applicazioni vengono eseguite su Internet e sono accessibili a chiunque disponga di un browser e di accesso a Internet. Le aziende implementano anche Intranet, ovvero reti a livello aziendale che usano protocolli TCP/IP e Web browser. Le Intranet offrono una fonte centrale facilmente aggiornabile per le informazioni a livello aziendale. Possono essere usati per l'aggiornamento del software, per la distribuzione e la tabulazione dei sondaggi, per il supporto tecnico e per la distribuzione di informazioni. Nella tabella seguente vengono confrontate le funzionalità di Internet e Intranet.

|Internet|Intranet|
|--------------|--------------|
|Larghezza di banda ridotta|Larghezza di banda elevata|
|Riduzione della sicurezza di dati e sistemi|Accesso controllato ai dati e ai sistemi|
|Controllo minimo del contenuto|Controllo elevato del contenuto|

##  <a name="_core_client_or_server_application"></a>Applicazione client o server

L'applicazione può essere eseguita in un computer client o in un computer server. L'applicazione può anche essere archiviata in un server e quindi scaricata attraverso Internet ed eseguita in un computer client. Le classi WinInet di MFC vengono usate per il download dei file da applicazioni client. Le classi di moniker MFC e asincrone vengono usate per scaricare i file e le proprietà del controllo. Le classi per i controlli ActiveX e i documenti attivi vengono usate per le applicazioni client e per le applicazioni che vengono scaricate dal server per l'esecuzione su un client.

##  <a name="_core_the_web_page"></a>Pagina Web: HTML, documenti attivi, controlli ActiveX

Microsoft offre diversi modi per fornire contenuti in una pagina Web. Le pagine Web possono utilizzare le estensioni HTML o HTML standard, ad esempio il tag Object, per fornire contenuto dinamico, ad esempio i controlli ActiveX.

I Web browser in genere visualizzano pagine HTML. I documenti attivi possono anche visualizzare i dati dell'applicazione nella semplice interfaccia point-and-click di un browser abilitato per COM. Il server dei documenti attivo può visualizzare il documento, il frame completo nell'intera area client, con i propri menu e barre degli strumenti.

I controlli ActiveX scritti possono essere scaricati in modo asincrono dal server e visualizzati in una pagina Web. È possibile utilizzare un linguaggio di scripting, ad esempio VBScript, per eseguire la convalida sul lato client prima di inviare informazioni al server.

##  <a name="_core_browser_or_standalone"></a>Browser o applicazione autonoma

È possibile scrivere controlli ActiveX incorporati in una pagina HTML e server di documenti attivi visualizzati in un browser. È possibile scrivere pagine HTML che contengono un pulsante per inviare una richiesta di esecuzione dell'applicazione ISAPI in un server Web. È possibile scrivere un'applicazione autonoma che usa protocolli Internet per scaricare i file e visualizzare le informazioni all'utente senza mai usare un'applicazione browser.

##  <a name="_core_com_on_the_internet"></a>COM su Internet

I controlli ActiveX, i documenti attivi e i moniker asincroni utilizzano le tecnologie COM (Component Object Model).

I controlli ActiveX forniscono contenuto dinamico ai documenti e alle pagine nei siti Internet. Con COM è possibile creare controlli ActiveX e documenti completi usando documenti attivi.

I moniker asincroni forniscono funzionalità per consentire a un controllo di funzionare correttamente in un ambiente Internet, incluso un mezzo incrementale o progressivo per il download dei dati. I controlli devono inoltre funzionare correttamente con altri controlli che potrebbero anche recuperare i propri dati in modo asincrono nello stesso momento.

##  <a name="_core_client_data_download_services"></a>Servizi di download dei dati client

Due set di API che aiuteranno a trasferire i dati al client sono WinInet e i moniker asincroni. Se nella pagina HTML sono presenti file. gif e. avi e controlli ActiveX di grandi dimensioni, è possibile aumentare la velocità di risposta all'utente scaricando in modo asincrono, usando moniker asincroni o con WinInet in modo asincrono.

Un'attività comune su Internet è il trasferimento dei dati. Se si usa già la tecnologia attiva (ad esempio, se si dispone di un controllo ActiveX), è possibile usare moniker asincroni per eseguire il rendering progressivo dei dati durante il download. È possibile utilizzare WinInet per trasferire i dati utilizzando protocolli Internet comuni come HTTP, FTP e gopher. Entrambi i metodi forniscono l'indipendenza del protocollo e forniscono un livello astratto per l'utilizzo di WinSock e TCP/IP. È comunque possibile usare direttamente [Winsock](../mfc/windows-sockets-in-mfc.md) .

Nella tabella seguente sono riepilogate diverse modalità di utilizzo di MFC per trasferire i dati in Internet.

|Usa questo protocollo|In queste condizioni|Utilizzo di queste classi|
|-----------------------|----------------------------|-------------------------|
|[Download tramite Internet con moniker asincroni](../mfc/asynchronous-monikers-on-the-internet.md)|Per il trasferimento asincrono utilizzando COM, i controlli ActiveX e qualsiasi protocollo Internet.|[CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md), [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md)|
|[WinInet](../mfc/win32-internet-extensions-wininet.md)|Per protocolli Internet per HTTP, FTP e gopher. I dati possono essere trasferiti in modalità sincrona o asincrona e archiviati in una cache a livello di sistema.|[CInternetSession](../mfc/reference/cinternetsession-class.md), [CFtpFileFind](../mfc/reference/cftpfilefind-class.md), [CGopherFileFind](../mfc/reference/cgopherfilefind-class.md)e molti altri.|
|[WinSock](../mfc/windows-sockets-in-mfc.md)|Per ottimizzare l'efficienza e il controllo. Richiede la comprensione dei socket e dei protocolli TCP/IP.|[CSocket](../mfc/reference/csocket-class.md), [CAsyncSocket](../mfc/reference/casyncsocket-class.md)|

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)<br/>
[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Moniker asincroni in Internet](../mfc/asynchronous-monikers-on-the-internet.md)
