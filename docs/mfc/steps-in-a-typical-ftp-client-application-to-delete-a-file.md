---
title: I passaggi in un'applicazione Client FTP tipica per eliminare un File | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Internet client applications [MFC], FTP delete
- WinInet classes [MFC], FTP
- FTP (File Transfer Protocol) [MFC], client applications
- Internet applications [MFC], FTP client applications
ms.assetid: 2c347a96-c0a4-4827-98fe-668406e552bc
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 77fecfb9c11c95d14c8816fe1c3b23046eae98c7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="steps-in-a-typical-ftp-client-application-to-delete-a-file"></a>Passaggi in un'applicazione client FTP tipica per eliminare un file
Nella tabella seguente vengono mostrati i passaggi che è possibile eseguire in una tipica applicazione client FTP per eliminare un file.  
  
|Obiettivo|Azioni da effettuare|Effetti|  
|---------------|----------------------|-------------|  
|Avviare una sessione FTP.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Inizializza WinInet e si connette al server.|  
|Connettersi a un server FTP.|Utilizzare [CInternetSession:: GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection).|Restituisce un [CFtpConnection](../mfc/reference/cftpconnection-class.md) oggetto.|  
|Assicurarsi di trovarsi nella directory corretta nel server FTP.|Utilizzare [CFtpConnection:: GetCurrentDirectory](../mfc/reference/cftpconnection-class.md#getcurrentdirectory) o [CFtpConnection:: Getcurrentdirectoryasurl](../mfc/reference/cftpconnection-class.md#getcurrentdirectoryasurl).|Restituisce il nome o l'URL della directory a cui si è attualmente connessi sul server, a seconda della funzione membro selezionata.|  
|Passare a una nuova directory FTP sul server.|Utilizzare [CFtpConnection:: SetCurrentDirectory](../mfc/reference/cftpconnection-class.md#setcurrentdirectory).|Modifica la directory a cui si è attualmente connessi sul server.|  
|Individuare il primo file nella directory FTP.|Utilizzare [CFtpFileFind:: FindFile](../mfc/reference/cftpfilefind-class.md#findfile).|Trova il primo file. Restituisce FALSE se non viene trovato alcun file.|  
|Individuare il file successivo nella directory FTP.|Utilizzare [CFtpFileFind:: FindNextFile](../mfc/reference/cftpfilefind-class.md#findnextfile).|Individua il file successivo. Restituisce FALSE se il file non viene trovato.|  
|Eliminare il file trovato da **FindFile** o `FindNextFile`.|Utilizzare [CFtpConnection:: Remove](../mfc/reference/cftpconnection-class.md#remove), utilizzando il nome del file restituito da **FindFile** o `FindNextFile`.|Elimina il file sul server per la lettura o la scrittura.|  
|Gestire le eccezioni.|Utilizzare il [CInternetException](../mfc/reference/cinternetexception-class.md) classe.|Gestisce tutti i tipi di eccezioni comuni di Internet.|  
|Terminare la sessione FTP.|Smaltire la [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisiti per le classi Client Internet](../mfc/prerequisites-for-internet-client-classes.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
