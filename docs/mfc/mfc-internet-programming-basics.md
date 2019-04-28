---
title: Concetti di base della programmazione Internet MFC
ms.date: 11/19/2018
helpviewer_keywords:
- ISAPI extensions, programming with ISAPI
- Internet applications [MFC]
- ISAPI
- ActiveX controls [MFC], Internet
- programming [MFC], Internet
- Web applications [MFC], MFC classes
- ISAPI filters [MFC], programming with ISAPI
- Internet applications [MFC], ActiveX controls
- Internet applications [MFC], writing
- Internet applications [MFC], Active technology
- Active technology [MFC]
- Internet content [MFC]
- WinInet classes [MFC]
ms.assetid: 6df2dfd0-6e3f-4587-9d01-2a32f00f8a6f
ms.openlocfilehash: 814e63272058200850424e9d5355637111527e1c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62239129"
---
# <a name="mfc-internet-programming-basics"></a>Concetti di base della programmazione Internet MFC

Microsoft offre molte API per la programmazione di applicazioni client e server. Molte delle nuove applicazioni vengono scritti per Internet e le tecnologie, le funzionalità del browser e modifica le opzioni di sicurezza, verranno scritto nuovi tipi di applicazioni. Browser eseguiti nei computer client, fornendo l'accesso al sito Web e la visualizzazione delle pagine HTML contenenti testo, grafica, controlli ActiveX e documenti. Server forniscono FTP, HTTP e servizi gopher ed eseguono applicazioni di estensione di server mediante il protocollo CGI. L'applicazione personalizzata può recuperare le informazioni e fornire i dati su Internet.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni, vedere [controlli ActiveX](activex-controls.md).

![Le applicazioni client e server](../mfc/media/vc38bq1.gif "applicazioni Client e server")

MFC fornisce classi che supportano la programmazione di applicazioni Internet. È possibile usare [COleControl](../mfc/reference/colecontrol-class.md) e [CDocObjectServer](../mfc/reference/cdocobjectserver-class.md) e le relative classi MFC per scrivere i controlli ActiveX e i documenti attivi. È possibile usare, ad esempio le classi MFC [CInternetSession](../mfc/reference/cinternetsession-class.md), [CFtpConnection](../mfc/reference/cftpconnection-class.md), e [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) per recuperare i file e le informazioni tramite Internet protocolli quali FTP, HTTP e gopher.

## <a name="in-this-section"></a>In questa sezione

- [Classi MFC correlate con Internet](../mfc/internet-related-mfc-classes.md)

- [Informazioni Internet per argomento](../mfc/internet-information-by-topic.md)

- [Informazioni Internet per attività](../mfc/internet-information-by-task.md)

- [Tecnologia Active in Internet](../mfc/active-technology-on-the-internet.md)

- [Nozioni di base su WinInet](../mfc/wininet-basics.md)

- [Nozioni di base su HTML](../mfc/html-basics.md)

## <a name="related-sections"></a>Sezioni correlate

- [Controlli ActiveX in Internet](../mfc/activex-controls-on-the-internet.md)

- [Moniker asincroni in Internet](../mfc/asynchronous-monikers-on-the-internet.md)

- [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)

- [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)

- [Scelte di progettazione delle applicazioni](../mfc/application-design-choices.md)

- [Scrittura di applicazioni MFC](../mfc/writing-mfc-applications.md)

- [Test delle applicazioni Internet](../mfc/testing-internet-applications.md)

- [Sicurezza Internet](../mfc/internet-security-cpp.md)

- [Supporto ATL per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)

##  <a name="_core_web_sites_for_more_information"></a> Siti Web per altre informazioni

Per ulteriori informazioni sulla tecnologia di Internet di Microsoft, vedere la [Microsoft Developer Network (MSDN)](http://go.microsoft.com/fwlink/p/?linkid=56322) sito Web. (Collegamenti possono cambiare senza preavviso.)

Questo sito Web per gli sviluppatori che contiene informazioni sull'uso di strumenti di sviluppo Microsoft e le tecnologie e le storie principali relativi alle conferenze recenti e futuri. In questa pagina è possibile passare a numerosi siti per sviluppatori correlati, inclusi .NET e centri per sviluppatori XML. È anche possibile scaricare beta SDK ed esempi.

Il [World Wide Web Consortium (W3C)](http://go.microsoft.com/fwlink/p/?linkid=37125) pubblica specifiche di HTML, HTTP, CGI e altre tecnologie di World Wide Web.

##  <a name="_core_more_internet_help"></a> Ulteriori informazioni su Internet

La sezione OLE di Windows SDK contiene informazioni aggiuntive sulla programmazione con OLE. Queste informazioni vengono fornite informazioni dettagliate sull'uso delle funzioni Win32 WinInet direttamente, anziché tramite le classi MFC. Contiene anche informazioni generali sulle tecnologie di Internet.
