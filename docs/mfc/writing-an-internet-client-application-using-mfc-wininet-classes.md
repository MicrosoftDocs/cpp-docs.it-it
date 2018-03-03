---
title: Scrittura di un'applicazione Client Internet con classi WinInet MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Internet client applications [MFC]
- WinInet classes [MFC], programming
- Internet client applications [MFC], writing
- Internet applications [MFC], WinInet
- Internet applications [MFC], client applications
- MFC, Internet applications
ms.assetid: a2c4a40c-a94e-4b3e-9dbf-f8a8dc8e5428
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 07b97d4af18ff560a48aadb3ba71b61609f82a85
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="writing-an-internet-client-application-using-mfc-wininet-classes"></a>Scrittura di un'applicazione client Internet con classi WinInet MFC
La base per tutte le applicazioni client Internet è la sessione di Internet. MFC implementa le sessioni Internet come gli oggetti della classe [CInternetSession](../mfc/reference/cinternetsession-class.md). Utilizzare questa classe, è possibile creare una o più sessioni simultanee.  
  
 Per comunicare con un server, è necessario un [CInternetConnection](../mfc/reference/cinternetconnection-class.md) oggetto, nonché un `CInternetSession`. È possibile creare un `CInternetConnection` utilizzando [CInternetSession:: GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection), [CInternetSession:: GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection), o [CInternetSession:: GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection). Ognuna di queste chiamate è specifica per il tipo di protocollo. Queste chiamate non aprire un file sul server per la lettura o scrittura. Se si prevede di leggere o scrivere dati, è necessario aprire il file come passaggio separato.  
  
 Per la maggior parte delle sessioni di Internet, il `CInternetSession` oggetto funziona mano in stretta associazione con un [CInternetFile](../mfc/reference/cinternetfile-class.md) oggetto:  
  
-   Per una sessione di Internet, è necessario creare un'istanza di [CInternetSession](../mfc/reference/cinternetsession-class.md).  
  
-   Se la sessione Internet legge o scrive i dati, è necessario creare un'istanza di `CInternetFile` (o delle relative sottoclassi [CHttpFile](../mfc/reference/chttpfile-class.md) o [CGopherFile](../mfc/reference/cgopherfile-class.md)). Il modo più semplice per leggere i dati consiste nel chiamare [CInternetSession:: OpenURL](../mfc/reference/cinternetsession-class.md#openurl). Questa funzione consente di analizzare un localizzatore URL (Universal Resource) fornito dall'utente, viene aperta una connessione al server specificato dall'URL e restituisce una proprietà di sola lettura `CInternetFile` oggetto. `CInternetSession::OpenURL`non è specifico di un tipo di protocollo, la stessa chiamata funziona per tutti gli URL gopher, HTTP o FTP. `CInternetSession::OpenURL`funziona anche con i file locali (restituendo un `CStdioFile` anziché un `CInternetFile`).  
  
-   Se il servizio Internet sessione non leggere o scrivere dati, ma esegue altre attività, ad esempio l'eliminazione di un file in una directory FTP, non si potrebbe essere necessario creare un'istanza di `CInternetFile`.  
  
 Esistono due modi per creare un `CInternetFile` oggetto:  
  
-   Se si utilizza `CInternetSession::OpenURL` per stabilire la connessione al server, la chiamata a `OpenURL` restituisce un `CStdioFile`.  
  
-   Se utilizzare **CInternetSession:: GetFtpConnection**, `GetGopherConnection`, o `GetHttpConnection` per stabilire la connessione al server, è necessario chiamare `CFtpConnection::OpenFile`, `CGopherConnection::OpenFile`, o **CHttpConnection::**  , rispettivamente, per restituire un `CInternetFile`, `CGopherFile`, o `CHttpFile`, rispettivamente.  
  
 I passaggi dell'implementazione di un'applicazione client Internet variano a seconda se si crea un client Internet generico basato su **OpenURL** o un client specifico del protocollo utilizzando uno del **GetConnection** funzioni.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [La modalità di scrittura di un'applicazione client Internet che funziona in modo generico con FTP, HTTP e gopher](../mfc/steps-in-a-typical-internet-client-application.md)  
  
-   [Come scrivere un'applicazione client FTP che apre un file](../mfc/steps-in-a-typical-ftp-client-application.md)  
  
-   [Come scrivere un'applicazione client FTP che non si apre un file, ma esegue un'operazione di directory, ad esempio l'eliminazione di un file](../mfc/steps-in-a-typical-ftp-client-application-to-delete-a-file.md)  
  
-   [La modalità di scrittura di un'applicazione client gopher](../mfc/steps-in-a-typical-gopher-client-application.md)  
  
-   [La modalità di scrittura di un'applicazione client HTTP](../mfc/steps-in-a-typical-http-client-application.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Classi MFC per la creazione di applicazioni Client Internet](../mfc/mfc-classes-for-creating-internet-client-applications.md)   
 [Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)
