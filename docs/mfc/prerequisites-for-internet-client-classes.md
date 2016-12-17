---
title: "Prerequisiti per le classi client Internet | Microsoft Docs"
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
  - "classi [C++], connessioni"
  - "connessioni [C++], classi per"
  - "file [C++], lettura"
  - "file [C++], scrittura"
  - "FTP (File Transfer Protocol), classi MFC"
  - "Gopher (applicazioni client)"
  - "Gopher (prerequisiti)"
  - "HTTP, prerequisiti per client Internet"
  - "Internet [C++], connessioni"
  - "prerequisiti per le classi client Internet [C++]"
  - "file di Internet [C++], scrittura"
  - "prerequisiti, classi di client Internet"
  - "URL [C++], Internet (applicazioni client)"
ms.assetid: c51d1dfe-260c-4228-8100-e4efd90e9599
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Prerequisiti per le classi client Internet
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Alcune operazioni eseguite da un client internet \(che legge un file, ad esempio\) hanno azioni essenziali \(in questo caso, stabilisce una connessione Internet\).  Nelle seguenti tabelle sono elencati i prerequisiti per alcune azioni client.  
  
### Internet generale URL \(FTP, gopher, o HTTP\)  
  
|Azione|Prerequisito|  
|------------|------------------|  
|Stabilire una connessione.|Creare [CInternetSession](../mfc/reference/cinternetsession-class.md) per stabilire la base di un'applicazione client internet.|  
|Aprire un URL.|Stabilire una connessione.  Chiamata [CInternetSession::OpenURL](../Topic/CInternetSession::OpenURL.md).  La funzione di `OpenURL` restituisce un oggetto risorsa di sola lettura.|  
|Leggere i dati URL.|Aprire l'url.  Chiamata [CInternetFile::Read](../Topic/CInternetFile::Read.md).|  
|Impostare un'opzione di internet.|Stabilire una connessione.  Chiamata [CInternetSession::SetOption](../Topic/CInternetSession::SetOption.md).|  
|Impostare funzione da chiamare a informazioni sullo stato.|Stabilire una connessione.  Chiamata [CInternetSession::EnableStatusCallback](../Topic/CInternetSession::EnableStatusCallback.md).  Override [CInternetSession::OnStatusCallback](../Topic/CInternetSession::OnStatusCallback.md) per gestire le chiamate.|  
  
### FTP  
  
|Azione|Prerequisito|  
|------------|------------------|  
|Stabilire una connessione a FTP.|Creare [CInternetSession](../mfc/reference/cinternetsession-class.md) come base di questa applicazione client internet.  Chiamata [CInternetSession::GetFtpConnection](../Topic/CInternetSession::GetFtpConnection.md) per creare un oggetto di [CFtpConnection](../mfc/reference/cftpconnection-class.md).|  
|Cercare la prima risorsa.|Stabilire una connessione a FTP.  Creare un oggetto di [CFtpFileFind](../mfc/reference/cftpfilefind-class.md).  Chiamata [CFtpFileFind::FindFile](../Topic/CFtpFileFind::FindFile.md).|  
|Enumerare tutte le risorse disponibili.|Individuare il primo file.  Chiamata [CFtpFileFind::FindNextFile](../Topic/CFtpFileFind::FindNextFile.md) finché non restituisce FALSE.|  
|Aprire un file FTP.|Stabilire una connessione a FTP.  Chiamare [CFtpConnection::OpenFile](../Topic/CFtpConnection::OpenFile.md) per creare e aprire un oggetto di [CInternetFile](../mfc/reference/cinternetfile-class.md).|  
|Leggere un file FTP.|Aprire un file FTP con accesso in lettura.  Chiamata [CInternetFile::Read](../Topic/CInternetFile::Read.md).|  
|Scrivere in un file FTP.|Aprire un file FTP con accesso in scrittura.  Chiamata [CInternetFile::Write](../Topic/CInternetFile::Write.md).|  
|Modificare la directory del client nel server.|Stabilire una connessione a FTP.  Chiamata [CFtpConnection::SetCurrentDirectory](../Topic/CFtpConnection::SetCurrentDirectory.md).|  
|Recuperare la directory corrente del client nel server.|Stabilire una connessione a FTP.  Chiamata [CFtpConnection::GetCurrentDirectory](../Topic/CFtpConnection::GetCurrentDirectory.md).|  
  
