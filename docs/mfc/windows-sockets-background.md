---
title: 'Windows Sockets: Sfondo | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- record-oriented data [MFC]
- e-mail [MFC]
- Internet Protocol Suite
- mail [MFC]
- communications [MFC], domain
- Windows Sockets [MFC], stream sockets
- mail [MFC], programming for
- sockets [MFC], stream sockets
- datagram sockets [MFC]
- SOCKET handle
- data types [MFC], socket
- e-mail [MFC], programming for
- X Window servers
- sequenced data flow
- stream sockets [MFC]
ms.assetid: f60d4ed2-bf23-4a0e-98d2-fee77e8473dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a6146106a7ae378821fc7133d2d65597d1225cc1
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50079662"
---
# <a name="windows-sockets-background"></a>Windows Sockets: sfondo

Questo articolo illustra la natura e lo scopo di socket di Windows. L'articolo inoltre:

- [Definisce il termine "socket"](#_core_definition_of_a_socket).

- [Descrive il tipo di dati handle SOCKET](#_core_the_socket_data_type).

- [Vengono descritti gli utilizzi per i socket](#_core_uses_for_sockets).

La specifica di Windows Sockets definisce un'interfaccia di programmazione di rete compatibile con file binario per Microsoft Windows. Windows Sockets si basano sull'implementazione del socket UNIX in Berkeley Software Distribution (BSD, versione 4.3) dalla University of California, Berkeley. La specifica include le routine di socket BSD-style e le estensioni specifiche di Windows. Utilizzo di socket di Windows consente all'applicazione di comunicare attraverso una rete che è conforme all'API Windows Sockets. In Win32, Windows Sockets fornire per la sicurezza dei thread.

Molti fornitori di software di rete supportano Windows Sockets sotto i protocolli di rete Protocol/Internet Protocol (TCP), Xerox rete sistema XNS (), protocollo DECNet Digital Equipment Corporation, Novell Corporation Internet Packet Exchange/Sequenced compressi Exchange (IPX/SPX) e altri. Sebbene la specifica di Windows Sockets presenta definisce l'astrazione sockets per TCP/IP, un qualsiasi protocollo di rete può essere conformi con i socket di Windows, fornendo la propria versione della libreria di collegamento dinamico (DLL) che implementa Windows Sockets. Sono esempi di applicazioni commerciali scritte con i socket di Windows Server X Windows, gli emulatori terminali e sistemi di posta elettronica.

> [!NOTE]
>  Lo scopo di Windows Sockets è sottraggono rete sottostante in modo da non dover essere bene informato sulla rete e l'applicazione può essere eseguito su qualsiasi rete che supporti i socket. Di conseguenza, questo documento non sono descritti i dettagli dei protocolli di rete.

La libreria di classi Foundation Microsoft (MFC) supporta la programmazione con l'API di socket di Windows, fornendo due classi. Una di queste classi, `CSocket`, fornisce un elevato livello di astrazione per semplificare la programmazione di comunicazioni di rete.

La specifica di socket di Windows, Windows Sockets: un'interfaccia aperta per Network Computing in Microsoft Windows, ora disponibile la versione 1.1, è stata sviluppata come standard di rete aperto da un gruppo esteso di persone e aziende nella community di TCP/IP ed è disponibile gratuitamente per l'uso. I socket attualmente supporta uno "comunicazione dominio del modello" di programmazione, utilizzando la Suite di protocolli Internet. La specifica è disponibile nel SDK di Windows.

> [!TIP]
>  Poiché i socket usano Suite di protocolli Internet, sono le route preferita per le applicazioni che supportano le comunicazioni Internet in "autostrada informazioni".

##  <a name="_core_definition_of_a_socket"></a> Definizione di un Socket

Un socket è un endpoint di comunicazione, ovvero un oggetto attraverso il quale un'applicazione Windows Sockets invia o riceve pacchetti di dati attraverso una rete. Un socket dispone di un tipo ed è associato a un processo in esecuzione e che abbiano un nome. Attualmente, socket in genere scambiano dati solo con i socket altri nello stesso "comunicazione dominio," che usa la Suite di protocolli Internet.

Entrambi i tipi di socket sono bidirezionali; sono flussi di dati che possono essere comunicati simultaneamente in entrambe le direzioni (full duplex).

Sono disponibili due tipi di socket:

- Socket di Stream

   Socket di Stream forniscono un flusso di dati senza limiti di record: un flusso di byte. Flussi vengono garantiti a essere recapitati e corretta sequenza e senza alcuna duplicazione.

- Socket di datagramma

   Datagramma sockets supporto orientato ai record di flusso di dati non è garantito a essere recapitati e non possa essere ordinati in sequenza come di.

"In sequenza" significa che i pacchetti vengano recapitati nell'ordine inviato. "Non duplicati" significa che un determinato pacchetto è stato ricevuto una sola volta.

> [!NOTE]
>  In alcuni protocolli di rete, ad esempio XNS, flussi possono essere orientata ai servizi, come i flussi di record anziché flussi di byte come record. Con il protocollo TCP/IP più comune, tuttavia, i flussi sono flussi di byte. Windows Sockets fornisce un livello di astrazione indipendentemente dal protocollo sottostante.

Per informazioni su questi tipi e il tipo di socket da usare in diverse situazioni, vedere [Windows Sockets: socket di Stream](../mfc/windows-sockets-stream-sockets.md) e [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md).

##  <a name="_core_the_socket_data_type"></a> Il tipo di dati SOCKET

Ogni oggetto socket MFC incapsula un handle a un oggetto Windows Sockets. Il tipo di dati di questo handle **SOCKET**. Oggetto **SOCKET** handle è simile al `HWND` per una finestra. Classi socket MFC forniscono operazioni nell'handle di incapsulato.

Il **SOCKET** tipo di dati è descritto dettagliatamente nel SDK di Windows. Vedere "Tipo di dati di Socket e i valori di errore" nella sezione Windows Sockets.

##  <a name="_core_uses_for_sockets"></a> Viene utilizzato per i socket

I socket sono estremamente utili in almeno tre contesti di comunicazione:

- Modelli client/server.

- Scenari peer-to-peer, ad esempio applicazioni di messaggistica.

- Effettua le chiamate di procedura remota (RPC) da cui l'applicazione ricevente di interpretare un messaggio come una chiamata di funzione.

> [!TIP]
>  La situazione ideale per l'uso di socket MFC è durante la scrittura di entrambe le estremità della comunicazione: utilizzo di MFC in entrambe le estremità. Per altre informazioni su questo argomento, ad esempio come gestire il caso quando si sta comunicando con applicazioni non MFC, vedere [Windows Sockets: ordinamento dei Byte](../mfc/windows-sockets-byte-ordering.md).

Per altre informazioni, vedere la specifica di Windows Sockets: **ntohs**, **ntohl**, **htons**, **htonl**. Vedere anche gli argomenti seguenti:

- [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: esempio di socket che usano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md)

- [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

