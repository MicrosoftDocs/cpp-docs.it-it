---
title: "Windows Sockets: conversione di stringhe | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "socket [C++], problemi di conversione delle stringhe di caratteri multibyte"
  - "conversione di stringhe, stringhe di caratteri multibyte"
  - "Windows Sockets [C++], conversione delle stringhe di caratteri multibyte"
ms.assetid: 9df522b5-6b23-41e0-bb96-e4e623baf141
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets: conversione di stringhe
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo e due articoli correlati vengono illustrati diversi problemi nella programmazione Windows Sockets.  In questo articolo viene illustrata la conversione delle stringhe.  Gli altri problemi vengono analizzati in [Windows Sockets: Blocco](../mfc/windows-sockets-blocking.md) e in [Windows Sockets: Ordinamento di byte](../mfc/windows-sockets-byte-ordering.md).  
  
 Se si utilizza o derivate dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi.  Se si utilizza o derivate dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC li gestisce automaticamente.  
  
## Conversione di stringhe  
 Se si passano tra applicazioni che utilizzano stringhe archiviate in formati a caratteri estesi diversi, come Unicode o set di caratteri multibyte \(MBCS\), né tra una di queste e un'applicazione utilizzo di stringhe di caratteri ANSI, è necessario gestire conversioni manualmente in `CAsyncSocket`.  L'oggetto di `CArchive` utilizzato con un oggetto di `CSocket` gestisce la conversione in modo dettagliato le funzionalità di classe [CString](../atl-mfc-shared/reference/cstringt-class.md).  Per ulteriori informazioni, vedere la specifica di Windows Sockets, disponibile in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni, vedere:  
  
-   [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)  
  
-   [Windows Sockets: Socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: Socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)