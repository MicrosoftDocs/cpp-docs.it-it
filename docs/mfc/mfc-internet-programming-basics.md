---
title: "Concetti di base della programmazione Internet MFC | Microsoft Docs"
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
  - "tecnologia Active [C++]"
  - "ActiveX (controlli) [C++], Internet"
  - "applicazioni Internet [C++]"
  - "applicazioni Internet [C++], tecnologia Active"
  - "applicazioni Internet [C++], controlli ActiveX"
  - "applicazioni Internet [C++], scrittura"
  - "contenuto Internet [C++]"
  - "ISAPI"
  - "estensioni ISAPI, programmazione con ISAPI"
  - "filtri ISAPI, programmazione con ISAPI"
  - "programmazione [C++], Internet"
  - "applicazioni Web [C++], MFC (classi)"
  - "WinInet (classi)"
ms.assetid: 6df2dfd0-6e3f-4587-9d01-2a32f00f8a6f
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Concetti di base della programmazione Internet MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Microsoft offre molti API per la programmazione di entrambe le applicazioni client e server.  Molte nuove applicazioni vengono scrivende per internet e poiché le tecnologie, le funzionalità browser e la modifica di opzioni di sicurezza, nuovi tipi di applicazioni verranno scritte.  Browser eseguiti nei computer client, consententi accesso al world wide web e visualizzare le pagine HTML che contengono testo, immagini, i controlli ActiveX e documenti.  I server forniscono FTP, HTTP e servizi di gopher e applicazioni server di estensione di esecuzione utilizzando restrizione.  L'applicazione personalizzata può recuperare le informazioni e fornire dati in internet.  
  
 ![Applicazioni client e server](../mfc/media/vc38bq1.png "vc38BQ1")  
  
 MFC fornisce classi che supportano la programmazione per Internet.  È possibile utilizzare [COleControl](../mfc/reference/colecontrol-class.md) e [CDocObjectServer](../mfc/reference/cdocobjectserver-class.md) e le classi correlate per scrivere i controlli ActiveX e documenti attivi.  È possibile utilizzare le classi MFC come [CInternetSession](../mfc/reference/cinternetsession-class.md), [CFtpConnection](../mfc/reference/cftpconnection-class.md) e [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) per recuperare i file e le informazioni tramite protocolli Internet come FTP, HTTP e gopher.  
  
## Argomenti della sezione  
  
-   [Classi MFC ma correlate](../mfc/internet-related-mfc-classes.md)  
  
-   [Internet Information dall'argomento](../mfc/internet-information-by-topic.md)  
  
-   [Internet Information dall'attività](../mfc/internet-information-by-task.md)  
  
-   [Tecnologia active su internet](../mfc/active-technology-on-the-internet.md)  
  
-   [Nozioni di base di WinInet](../mfc/wininet-basics.md)  
  
-   [Nozioni fondamentali su HTML](../mfc/html-basics.md)  
  
-   [Nozioni fondamentali su HTTP](../mfc/http-basics.md)  
  
## Sezioni correlate  
  
-   [Controlli ActiveX in internet](../mfc/activex-controls-on-the-internet.md)  
  
-   [Documenti attivi su internet](../mfc/active-documents-on-the-internet.md)  
  
-   [Moniker asincroni in internet](../mfc/asynchronous-monikers-on-the-internet.md)  
  
-   [Estensioni internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)  
  
-   [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)  
  
-   [Scelte di progetto applicazione](../mfc/application-design-choices.md)  
  
-   [Applicazioni MFC di scrittura](../mfc/writing-mfc-applications.md)  
  
-   [Applicazioni internet di test](../mfc/testing-internet-applications.md)  
  
-   [Internet Security](../mfc/internet-security-cpp.md)  
  
-   [Supporto ATL ai controlli DHTML](../atl/atl-support-for-dhtml-controls.md)  
  
##  <a name="_core_web_sites_for_more_information"></a> Siti Web per ulteriori informazioni  
 Per ulteriori informazioni sulla tecnologia Microsoft Internet, vedere [Microsoft Developer Network \(MSDN\)](http://go.microsoft.com/fwlink/?LinkID=56322) il sito Web. \(I collegamenti possono subire variazioni senza preavviso\).  
  
 Questo sito Web per gli sviluppatori contiene informazioni sull'utilizzo degli strumenti di sviluppo e le tecnologie Microsoft e le informazioni di base sulle conferenze recenti e successive.  Da questa pagina, è possibile passare a molti siti correlati dello sviluppatore, incluso il .NET e ai core per sviluppatori XML.  È inoltre possibile scaricare la versione beta SDK ed esempi.  
  
 [World Wide Web Consortium \(W3C\)](http://go.microsoft.com/fwlink/?LinkID=37125) Invia le specifiche per HTML, HTTP, il restrizione e altre tecnologie world wide web.  
  
##  <a name="_core_more_internet_help"></a> Più guida internet  
 La sezione OLE di [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)] contiene informazioni aggiuntive sulla programmazione OLE.  Queste informazioni vengono fornite informazioni dettagliate sull'utilizzo delle funzioni Win32 WinInet direttamente, anziché tramite le classi DAO MFC.  Contengono informazioni generali sulle tecnologie internet.  
  
## Vedere anche  
 [MFC Internet Programming \(NIB\)](http://msdn.microsoft.com/it-it/0f7a1f3a-385b-4d56-a55b-0d766840c58a)