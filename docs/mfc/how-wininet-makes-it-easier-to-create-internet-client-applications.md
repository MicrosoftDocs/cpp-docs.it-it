---
title: Come WinInet agevola la creazione di applicazioni Client Internet | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows Sockets [MFC], vs. WinInet
- WinInet classes [MFC], vs. WinSock
- WinInet classes [MFC], Internet client applications
ms.assetid: dc0f9f47-3184-4e7a-8074-2c63e0359885
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 847ad295956cafa12e3793dc68d663f005da095a
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50072837"
---
# <a name="how-wininet-makes-it-easier-to-create-internet-client-applications"></a>Come WinInet agevola la creazione di applicazioni client Internet

Le estensioni Internet Win32 o WinInet, fornire l'accesso ai protocolli Internet più comuni, tra cui HTTP, FTP e gopher. Usa WinInet, è possibile scrivere applicazioni client Internet a un livello superiore di programmazione, senza doversi occupare di WinSock, TCP/IP o i dettagli di protocolli Internet specifici. WinInet fornisce un set coerente di funzioni per tutte e tre i protocolli con un'interfaccia familiare di API Win32. Questa coerenza consente di ridurre le modifiche al codice che è necessario verificare se il protocollo sottostante viene modificato (ad esempio da FTP a HTTP).

Visual C++ fornisce due modi per poter usare WinInet. È possibile chiamare direttamente le funzioni Internet Win32 (vedere la documentazione di OLE nel SDK di Windows per altre informazioni) oppure è possibile usare WinInet tramite il [classi WinInet MFC](../mfc/mfc-classes-for-creating-internet-client-applications.md).

**È possibile usare WinInet per:**

- Scaricare le pagine HTML.

   HTTP è un protocollo usato per trasferire le pagine HTML da un server in un browser del client.

- Inviare le richieste FTP per caricare o scaricare i file o ottenere nelle visualizzazioni directory.

   Una tipica richiesta è un accesso anonimo per scaricare un file.

- Usare menu di sistema del gopher per l'accesso alle risorse su Internet.

   Voci di menu possono essere tipi diversi, inclusi altri menu di scelta, un database indicizzato, che è possibile eseguire ricerche, un newsgroup o un file.

Per tutti e tre i protocolli, stabilire una connessione, effettuare richieste al server e chiudere la connessione.

**Le classi WinInet MFC rendono più semplice:**

- Leggere le informazioni dal server HTTP, FTP e gopher la stessa facilità con la lettura dei file da un disco rigido.

- Usare i protocolli HTTP, FTP e gopher senza la programmazione diretta di WinSock o TCP/IP.

   Gli sviluppatori che utilizzano le funzioni Win32 Internet non sono necessario avere familiarità con TCP/IP o i socket di Windows. È possibile comunque programmare a livello di socket, usando i protocolli TCP/IP e WinSock direttamente, ma è ancora più semplice usare le classi WinInet MFC per l'accesso HTTP, FTP e i protocolli gopher attraverso la rete Internet. Per molte operazioni comuni, gli sviluppatori non devono conoscere i dettagli del protocollo specifico in uso.

Molte operazioni che possono essere eseguite dal computer in uso come un client in altri computer su Internet possono richiedere molto tempo. La velocità di queste operazioni è in genere limitata dalla velocità della connessione di rete, ma potrebbero essere influenzate anche da altro traffico di rete e la complessità dell'operazione. La connessione a un server FTP remoto, ad esempio, è necessario che nel computer cercare prima di tutto il nome del server per trovarne l'indirizzo. L'applicazione cercherà di connettersi al server a quell'indirizzo. Dopo la connessione è aperta, il computer e il server remoto verrà avviata una conversazione con il protocollo di trasferimento di file prima di poter effettivamente utilizzare la connessione per recuperare i file.

## <a name="see-also"></a>Vedere anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Come MFC agevola la creazione di applicazioni Client Internet](../mfc/how-mfc-makes-it-easier-to-create-internet-client-applications.md)

