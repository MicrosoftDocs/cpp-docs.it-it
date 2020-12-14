---
description: 'Altre informazioni su: Windows Sockets: porte e indirizzi socket'
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
ms.openlocfilehash: 354505796ff60cc8968b2e10a2aac98be2eb4666
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263400"
---
# <a name="windows-sockets-ports-and-socket-addresses"></a>Windows Sockets: porte e indirizzi socket

Questo articolo illustra i termini "Port" e "Address" usati con Windows Sockets.

## <a name="port"></a><a name="_core_port"></a> Porta

Una porta identifica un processo univoco per il quale è possibile fornire un servizio. Nel contesto attuale, una porta è associata a un'applicazione che supporta Windows Sockets. L'idea è quella di identificare ogni applicazione Windows Sockets in modo univoco, in modo che sia possibile avere più di un'applicazione Windows Sockets in esecuzione in un computer nello stesso momento.

Alcune porte sono riservate per i servizi comuni, ad esempio FTP. È consigliabile evitare di usare le porte a meno che non si fornisca tale tipo di servizio. La specifica di Windows Sockets descrive le porte riservate. File WINSOCK. Sono inoltre elencate le ore.

Per consentire alla DLL Windows Sockets di selezionare una porta utilizzabile, passare 0 come valore di porta. MFC seleziona un valore di porta maggiore di 1.024 decimale. È possibile recuperare il valore di porta selezionato da MFC chiamando la funzione membro [CAsyncSocket:: getsockname](../mfc/reference/casyncsocket-class.md#getsockname) .

## <a name="socket-address"></a><a name="_core_socket_address"></a> Indirizzo socket

Ogni oggetto Socket è associato a un indirizzo IP (Internet Protocol) in rete. In genere, l'indirizzo è un nome di computer, ad esempio "ftp.microsoft.com", o un numero punteggiato, ad esempio "128.56.22.8".

Quando si cerca di creare un socket, in genere non è necessario specificare un indirizzo personalizzato.

> [!NOTE]
> È possibile che il computer disponga di più schede di rete (o che l'applicazione possa essere eseguita una volta in un computer di questo tipo), ognuno dei quali rappresenta una rete diversa. In tal caso, potrebbe essere necessario assegnare un indirizzo per specificare la scheda di rete che verrà usata dal socket. Si tratta di un utilizzo avanzato e di un possibile problema di portabilità.

Per altre informazioni, vedere:

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