### HTTP  
  
|Azione|Prerequisito|  
|------------|------------------|  
|Stabilire una connessione HTTP.|Creare [CInternetSession](../mfc/reference/cinternetsession-class.md) come base di questa applicazione client internet.  Chiamata [CInternetSession::GetHttpConnection](../Topic/CInternetSession::GetHttpConnection.md) per creare un oggetto di [CHttpConnection](../mfc/reference/chttpconnection-class.md).|  
|Aprire un file HTTP.|Stabilire una connessione HTTP.  Chiamata [CHttpConnection::OpenRequest](../Topic/CHttpConnection::OpenRequest.md) per creare un oggetto di [CHttpFile](../mfc/reference/chttpfile-class.md).  Chiamata [CHttpFile::AddRequestHeaders](../Topic/CHttpFile::AddRequestHeaders.md).  Chiamata [CHttpFile::SendRequest](../Topic/CHttpFile::SendRequest.md).|  
|Leggere un file HTTP.|Aprire un file HTTP.  Chiamata [CInternetFile::Read](../Topic/CInternetFile::Read.md).|  
|Ottenere informazioni su una richiesta HTTP.|Stabilire una connessione HTTP.  Chiamata [CHttpConnection::OpenRequest](../Topic/CHttpConnection::OpenRequest.md) per creare un oggetto di [CHttpFile](../mfc/reference/chttpfile-class.md).  Chiamata [CHttpFile::QueryInfo](../Topic/CHttpFile::QueryInfo.md).|  
  
### Gopher  
  
|Azione|Prerequisito|  
|------------|------------------|  
|Stabilire una connessione di gopher.|Creare [CInternetSession](../mfc/reference/cinternetsession-class.md) come base di questa applicazione client internet.  Chiamata [CInternetSession::GetGopherConnection](../Topic/CInternetSession::GetGopherConnection.md) per creare [CGopherConnection](../mfc/reference/cgopherconnection-class.md).|  
|Individuare il primo file nella directory corrente.|Stabilire una connessione di gopher.  Creare un oggetto di [CGopherFileFind](../mfc/reference/cgopherfilefind-class.md).  Chiamata [CGopherConnection::CreateLocator](../Topic/CGopherConnection::CreateLocator.md) per creare un oggetto di [CGopherLocator](../mfc/reference/cgopherlocator-class.md).  Passare il localizzatore a [CGopherFileFind::FindFile](../Topic/CGopherFileFind::FindFile.md).  Chiamare [CGopherFileFind::GetLocator](../Topic/CGopherFileFind::GetLocator.md) per ottenere il localizzatore di un file se è necessario un secondo momento.|  
|Enumerare tutti i file disponibili.|Individuare il primo file.  Chiamata [CGopherFileFind::FindNextFile](../Topic/CGopherFileFind::FindNextFile.md) finché non restituisce FALSE.|  
|Aprire un file di gopher.|Stabilire una connessione di gopher.  Creare un localizzatore di gopher con [CGopherConnection::CreateLocator](../Topic/CGopherConnection::CreateLocator.md) o cercare il localizzatore con [CGopherFileFind::GetLocator](../Topic/CGopherFileFind::GetLocator.md).  Chiamata [CGopherConnection::OpenFile](../Topic/CGopherConnection::OpenFile.md).|  
|Leggere un file di gopher.|Aprire un file di gopher.  Utilizzo [CGopherFile](../mfc/reference/cgopherfile-class.md).|  
  
## Vedere anche  
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)   
 [Classi MFC per la creazione di applicazioni client Internet](../mfc/mfc-classes-for-creating-internet-client-applications.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)