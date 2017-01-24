---
title: "Come MFC agevola la creazione di applicazioni Client Internet | Microsoft Docs"
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
  - "applicazioni Internet, MFC"
  - "Internet (applicazioni client), MFC"
  - "MFC, applicazioni Internet"
ms.assetid: 94437b3f-f15c-437d-b5fd-264a2efec9ab
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Come MFC agevola la creazione di applicazioni Client Internet
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I MFC includono le funzioni di estensione di internet Win32 \(WinInet\) in modo che fornisce un contesto comune per i programmatori di MFC.  MFC fornisce tre classi del file internet \([CInternetFile](../mfc/reference/cinternetfile-class.md), [CHttpFile](../mfc/reference/chttpfile-class.md) e [CGopherFile](../mfc/reference/cgopherfile-class.md)\) deriva dalla classe di [CStdioFile](../mfc/reference/cstdiofile-class.md).  Non solo queste classi fanno recuperare e modificare le familiari di dati internet ai programmatori che hanno utilizzato `CStdioFile` per i file locali, ma con queste classi è possibile gestire i file locali e internet archivia in modo coerente e trasparente.  
  
 Le classi MFC WinInet forniscono la stessa funzionalità di `CStdioFile` per dati che vengono trasferiti a internet.  Queste classi riassumono i protocolli Internet per HTTP, FTP e il gopher nell'API di livello elevato, fornendo un percorso rapido e semplice per porre domande ma con DPI.  Ad esempio, per connettersi a un server FTP è comunque necessario diverse operazioni a un livello basso, ma gli sviluppatori di MFC, è sufficiente eseguire un'altra chiamata a `CInternetSession::GetFTPConnection` per creare la connessione.  
  
 Inoltre, le classi MFC WinInet offre i vantaggi seguenti:  
  
-   I\/O buffering  
  
-   Handle indipendenti dai tipi per i dati  
  
-   Parametri predefiniti per numerose funzioni  
  
-   Gestione delle eccezioni per gli errori comuni internet  
  
-   Pulizia automatica handles e le connessioni aperte  
  
## Vedere anche  
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)   
 [Come WinInet agevola la creazione di applicazioni client Internet](../mfc/how-wininet-makes-it-easier-to-create-internet-client-applications.md)