---
title: 'Windows Sockets: Sfondo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 446719d9d37d2930e08dc66303fd2d952fd88820
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="windows-sockets-background"></a>Windows Sockets: sfondo
Questo articolo illustra la natura e lo scopo di Windows Sockets. L'articolo inoltre:  
  
-   [Definisce il termine "socket"](#_core_definition_of_a_socket).  
  
-   [Descrive il tipo di dati di handle SOCKET](#_core_the_socket_data_type).  
  
-   [Vengono descritti gli utilizzi per i socket](#_core_uses_for_sockets).  
  
 La specifica Windows Sockets definisce un'interfaccia di programmazione di rete compatibile con file binario per Microsoft Windows. Windows Sockets si basano sull'implementazione del socket UNIX in Berkeley Software Distribution (BSD, versione 4.3) dalla University of California, Berkeley. La specifica include le routine dei socket BSD-style e le estensioni specifiche di Windows. Utilizzo di socket di Windows consente all'applicazione di comunicare su qualsiasi rete conforme all'API di Windows Sockets. In Win32, Windows Sockets forniscono la protezione dei thread.  
  
 Molti fornitori di software di rete supportano i protocolli di rete Protocol/Internet Protocol (TCP), Xerox rete sistema XNS (), il protocollo DECNet Novell Corporation Internet Digital Equipment Corporation Windows Sockets Packet Exchange/Sequenced compressi Exchange (IPX/SPX) e altri utenti. Sebbene la specifica Windows Sockets presenta definisce l'astrazione sockets per TCP/IP, qualsiasi protocollo di rete può essere conformi con i socket di Windows, fornendo la propria versione della libreria di collegamento dinamico (DLL) che implementa Windows Sockets. X Windows Server terminali emulatori e i sistemi di posta elettronica sono esempi di applicazioni commerciali scritte con i socket di Windows.  
  
> [!NOTE]
>  Lo scopo di Windows Sockets è quello di rete sottostante in modo che non debbano essere bene informato sulla rete e che consentono di eseguire l'applicazione su qualsiasi rete che supporti i socket. Di conseguenza, questo documento non sono descritti i dettagli dei protocolli di rete.  
  
 Microsoft Foundation classe libreria (MFC) supporta la programmazione con l'API di Windows Sockets fornendo due classi. Una di queste classi, `CSocket`, offre un elevato livello di astrazione per semplificare la programmazione di comunicazioni di rete.  
  
 La specifica Windows Sockets, Windows Sockets: un'interfaccia aperta per la rete di elaborazione in Microsoft Windows, ora nella versione 1.1, è stata sviluppata come standard di rete aperto da un ampio gruppo di persone e aziende della community di TCP/IP ed è è disponibile gratuitamente per l'utilizzo. Socket di programmazione attualmente supporta uno "comunicazione dominio del modello", utilizzando la Suite di protocolli Internet. La specifica è disponibile in Windows SDK.  
  
> [!TIP]
>  Poiché i socket utilizzano la Suite di protocolli Internet, sono la route consigliata per le applicazioni che supportano le comunicazioni Internet in "autostrada di informazioni".  
  
##  <a name="_core_definition_of_a_socket"></a>Definizione di Socket  
 Un socket è un endpoint di comunicazione, ovvero un oggetto tramite il quale un'applicazione Windows Sockets invia o riceve i pacchetti di dati attraverso una rete. Un socket dispone di un tipo e associato a un processo in esecuzione e che abbiano un nome. Socket, attualmente, in genere si scambiano dati solo con altri socket nello stesso "comunicazione dominio," che usa la Suite di protocolli Internet.  
  
 Entrambi i tipi di socket sono bidirezionali; sono flussi di dati che possono essere comunicati contemporaneamente in entrambe le direzioni (full duplex).  
  
 Sono disponibili due tipi di socket:  
  
-   Socket di flusso  
  
     Socket di flusso forniscono un flusso di dati senza limiti di record: un flusso di byte. I flussi sono garantiti da recapitare e corretta sequenza e senza alcuna duplicazione.  
  
-   Socket di datagramma  
  
     Datagramma sockets supporto orientato ai record di flusso di dati non è garantito il recapito e non può essere ordinati in sequenza come di.  
  
 "Sequenced" significa che i pacchetti vengono recapitati in ordine di invio. "Non duplicati" significa che un determinato pacchetto una sola volta.  
  
> [!NOTE]
>  In alcuni protocolli di rete, ad esempio XNS, flussi possono essere orientata ai servizi, come flussi di record di flussi di byte come record. Con il protocollo TCP/IP più comune, tuttavia, i flussi sono flussi di byte. Windows Sockets fornisce un livello di astrazione indipendente del protocollo sottostante.  
  
 Per informazioni su questi tipi e il tipo di socket in uso in diverse situazioni, vedere [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md) e [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md).  
  
##  <a name="_core_the_socket_data_type"></a>Il tipo di dati SOCKET  
 Ogni oggetto socket MFC incapsula un handle a un oggetto Windows Sockets. Il tipo di dati di questo handle è **SOCKET**. A **SOCKET** è analogo all'handle di `HWND` per una finestra. Classi socket MFC forniscono operazioni nell'handle di incapsulato.  
  
 Il **SOCKET** tipo di dati è descritte dettagliatamente in Windows SDK. Vedere "Tipo di dati di Socket e valori di errore" nella sezione Windows Sockets.  
  
##  <a name="_core_uses_for_sockets"></a>Viene utilizzato per i socket  
 Socket sono estremamente utili in almeno tre contesti di comunicazione:  
  
-   Modelli di client/server.  
  
-   Scenari peer-to-peer, ad esempio applicazioni di messaggistica.  
  
-   Effettua chiamate di procedura remota (RPC) da cui l'applicazione ricevente interpretare un messaggio come una chiamata di funzione.  
  
> [!TIP]
>  La soluzione ideale per l'utilizzo di socket MFC è durante la scrittura di entrambe le estremità della comunicazione: utilizzo di MFC in entrambe le estremità. Per ulteriori informazioni su questo argomento, incluso come gestire il caso, quando si sta comunicando con applicazioni non MFC, vedere [Windows Sockets: ordinamento dei Byte](../mfc/windows-sockets-byte-ordering.md).  
  
 Per ulteriori informazioni, vedere la specifica Windows Sockets: **ntohs**, **ntohl**, **htons**, **htonl**. Inoltre, vedere gli argomenti seguenti:  
  
-   [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: esempio di socket che usano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md)  
  
-   [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

