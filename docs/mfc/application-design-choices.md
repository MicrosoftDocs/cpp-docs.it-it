---
title: Scelte di progettazione delle applicazioni
ms.date: 11/04/2016
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
ms.openlocfilehash: b9b794070d1c4ff4f05f33895a7af5532a524ad1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50602930"
---
# <a name="application-design-choices"></a>Scelte di progettazione delle applicazioni

Questo articolo illustra alcuni dei problemi di progettazione da prendere in considerazione durante la programmazione per Internet.

Gli argomenti trattati in questo articolo includono:

- [Intranet e Internet](#_core_intranet_versus_internet)

- [Applicazione client o Server](#_core_client_or_server_application)

- [](#_core_the_web_page)

- [Browser o un'applicazione autonoma](#_core_browser_or_standalone)

- [COM su Internet](#_core_com_on_the_internet)

- [Servizi di Download di dati client](#_core_client_data_download_services)

Se si è pronti per iniziare a scrivere ora il programma, vedere [scrittura di applicazioni MFC](../mfc/writing-mfc-applications.md).

##  <a name="_core_intranet_versus_internet"></a> Intranet e Internet

Molte applicazioni di eseguire in Internet e sono accessibili a chiunque disponga di un browser e l'accesso a Internet. Le aziende sono anche l'implementazione di reti Intranet, quali sono le reti aziendali usando protocolli TCP/IP e i Web browser. Le reti Intranet offrono un'origine facilmente aggiornabile, centrale per le informazioni a livello aziendale. Possono essere usati per l'aggiornamento software, per il recapito e la catalogazione manuali di sondaggi, per il supporto tecnico e per il recapito di informazioni. La tabella seguente confronta le funzionalità di Internet e Intranet.

|Internet|Intranet|
|--------------|--------------|
|Larghezza di banda ridotta|Larghezza di banda elevata|
|Una riduzione della protezione dei sistemi e dati|Controllo dell'accesso ai dati e sistemi|
|Controllo minimo del contenuto|Controllo elevato del contenuto|

##  <a name="_core_client_or_server_application"></a> Applicazione client o Server

L'applicazione potrebbe funzionare in un computer client o in un computer server. L'applicazione può anche essere archiviato in un server e quindi scaricata da Internet ed eseguire in un computer client. Classi WinInet MFC vengono utilizzate per le applicazioni client per scaricare i file. MFC e le classi di moniker asincrono vengono usati per scaricare i file e controllare le proprietà. Classi di controlli ActiveX e i documenti attivi vengono utilizzate per le applicazioni client e per le applicazioni che vengono scaricate dal server per l'esecuzione in un client.

##  <a name="_core_the_web_page"></a> La pagina Web: Controlli ActiveX HTML, i documenti attivi,

Microsoft offre diversi modi per fornire contenuti in una pagina Web. Le pagine Web possono utilizzare codice HTML o standard le estensioni, come il tag object, per fornire contenuto dinamico, ad esempio i controlli ActiveX.

Browser Web in genere visualizzare pagine HTML. Documenti attivi possono anche visualizzare i dati dell'applicazione nell'interfaccia di puntamento e clic semplice di un browser compatibile con COM. Il server documenti attivi possibile visualizzare un documento, i frame completa l'intera area client, con il proprio menu e barre degli strumenti.

Controlli ActiveX che è scrivere possono essere scaricati in modo asincrono dal server e visualizzati in una pagina Web. È possibile usare un linguaggio di scripting come VBScript per eseguire la convalida lato client prima di inviare informazioni al server.

##  <a name="_core_browser_or_standalone"></a> Browser o un'applicazione autonoma

È possibile scrivere controlli ActiveX incorporate in una pagina HTML e i server documenti attivi vengono visualizzati in un browser. È possibile scrivere le pagine HTML contenenti un pulsante per inviare una richiesta per eseguire l'applicazione ISAPI in un server Web. È possibile scrivere un'applicazione autonoma che utilizza protocolli Internet per scaricare i file e visualizzare le informazioni all'utente, senza mai usare un'applicazione browser.

##  <a name="_core_com_on_the_internet"></a> COM su Internet

Controlli ActiveX, i documenti attivi e moniker asincroni utilizzare le tecnologie COM (Component Object Model).

Controlli ActiveX forniscono contenuto dinamico a documenti e le pagine sui siti Internet. Con COM è possibile creare controlli ActiveX e documenti full-frame usando i documenti attivi.

Moniker asincroni forniscono funzionalità per consentire a un controllo eseguire correttamente in un ambiente Internet, tra cui un incrementali o progressivo significa che per il download dei dati. I controlli devono funzionare correttamente anche con altri controlli che recuperano i propri dati in modo asincrono nello stesso momento.

##  <a name="_core_client_data_download_services"></a> Servizi di Download di dati client

Due set di API che consentono di trasferire i dati al client di sono WinInet e moniker asincroni. Se si dispone di grandi dimensioni. gif e i file AVI e controlli ActiveX della pagina HTML, è possibile aumentare la velocità di risposta all'utente, scaricare in modo asincrono, mediante l'utilizzo di moniker asincrono o usando WinInet in modo asincrono.

Un'attività comune su Internet è il trasferimento dei dati. Se si sta già usando la tecnologia Active (ad esempio, se si dispone di un controllo ActiveX), è possibile usare moniker asincroni per il rendering progressivo dati durante il download. È possibile usare WinInet per trasferire i dati utilizzando protocolli Internet più comuni, ad esempio HTTP, FTP e gopher. Entrambi i metodi forniscono indipendenza del protocollo e un livello astratto all'uso di WinSock e TCP/IP. È comunque possibile usare [WinSock](../mfc/windows-sockets-in-mfc.md) direttamente.

La tabella seguente riepiloga i diversi modi di utilizzo di MFC per trasferire i dati attraverso la rete Internet.

|Utilizzare questo protocollo|In queste condizioni|Uso di queste classi|
|-----------------------|----------------------------|-------------------------|
|[Internet download usando moniker asincroni](../mfc/asynchronous-monikers-on-the-internet.md)|Per il trasferimento asincrono con COM, controlli ActiveX e qualsiasi protocollo Internet.|[CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md), [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md)|
|[WinInet](../mfc/win32-internet-extensions-wininet.md)|Per i protocolli Internet per HTTP, FTP e gopher. I dati possono essere trasferiti in modo sincrono o asincrono e viene archiviati in una cache a livello di sistema.|[CInternetSession](../mfc/reference/cinternetsession-class.md), [CFtpFileFind](../mfc/reference/cftpfilefind-class.md), [CGopherFileFind](../mfc/reference/cgopherfilefind-class.md)e molto altro ancora.|
|[WinSock](../mfc/windows-sockets-in-mfc.md)|Per ottenere la massima efficienza e controllo. Richiede la conoscenza dei socket e protocolli TCP/IP.|[CSocket](../mfc/reference/csocket-class.md), [CAsyncSocket](../mfc/reference/casyncsocket-class.md)|

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)<br/>
[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Moniker asincroni in Internet](../mfc/asynchronous-monikers-on-the-internet.md)

