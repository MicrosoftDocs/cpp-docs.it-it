---
description: 'Altre informazioni su: Windows Sockets: derivazione dalle classi Socket'
title: 'Windows Sockets: derivazione dalle classi Socket'
ms.date: 11/04/2016
helpviewer_keywords:
- derived classes [MFC], from socket classes
- Windows Sockets [MFC], deriving from socket classes
- sockets [MFC], deriving from socket classes
ms.assetid: 3a26e67a-e323-433b-9b05-eca018799801
ms.openlocfilehash: ba3526ddde4d254ff044fa09588d7764b16fb719
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97132964"
---
# <a name="windows-sockets-deriving-from-socket-classes"></a>Windows Sockets: derivazione dalle classi Socket

Questo articolo descrive alcune delle funzionalità che è possibile ottenere derivando la propria classe da una delle classi di socket.

È possibile derivare le classi socket da [CAsyncSocket](../mfc/reference/casyncsocket-class.md) o [CSocket](../mfc/reference/csocket-class.md) per aggiungere funzionalità personalizzate. In particolare, queste classi forniscono un numero di funzioni membro virtuali che è possibile sottoscrivere. Queste funzioni includono [OnReceive](../mfc/reference/casyncsocket-class.md#onreceive), [OnSend](../mfc/reference/casyncsocket-class.md#onsend), [OnAccept](../mfc/reference/casyncsocket-class.md#onaccept), [OnConnect](../mfc/reference/casyncsocket-class.md#onconnect)e [OnClose](../mfc/reference/casyncsocket-class.md#onclose). È possibile eseguire l'override delle funzioni nella classe Socket derivata per sfruttare le notifiche che forniscono quando si verificano gli eventi di rete. Il Framework chiama queste funzioni di callback di notifica per inviare notifiche a eventi di socket importanti, ad esempio la ricezione di dati che è possibile iniziare a leggere. Per ulteriori informazioni sulle funzioni di notifica, vedere [Windows Sockets: socket Notifications](../mfc/windows-sockets-socket-notifications.md).

Inoltre, `CSocket` la classe fornisce la funzione membro [OnMessagePending](../mfc/reference/csocket-class.md#onmessagepending) (un oggetto avanzato sottoponibile a override). MFC chiama questa funzione mentre il socket sta distribuendo messaggi basati su Windows. È possibile eseguire l'override `OnMessagePending` di per cercare messaggi specifici da Windows e rispondere.

La versione predefinita di `OnMessagePending` specificata nella classe `CSocket` esamina la coda di messaggi per WM_PAINT messaggi in attesa del completamento di una chiamata di blocco. Invia i messaggi di disegno per migliorare la qualità di visualizzazione. Oltre a eseguire un'operazione utile, viene illustrato un modo in cui è possibile eseguire l'override della funzione autonomamente. Per un altro esempio, è consigliabile utilizzare `OnMessagePending` per l'attività seguente. Si supponga di visualizzare una finestra di dialogo non modale in attesa del completamento di una transazione di rete. La finestra di dialogo contiene un pulsante Annulla che l'utente può utilizzare per annullare le transazioni di blocco che impiegano troppo tempo. L' `OnMessagePending` override potrebbe generare messaggi correlati a questa finestra di dialogo non modale.

Nell' `OnMessagePending` override, restituire **true** o il ritorno da una chiamata alla versione della classe di base di `OnMessagePending` . Chiamare la versione della classe base se esegue il lavoro che si vuole ancora eseguire.

Per altre informazioni, vedere:

- [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: Blocco](../mfc/windows-sockets-blocking.md)

- [Windows Sockets: ordinamento byte](../mfc/windows-sockets-byte-ordering.md)

- [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md)

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
