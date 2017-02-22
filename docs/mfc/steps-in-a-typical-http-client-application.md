---
title: "Passaggi in un&#39;applicazione client HTTP tipica | Microsoft Docs"
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
  - "applicazioni [MFC], client HTTP"
  - "applicazioni client [C++], HTTP"
  - "applicazioni client HTTP"
  - "applicazioni Internet [C++], applicazioni client HTTP"
  - "Internet (applicazioni client) [C++], tabella HTTP"
  - "WinInet (classi), HTTP"
ms.assetid: f86552e8-8acd-4b23-bdc5-0c3a247ebd74
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Passaggi in un&#39;applicazione client HTTP tipica
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella tabella seguente vengono mostrati i passaggi che è possibile eseguire in un'applicazione client HTTP tipica:  
  
|L'obiettivo|Azioni che si intraprendono|Effetti|  
|-----------------|---------------------------------|-------------|  
|Avvia una sessione HTTP.|Creare un oggetto di [CInternetSession](../mfc/reference/cinternetsession-class.md).|Inizializza WinInet e si connette al server.|  
|Connessione a un server HTTP.|Utilizzo [CInternetSession::GetHttpConnection](../Topic/CInternetSession::GetHttpConnection.md).|Restituisce un oggetto di [CHttpConnection](../mfc/reference/chttpconnection-class.md).|  
|Aprire una richiesta HTTP.|Utilizzo [CHttpConnection::OpenRequest](../Topic/CHttpConnection::OpenRequest.md).|Restituisce un oggetto di [CHttpFile](../mfc/reference/chttpfile-class.md).|  
|Inviare una richiesta HTTP.|Utilizzo [CHttpFile::AddRequestHeaders](../Topic/CHttpFile::AddRequestHeaders.md) e [CHttpFile::SendRequest](../Topic/CHttpFile::SendRequest.md).|Individuare il file.  Restituisce FALSE se il file non viene trovato.|  
|Leggere dal file.|Utilizzo [CHttpFile](../mfc/reference/chttpfile-class.md).|Legge il numero di byte utilizzando un buffer fornito.|  
|Gestire le eccezioni.|Utilizzare la classe di [CInternetException](../mfc/reference/cinternetexception-class.md).|Gestisce tutti i tipi di eccezioni comuni internet.|  
|Termina la sessione HTTP.|Disponga dell'oggetto di [CInternetSession](../mfc/reference/cinternetsession-class.md).|Viene effettuata la pulizia automatica handle di file e le connessioni aperte.|  
  
## Vedere anche  
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)