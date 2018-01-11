---
title: Prerequisiti per le classi Client Internet | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Internet files [MFC], writing to
- Internet [MFC], connections
- FTP (File Transfer Protocol), MFC classes
- Gopher prerequisites [MFC]
- files [MFC], writing to
- classes [MFC], connections
- HTTP [MFC], prerequisites for Internet clients
- connections [MFC], classes for
- Internet client class prerequisites [MFC]
- files [MFC], reading
- URLs [MFC], Internet client applications
- prerequisites, Internet client classes [MFC]
- Gopher client applications [MFC]
ms.assetid: c51d1dfe-260c-4228-8100-e4efd90e9599
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 77d73ef71854753ffd561053cc71509c7654d33b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="prerequisites-for-internet-client-classes"></a>Prerequisiti per le classi client Internet
Alcune operazioni eseguite da un client Internet (lettura di un file, ad esempio) dispone di alcune azioni preliminari (in questo caso, viene stabilita una connessione Internet). Le tabelle seguenti elencano i prerequisiti per alcune operazioni client.  
  
### <a name="general-internet-url-ftp-gopher-or-http"></a>URL di Internet generale (FTP, Gopher o HTTP)  
  
|Operazione|Prerequisito|  
|------------|------------------|  
|Stabilire una connessione.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) per stabilire la base di un'applicazione client Internet.|  
|Aprire un URL.|Stabilire una connessione. Chiamare [CInternetSession:: OpenURL](../mfc/reference/cinternetsession-class.md#openurl). Il `OpenURL` funzione restituisce un oggetto della risorsa di sola lettura.|  
|Dati di lettura nell'URL.|Aprire l'URL. Chiamare [CInternetFile:: Read](../mfc/reference/cinternetfile-class.md#read).|  
|Impostare un'opzione di Internet.|Stabilire una connessione. Chiamare [CInternetSession:: SetOption](../mfc/reference/cinternetsession-class.md#setoption).|  
|Impostare una funzione da chiamare con informazioni sullo stato.|Stabilire una connessione. Chiamare [CInternetSession:: EnableStatusCallback](../mfc/reference/cinternetsession-class.md#enablestatuscallback). Eseguire l'override [CInternetSession:: OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) per gestire le chiamate.|  
  
### <a name="ftp"></a>FTP  
  
|Operazione|Prerequisito|  
|------------|------------------|  
|Stabilire una connessione FTP.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) come base di questa applicazione client Internet. Chiamare [CInternetSession:: GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection) per creare un [CFtpConnection](../mfc/reference/cftpconnection-class.md) oggetto.|  
|Trovare la prima risorsa.|Stabilire una connessione FTP. Creare un [CFtpFileFind](../mfc/reference/cftpfilefind-class.md) oggetto. Chiamare [CFtpFileFind:: FindFile](../mfc/reference/cftpfilefind-class.md#findfile).|  
|Consente di enumerare tutte le risorse disponibili.|Individuare il primo file. Chiamare [CFtpFileFind:: FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile) fino a quando non restituisce FALSE.|  
|Aprire un file FTP.|Stabilire una connessione FTP. Chiamare [CFtpConnection:: OpenFile](../mfc/reference/cftpconnection-class.md#openfile) per creare e aprire un [CInternetFile](../mfc/reference/cinternetfile-class.md) oggetto.|  
|Leggere un file FTP.|Aprire un file FTP con accesso in lettura. Chiamare [CInternetFile:: Read](../mfc/reference/cinternetfile-class.md#read).|  
|Scrivere in un file FTP.|Aprire un file FTP con accesso in scrittura. Chiamare [CInternetFile::Write](../mfc/reference/cinternetfile-class.md#write).|  
|Modificare la directory del client sul server.|Stabilire una connessione FTP. Chiamare [CFtpConnection:: SetCurrentDirectory](../mfc/reference/cftpconnection-class.md#setcurrentdirectory).|  
|Recuperare la directory corrente del client sul server.|Stabilire una connessione FTP. Chiamare [CFtpConnection:: GetCurrentDirectory](../mfc/reference/cftpconnection-class.md#getcurrentdirectory).|  
  
### <a name="http"></a>HTTP  
  
|Operazione|Prerequisito|  
|------------|------------------|  
|Stabilire una connessione HTTP.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) come base di questa applicazione client Internet. Chiamare [CInternetSession:: GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection) per creare un [CHttpConnection](../mfc/reference/chttpconnection-class.md) oggetto.|  
|Aprire un file HTTP.|Stabilire una connessione HTTP. Chiamare [CHttpConnection:: OpenRequest](../mfc/reference/chttpconnection-class.md#openrequest) per creare un [CHttpFile](../mfc/reference/chttpfile-class.md) oggetto. Chiamare [CHttpFile:: AddRequestHeaders](../mfc/reference/chttpfile-class.md#addrequestheaders). Chiamare [CHttpFile:: SendRequest](../mfc/reference/chttpfile-class.md#sendrequest).|  
|Leggere un file HTTP.|Aprire un file HTTP. Chiamare [CInternetFile:: Read](../mfc/reference/cinternetfile-class.md#read).|  
|Ottenere informazioni relative a una richiesta HTTP.|Stabilire una connessione HTTP. Chiamare [CHttpConnection:: OpenRequest](../mfc/reference/chttpconnection-class.md#openrequest) per creare un [CHttpFile](../mfc/reference/chttpfile-class.md) oggetto. Chiamare [QueryInfo](../mfc/reference/chttpfile-class.md#queryinfo).|  
  
### <a name="gopher"></a>Gopher  
  
|Operazione|Prerequisito|  
|------------|------------------|  
|Stabilire una connessione gopher.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) come base di questa applicazione client Internet. Chiamare [CInternetSession:: GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection) per creare un [CGopherConnection](../mfc/reference/cgopherconnection-class.md).|  
|Trovare il primo file nella directory corrente.|Stabilire una connessione gopher. Creare un [CGopherFileFind](../mfc/reference/cgopherfilefind-class.md) oggetto. Chiamare [CGopherConnection:: CreateLocator](../mfc/reference/cgopherconnection-class.md#createlocator) per creare un [oggetto CGopherLocator](../mfc/reference/cgopherlocator-class.md) oggetto. Passare l'indicatore di posizione per [CGopherFileFind:: FindFile](../mfc/reference/cgopherfilefind-class.md#findfile). Chiamare [CGopherFileFind:: GetLocator](../mfc/reference/cgopherfilefind-class.md#getlocator) per ottenere l'indicatore di posizione di un file se è necessario in un secondo momento.|  
|Consente di enumerare tutti i file disponibili.|Individuare il primo file. Chiamare [CGopherFileFind:: FindNextFile](../mfc/reference/cgopherfilefind-class.md#findnextfile) fino a quando non restituisce FALSE.|  
|Aprire un file gopher.|Stabilire una connessione gopher. Creare un localizzatore gopher con [CGopherConnection:: CreateLocator](../mfc/reference/cgopherconnection-class.md#createlocator) o trovare un localizzatore con [CGopherFileFind:: GetLocator](../mfc/reference/cgopherfilefind-class.md#getlocator). Chiamare [CGopherConnection:: OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|  
|Leggere un file gopher.|Aprire un file gopher. Utilizzare [CGopherFile](../mfc/reference/cgopherfile-class.md).|  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Classi MFC per la creazione di applicazioni Client Internet](../mfc/mfc-classes-for-creating-internet-client-applications.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
