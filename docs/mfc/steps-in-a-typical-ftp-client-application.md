---
title: "Passaggi in un&#39;applicazione client FTP tipica | Microsoft Docs"
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
  - "FTP (File Transfer Protocol)"
  - "FTP (File Transfer Protocol), applicazioni client"
  - "applicazioni Internet, applicazioni client FTP"
  - "Internet (applicazioni client), tabella FTP"
  - "WinInet (classi), FTP"
ms.assetid: 70bed7b5-6040-40d1-bc77-702e63a698f2
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Passaggi in un&#39;applicazione client FTP tipica
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'applicazione client tipica FTP crea [CInternetSession](../mfc/reference/cinternetsession-class.md) e un oggetto di [CFtpConnection](../mfc/reference/cftpconnection-class.md).  Notare che queste classi MFC WinInet non controllano le impostazioni del tipo proxy; IIS.  
  
 Inoltre, vedere questi articoli della Knowledge Base:  
  
-   HOWTO: FTP con il proxy basato su CERN utilizzando WinInet API \(articolo ID: Q166961\)  
  
-   ESEMPIO: FTP con il proxy protetto da password basato su CERN \(articolo ID: Q216214\)  
  
-   Non riuscire gestione servizi Internet per mostrare i servizi installati del proxy \(articolo ID: Q216802\)  
  
 Nella tabella seguente vengono mostrati i passaggi che è possibile eseguire in un'applicazione client tipica FTP.  
  
|L'obiettivo|Azioni che si intraprendono|Effetti|  
|-----------------|---------------------------------|-------------|  
|Avvia una sessione FTP.|Creare un oggetto di [CInternetSession](../mfc/reference/cinternetsession-class.md).|Inizializza WinInet e si connette al server.|  
|Connessione a un server FTP.|Utilizzo [CInternetSession::GetFtpConnection](../Topic/CInternetSession::GetFtpConnection.md).|Restituisce un oggetto di [CFtpConnection](../mfc/reference/cftpconnection-class.md).|  
|Modifica a una nuova directory ftp sul server.|Utilizzo [CFtpConnection::SetCurrentDirectory](../Topic/CFtpConnection::SetCurrentDirectory.md).|Modificare la directory di cui si è connessi nel server.|  
|Individuare il primo file nella directory FTP.|Utilizzo [CFtpFileFind::FindFile](../Topic/CFtpFileFind::FindFile.md).|Trova il primo file.  Restituisce FALSE se tale file non è stato trovato.|  
|Individuare il seguente file nella directory FTP.|Utilizzo [CFtpFileFind::FindNextFile](../Topic/CFtpFileFind::FindNextFile.md).|Individuare il file seguente.  Restituisce FALSE se il file non viene trovato.|  
|Aprire il file trovato da **FindFile** o da `FindNextFile` per la lettura o la scrittura.|Utilizzare [CFtpConnection::OpenFile](../Topic/CFtpConnection::OpenFile.md), utilizzando il nome file restituito da [FindFile](../Topic/CFtpFileFind::FindFile.md) o da [FindNextFile](../Topic/CFtpFileFind::FindNextFile.md).|Aprire il file nel server per la lettura o la scrittura.  Restituisce un oggetto di [CInternetFile](../mfc/reference/cinternetfile-class.md).|  
|Leggere o scrivere nel file.|Utilizzo [CInternetFile::Read](../Topic/CInternetFile::Read.md) o [CInternetFile::Write](../Topic/CInternetFile::Write.md).|Lettura o scrittura il numero di byte, utilizzando un buffer fornito.|  
|Gestire le eccezioni.|Utilizzare la classe di [CInternetException](../mfc/reference/cinternetexception-class.md).|Gestisce tutti i tipi di eccezioni comuni internet.|  
|Terminare la sessione di FTP.|Disponga dell'oggetto di [CInternetSession](../mfc/reference/cinternetsession-class.md).|Viene effettuata la pulizia automatica handle di file e le connessioni aperte.|  
  
## Vedere anche  
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)