---
title: "Come WinInet agevola la creazione di applicazioni client Internet | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Windows Sockets [C++], e WinInet"
  - "WinInet (classi), Internet (applicazioni client)"
  - "WinInet (classi), e WinSock"
ms.assetid: dc0f9f47-3184-4e7a-8074-2c63e0359885
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Come WinInet agevola la creazione di applicazioni client Internet
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le estensioni internet, Win32 o WinInet, forniscono accesso ai protocolli IP comuni, quali gopher, FTP e HTTP.  Utilizzo di WinInet, è possibile scrivere applicazioni client internet a un livello superiore di programmazione, senza dover gestire Winsock, il protocollo TCP\/IP, o dettagli dei protocolli IP specifici.  WinInet fornisce un insieme di funzioni coerente per tutti e tre i protocolli, con un'interfaccia di familiarità con API Win32.  Questa coerenza riduce le modifiche al codice da eseguire se le modifiche sottostanti di protocollo \(ad esempio, da un indirizzo FTP a HTTP\).  
  
 In Visual C\+\+ sono disponibili due modi per utilizzare WinInet.  È possibile chiamare le funzioni internet Win32 direttamente \(consultare la documentazione in OLE [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)] per ulteriori informazioni\) oppure utilizzare WinInet con [Classi MFC WinInet](../mfc/mfc-classes-for-creating-internet-client-applications.md).  
  
 **È possibile utilizzare WinInet:**  
  
-   Pagina HTML di download.  
  
     HTTP è un protocollo utilizzato per trasferire le pagine HTML da un server a un browser client.  
  
-   Inviare richieste FTP di caricare o scaricare i file o ottenere le visualizzazioni directory.  
  
     Una richiesta tipica è un accesso anonimo per scaricare un file.  
  
-   Utilizzare il menu di sistema del gopher per accedere alle risorse su internet.  
  
     Le voci di menu possono essere diversi tipi, inclusi altri menu, un database che indicizzato è possibile trovare, un newsgroup, o un file.  
  
 Per tutti e tre i protocolli, stabilisce una connessione, apportare le richieste al server e si chiude la connessione.  
  
 **Le classi MFC WinInet la consentono di:**  
  
-   Leggere le informazioni da HTTP, da un indirizzo FTP e dai server gopher normali i file di lettura da un disco rigido.  
  
-   Utilizzare HTTP, FTP e protocolli di gopher senza eseguire la programmazione diretta a Winsock o a TCP\/IP.  
  
     Gli sviluppatori che utilizzano funzioni internet Win32 non devono avere familiarità con il protocollo TCP\/IP o Windows Sockets.  È comunque possibile eseguire la programmazione diretta a livello di socket, utilizzando Winsock e protocolli TCP\/IP, ma è ancora più semplice utilizzare le classi MFC WinInet per l'accesso HTTP, FTP e protocolli di gopher tramite internet.  Per molte operazioni comuni, gli sviluppatori non devono necessariamente conoscere i dettagli del protocollo specifico che utilizzano.  
  
 Molte operazioni che possono essere eseguite dal computer come client in altri computer su internet possono richiedere molto tempo.  La velocità di queste operazioni in genere è limitata alla velocità della connessione di rete, ma possono anche essere influenzate dall'altro traffico di rete e dalla complessità dell'operazione.  Connessione a un server FTP remoto, ad esempio, è necessario che sul computer innanzitutto individuare il nome del server per trovare il relativo indirizzo.  L'applicazione si tenta di connettersi al server all'indirizzo.  Una volta eseguita la connessione è aperta, il computer e il server remoto avviano una conversazione tramite il protocollo FTP prima di poter effettivamente utilizzare la connessione per recuperare i file.  
  
## Vedere anche  
 [Estensioni Internet Win32 \(WinInet\)](../mfc/win32-internet-extensions-wininet.md)   
 [Come MFC agevola la creazione di applicazioni Client Internet](../mfc/how-mfc-makes-it-easier-to-create-internet-client-applications.md)