---
title: 'Windows Sockets: Conversione di stringhe | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows Sockets [MFC], multibyte character string conversion
- sockets [MFC], multibyte character string conversion issues
- string conversion, multibyte character strings
ms.assetid: 9df522b5-6b23-41e0-bb96-e4e623baf141
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bad57be68ce716cddf2ce44f12e94c545a7bbfd6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33383760"
---
# <a name="windows-sockets-converting-strings"></a>Windows Sockets: conversione di stringhe
In questo articolo e nei due articoli correlati vengono illustrati diversi problemi che si presentano nella programmazione Windows Sockets. Questo articolo descrive la conversione di stringhe. Gli altri problemi vengono analizzati [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md) e [Windows Sockets: ordinamento dei Byte](../mfc/windows-sockets-byte-ordering.md).  
  
 Se si utilizza o si deriva dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi autonomamente. Se si utilizza o si deriva dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC gestiti.  
  
## <a name="converting-strings"></a>Conversione di stringhe  
 Se comunicano tra le applicazioni che utilizzano le stringhe archiviate in diversi formati di caratteri "wide", come caratteri Unicode o multibyte (MBCS) di imposta, o tra uno di questi e un'applicazione tramite stringhe di caratteri ANSI, è necessario gestire le conversioni manualmente in `CAsyncSocket`. Il `CArchive` oggetto utilizzato con un `CSocket` oggetto gestisce questa conversione automaticamente tramite le funzionalità di classe [CString](../atl-mfc-shared/reference/cstringt-class.md). Per ulteriori informazioni, vedere la specifica Windows Sockets, disponibile in Windows SDK.  
  
 Per altre informazioni, vedere:  
  
-   [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)  
  
-   [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

