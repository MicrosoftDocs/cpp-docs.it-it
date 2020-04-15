---
title: 'Windows Sockets: sfondo'
ms.date: 11/04/2016
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
ms.openlocfilehash: 1c4a6dc6740660d1097785578cdac355983cad18
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360121"
---
# <a name="windows-sockets-background"></a>Windows Sockets: sfondo

In questo articolo vengono illustrati la natura e lo scopo di Windows Sockets. L'articolo inoltre:

- [Definisce il termine "socket"](#_core_definition_of_a_socket).

- [Viene descritto il tipo di dati dell'handle SOCKET](#_core_the_socket_data_type).

- [Descrive gli utilizzi dei socket.](#_core_uses_for_sockets)

La specifica Windows Sockets definisce un'interfaccia di programmazione di rete compatibile con binario per Microsoft Windows. Windows Sockets si basa sull'implementazione dei socket UNIX nella Berkeley Software Distribution (BSD, release 4.3) dell'Università della California a Berkeley. La specifica include sia le routine socket di tipo BSD che le estensioni specifiche di Windows. L'utilizzo di Windows Sockets consente all'applicazione di comunicare attraverso qualsiasi rete conforme all'API di Windows Sockets. In Win32, Windows Sockets garantisce la thread safety.

Molti fornitori di software di rete supportano Windows Sockets con protocolli di rete, tra cui TCP/IP (Transmission Control Protocol/Internet Protocol), Xerox Network System (XNS), protocollo DECNet di Digital Equipment Corporation, Internet Packet Exchange/Sequenced Packed Exchange (IPX/SPX) di Novell Corporation e altri. Sebbene l'attuale specifica Windows Sockets definisca l'astrazione dei socket per TCP/IP, qualsiasi protocollo di rete può essere conforme a Windows Sockets fornendo la propria versione della libreria a collegamento dinamico (DLL) che implementa Windows Sockets. Esempi di applicazioni commerciali scritte con Windows Sockets includono server X Windows, emulatori di terminale e sistemi di posta elettronica.

> [!NOTE]
> Lo scopo di Windows Sockets è quello di astrarre la rete sottostante in modo che non è necessario essere a conoscenza di tale rete e in modo che l'applicazione può essere eseguita su qualsiasi rete che supporta i socket. Di conseguenza, questa documentazione non discute i dettagli dei protocolli di rete.

La libreria MFC (Microsoft Foundation Class) supporta la programmazione con l'API Windows Sockets fornendo due classi. Una di queste `CSocket`classi, , fornisce un alto livello di astrazione per semplificare la programmazione delle comunicazioni di rete.

La specifica Windows Sockets, Windows Sockets: An Open Interface for Network Computing In Microsoft Windows, ora alla versione 1.1, è stata sviluppata come standard di rete aperta da un grande gruppo di individui e aziende nella comunità TCP/IP ed è liberamente disponibile per l'uso. Il modello di programmazione sockets supporta attualmente un "dominio di comunicazione", utilizzando Internet Protocol Suite. La specifica è disponibile in Windows SDK.

> [!TIP]
> Poiché i socket utilizzano Internet Protocol Suite, sono la route preferita per le applicazioni che supportano le comunicazioni Internet sulla "autostrada delle informazioni".

## <a name="definition-of-a-socket"></a><a name="_core_definition_of_a_socket"></a>Definizione di un socket

Un socket è un endpoint di comunicazione, ovvero un oggetto tramite il quale un'applicazione Windows Sockets invia o riceve pacchetti di dati attraverso una rete. Un socket ha un tipo ed è associato a un processo in esecuzione e può avere un nome. Attualmente, i socket in genere scambiano dati solo con altri socket nello stesso "dominio di comunicazione", che utilizza Internet Protocol Suite.

Entrambi i tipi di socket sono bidirezionali; sono flussi di dati che possono essere comunicati in entrambe le direzioni contemporaneamente (full-duplex).

Sono disponibili due tipi di socket:

- socket di flusso

   I socket di flusso consentono un flusso di dati senza limiti di record: un flusso di byte. I flussi sono garantiti per essere consegnati e per essere correttamente sequenziati e non duplicati.

- socket di datagrammi

   I socket di datagramma supportano un flusso di dati orientato ai record che non è garantito che venga recapitato e che non possono essere sequenziati come inviati o non duplicati.

"In sequenza" significa che i pacchetti vengono consegnati nell'ordine di invio. "Unduplicated" significa che si ottiene un determinato pacchetto una sola volta.

> [!NOTE]
> In alcuni protocolli di rete, ad esempio XNS, i flussi possono essere orientati ai record, come flussi di record anziché flussi di byte. Con il protocollo TCP/IP più comune, tuttavia, i flussi sono flussi di byte. Windows Sockets fornisce un livello di astrazione indipendente dal protocollo sottostante.

Per informazioni su questi tipi e sul tipo di socket da utilizzare in situazioni, vedere [Windows Sockets: Stream Sockets](../mfc/windows-sockets-stream-sockets.md) e [Windows Sockets: Datagram Sockets](../mfc/windows-sockets-datagram-sockets.md).

## <a name="the-socket-data-type"></a><a name="_core_the_socket_data_type"></a>Il tipo di dati SOCKET

Ogni oggetto socket MFC incapsula un handle a un oggetto Windows Sockets. Il tipo di dati di questo handle è **SOCKET**. Un handle **SOCKET** è analogo a quello `HWND` di una finestra. Le classi socket MFC forniscono operazioni sull'handle incapsulato.

Il tipo di dati **SOCKET** è descritto in dettaglio in Windows SDK. Vedere "Tipo di dati socket e valori di errore" in Windows Sockets.

## <a name="uses-for-sockets"></a><a name="_core_uses_for_sockets"></a>Usi per Sockets

I socket sono molto utili in almeno tre contesti di comunicazione:

- Modelli client/server.

- Scenari peer-to-peer, ad esempio applicazioni di messaggistica.

- Effettuare chiamate di procedura remota (RPC) facendo in modo che l'applicazione ricevente interpreti un messaggio come una chiamata di funzione.

> [!TIP]
> Il caso ideale per l'utilizzo di socket MFC è quando si scrivono entrambe le estremità della comunicazione: utilizzando MFC a entrambe le estremità. Per ulteriori informazioni su questo argomento, incluso come gestire il caso durante la comunicazione con applicazioni non MFC, vedere [Windows Sockets: Byte Ordering](../mfc/windows-sockets-byte-ordering.md).

Per ulteriori informazioni, vedere Windows Sockets Specification: **ntohs**, **ntohl**, **htons**, **htonl**. Vedere anche gli argomenti seguenti:Also, see the following topics:

- [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: esempio di socket che utilizzano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md)

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
