---
title: 'Windows Sockets: Derivazione dalle classi Socket | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- derived classes [MFC], from socket classes
- Windows Sockets [MFC], deriving from socket classes
- sockets [MFC], deriving from socket classes
ms.assetid: 3a26e67a-e323-433b-9b05-eca018799801
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 76ccb2ec126ae57e39b1a4fab3a0bff82a353d71
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953762"
---
# <a name="windows-sockets-deriving-from-socket-classes"></a>Windows Sockets: derivazione dalle classi Socket
In questo articolo vengono descritte alcune delle funzionalità che è possibile liberare derivare la propria classe da una delle classi di socket.  
  
 È possibile derivare le proprie classi socket uno [CAsyncSocket](../mfc/reference/casyncsocket-class.md) oppure [CSocket](../mfc/reference/csocket-class.md) per aggiungere funzionalità personalizzate. In particolare, queste classi forniscono un numero di funzioni membro virtuali che è possibile eseguire l'override. Queste funzioni includono [OnReceive](../mfc/reference/casyncsocket-class.md#onreceive), [OnSend](../mfc/reference/casyncsocket-class.md#onsend), [OnAccept](../mfc/reference/casyncsocket-class.md#onaccept), [OnConnect](../mfc/reference/casyncsocket-class.md#onconnect), e [OnClose](../mfc/reference/casyncsocket-class.md#onclose). È possibile sostituire le funzioni nella classe derivata socket per sfruttare le notifiche forniscono quando si verificano eventi di rete. Il framework chiama queste funzioni di callback di notifica per ricevere una notifica degli eventi di socket importanti, ad esempio la ricezione di dati che è possibile iniziare la lettura. Per ulteriori informazioni sulle funzioni di notifica, vedere [Windows Sockets: notifiche Socket](../mfc/windows-sockets-socket-notifications.md).  
  
 Inoltre, classe `CSocket` fornisce il [OnMessagePending](../mfc/reference/csocket-class.md#onmessagepending) funzione membro (un avanzato sottoponibile a override). MFC chiama questa funzione, mentre il socket è visualizzazione messaggi basati su Windows. È possibile eseguire l'override `OnMessagePending` per cercare determinati messaggi da Windows e rispondere ad essi.  
  
 La versione predefinita del `OnMessagePending` fornita nella classe `CSocket` esamina la coda di messaggi per i messaggi WM_PAINT durante l'attesa di una chiamata di blocco completare. Invia messaggi di disegno per migliorare la qualità di visualizzazione. Oltre a risultare utile, Mostra un modo, si potrebbe quindi sostituire la funzione manualmente. Un altro esempio, è consigliabile utilizzare `OnMessagePending` per l'attività seguente. Si supponga di che visualizza una finestra di dialogo non modali durante l'attesa di una transazione di rete venga completata. La finestra di dialogo contiene un pulsante di annullamento che l'utente può utilizzare per annullare le transazioni di blocco che impiegano troppo lunga. Il `OnMessagePending` override potrebbe essere il pumping dei messaggi correlati a questa finestra di dialogo non modale.  
  
 Nel `OnMessagePending` eseguire l'override, restituire **TRUE** o il valore restituito da una chiamata alla versione della classe di base di `OnMessagePending`. Se esegue il lavoro che si desidera comunque eseguita, chiamare la versione della classe base.  
  
 Per altre informazioni, vedere:  
  
-   [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md)  
  
-   [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md)  
  
-   [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

