---
title: 'Windows Sockets: porte e indirizzi socket'
ms.date: 11/04/2016
helpviewer_keywords:
- ports [MFC], definition
- Windows Sockets [MFC], ports
- Windows Sockets [MFC], addresses
- ports [MFC]
- addresses [MFC], socket
- sockets [MFC], addresses
- sockets [MFC], ports
ms.assetid: e050261a-9285-4f31-a1c5-6c8033af5b4a
ms.openlocfilehash: 791bf07c927e80e65e0fda79fae8a50235bc2def
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371040"
---
# <a name="windows-sockets-ports-and-socket-addresses"></a>Windows Sockets: porte e indirizzi socket

In questo articolo vengono illustrati i termini "porta" e "indirizzo" utilizzati con Windows Sockets.

## <a name="port"></a><a name="_core_port"></a>Porta

Una porta identifica un processo univoco per il quale è possibile fornire un servizio. Nel contesto corrente, una porta è associata a un'applicazione che supporta Windows Sockets.In the present context, a port is associated with an application that supports Windows Sockets. L'idea è quella di identificare ogni applicazione Windows Sockets in modo univoco in modo da poter avere più di un'applicazione Windows Sockets in esecuzione su un computer contemporaneamente.

Alcune porte sono riservate ai servizi comuni, ad esempio FTP. È consigliabile evitare di utilizzare tali porte a meno che non si fornisca tale tipo di servizio. La specifica di Windows Sockets descrive in dettaglio queste porte riservate. Il file WINSOCK. H li elenca anche.

Per consentire alla DLL di Windows Sockets di selezionare automaticamente una porta utilizzabile, passare 0 come valore della porta. MFC seleziona un valore di porta maggiore di 1.024 decimale. È possibile recuperare il valore della porta selezionata da MFC chiamando la funzione membro [CAsyncSocket::GetSockName](../mfc/reference/casyncsocket-class.md#getsockname) .

## <a name="socket-address"></a><a name="_core_socket_address"></a>Indirizzo socket

Ogni oggetto socket è associato a un indirizzo IP (Internet Protocol) sulla rete. In genere, l'indirizzo è un nome di computer, ad esempio "ftp.microsoft.com" o un numero punteggiato, ad esempio "128.56.22.8".

Quando si tenta di creare un socket, in genere non è necessario specificare un indirizzo personalizzato.

> [!NOTE]
> È possibile che il computer disponga di più schede di rete (o che l'applicazione venga eseguita un giorno su tale computer), ognuna delle quali rappresenta una rete diversa. In tal caso, potrebbe essere necessario fornire un indirizzo per specificare quale scheda di rete verrà utilizzata dal socket. Questo è certo per essere un utilizzo avanzato e un possibile problema di portabilità.

Per altre informazioni, vedere:

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
