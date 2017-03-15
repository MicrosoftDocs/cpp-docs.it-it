---
title: "Windows Sockets: utilizzo della classe CAsyncSocket | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CAsyncSocket"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAsyncSocket (classe), modello di programmazione"
  - "SOCKET (handle)"
  - "socket [C++], operazione asincrona"
  - "socket [C++], conversione tra stringhe Unicode e MBCS"
  - "Windows Sockets [C++], asincrono"
  - "Windows Sockets [C++], conversione di stringhe Unicode e MBCS"
ms.assetid: 825dae17-7c1b-4b86-8d6c-da7f1afb5d8d
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Windows Sockets: utilizzo della classe CAsyncSocket
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo illustra come utilizzare la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md).  Tenere presente che questa classe è incapsulata Windows Sockets API su un livello basso.  `CAsyncSocket` è destinata a essere utilizzata dai programmatori che conoscono in dettaglio le comunicazioni di rete ma utilizza la praticità dei callback per la notifica degli eventi della rete.  In base a questa ipotesi, questo articolo solo l'istruzione fondamentale.  È consigliabile prendere in considerazione l'utilizzo di `CAsyncSocket` se si desidera che la semplicità di socket delle finestre di gestire protocolli di rete in un'applicazione MFC ma non si desidera venga compromessa la flessibilità.  È inoltre ritenere che sia possibile migliorare l'efficienza pianificando le comunicazioni più direttamente in modo autonomo che è possibile utilizzare il modello alternativo più generale di classe `CSocket`.  
  
 `CAsyncSocket` è documentato *in*riferimenti alla libreria MFC.  Visual C\+\+ fornisce anche la specifica di Windows Sockets, disponibile in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  I dettagli vengono posticipati automaticamente.  Visual C\+\+ non viene illustrata un'applicazione di esempio per `CAsyncSocket`.  
  
 Se non si è altamente presente sulle comunicazioni di rete e non si desidera una soluzione semplice, classe [CSocket](../mfc/reference/csocket-class.md) utilizzo di un oggetto di `CArchive`.  Vedere [Windows Sockets: Utilizzo di socket con gli archivi](../mfc/windows-sockets-using-sockets-with-archives.md) per ulteriori informazioni.  
  
 Questo articolo riguarda:  
  
-   Creazione e utilizzo di un oggetto di `CAsyncSocket`.  
  
