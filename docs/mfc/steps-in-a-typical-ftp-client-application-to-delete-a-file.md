---
description: "Altre informazioni su: passaggi in un'applicazione client FTP tipica per eliminare un file"
title: Passaggi in un'applicazione client FTP tipica per eliminare un file
ms.date: 11/04/2016
helpviewer_keywords:
- Internet client applications [MFC], FTP delete
- WinInet classes [MFC], FTP
- FTP (File Transfer Protocol) [MFC], client applications
- Internet applications [MFC], FTP client applications
ms.assetid: 2c347a96-c0a4-4827-98fe-668406e552bc
ms.openlocfilehash: 0de5ba71ac127a44c964571d243997bcb49faaa0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216652"
---
# <a name="steps-in-a-typical-ftp-client-application-to-delete-a-file"></a>Passaggi in un'applicazione client FTP tipica per eliminare un file

Nella tabella seguente vengono mostrati i passaggi che è possibile eseguire in una tipica applicazione client FTP per eliminare un file.

|Obiettivo|Azioni da effettuare|Effetti|
|---------------|----------------------|-------------|
|Avviare una sessione FTP.|Creare un oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) .|Inizializza WinInet e si connette al server.|
|Consente di connettersi a un server FTP.|Usare [CInternetSession:: GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection).|Restituisce un oggetto [CFtpConnection](../mfc/reference/cftpconnection-class.md) .|
|Assicurarsi di trovarsi nella directory corretta nel server FTP.|Usare [CFtpConnection:: GetCurrentDirectory](../mfc/reference/cftpconnection-class.md#getcurrentdirectory) o [CFtpConnection:: GetCurrentDirectoryAsURL](../mfc/reference/cftpconnection-class.md#getcurrentdirectoryasurl).|Restituisce il nome o l'URL della directory a cui si è attualmente connessi sul server, a seconda della funzione membro selezionata.|
|Passare a una nuova directory FTP sul server.|Usare [CFtpConnection:: SetCurrentDirectory](../mfc/reference/cftpconnection-class.md#setcurrentdirectory).|Modifica la directory a cui si è attualmente connessi sul server.|
|Individuare il primo file nella directory FTP.|Usare [CFtpFileFind:: FindFile](../mfc/reference/cftpfilefind-class.md#findfile).|Trova il primo file. Restituisce FALSE se non viene trovato alcun file.|
|Individuare il file successivo nella directory FTP.|Usare [CFtpFileFind:: FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile).|Individua il file successivo. Restituisce FALSE se il file non viene trovato.|
|Eliminare il file trovato da `FindFile` o `FindNextFile` .|Usare [CFtpConnection:: Remove](../mfc/reference/cftpconnection-class.md#remove), usando il nome file restituito da `FindFile` o `FindNextFile` .|Elimina il file sul server per la lettura o la scrittura.|
|Gestire le eccezioni.|Usare la classe [CInternetException](../mfc/reference/cinternetexception-class.md) .|Gestisce tutti i tipi di eccezioni comuni di Internet.|
|Terminare la sessione FTP.|Elimina l'oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) .|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|

## <a name="see-also"></a>Vedi anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet di MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
