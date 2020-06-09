---
title: Come WinInet agevola la creazione di applicazioni client Internet
ms.date: 11/04/2016
helpviewer_keywords:
- Windows Sockets [MFC], vs. WinInet
- WinInet classes [MFC], vs. WinSock
- WinInet classes [MFC], Internet client applications
ms.assetid: dc0f9f47-3184-4e7a-8074-2c63e0359885
ms.openlocfilehash: 54f63da7451dfef39a33e6b437be938cb1652326
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624578"
---
# <a name="how-wininet-makes-it-easier-to-create-internet-client-applications"></a>Come WinInet agevola la creazione di applicazioni client Internet

Le estensioni Internet Win32 (WinInet) forniscono l'accesso ai protocolli Internet comuni, tra cui Gopher, FTP e HTTP. Con WinInet è possibile scrivere applicazioni client Internet a un livello superiore di programmazione, senza dover gestire WinSock, TCP/IP o i dettagli di protocolli Internet specifici. WinInet fornisce un set coerente di funzioni per tutti e tre i protocolli, con un'interfaccia API Win32 familiare. Questa coerenza consente di ridurre al minimo le modifiche del codice che è necessario eseguire se il protocollo sottostante viene modificato (ad esempio, da FTP a HTTP).

Visual C++ offre due modi per usare WinInet. È possibile chiamare direttamente le funzioni Internet Win32 (vedere la documentazione OLE nel Windows SDK per ulteriori informazioni) oppure è possibile utilizzare WinInet tramite le [classi WinInet di MFC](mfc-classes-for-creating-internet-client-applications.md).

**È possibile utilizzare WinInet per:**

- Scaricare le pagine HTML.

   HTTP è un protocollo usato per trasferire pagine HTML da un server a un browser client.

- Inviare richieste FTP per caricare o scaricare file o ottenere elenchi di directory.

   Una richiesta tipica è un accesso anonimo per scaricare un file.

- Utilizzare il sistema di menu di Gopher per accedere alle risorse su Internet.

   Le voci di menu possono essere di diversi tipi, tra cui altri menu, un database indicizzato che è possibile cercare, un newsgroup o un file.

Per tutti e tre i protocolli si stabilisce una connessione, si effettuano richieste al server e si chiude la connessione.

**Le classi WinInet di MFC facilitano:**

- Leggere le informazioni dai server HTTP, FTP e gopher con la stessa facilità di lettura dei file da un disco rigido.

- Usare i protocolli HTTP, FTP e gopher senza programmare direttamente con WinSock o TCP/IP.

   Gli sviluppatori che utilizzano le funzioni Internet Win32 non devono avere familiarità con TCP/IP o Windows Sockets. È comunque possibile programmare a livello di socket, usando direttamente i protocolli WinSock e TCP/IP, ma è ancora più semplice usare le classi WinInet di MFC per accedere ai protocolli HTTP, FTP e Gopher su Internet. Per molte operazioni comuni, non è necessario che gli sviluppatori conoscano i dettagli del protocollo specifico usato.

Molte operazioni che possono essere eseguite dal computer come client ad altri computer su Internet possono richiedere molto tempo. La velocità di queste operazioni è in genere limitata dalla velocità della connessione di rete, ma può anche essere interessata da altro traffico di rete e dalla complessità dell'operazione. Per la connessione a un server FTP remoto, ad esempio, è necessario che il computer cerchi prima di tutto il nome del server per trovarne l'indirizzo. L'applicazione tenterà quindi di connettersi al server in corrispondenza di tale indirizzo. Una volta aperta la connessione, il computer in uso e il server remoto avvierà una conversazione con il protocollo di trasferimento file prima di poter effettivamente utilizzare la connessione per recuperare i file.

## <a name="see-also"></a>Vedere anche

[Estensioni Internet Win32 (WinInet)](win32-internet-extensions-wininet.md)<br/>
[Come MFC agevola la creazione di applicazioni Client Internet](how-mfc-makes-it-easier-to-create-internet-client-applications.md)