-   [Le responsabilità con CAsyncSocket](#_core_your_responsibilities_with_casyncsocket).  
  
##  <a name="_core_creating_and_using_a_casyncsocket_object"></a> Creazione e utilizzo di un oggetto di CAsyncSocket  
  
#### Per utilizzare CAsyncSocket  
  
1.  Costruisce un oggetto di [CAsyncSocket](../mfc/reference/casyncsocket-class.md) e utilizzare l'oggetto per creare un handle sottostante di **SOCKET**.  
  
     La creazione di un socket segue il modello di costruzione in due fasi.  
  
     Di seguito è riportato un esempio.  
  
     [!code-cpp[NVC_MFCSimpleSocket#3](../mfc/codesnippet/CPP/windows-sockets-using-class-casyncsocket_1.cpp)]  
  
     \- oppure \-  
  
     [!code-cpp[NVC_MFCSimpleSocket#4](../mfc/codesnippet/CPP/windows-sockets-using-class-casyncsocket_2.cpp)]  
  
     Il primo sopra riportato consente di creare un oggetto `CAsyncSocket` lo stack.  Il secondo costruttore crea `CAsyncSocket` nell'heap.  La prima chiamata a [Crea](../Topic/CAsyncSocket::Create.md) precedente utilizza i parametri predefiniti per creare un socket di flusso.  La seconda chiamata di **Crea** crea un blocco di datagramma con una porta e un indirizzo specificato. È possibile utilizzare qualsiasi versione di **Crea** con qualsiasi metodo di costruzione.\)  
  
     I parametri a **Crea** sono:  
  
    -   "Una porta": un valore short integer.  
  
         Per un socket del server, è necessario specificare una porta.  Per un blocco client, in genere accettare il valore predefinito per questo parametro, che consente a Windows Sockets selezionare una porta.  
  
    -   Un tipo di socket: **SOCK\_STREAM** \(impostazione predefinita\) o **SOCK\_DGRAM**.  
  
    -   Un socket "address", ad esempio "ftp.microsoft.com" o "128.56.22.8".  
  
         Questo è il proprio indirizzo di \(IP\) del protocollo Internet in rete.  Verranno probabilmente sempre al valore predefinito per questo parametro.  
  
     I termini "porta" e "indirizzo di socket" sono illustrati in [Windows Sockets: Porte e indirizzi di socket](../mfc/windows-sockets-ports-and-socket-addresses.md).  
  
2.  Se il blocco è un client, connettere l'oggetto socket a un socket del server, utilizzando [CAsyncSocket::Connect](../Topic/CAsyncSocket::Connect.md).  
  
     \- oppure \-  
  
     Se il blocco è un server, impostare il blocco di avvio attendendo \(con [CAsyncSocket::Listen](../Topic/CAsyncSocket::Listen.md)\) per collegano i tentativi da un client.  Quando riceve una richiesta di connessione, accettila con [CAsyncSocket::Accept](../Topic/CAsyncSocket::Accept.md).  
  
     Dopo avere accettato la connessione, è possibile eseguire tali attività come convalidare le password.  
  
    > [!NOTE]
    >  La funzione membro di **Accetta** accetta un riferimento a un nuovo oggetto, vuoto di `CSocket` come parametro.  È necessario costruire l'oggetto prima di chiamare **Accetta**.  Se l'oggetto socket dall'ambito, la connessione verrà chiusa.  Non chiamare **Crea** per questo nuovo oggetto socket.  Per un esempio, vedere l'articolo [Windows Sockets: Sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md).  
  
3.  Eseguire le comunicazioni con altri socket chiamando le funzioni membro dell'oggetto di `CAsyncSocket` che incapsulano le funzioni API Windows Sockets.  
  
     Vedere la specifica di Windows Sockets e la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md) nel *Riferimento MFC*.  
  
4.  Eliminare l'oggetto di `CAsyncSocket`.  
  
     Se è stato creato l'oggetto socket nello stack, viene chiamato il distruttore quando la funzione contenitore dall'ambito.  Se è stato creato l'oggetto socket nell'heap, utilizzando l'operatore di **nuova**, è responsabile dell'operatore di **eliminazione** elimini l'oggetto.  
  
     Il distruttore chiama la funzione membro di [Chiudi](../Topic/CAsyncSocket::Close.md) dell'oggetto prima di eliminare l'oggetto.  
  
 Per un esempio di questa sequenza nel codice \(in realtà per un oggetto di `CSocket` \), vedere [Windows Sockets: Sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md).  
  
##  <a name="_core_your_responsibilities_with_casyncsocket"></a> Le responsabilità con CAsyncSocket  
 Quando si crea un oggetto classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), l'oggetto incapsula gli handle di **SOCKET** di windows e fornisce operazioni su tale handle.  Quando si utilizza `CAsyncSocket`, è necessario gestire di tutti i problemi che possono risolvere se tramite l'api direttamente.  Di seguito è riportato un esempio.  
  
-   "Blocco" scenari.  
  
-   Differenze di ordine dei byte tra i computer di inviare e di ricezioni.  
  
-   Conversione tra il formato Unicode e stringhe con i set di caratteri multibyte \(MBCS\).  
  
 Per le definizioni di questi termini e informazioni aggiuntive, vedere [Windows Sockets: Blocco](../mfc/windows-sockets-blocking.md), [Windows Sockets: Ordinamento di byte](../mfc/windows-sockets-byte-ordering.md), [Windows Sockets: Conversione di stringhe](../mfc/windows-sockets-converting-strings.md).  
  
 Nonostante questi problemi, la classe **CAsycnSocket** può essere la scelta giusta automaticamente se l'applicazione richiede una flessibilità e il controllo può ottenere.  In caso contrario, è necessario utilizzare la classe `CSocket` invece.  `CSocket` nasconde molto dettaglio necessario: pompa i messaggi di windows durante le chiamate di blocco e fornisce l'accesso a `CArchive`, che gestisce le differenze e la conversione delle stringhe per l'ordine dei byte automaticamente.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)  
  
-   [Windows Sockets: Socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: Socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)