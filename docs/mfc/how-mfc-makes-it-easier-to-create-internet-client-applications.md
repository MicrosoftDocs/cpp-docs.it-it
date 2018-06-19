---
title: Come MFC agevola la creazione di applicazioni Client Internet | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Internet client applications [MFC], MFC
- Internet applications [MFC], MFC
- MFC, Internet applications
ms.assetid: 94437b3f-f15c-437d-b5fd-264a2efec9ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3d04a27a51645fc44296db7f5fd84bc2524804c4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33346113"
---
# <a name="how-mfc-makes-it-easier-to-create-internet-client-applications"></a>Come MFC agevola la creazione di applicazioni Client Internet
Microsoft Foundation Classes incapsulano le funzioni di estensioni Internet Win32 (WinInet) in modo che fornisce un contesto familiare ai programmatori MFC. MFC fornisce tre classi di file di Internet ([CInternetFile](../mfc/reference/cinternetfile-class.md), [CHttpFile](../mfc/reference/chttpfile-class.md), e [CGopherFile](../mfc/reference/cgopherfile-class.md)) derivato dal [CStdioFile](../mfc/reference/cstdiofile-class.md) classe . Non solo queste classi di effettuare il recupero e la modifica dei dati Internet familiare ai programmatori che hanno usato `CStdioFile` per i file locali, ma con queste classi è possibile gestire i file locali e i file Internet in modo trasparente e coerenza.  
  
 Le classi WinInet MFC forniscono la stessa funzionalità `CStdioFile` per i dati trasferiti attraverso la rete Internet. Queste classi astraggono i protocolli Internet per HTTP, FTP e gopher in un'applicazione di alto livello dell'interfaccia di programmazione, fornendo un percorso rapido e semplice per rendere le applicazioni compatibili con Internet. Ad esempio, la connessione a un server FTP richiede diversi passaggi a un livello basso, ma lo sviluppatore di MFC, è necessario solo effettuare una chiamata a `CInternetSession::GetFTPConnection` per creare la connessione.  
  
 Inoltre, le classi WinInet MFC offrono i vantaggi seguenti:  
  
-   / O memorizzati nel buffer  
  
-   Handle indipendente dai tipi per i dati  
  
-   Parametri predefiniti per molte funzioni  
  
-   Gestione delle eccezioni per gli errori più comuni di Internet  
  
-   Pulizia automatica di handle aperti e connessioni  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Come WinInet agevola la creazione di applicazioni client Internet](../mfc/how-wininet-makes-it-easier-to-create-internet-client-applications.md)

