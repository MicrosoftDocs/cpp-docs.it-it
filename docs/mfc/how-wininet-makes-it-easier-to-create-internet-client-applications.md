---
title: Come WinInet agevola la creazione di applicazioni Client Internet | Documenti Microsoft
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
ms.openlocfilehash: 09a7427374de085de9bd2872c8b1368a6b961b35
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33344256"
---
# <a name="how-wininet-makes-it-easier-to-create-internet-client-applications"></a>Come WinInet agevola la creazione di applicazioni client Internet
Le estensioni Internet Win32 o WinInet, forniscono accesso ai protocolli Internet comuni, inclusi HTTP, FTP e gopher. Tramite WinInet, è possibile scrivere applicazioni client Internet a un livello superiore di programmazione, senza dover gestire WinSock, TCP/IP o i dettagli di protocolli Internet specifici. WinInet fornisce un set di funzioni coerente per tutti e tre i protocolli con un'interfaccia familiare di API Win32. La coerenza di riduce al minimo le modifiche al codice, che è necessario verificare se il protocollo sottostante viene modificata (ad esempio da FTP a HTTP).  
  
 Visual C++ fornisce due modalità per l'utilizzo di WinInet. È possibile chiamare direttamente le funzioni Internet Win32 (vedere la documentazione di OLE in Windows SDK per ulteriori informazioni) oppure è possibile utilizzare WinInet attraverso il [classi WinInet MFC](../mfc/mfc-classes-for-creating-internet-client-applications.md).  
  
 **È possibile utilizzare WinInet per:**  
  
-   Scaricare pagine HTML.  
  
     HTTP è un protocollo utilizzato per trasferire le pagine HTML da un server a un browser del client.  
  
-   Inviare le richieste FTP per caricare o scaricare file o ottenere elenchi di directory.  
  
     Una tipica richiesta è un accesso anonimo per scaricare un file.  
  
-   Utilizzare il sistema di menu del gopher per accedere alle risorse su Internet.  
  
     Voci di menu possono essere tipi diversi, inclusi altri menu, un database indicizzato, che è possibile cercare, un newsgroup o un file.  
  
 Per tutti e tre i protocolli, stabilire una connessione, effettuare richieste al server e la chiusura della connessione.  
  
 **Le classi WinInet MFC rendono più semplice:**  
  
-   Leggere le informazioni dai server HTTP, FTP e gopher la stessa facilità con la lettura di file da un disco rigido.  
  
-   Utilizzare i protocolli HTTP, FTP e gopher senza la programmazione diretta di WinSock o TCP/IP.  
  
     Gli sviluppatori che utilizzano le funzioni Win32 Internet non è necessario avere familiarità con TCP/IP o di Windows Sockets. È possibile comunque programmare a livello di socket, utilizzando i protocolli TCP/IP e di WinSock direttamente, ma è ancora più semplice utilizzare le classi WinInet MFC accesso HTTP, FTP e i protocolli gopher in Internet. Per molte operazioni comuni, gli sviluppatori non è necessario conoscere i dettagli del protocollo specifico in uso.  
  
 Molte delle operazioni che possono essere eseguiti dal computer come un client di altri computer connessi a Internet possono richiedere molto tempo. La velocità di queste operazioni è in genere limitata dalla velocità della connessione di rete, ma può essere influenzate anche dal traffico di rete e della complessità dell'operazione. Connessione a un server FTP remoto, ad esempio, richiede che il computer cercare innanzitutto il nome del server per trovarne l'indirizzo. L'applicazione tenterà quindi di connettersi al server in corrispondenza dell'indirizzo. Una volta aperta la connessione, il computer e il server remoto verrà avviata una conversazione con il protocollo di trasferimento file prima di poter effettivamente utilizzare la connessione per recuperare i file.  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Come MFC agevola la creazione di applicazioni Client Internet](../mfc/how-mfc-makes-it-easier-to-create-internet-client-applications.md)

