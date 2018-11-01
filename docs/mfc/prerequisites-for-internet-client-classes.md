---
title: Prerequisiti per le classi client Internet
ms.date: 11/04/2016
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
ms.openlocfilehash: b6be476e4b9f7d1aaa09a588e1c06e72032f48c0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50629879"
---
# <a name="prerequisites-for-internet-client-classes"></a>Prerequisiti per le classi client Internet

Alcune azioni eseguite da un client Internet (lettura di un file, ad esempio) hanno alcune azioni preliminari (in questo caso, stabilire una connessione Internet). Le tabelle seguenti elencano i prerequisiti per alcune azioni del client.

### <a name="general-internet-url-ftp-gopher-or-http"></a>URL Internet generale (FTP, Gopher o HTTP)

|Operazione|Prerequisito|
|------------|------------------|
|Stabilire una connessione.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) per stabilire la base di un'applicazione client Internet.|
|Aprire un URL.|Stabilire una connessione. Chiamare [CInternetSession:: OpenURL](../mfc/reference/cinternetsession-class.md#openurl). Il `OpenURL` funzione restituisce un oggetto della risorsa di sola lettura.|
|Dati di lettura nell'URL.|Aprire l'URL. Chiamare [CInternetFile:: Read](../mfc/reference/cinternetfile-class.md#read).|
|Impostare un'opzione di Internet.|Stabilire una connessione. Chiamare [CInternetSession:: SetOption](../mfc/reference/cinternetsession-class.md#setoption).|
|Impostare una funzione da chiamare con le informazioni sullo stato.|Stabilire una connessione. Chiamare [CInternetSession:: EnableStatusCallback](../mfc/reference/cinternetsession-class.md#enablestatuscallback). Eseguire l'override [CInternetSession:: OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) per gestire le chiamate.|

### <a name="ftp"></a>FTP

|Operazione|Prerequisito|
|------------|------------------|
|Stabilire una connessione FTP.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) come base per questa applicazione client Internet. Chiamare [CInternetSession:: GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection) per creare un [CFtpConnection](../mfc/reference/cftpconnection-class.md) oggetto.|
|Trovare la prima risorsa.|Stabilire una connessione FTP. Creare un [CFtpFileFind](../mfc/reference/cftpfilefind-class.md) oggetto. Chiamare [CFtpFileFind:: FindFile](../mfc/reference/cftpfilefind-class.md#findfile).|
|Enumerare tutte le risorse disponibili.|Individuare il primo file. Chiamare [CFtpFileFind:: FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile) fino a quando non restituisce FALSE.|
|Aprire un file con FTP.|Stabilire una connessione FTP. Chiamare [CFtpConnection:: OpenFile](../mfc/reference/cftpconnection-class.md#openfile) per creare e aprire un [CInternetFile](../mfc/reference/cinternetfile-class.md) oggetto.|
|Leggere un file con FTP.|Aprire un file con FTP con accesso in lettura. Chiamare [CInternetFile:: Read](../mfc/reference/cinternetfile-class.md#read).|
|Scrivere un file con FTP.|Aprire un file con FTP con accesso in scrittura. Chiamare [CInternetFile::Write](../mfc/reference/cinternetfile-class.md#write).|
|Cambiare la directory del client nel server.|Stabilire una connessione FTP. Chiamare [CFtpConnection:: SetCurrentDirectory](../mfc/reference/cftpconnection-class.md#setcurrentdirectory).|
|Recuperare la directory corrente del client nel server.|Stabilire una connessione FTP. Chiamare [CFtpConnection:: GetCurrentDirectory](../mfc/reference/cftpconnection-class.md#getcurrentdirectory).|

### <a name="http"></a>HTTP

|Operazione|Prerequisito|
|------------|------------------|
|Stabilire una connessione HTTP.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) come base per questa applicazione client Internet. Chiamare [CInternetSession:: GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection) per creare un [CHttpConnection](../mfc/reference/chttpconnection-class.md) oggetto.|
|Aprire un file HTTP.|Stabilire una connessione HTTP. Chiamare [CHttpConnection:: OpenRequest](../mfc/reference/chttpconnection-class.md#openrequest) per creare un [CHttpFile](../mfc/reference/chttpfile-class.md) oggetto. Chiamare [CHttpFile:: AddRequestHeaders](../mfc/reference/chttpfile-class.md#addrequestheaders). Chiamare [CHttpFile:: SendRequest](../mfc/reference/chttpfile-class.md#sendrequest).|
|Leggere un file HTTP.|Aprire un file HTTP. Chiamare [CInternetFile:: Read](../mfc/reference/cinternetfile-class.md#read).|
|Ottenere informazioni relative a una richiesta HTTP.|Stabilire una connessione HTTP. Chiamare [CHttpConnection:: OpenRequest](../mfc/reference/chttpconnection-class.md#openrequest) per creare un [CHttpFile](../mfc/reference/chttpfile-class.md) oggetto. Chiamare [QueryInfo](../mfc/reference/chttpfile-class.md#queryinfo).|

### <a name="gopher"></a>Gopher

|Operazione|Prerequisito|
|------------|------------------|
|Stabilire una connessione gopher.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) come base per questa applicazione client Internet. Chiamare [CInternetSession:: GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection) per creare un [CGopherConnection](../mfc/reference/cgopherconnection-class.md).|
|Trovare il primo file nella directory corrente.|Stabilire una connessione gopher. Creare un [CGopherFileFind](../mfc/reference/cgopherfilefind-class.md) oggetto. Chiamare [CGopherConnection:: CreateLocator](../mfc/reference/cgopherconnection-class.md#createlocator) per creare un [CGopherLocator](../mfc/reference/cgopherlocator-class.md) oggetto. Passare il localizzatore da [CGopherFileFind:: FindFile](../mfc/reference/cgopherfilefind-class.md#findfile). Chiamare [CGopherFileFind:: GetLocator](../mfc/reference/cgopherfilefind-class.md#getlocator) per ottenere l'indicatore di posizione di un file, se necessario, in un secondo momento.|
|Enumerare tutti i file disponibili.|Individuare il primo file. Chiamare [CGopherFileFind:: FindNextFile](../mfc/reference/cgopherfilefind-class.md#findnextfile) fino a quando non restituisce FALSE.|
|Aprire un file gopher.|Stabilire una connessione gopher. Creare un localizzatore gopher con [CGopherConnection:: CreateLocator](../mfc/reference/cgopherconnection-class.md#createlocator) o trovare un localizzatore con [CGopherFileFind:: GetLocator](../mfc/reference/cgopherfilefind-class.md#getlocator). Chiamare [CGopherConnection:: OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|
|Leggere un file gopher.|Aprire un file gopher. Uso [CGopherFile](../mfc/reference/cgopherfile-class.md).|

## <a name="see-also"></a>Vedere anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Classi MFC per la creazione di applicazioni client Internet](../mfc/mfc-classes-for-creating-internet-client-applications.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
