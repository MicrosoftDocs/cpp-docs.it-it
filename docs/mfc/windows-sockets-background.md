---
title: "Windows Sockets: sfondo | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comunicazioni [C++], dominio"
  - "tipi di dati [C++], socket"
  - "socket di datagrammi [C++]"
  - "posta elettronica [C++]"
  - "posta elettronica [C++], programmazione per"
  - "Internet Protocol Suite"
  - "posta [C++]"
  - "posta [C++], programmazione per"
  - "dati basati su record [C++]"
  - "flusso di dati sequenziali"
  - "SOCKET (handle)"
  - "socket [C++], socket di flusso"
  - "socket di flusso [C++]"
  - "Windows Sockets [C++], socket di flusso"
  - "server X Window"
ms.assetid: f60d4ed2-bf23-4a0e-98d2-fee77e8473dd
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets: sfondo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo spiega la natura e lo scopo di Windows Sockets.  L'articolo anche:  
  
-   [Definisce il concetto di "socket"](#_core_definition_of_a_socket).  
  
-   [Descrive il tipo di dati degli handle di SOCKET](#_core_the_socket_data_type).  
  
-   [Descrive l'utilizzo dei socket](#_core_uses_for_sockets).  
  
 La specifica di Windows Sockets definisce un'interfaccia di programmazione di rete binario\-compatibile per Microsoft Windows.  Windows Sockets è basato sull'implementazione sockets UNIX nel Berkeley Software Distribution \(BSD, versione 4,3\) dalla University of California at Berkeley.  La specifica include entrambe le routine e le estensioni di socket in stile BSD specifiche di windows.  L'utilizzo di Windows Sockets permette all'applicazione di comunicare tramite una rete conforme alla Windows Sockets API.  Su Win32, Windows Sockets consente la thread safety.  
  
 Molti fornitori di software di rete supportano Windows Sockets nei protocolli di rete includendo Transmission Control Protocol\/Internet Protocol \(TCP\/IP\), Xerox Network System \(XNS\), Digital Equipment Corporation's DECNet protocol, Novell Corporation's Internet Packet Exchange\/Sequenced Packed Exchange \(IPX\/SPX\), e altri.  Sebbene la presente specifica di Windows Sockets definisce l'astrazione di socket per il protocollo TCP\/IP, qualsiasi protocollo di rete può essere conforme a Windows Sockets fornendo la propria versione della dynamic\-link library \(DLL\) che implementa Windows Sockets.  Esempi di applicazioni commerciali scritte con Windows Sockets includono i server X Windows, gli emulatori terminali e i sistemi di posta elettronica.  
  
> [!NOTE]
>  Lo scopo di Windows Sockets viene astratto tramite la rete sottostante in modo da non dover essere specifica per tale rete e quindi l'applicazione può essere eseguita in una qualsiasi rete che supporta i socket.  Conseguentemente, in questa documentazione non vengono illustrati i dettagli dei protocolli di rete.  
  
 La Microsoft Foundation Class Library \(MFC\) supporta la programmazione con Windows Sockets API specificando due classi.  Una di queste classi, `CSocket`, fornisce un livello elevato di astrazione per semplificare la programmazione della comunicazione di rete.  
  
 Definizione di Windows Sockets, Windows Sockets: Un'interfaccia aperta per computazione di rete sotto Microsoft Windows, ora alla versione 1.1, è stata sviluppata come standard di rete aperto da un ampio gruppo di utenti e di aziende nella community TCP\/IP ed è gratuitamente disponibile per l'utilizzo.  Il modello di programmazione sockets supporta attualmente un "dominio di comunicazione", utilizzando la famiglia di prodotti dell'Internet Protocol.  La definizione è disponibile in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
> [!TIP]
>  Poiché i socket utilizzano la famiglia di prodotti del protocollo Internet, sono la via preferita per le applicazioni che supportano le comunicazioni internet nella "information highway."  
  
##  <a name="_core_definition_of_a_socket"></a> Definizione di un Socket  
 Un socket è un endpoint di comunicazione — un oggetto con cui un'applicazione Windows Sockets invia o riceve pacchetti di dati tramite la rete.  Un socket dispone di un tipo, è associato a un processo in esecuzione e può avere un nome.  Attualmente, i socket generalmente scambiano dati solo con altri socket nello stesso "dominio di comunicazione," che utilizza la famiglia di prodotti del protocollo Internet.  
  
 Entrambi i tipi di socket sono bidirezionali; sono flussi di dati che possono andare contemporaneamente in entrambe le direzioni \(full\-duplex\).  
  
 Sono disponibili due tipi di socket:  
  
-   Socket di flusso  
  
     I socket di flusso forniscono un flusso di dati senza limiti: un flusso di byte.  L'arrivo a destinazione, l'ordine e la non ridondanza dei flussi sono garantiti.  
  
-   Socket di datagrammi  
  
     I socket di datagramma supportano flussi di dati orientati che non garantiscono l'arrivo a destinazione, l'arrivo in ordine e la non ridondanza.  
  
 "Ordinato" significa che i pacchetti arrivano a destinazione nell'ordine di invio. "Non ridondanza" significa che un determinato pacchetto viene visualizzato solo una volta.  
  
> [!NOTE]
>  Sotto alcuni protocolli di rete, ad esempio XNS, i flussi possono essere orientati, come i flussi di record anziché come flussi di byte.  Nel più comune protocollo TCP\/IP, tuttavia, i flussi sono flussi di byte.  Windows Sockets fornisce un livello di astrazione indipendente dal protocollo sottostante.  
  
 Per informazioni su questi tipi e il tipo di socket da utilizzare a seconda delle situazioni, vedere [Windows Sockets: Socket di flusso](../mfc/windows-sockets-stream-sockets.md) e [Windows Sockets: Socket di datagrammi](../mfc/windows-sockets-datagram-sockets.md).  
  
##  <a name="_core_the_socket_data_type"></a> Il tipo dati SOCKET  
 Ogni oggetto socket MFC incapsula un handle a un oggetto di Windows Sockets.  Il tipo di dati di questo handle è **SOCKET**.  L'handle **SOCKET** è analogo a `HWND` per una finestra.  Le classi di socket MFC forniscono operazioni sugli handle incapsulati.  
  
 Il tipo di dati **SOCKET** è descritto in dettaglio in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  Vedere "Tipo di dati e di errore di Socket" in Windows Sockets.  
  
##  <a name="_core_uses_for_sockets"></a> Utilizzo dei socket  
 I socket sono estremamente utili in almeno tre contesti di comunicazioni:  
  
-   Modelli client\/server.  
  
-   Scenari peer\-to\-peer, come le applicazioni di messaggistica.  
  
-   Creazione di remote procedure calls \(RPC\) con l'applicazione ricevente che interpreta un messaggio come una chiamata di funzione.  
  
> [!TIP]
>  Il caso ideale per l'utilizzo di sockets MFC è quando si scrivono entrambe le estremità di comunicazione: usando MFC su entrambe le estremità.  Per ulteriori informazioni su questo argomento, incluso come gestire la situazione durante la comunicazione con le applicazioni non MFC, vedere [Windows Sockets: Ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md).  
  
 Per ulteriori informazioni, vedere la specifica di Windows Sockets: **ntohs**, **ntohl**, **htons**, **htonl**.  Vedere anche i seguenti argomenti:  
  
-   [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: esempio di socket che utilizzano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md)  
  
-   [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)