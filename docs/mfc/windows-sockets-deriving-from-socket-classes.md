---
title: 'Windows Sockets: derivazione dalle classi Socket'
ms.date: 11/04/2016
helpviewer_keywords:
- derived classes [MFC], from socket classes
- Windows Sockets [MFC], deriving from socket classes
- sockets [MFC], deriving from socket classes
ms.assetid: 3a26e67a-e323-433b-9b05-eca018799801
ms.openlocfilehash: d860aacef164155f87db33355211b1a8e598c91b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648812"
---
# <a name="windows-sockets-deriving-from-socket-classes"></a>Windows Sockets: derivazione dalle classi Socket

Questo articolo descrive alcune delle funzionalità che è possibile ottenere derivando una classe personalizzata da una delle classi socket.

È possibile derivare le proprie classi socket da uno [CAsyncSocket](../mfc/reference/casyncsocket-class.md) oppure [CSocket](../mfc/reference/csocket-class.md) per aggiungere funzionalità personalizzate. In particolare, queste classi forniscono una serie di funzioni membro virtuali che è possibile eseguire l'override. Queste funzioni includono [OnReceive](../mfc/reference/casyncsocket-class.md#onreceive), [OnSend](../mfc/reference/casyncsocket-class.md#onsend), [OnAccept](../mfc/reference/casyncsocket-class.md#onaccept), [OnConnect](../mfc/reference/casyncsocket-class.md#onconnect), e [OnClose](../mfc/reference/casyncsocket-class.md#onclose). È possibile sostituire le funzioni nella classe derivata socket per sfruttare i vantaggi delle notifiche sono utili in caso di eventi di rete. Il framework chiama queste funzioni di callback di notifica per la notifica degli eventi importanti socket, ad esempio la ricezione di dati che è possibile iniziare la lettura. Per altre informazioni sulle funzioni di notifica, vedere [Windows Sockets: notifiche Socket](../mfc/windows-sockets-socket-notifications.md).

Classe inoltre `CSocket` fornisce il [OnMessagePending](../mfc/reference/csocket-class.md#onmessagepending) funzione membro (un avanzato sottoponibile a override). MFC chiama questa funzione, anche se il socket è distribuendo messaggi basati su Windows. È possibile eseguire l'override `OnMessagePending` cercare messaggi specifici da Windows e di rispondere ad essi.

La versione predefinita del `OnMessagePending` fornita nella classe `CSocket` esamina la coda di messaggi per messaggi WM_PAINT durante l'attesa di una chiamata di blocco per il completamento. E invia messaggi di disegno per migliorare la qualità della visualizzazione. Oltre a risultare utile, questo è illustrato un tipo si potrebbe quindi sostituire la funzione autonomamente. Come ulteriore esempio, è consigliabile usare `OnMessagePending` per l'attività seguente. Si supponga di che visualizza una finestra di dialogo non modali durante l'attesa di una transazione di rete per il completamento. La finestra di dialogo contiene un pulsante di annullamento che l'utente può usare per annullare le transazioni bloccanti che richiedono troppo tempo. Il `OnMessagePending` sostituzione potrebbe essere che distribuisca i messaggi relativi a questa finestra di dialogo non modale.

Nel `OnMessagePending` eseguire l'override, restituire **TRUE** o il valore restituito da una chiamata alla versione della classe di base di `OnMessagePending`. Chiamare la versione della classe base se esegue il lavoro comunque eseguita.

Per altre informazioni, vedere:

- [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md)

- [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md)

- [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

