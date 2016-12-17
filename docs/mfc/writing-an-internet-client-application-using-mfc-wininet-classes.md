---
title: "Scrittura di un&#39;applicazione client Internet con classi WinInet MFC | Microsoft Docs"
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
  - "applicazioni Internet, applicazioni client"
  - "applicazioni Internet, WinInet"
  - "Internet (applicazioni client)"
  - "Internet (applicazioni client), scrittura"
  - "MFC, applicazioni Internet"
  - "WinInet (classi), programmazione"
ms.assetid: a2c4a40c-a94e-4b3e-9dbf-f8a8dc8e5428
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Scrittura di un&#39;applicazione client Internet con classi WinInet MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La base di ogni applicazione client internet è la sessione Internet.  MFC implementa le sessioni Internet come oggetti di classe [CInternetSession](../mfc/reference/cinternetsession-class.md).  L'utilizzo di questa classe, è possibile creare una sessione Internet o più sessioni contemporaneamente.  
  
 Per comunicare con un server, è necessario un oggetto di [CInternetConnection](../mfc/reference/cinternetconnection-class.md) nonché `CInternetSession`.  È possibile creare `CInternetConnection` utilizzando [CInternetSession::GetFtpConnection](../Topic/CInternetSession::GetFtpConnection.md), [CInternetSession::GetHttpConnection](../Topic/CInternetSession::GetHttpConnection.md), o [CInternetSession::GetGopherConnection](../Topic/CInternetSession::GetGopherConnection.md).  Ognuna di queste chiamate è specifica del tipo di protocollo.  Queste chiamate non aprire il file nel server per la lettura o la scrittura.  Se si desidera leggere o scrivere i dati, è necessario aprire il file durante un passaggio separato.  
  
 Per la maggior parte delle sessioni Internet, il funzionamento dell'oggetto di `CInternetSession` in combinazione con un oggetto di [CInternetFile](../mfc/reference/cinternetfile-class.md) :  
  
-   Per una sessione Internet, è necessario creare un'istanza di [CInternetSession](../mfc/reference/cinternetsession-class.md).  
  
-   Se la sessione Internet legge e scrive i dati, è necessario creare un'istanza di `CInternetFile` o le sottoclassi relativo, [CHttpFile](../mfc/reference/chttpfile-class.md) o [CGopherFile](../mfc/reference/cgopherfile-class.md)\).  Il modo più semplice per leggere i dati consiste nel chiamare [CInternetSession::OpenURL](../Topic/CInternetSession::OpenURL.md).  Questa funzione analizza un localizzatore \(URL\) di risorse di universale fornito dall'utente, aprire una connessione al server specificato dall'URL e restituisce un oggetto di sola lettura di `CInternetFile`.  `CInternetSession::OpenURL` non è specifico di un tipo di protocollo \- gli stessi funzionamento di chiamata per qualsiasi HTTP, FTP, o gopher URL.  funzionamento di`CInternetSession::OpenURL` inoltre i file locali \(che restituiscono `CStdioFile` anziché `CInternetFile`\).  
  
-   Se la sessione Internet non viene letto o aggiornamento dei dati, ma eseguono altre attività, come eliminare un file in una directory FTP, non possono essere necessario creare un'istanza di `CInternetFile`.  
  
 Esistono due modi per creare un oggetto di `CInternetFile` :  
  
-   Se si utilizza `CInternetSession::OpenURL` per stabilire la connessione server, la chiamata a `OpenURL` restituisce `CStdioFile`.  
  
-   Se l'utilizzo **CInternetSession::GetFtpConnection**, `GetGopherConnection`, o `GetHttpConnection` stabilire la connessione server, è necessario chiamare `CFtpConnection::OpenFile`, `CGopherConnection::OpenFile`, o **CHttpConnection::OpenRequest,** rispettivamente, restituire `CInternetFile`, `CGopherFile`, o `CHttpFile`, rispettivamente.  
  
 I passaggi nell'implementare un'applicazione client internet variano a seconda se si crea un client generico internet basato su **OpenURL**  o un client protocollo specifico utilizzando una delle funzioni di **GetConnection**.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Come scrivo un'applicazione client internet genericamente eseguito tramite FTP HTTP, e il gopher?](../mfc/steps-in-a-typical-internet-client-application.md)  
  
-   [Come scrivo un'applicazione client FTP che apre un file?](../mfc/steps-in-a-typical-ftp-client-application.md)  
  
-   [Come scrivo un'applicazione client FTP che fa non aperto un file ma realizzo un'operazione di directory, come eliminare un file?](../mfc/steps-in-a-typical-ftp-client-application-to-delete-a-file.md)  
  
-   [Come scrivo un'applicazione client di gopher?](../mfc/steps-in-a-typical-gopher-client-application.md)  
  
-   [Come scrivo un'applicazione client HTTP?](../mfc/steps-in-a-typical-http-client-application.md)  
  
## Vedere anche  
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)   
 [Classi MFC per la creazione di applicazioni client Internet](../mfc/mfc-classes-for-creating-internet-client-applications.md)   
 [Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)