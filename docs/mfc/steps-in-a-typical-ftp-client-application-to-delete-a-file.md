---
title: "Passaggi in un&#39;applicazione client FTP tipica per eliminare un file | Microsoft Docs"
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
  - "FTP (File Transfer Protocol), applicazioni client"
  - "applicazioni Internet, applicazioni client FTP"
  - "Internet (applicazioni client), FTP DELETE"
  - "WinInet (classi), FTP"
ms.assetid: 2c347a96-c0a4-4827-98fe-668406e552bc
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Passaggi in un&#39;applicazione client FTP tipica per eliminare un file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella tabella seguente vengono mostrati i passaggi che è possibile eseguire in una tipica applicazione client FTP per eliminare un file.  
  
|L'obiettivo|Azioni da effettuare|Effetti|  
|-----------------|--------------------------|-------------|  
|Avviare una sessione FTP.|Creare un oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md).|Inizializza WinInet e si connette al server.|  
|Connettere a un server FTP.|Utilizzare [CInternetSession::GetFtpConnection](../Topic/CInternetSession::GetFtpConnection.md).|Restituisce un oggetto [CFtpConnection](../mfc/reference/cftpconnection-class.md).|  
|Controllare per assicurarsi di trovarsi nella directory corretta del server FTP.|Utilizzo [CFtpConnection::GetCurrentDirectory](../Topic/CFtpConnection::GetCurrentDirectory.md) o [CFtpConnection::GetCurrentDirectoryAsURL](../Topic/CFtpConnection::GetCurrentDirectoryAsURL.md).|Restituisce il nome o l'URL della directory a cui si è attualmente connessi sul server, a seconda della funzione membro selezionata.|  
|Passare a una nuova directory FTP sul server.|Utilizzare [CFtpConnection::SetCurrentDirectory](../Topic/CFtpConnection::SetCurrentDirectory.md).|Modifica la directory a cui si è attualmente connessi sul server.|  
|Individuare il primo file nella directory FTP.|Utilizzare [CFtpFileFind::FindFile](../Topic/CFtpFileFind::FindFile.md).|Trova il primo file.  Restituisce FALSE se nessun file è stato trovato.|  
|Individuare il file successivo nella directory FTP.|Utilizzare [CFtpFileFind::FindNextFile](../Topic/CFtpFileFind::FindNextFile.md).|Individua il file seguente.  Restituisce FALSE se il file non viene trovato.|  
|Eliminare il file trovato da **FindFile** o da `FindNextFile`.|Utilizzare [CFtpConnection::Remove](../Topic/CFtpConnection::Remove.md), utilizzando il nome del file restituito da **FindFile** o da `FindNextFile`.|Elimina il file sul server per la lettura o la scrittura.|  
|Gestire le eccezioni.|Utilizzare la classe [CInternetException](../mfc/reference/cinternetexception-class.md).|Gestisce tutti i tipi di eccezioni comuni di Internet.|  
|Termine della sessione FTP.|Disporre dell'oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md).|Viene effettuata la pulizia automatica degli handle e delle connessioni del file aperto.|  
  
## Vedere anche  
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)