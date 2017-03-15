---
title: "Passaggi in un&#39;applicazione client gopher tipica | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Gopher (applicazioni client)"
  - "applicazioni Internet, applicazioni client gopher"
  - "Internet (applicazioni client), tabella gopher"
  - "WinInet (classi), gopher"
ms.assetid: 3e4e1869-5da0-453d-8ba9-b648c894bb90
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Passaggi in un&#39;applicazione client gopher tipica
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella tabella seguente vengono mostrati i passaggi che è possibile eseguire in un'applicazione client tipica di gopher.  
  
|L'obiettivo|Azioni che si intraprendono|Effetti|  
|-----------------|---------------------------------|-------------|  
|Consente di avviare una sessione di gopher.|Creare un oggetto di [CInternetSession](../mfc/reference/cinternetsession-class.md).|Inizializza WinInet e si connette al server.|  
|Connessione a un server gopher.|Utilizzo [CInternetSession::GetGopherConnection](../Topic/CInternetSession::GetGopherConnection.md).|Restituisce un oggetto di [CGopherConnection](../mfc/reference/cgopherconnection-class.md).|  
|Cercare la prima risorsa in gopher.|Utilizzo [CGopherFileFind::FindFile](../Topic/CGopherFileFind::FindFile.md).|Trova il primo file.  Restituisce FALSE se tale file non è stato trovato.|  
|Trovare la risorsa seguente nel gopher.|Utilizzo [CGopherFileFind::FindNextFile](../Topic/CGopherFileFind::FindNextFile.md).|Individuare il file seguente.  Restituisce FALSE se il file non viene trovato.|  
|Aprire il file trovato da **FindFile** o da `FindNextFile` per leggere.|Ottenere un localizzatore di gopher utilizzando [CGopherFileFind::GetLocator](../Topic/CGopherFileFind::GetLocator.md).  Utilizzo [CGopherConnection::OpenFile](../Topic/CGopherConnection::OpenFile.md).|Aprire il file specificato dal localizzatore.  `OpenFile` restituisce un oggetto di [CGopherFile](../mfc/reference/cgopherfile-class.md).|  
|Aprire un file mediante il localizzatore di gopher fornite.|Creare un localizzatore di gopher utilizzando [CGopherConnection::CreateLocator](../Topic/CGopherConnection::CreateLocator.md).  Utilizzo [CGopherConnection::OpenFile](../Topic/CGopherConnection::OpenFile.md).|Aprire il file specificato dal localizzatore.  `OpenFile` restituisce un oggetto di [CGopherFile](../mfc/reference/cgopherfile-class.md).|  
|Leggere dal file.|Utilizzo [CGopherFile](../mfc/reference/cgopherfile-class.md).|Legge il numero di byte, utilizzando un buffer fornito.|  
|Gestire le eccezioni.|Utilizzare la classe di [CInternetException](../mfc/reference/cinternetexception-class.md).|Gestisce tutti i tipi di eccezioni comuni internet.|  
|Terminare la sessione di gopher.|Disponga dell'oggetto di [CInternetSession](../mfc/reference/cinternetsession-class.md).|Viene effettuata la pulizia automatica handle di file e le connessioni aperte.|  
  
## Vedere anche  
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)