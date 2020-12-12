---
description: 'Altre informazioni su: Windows Sockets: background'
title: 'Windows Sockets: Sfondo'
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
ms.openlocfilehash: 9ac373f5f81dfe3914664d14122a7a6bd46cda40
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214468"
---
# <a name="windows-sockets-background"></a>Windows Sockets: Sfondo

Questo articolo illustra la natura e lo scopo di Windows Sockets. Inoltre, l'articolo:

- [Definisce il termine "socket"](#_core_definition_of_a_socket).

- [Descrive il tipo di dati dell'handle del socket](#_core_the_socket_data_type).

- [Vengono descritti gli utilizzi per i socket](#_core_uses_for_sockets).

La specifica di Windows Sockets definisce un'interfaccia di programmazione di rete compatibile con binaria per Microsoft Windows. I socket di Windows sono basati sull'implementazione di UNIX Sockets in Berkeley Software Distribution (BSD, versione 4,3) della University of California a Berkeley. La specifica include sia le routine socket di tipo BSD sia le estensioni specifiche di Windows. L'uso di Windows Socket consente all'applicazione di comunicare in qualsiasi rete conforme all'API Windows Sockets. In Win32, Windows Sockets fornisce thread safety.

Molti fornitori di software di rete supportano i socket di Windows in protocolli di rete, tra cui Transmission Control Protocol/Internet Protocol (TCP/IP), Xerox Network System (XNS), Digital Equipment Corporation ' s DECnet Protocol, Novell Corporation ' s Internet Packet Exchange/Sequenced compresso Exchange (IPX/SPX) e altri. Sebbene la specifica di Windows Sockets consenta di definire l'astrazione dei socket per TCP/IP, qualsiasi protocollo di rete può essere conforme ai socket di Windows fornendo la propria versione della libreria di collegamento dinamico (DLL) che implementa Windows Sockets. Esempi di applicazioni commerciali scritte con Windows Sockets includono X Server Windows, emulatori Terminal e sistemi di posta elettronica.

> [!NOTE]
> Lo scopo di Windows Sockets consiste nell'astrarre la rete sottostante in modo che non sia necessario essere informati su tale rete e che l'applicazione possa essere eseguita su qualsiasi rete che supporti i socket. Di conseguenza, in questa documentazione non vengono descritti i dettagli dei protocolli di rete.

Il libreria Microsoft Foundation Class (MFC) supporta la programmazione con l'API di Windows Sockets fornendo due classi. Una di queste classi, `CSocket` , fornisce un livello elevato di astrazione per semplificare la programmazione delle comunicazioni di rete.

La specifica di Windows Sockets, Windows Sockets: un'interfaccia aperta per il calcolo della rete in Microsoft Windows, ora alla versione 1,1, è stata sviluppata come standard di rete aperta da un ampio gruppo di utenti e aziende della community TCP/IP ed è disponibile gratuitamente per l'uso. Il modello di programmazione Sockets supporta attualmente un "dominio di comunicazione", usando la suite di protocolli Internet. La specifica è disponibile nell'Windows SDK.

> [!TIP]
> Poiché i socket utilizzano la suite di protocolli Internet, sono la route preferita per le applicazioni che supportano le comunicazioni Internet sull'"autostrada delle informazioni".

## <a name="definition-of-a-socket"></a><a name="_core_definition_of_a_socket"></a> Definizione di un socket

Un socket è un endpoint di comunicazione, ovvero un oggetto tramite il quale un'applicazione Windows Sockets Invia o riceve pacchetti di dati in rete. Un socket ha un tipo ed è associato a un processo in esecuzione e potrebbe avere un nome. Attualmente, i socket generalmente scambiano dati solo con altri socket nello stesso "dominio di comunicazione", che usa la suite di protocolli Internet.

Entrambi i tipi di socket sono bidirezionali; si tratta di flussi di dati che possono essere comunicati in entrambe le direzioni simultaneamente (full-duplex).

Sono disponibili due tipi di socket:

- socket di flusso

   I socket di flusso forniscono un flusso di dati senza limiti di record, ovvero un flusso di byte. È garantito che i flussi vengano recapitati e siano sequenziati correttamente e non duplicati.

- socket di datagrammi

   I socket di datagramma supportano un flusso di dati orientato ai record che non è garantito per essere recapitato e che non può essere sequenziato come inviato o non duplicato.

"Sequenziata" significa che i pacchetti vengono recapitati nell'ordine di invio. "Non duplicato" significa che si ottiene un particolare pacchetto una sola volta.

> [!NOTE]
> In alcuni protocolli di rete, ad esempio XNS, i flussi possono essere orientati ai record, come flussi di record anziché flussi di byte. Con il protocollo TCP/IP più comune, tuttavia, i flussi sono flussi di byte. Windows Sockets fornisce un livello di astrazione indipendente dal protocollo sottostante.

Per informazioni su questi tipi e sul tipo di socket da usare in quali situazioni, vedere [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md) e [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md).

## <a name="the-socket-data-type"></a><a name="_core_the_socket_data_type"></a> Tipo di dati SOCKET

Ogni oggetto socket MFC incapsula un handle per un oggetto Windows Sockets. Il tipo di dati di questo handle è **socket**. Un handle di **socket** è analogo a `HWND` per una finestra. Le classi socket MFC forniscono operazioni sull'handle incapsulato.

Il tipo di dati **socket** viene descritto in dettaglio nella Windows SDK. Vedere "tipo di dati socket e valori di errore" in Windows Sockets.

## <a name="uses-for-sockets"></a><a name="_core_uses_for_sockets"></a> USA per i socket

I socket sono molto utili in almeno tre contesti di comunicazione:

- Modelli client/server.

- Scenari peer-to-peer, ad esempio le applicazioni di messaggistica.

- Esecuzione di chiamate di procedure remote (RPC) con l'applicazione ricevente interpretare un messaggio come chiamata di funzione.

> [!TIP]
> Il caso ideale per l'utilizzo dei socket MFC è quando si scrivono entrambe le estremità della comunicazione: utilizzando MFC a entrambe le estremità. Per ulteriori informazioni su questo argomento, incluso il modo in cui gestire il caso durante la comunicazione con applicazioni non MFC, vedere [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md).

Per ulteriori informazioni, vedere la specifica di Windows Sockets: **ntohs**, **ntohl**, **htons**, **htonl**. Vedere anche gli argomenti seguenti:

- [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: esempio di socket con archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md)

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
