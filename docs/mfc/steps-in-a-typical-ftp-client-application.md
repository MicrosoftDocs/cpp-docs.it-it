---
description: "Altre informazioni su: passaggi in un'applicazione client FTP tipica"
title: Passaggi in un'applicazione client FTP tipica
ms.date: 11/04/2016
helpviewer_keywords:
- Internet client applications [MFC], FTP table
- FTP (File Transfer Protocol)
- WinInet classes [MFC], FTP
- FTP (File Transfer Protocol) [MFC], client applications
- Internet applications [MFC], FTP client applications
ms.assetid: 70bed7b5-6040-40d1-bc77-702e63a698f2
ms.openlocfilehash: caac613adf3ad886c4b36ae567a3b8c5c928ee10
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216639"
---
# <a name="steps-in-a-typical-ftp-client-application"></a>Passaggi in un'applicazione client FTP tipica

Un'applicazione client FTP tipica crea un oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) e un oggetto [CFtpConnection](../mfc/reference/cftpconnection-class.md) . Si noti che queste classi WinInet di MFC non controllano effettivamente le impostazioni del tipo di proxy. IIS.

Nella tabella seguente vengono illustrati i passaggi che è possibile eseguire in un'applicazione client FTP tipica.

|Obiettivo|Azioni da effettuare|Effetti|
|---------------|----------------------|-------------|
|Avviare una sessione FTP.|Creare un oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) .|Inizializza WinInet e si connette al server.|
|Consente di connettersi a un server FTP.|Usare [CInternetSession:: GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection).|Restituisce un oggetto [CFtpConnection](../mfc/reference/cftpconnection-class.md) .|
|Passare a una nuova directory FTP sul server.|Usare [CFtpConnection:: SetCurrentDirectory](../mfc/reference/cftpconnection-class.md#setcurrentdirectory).|Modifica la directory a cui si è attualmente connessi sul server.|
|Individuare il primo file nella directory FTP.|Usare [CFtpFileFind:: FindFile](../mfc/reference/cftpfilefind-class.md#findfile).|Trova il primo file. Restituisce FALSE se non viene trovato alcun file.|
|Individuare il file successivo nella directory FTP.|Usare [CFtpFileFind:: FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile).|Individua il file successivo. Restituisce FALSE se il file non viene trovato.|
|Aprire il file trovato da `FindFile` o `FindNextFile` per la lettura o la scrittura.|Usare [CFtpConnection:: OpenFile](../mfc/reference/cftpconnection-class.md#openfile), usando il nome file restituito da [FindFile](../mfc/reference/cftpfilefind-class.md#findfile) o [FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile).|Apre il file nel server per la lettura o la scrittura. Restituisce un oggetto [CInternetFile](../mfc/reference/cinternetfile-class.md) .|
|Leggere o scrivere nel file.|Usare [CInternetFile:: Read](../mfc/reference/cinternetfile-class.md#read) o [CInternetFile:: Write](../mfc/reference/cinternetfile-class.md#write).|Legge o scrive il numero di byte specificato, usando un buffer fornito.|
|Gestire le eccezioni.|Usare la classe [CInternetException](../mfc/reference/cinternetexception-class.md) .|Gestisce tutti i tipi di eccezioni comuni di Internet.|
|Terminare la sessione FTP.|Elimina l'oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) .|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|

## <a name="see-also"></a>Vedi anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet di MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
