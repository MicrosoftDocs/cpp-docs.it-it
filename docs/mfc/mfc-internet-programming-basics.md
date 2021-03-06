---
description: 'Ulteriori informazioni su: Nozioni di base sulla programmazione Internet MFC'
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
ms.openlocfilehash: 0c38a5eba3a49791c472d5da0f733a18422058ba
ms.sourcegitcommit: 6183207b11575d7b44ebd7c18918e916a0d8c63d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/06/2021
ms.locfileid: "97951450"
---
# <a name="mfc-internet-programming-basics"></a>Concetti di base della programmazione Internet MFC

Microsoft fornisce molte API per la programmazione di applicazioni client e server. Molte nuove applicazioni vengono scritte per Internet e, dal momento che le tecnologie, le funzionalità del browser e le opzioni di sicurezza cambiano, verranno scritti nuovi tipi di applicazioni. I browser vengono eseguiti nei computer client, consentendo l'accesso alla World Wide Web e visualizzando le pagine HTML contenenti testo, elementi grafici, controlli ActiveX e documenti. I server forniscono servizi FTP, HTTP e Gopher ed eseguono applicazioni di estensione server con CGI. L'applicazione personalizzata può recuperare informazioni e fornire dati su Internet.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni, vedere [controlli ActiveX](activex-controls.md).

![Applicazioni client e server](../mfc/media/vc38bq1.gif "Applicazioni client e server")

MFC fornisce classi che supportano la programmazione Internet. È possibile utilizzare [COleControl](reference/colecontrol-class.md) e [CDocObjectServer](reference/cdocobjectserver-class.md) e le classi MFC correlate per scrivere controlli ActiveX e documenti attivi. È possibile utilizzare classi MFC come [CInternetSession](reference/cinternetsession-class.md), [CFtpConnection](reference/cftpconnection-class.md)e [CAsyncMonikerFile](reference/casyncmonikerfile-class.md) per recuperare i file e le informazioni utilizzando protocolli Internet come FTP, http e gopher.

## <a name="in-this-section"></a>Contenuto della sezione

- [Classi MFC correlate a Internet](internet-related-mfc-classes.md)

- [Informazioni internet per argomento](internet-information-by-topic.md)

- [Informazioni internet per attività](internet-information-by-task.md)

- [Tecnologia attiva su Internet](active-technology-on-the-internet.md)

- [Nozioni di base su WinInet](wininet-basics.md)

- [Nozioni fondamentali su HTML](html-basics.md)

## <a name="related-sections"></a>Sezioni correlate

- [Controlli ActiveX in Internet](activex-controls-on-the-internet.md)

- [Moniker asincroni in Internet](asynchronous-monikers-on-the-internet.md)

- [Estensioni Internet Win32 (WinInet)](win32-internet-extensions-wininet.md)

- [Attività di programmazione Internet MFC](mfc-internet-programming-tasks.md)

- [Scelte di progettazione delle applicazioni](application-design-choices.md)

- [Scrittura di applicazioni MFC](writing-mfc-applications.md)

- [Test delle applicazioni Internet](testing-internet-applications.md)

- [Sicurezza Internet](internet-security-cpp.md)

- [Supporto ATL per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)

## <a name="websites-for-more-information"></a><a name="_core_web_sites_for_more_information"></a> Siti Web per altre informazioni

Per ulteriori informazioni sulla tecnologia Microsoft Internet, vedere [rete e Internet](/windows/win32/networking).

Il [World Wide Web Consortium (W3C)](https://www.w3.org/) pubblica le specifiche per le tecnologie HTML, http, CGI e altre World Wide Web.

## <a name="more-internet-help"></a><a name="_core_more_internet_help"></a> Ulteriori informazioni su Internet

La sezione OLE del Windows SDK contiene informazioni aggiuntive sulla programmazione OLE. Queste informazioni forniscono informazioni dettagliate sull'uso diretto delle funzioni Win32 WinInet, anziché tramite le classi MFC. Contiene inoltre informazioni generali sulle tecnologie Internet.
