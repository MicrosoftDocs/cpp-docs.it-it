---
title: I passaggi in un'applicazione Client FTP tipica | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Internet client applications [MFC], FTP table
- FTP (File Transfer Protocol)
- WinInet classes [MFC], FTP
- FTP (File Transfer Protocol) [MFC], client applications
- Internet applications [MFC], FTP client applications
ms.assetid: 70bed7b5-6040-40d1-bc77-702e63a698f2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d87682d9110aa37fbb806f7d1dcd70009cf2ad63
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46406958"
---
# <a name="steps-in-a-typical-ftp-client-application"></a>Passaggi in un'applicazione client FTP tipica

Crea un'applicazione client FTP tipica una [CInternetSession](../mfc/reference/cinternetsession-class.md) e una [CFtpConnection](../mfc/reference/cftpconnection-class.md) oggetto. Si noti che queste classi WinInet MFC non controllano effettivamente le impostazioni del tipo proxy; Esegue IIS.

Inoltre, vedere questi articoli della Knowledge Base:

- Procedura: FTP con il Proxy in base al CERN mediante l'API WinInet (ID articolo: Q166961)

- ESEMPIO: FTP con Password basati su CERN protetto da Proxy (ID articolo: Q216214)

- Internet Services Manager non riesce per mostrare i servizi Proxy installata (ID articolo: Q216802)

Nella tabella seguente illustra la procedura che è possibile eseguire in un'applicazione client FTP tipica.

|Obiettivo|Azioni da effettuare|Effetti|
|---------------|----------------------|-------------|
|Avviare una sessione FTP.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Inizializza WinInet e si connette al server.|
|Connettersi a un server FTP.|Uso [CInternetSession:: GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection).|Restituisce un [CFtpConnection](../mfc/reference/cftpconnection-class.md) oggetto.|
|Passare a una nuova directory FTP sul server.|Uso [CFtpConnection:: SetCurrentDirectory](../mfc/reference/cftpconnection-class.md#setcurrentdirectory).|Modifica la directory a cui si è attualmente connessi sul server.|
|Individuare il primo file nella directory FTP.|Uso [CFtpFileFind:: FindFile](../mfc/reference/cftpfilefind-class.md#findfile).|Trova il primo file. Restituisce FALSE se non viene trovato alcun file.|
|Individuare il file successivo nella directory FTP.|Uso [CFtpFileFind:: FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile).|Individua il file successivo. Restituisce FALSE se il file non viene trovato.|
|Aprire il file è stato trovato dal `FindFile` o `FindNextFile` lettura o scrittura.|Uso [CFtpConnection:: OpenFile](../mfc/reference/cftpconnection-class.md#openfile), usando il nome del file restituito da [FindFile](../mfc/reference/cftpfilefind-class.md#findfile) oppure [FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile).|Apre il file nel server per la lettura o scrittura. Restituisce un [CInternetFile](../mfc/reference/cinternetfile-class.md) oggetto.|
|Leggere o scrivere nel file.|Uso [CInternetFile:: Read](../mfc/reference/cinternetfile-class.md#read) oppure [CInternetFile::Write](../mfc/reference/cinternetfile-class.md#write).|Legge o scrive il numero specificato di byte, usando un buffer che è fornire.|
|Gestire le eccezioni.|Usare la [CInternetException](../mfc/reference/cinternetexception-class.md) classe.|Gestisce tutti i tipi di eccezioni comuni di Internet.|
|Terminare la sessione FTP.|Smaltire la [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|

## <a name="see-also"></a>Vedere anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
