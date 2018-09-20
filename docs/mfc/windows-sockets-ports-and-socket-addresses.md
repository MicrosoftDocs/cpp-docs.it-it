---
title: 'Windows Sockets: Porte e indirizzi Socket | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ports [MFC], definition
- Windows Sockets [MFC], ports
- Windows Sockets [MFC], addresses
- ports [MFC]
- addresses [MFC], socket
- sockets [MFC], addresses
- sockets [MFC], ports
ms.assetid: e050261a-9285-4f31-a1c5-6c8033af5b4a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7f97bfa42e379f0806eb85e3f030465b2a181d01
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46379665"
---
# <a name="windows-sockets-ports-and-socket-addresses"></a>Windows Sockets: porte e indirizzi socket

Questo articolo illustra i termini "della porta" e "address" come usata con i socket di Windows.

##  <a name="_core_port"></a> Porta

Una porta identifica un processo univoco per il quale è possibile specificare un servizio. In questo contesto, una porta è associata a un'applicazione che supporta Windows Sockets. L'idea consiste nell'identificare in modo univoco ogni applicazione di Windows Sockets, pertanto è possibile avere più di un'applicazione di socket di Windows in esecuzione in un computer nello stesso momento.

Alcune porte sono riservate per i servizi comuni, ad esempio FTP. È consigliabile evitare l'uso di queste porte a meno che non si specifica tale tipo di servizio. La specifica di Windows Sockets illustra in dettaglio queste porte riservate. Il file WINSOCK. H anche li elenca.

Per consentire la DLL di socket di Windows selezionare una porta utilizzabile per l'utente, passare 0 come il valore della porta. MFC consente di selezionare un valore di porta superiore a 1.024 decimale. È possibile recuperare il valore di porta selezionato da MFC chiamando il [CAsyncSocket::GetSockName](../mfc/reference/casyncsocket-class.md#getsockname) funzione membro.

##  <a name="_core_socket_address"></a> Indirizzo del socket

Ogni oggetto socket è associato un indirizzo IP (Internet Protocol) sulla rete. In genere, l'indirizzo è un nome di computer, ad esempio "ftp.microsoft.com", o un numero separato da punti, ad esempio "128.56.22.8".

Quando si cerca di creare un socket, non in genere necessario specificare il proprio indirizzo.

> [!NOTE]
>  È possibile che il computer ha più schede di rete o l'applicazione debba essere eseguita in un computer di questo tipo, ognuno dei quali rappresenta una rete diversa. In questo caso, è necessario fornire un indirizzo per specificare la scheda di rete userà il socket. Questo è determinato da un utilizzo avanzato che un problema di portabilità possibili.

Per altre informazioni, vedere:

- [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

