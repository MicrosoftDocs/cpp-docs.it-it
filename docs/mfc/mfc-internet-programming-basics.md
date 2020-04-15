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
ms.openlocfilehash: 5a8fb7bf07ec631869075c5977dcec468143ad56
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366281"
---
# <a name="mfc-internet-programming-basics"></a>Concetti di base della programmazione Internet MFC

Microsoft fornisce molte API per la programmazione di applicazioni client e server. Molte nuove applicazioni vengono scritte per Internet e, man mano che le tecnologie, le funzionalità del browser e le opzioni di sicurezza cambiano, verranno scritti nuovi tipi di applicazioni. I browser vengono eseguiti su computer client, fornendo l'accesso al World Wide Web e visualizzando pagine HTML contenenti testo, grafica, controlli ActiveX e documenti. I server forniscono servizi FTP, HTTP e gopher ed eseguono applicazioni di estensione server utilizzando CGI. L'applicazione personalizzata può recuperare informazioni e fornire dati su Internet.Your custom application can retrieve information and provide data on the Internet.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni, vedere [Controlli ActiveX](activex-controls.md).

![Applicazioni client e server](../mfc/media/vc38bq1.gif "Applicazioni client e server")

MFC fornisce classi che supportano la programmazione Internet. È possibile utilizzare [COleControl](../mfc/reference/colecontrol-class.md) e [CDocObjectServer](../mfc/reference/cdocobjectserver-class.md) e le classi MFC correlate per scrivere controlli ActiveX e documenti attivi. È possibile utilizzare classi MFC quali [CInternetSession](../mfc/reference/cinternetsession-class.md), [CFtpConnection](../mfc/reference/cftpconnection-class.md)e [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) per recuperare file e informazioni utilizzando protocolli Internet quali FTP, HTTP e gopher.

## <a name="in-this-section"></a>Contenuto della sezione

- [Classi MFC correlate con Internet](../mfc/internet-related-mfc-classes.md)

- [Informazioni Internet per argomento](../mfc/internet-information-by-topic.md)

- [Informazioni Internet per attività](../mfc/internet-information-by-task.md)

- [Tecnologia attiva su Internet](../mfc/active-technology-on-the-internet.md)

- [Concetti di base su WinInet](../mfc/wininet-basics.md)

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

## <a name="web-sites-for-more-information"></a><a name="_core_web_sites_for_more_information"></a>Siti Web per ulteriori informazioni

Per ulteriori informazioni sulla tecnologia Internet Microsoft, vedere il sito Web [Microsoft Developer Network (MSDN).](https://go.microsoft.com/fwlink/p/?linkid=56322) (I collegamenti possono cambiare senza preavviso.)

Questo sito Web per gli sviluppatori contiene informazioni sull'utilizzo di strumenti e tecnologie di sviluppo Microsoft e storie principali sulle conferenze recenti e future. Da questa pagina è possibile passare a molti siti per sviluppatori correlati, tra cui .NET e XML Developer Center. È inoltre possibile scaricare SDK beta ed esempi.

Il [World Wide Web Consortium (W3C)](https://go.microsoft.com/fwlink/p/?linkid=37125) pubblica le specifiche per HTML, HTTP, CGI e altre tecnologie del World Wide Web.

## <a name="more-internet-help"></a><a name="_core_more_internet_help"></a>Ulteriori informazioni su Internet

La sezione OLE di Windows SDK contiene informazioni aggiuntive sulla programmazione OLE. Queste informazioni vengono fornite informazioni dettagliate sull'utilizzo delle funzioni Win32 WinInet direttamente, anziché tramite le classi MFC. Contiene inoltre informazioni generali sulle tecnologie Internet.
