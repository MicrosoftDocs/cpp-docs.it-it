---
description: 'Altre informazioni su: prerequisiti per le classi client Internet'
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
ms.openlocfilehash: 9159aa6b3ae4918e406524be05e00fca66cd28a5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205876"
---
# <a name="prerequisites-for-internet-client-classes"></a>Prerequisiti per le classi client Internet

Alcune azioni eseguite da un client Internet (ad esempio, la lettura di un file) hanno azioni preliminari (in questo caso, stabilire una connessione a Internet). Nelle tabelle seguenti sono elencati i prerequisiti per alcune azioni del client.

### <a name="general-internet-url-ftp-gopher-or-http"></a>URL Internet generale (FTP, Gopher o HTTP)

|Azione|Prerequisito|
|------------|------------------|
|Stabilire una connessione.|Creare un [CInternetSession](reference/cinternetsession-class.md) per stabilire la base di un'applicazione client Internet.|
|Aprire un URL.|Stabilire una connessione. Chiamare [CInternetSession:: OpenURL](reference/cinternetsession-class.md#openurl). La `OpenURL` funzione restituisce un oggetto risorsa di sola lettura.|
|Legge i dati dell'URL.|Aprire l'URL. Chiamare [CInternetFile:: Read](reference/cinternetfile-class.md#read).|
|Impostare un'opzione Internet.|Stabilire una connessione. Chiamare [CInternetSession:: SetOption](reference/cinternetsession-class.md#setoption).|
|Imposta una funzione da chiamare con le informazioni sullo stato.|Stabilire una connessione. Chiamare [CInternetSession:: EnableStatusCallback](reference/cinternetsession-class.md#enablestatuscallback). Eseguire l'override di [CInternetSession:: OnStatusCallback](reference/cinternetsession-class.md#onstatuscallback) per gestire le chiamate.|

### <a name="ftp"></a>FTP

|Azione|Prerequisito|
|------------|------------------|
|Stabilire una connessione FTP.|Creare un [CInternetSession](reference/cinternetsession-class.md) come base di questa applicazione client Internet. Chiamare [CInternetSession:: GetFtpConnection](reference/cinternetsession-class.md#getftpconnection) per creare un oggetto [CFtpConnection](reference/cftpconnection-class.md) .|
|Trovare la prima risorsa.|Stabilire una connessione FTP. Creare un oggetto [CFtpFileFind](reference/cftpfilefind-class.md) . Chiamare [CFtpFileFind:: FindFile](reference/cftpfilefind-class.md#findfile).|
|Enumerare tutte le risorse disponibili.|Trovare il primo file. Chiamare [CFtpFileFind:: FindNextFile](reference/cftpfilefind-class.md#findnextfile) fino a quando non viene restituito false.|
|Aprire un file FTP.|Stabilire una connessione FTP. Chiamare [CFtpConnection:: OpenFile](reference/cftpconnection-class.md#openfile) per creare e aprire un oggetto [CInternetFile](reference/cinternetfile-class.md) .|
|Leggere un file FTP.|Aprire un file FTP con accesso in lettura. Chiamare [CInternetFile:: Read](reference/cinternetfile-class.md#read).|
|Scrivere in un file FTP.|Aprire un file FTP con accesso in scrittura. Chiamare [CInternetFile:: Write](reference/cinternetfile-class.md#write).|
|Modificare la directory del client sul server.|Stabilire una connessione FTP. Chiamare [CFtpConnection:: SetCurrentDirectory](reference/cftpconnection-class.md#setcurrentdirectory).|
|Recuperare la directory corrente del client nel server.|Stabilire una connessione FTP. Chiamare [CFtpConnection:: GetCurrentDirectory](reference/cftpconnection-class.md#getcurrentdirectory).|

### <a name="http"></a>HTTP

|Azione|Prerequisito|
|------------|------------------|
|Stabilire una connessione HTTP.|Creare un [CInternetSession](reference/cinternetsession-class.md) come base di questa applicazione client Internet. Chiamare [CInternetSession:: GetHttpConnection](reference/cinternetsession-class.md#gethttpconnection) per creare un oggetto [CHttpConnection](reference/chttpconnection-class.md) .|
|Aprire un file HTTP.|Stabilire una connessione HTTP. Chiamare [CHttpConnection:: OpenRequest](reference/chttpconnection-class.md#openrequest) per creare un oggetto [CHttpFile](reference/chttpfile-class.md) . Chiamare [CHttpFile:: AddRequestHeaders](reference/chttpfile-class.md#addrequestheaders). Chiamare [CHttpFile:: SendRequest](reference/chttpfile-class.md#sendrequest).|
|Leggere un file HTTP.|Aprire un file HTTP. Chiamare [CInternetFile:: Read](reference/cinternetfile-class.md#read).|
|Ottenere informazioni su una richiesta HTTP.|Stabilire una connessione HTTP. Chiamare [CHttpConnection:: OpenRequest](reference/chttpconnection-class.md#openrequest) per creare un oggetto [CHttpFile](reference/chttpfile-class.md) . Chiamare [CHttpFile:: QueryInfo](reference/chttpfile-class.md#queryinfo).|

### <a name="gopher"></a>Gopher

|Azione|Prerequisito|
|------------|------------------|
|Stabilire una connessione gopher.|Creare un [CInternetSession](reference/cinternetsession-class.md) come base di questa applicazione client Internet. Chiamare [CInternetSession:: GetGopherConnection](reference/cinternetsession-class.md#getgopherconnection) per creare un [CGopherConnection](reference/cgopherconnection-class.md).|
|Trovare il primo file nella directory corrente.|Stabilire una connessione gopher. Creare un oggetto [CGopherFileFind](reference/cgopherfilefind-class.md) . Chiamare [CGopherConnection:: CreateLocator](reference/cgopherconnection-class.md#createlocator) per creare un oggetto [CGopherLocator](reference/cgopherlocator-class.md) . Passare il localizzatore a [CGopherFileFind:: FindFile](reference/cgopherfilefind-class.md#findfile). Chiamare [CGopherFileFind:: GetLocator](reference/cgopherfilefind-class.md#getlocator) per ottenere il localizzatore di un file, se necessario in un secondo momento.|
|Enumerare tutti i file disponibili.|Trovare il primo file. Chiamare [CGopherFileFind:: FindNextFile](reference/cgopherfilefind-class.md#findnextfile) fino a quando non viene restituito false.|
|Aprire un file gopher.|Stabilire una connessione gopher. Creare un localizzatore Gopher con [CGopherConnection:: CreateLocator](reference/cgopherconnection-class.md#createlocator) o trovare un localizzatore con [CGopherFileFind:: GetLocator](reference/cgopherfilefind-class.md#getlocator). Chiamare [CGopherConnection:: OpenFile](reference/cgopherconnection-class.md#openfile).|
|Leggere un file gopher.|Aprire un file gopher. Usare [CGopherFile](reference/cgopherfile-class.md).|

## <a name="see-also"></a>Vedi anche

[Estensioni Internet Win32 (WinInet)](win32-internet-extensions-wininet.md)<br/>
[Classi MFC per la creazione di applicazioni client Internet](mfc-classes-for-creating-internet-client-applications.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet di MFC](writing-an-internet-client-application-using-mfc-wininet-classes.md)
