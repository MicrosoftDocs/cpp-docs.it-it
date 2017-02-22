---
title: "Windows Sockets: ordinamento dei byte | Microsoft Docs"
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
  - "problemi di ordine dei byte nella programmazione di socket"
  - "socket [C++], problemi di ordine dei byte"
  - "Windows Sockets [C++], problemi di ordine dei byte"
ms.assetid: 8a787a65-f9f4-4002-a02f-ac25a5dace5d
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Windows Sockets: ordinamento dei byte
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo e due articoli correlati vengono illustrati diversi problemi nella programmazione Windows Sockets.  Questo articolo riguarda l'ordinamento di byte.  Gli altri problemi vengono analizzati negli articoli: [Windows Sockets: Blocco](../mfc/windows-sockets-blocking.md) e [Windows Sockets: Conversione di stringhe](../mfc/windows-sockets-converting-strings.md).  
  
 Se si utilizza o derivate dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi.  Se si utilizza o derivate dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC li gestisce automaticamente.  
  
## Ordinamento di byte  
 Dati di architetture di computer diverso talvolta utilizzando gli ordini dei byte diversi.  Ad esempio, per memorizzare dati basati su Intel dei computer dell'ordine inverso i computer Macintosh \(Motorola\).  L'ordine dei byte Intel, denominato "little\-endian," è anche l'operazione inversa dell'ordine "Big Endian" standard di rete.  Nella tabella seguente vengono descritti questi termini.  
  
### Ordinamento di grandi dimensioni e byte little\-endian  
  
|Ordinamento di byte|Significato|  
|-------------------------|-----------------|  
|Big endian|Il byte più significativo all'estremità sinistra di una parola.|  
|Little\-endian|Il byte più significativo all'estremità destra di una parola.|  
  
 In genere, non è necessario preoccuparsi di conversione di ordine dei byte per i dati inviati e viene visualizzato sulla rete, ma in alcune situazioni è necessario convertire gli ordini dei byte.  
  
## Quando è necessario convertire gli ordini dei byte  
 È necessario convertire gli ordini dei byte nelle seguenti situazioni:  
  
-   Si sta passando le informazioni che devono essere interpretate dalla rete, anziché i dati che si inviano in un altro computer.  Ad esempio, è possibile passare le porte e indirizzi, che la rete deve comprendere.  
  
-   L'applicazione server con cui si comunicazione non è un'applicazione MFC \(e non sono codice sorgente per\).  Questo richieste per le conversioni di ordine dei byte se i due computer non condividono lo stesso tipo di byte.  
  
## Quando non è necessario convertire gli ordini dei byte  
 È possibile evitare lavoro di conversione degli ordini dei byte nelle seguenti situazioni:  
  
-   I computer in entrambe le estremità possono per acconsentire non lo scambio dei byte e entrambi i computer utilizzano lo stesso ordine dei byte.  
  
-   Il server che si sta comunicazione con è un'applicazione MFC.  
  
-   Il codice sorgente per il server che si sta comunicazione con, pertanto è possibile impostare in modo esplicito se è necessario convertire gli ordini dei byte o meno.  
  
-   È possibile trasferire il server a MFC.  Questa operazione è piuttosto facile eseguire e il risultato è codice in genere più piccolo e più rapido.  
  
 Utilizzo di [CAsyncSocket](../mfc/reference/casyncsocket-class.md), è necessario gestire tutte le conversioni necessarie per l'ordine dei byte.  Windows Sockets standardizza il modello "Big Endian" per l'ordine dei byte e funzioni a conversione tra questo ordine e altri.  [CArchive](../mfc/reference/carchive-class.md), tuttavia, utilizzata con [CSocket](../mfc/reference/csocket-class.md), utilizza little\-endian \(""\) l'ordine opposto, ma `CArchive` consente infatti dei dettagli delle conversioni di ordine dei byte automaticamente.  Utilizzando questo ordine standard nelle applicazioni, oppure mediante le funzioni di conversione di ordine dei byte Windows Sockets, è possibile rendere il codice più portabile.  
  
 Il caso ideale per l'utilizzo di sockets MFC è quando si scrivono entrambe le estremità di comunicazione: usando MFC su entrambe le estremità.  Se si scrive un'applicazione che comunicherà con le applicazioni non MFC, ad esempio un server FTP, è probabile che dovrà gestire byte\- scambiarsi prima di passare i dati all'oggetto store, utilizzando le routine di conversione Windows Sockets **ntohs**, **ntohl**, **htons** e **htonl**.  Un esempio di queste funzioni utilizzate in comunicazione con un'applicazione MFC non viene visualizzata più avanti in questo articolo.  
  
> [!NOTE]
>  Quando l'altra estremità di comunicazione non è un'applicazione MFC, è inoltre necessario evitare degli oggetti C\+\+ derivati da `CObject` nell'archivio perché il ricevitore non sarà in grado di gestirli.  Vedere la nota in [Windows Sockets: Utilizzo di socket con gli archivi](../mfc/windows-sockets-using-sockets-with-archives.md).  
  
 Per ulteriori informazioni sugli ordini dei byte, vedere la specifica di Windows Sockets, disponibile in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Un esempio di conversione di ordine dei byte  
 Nell'esempio seguente viene illustrata una funzione di serializzazione per un oggetto di `CSocket` che utilizza un archivio.  Viene illustrato anche l'utilizzo delle funzioni di conversione di ordine dei byte in Windows Sockets API.  
  
 In questo esempio sono presenti uno scenario in cui si scrive un client che comunica con un'applicazione server non MFC per cui non si dispone di accesso al codice sorgente.  In questo scenario, è necessario considerare che il server non MFC utilizza l'ordine dei byte di rete standard.  Al contrario, l'applicazione client MFC utilizza un oggetto di `CArchive` con un oggetto di `CSocket` e l'ordine di byte little\-endian "" di utilizzare di `CArchive`, l'opposto standard di rete.  
  
 Si supponga che il server non MFC con cui si desidera comunicare con un protocollo set per un pacchetto del messaggio seguente:  
  
 [!code-cpp[NVC_MFCSimpleSocket#5](../mfc/codesnippet/CPP/windows-sockets-byte-ordering_1.cpp)]  
  
 In termini di MFC, è espresso come segue:  
  
 [!code-cpp[NVC_MFCSimpleSocket#6](../mfc/codesnippet/CPP/windows-sockets-byte-ordering_2.cpp)]  
  
 In C\+\+, `struct` è essenzialmente la stessa definizione di classe.  La struttura di `Message` può avere funzioni membro, come la funzione membro di `Serialize` dichiarata in precedenza.  La funzione membro di `Serialize` potrebbe essere simile alla seguente:  
  
 [!code-cpp[NVC_MFCSimpleSocket#7](../mfc/codesnippet/CPP/windows-sockets-byte-ordering_3.cpp)]  
  
 Requisiti di questo esempio per le conversioni di ordine dei byte di dati perché è un semplice mancata corrispondenza tra l'ordine di byte dell'applicazione server non MFC su un'estremità e `CArchive` utilizzato nell'applicazione client MFC per l'altra estremità.  Nell'esempio sono illustrate diverse della conversione di ordine dei byte che funziona con Windows Sockets.  Nella tabella seguente vengono descritte queste funzioni.  
  
### Funzioni di conversione di ordine dei byte Windows Sockets  
  
|Funzione|Scopo|  
|--------------|-----------|  
|**ntohs**|Convertire una quantità a 16 bit mediante l'ordine di byte di rete di ospitare l'ordine dei byte \(big endian a little\-endian\).|  
|**ntohl**|Convertire una quantità a 32 bit mediante l'ordine di byte di rete di ospitare l'ordine dei byte \(big endian a little\-endian\).|  
|**Htons**|Convertire una quantità a 16 bit mediante l'ordine di byte host in ordine dei byte di rete \(little\-endian al big endian\).|  
|**Htonl**|Convertire una quantità a 32 bit mediante l'ordine di byte host in ordine dei byte di rete \(little\-endian al big endian\).|  
  
 Un altro punto di questo esempio è che quando l'applicazione di socket nell'altra estremità di comunicazione è un'applicazione non MFC, è necessario evitare di eseguire simile al seguente:  
  
 `ar << pMsg;`  
  
 dove `pMsg` è un puntatore a un oggetto c\+\+ derivato dalla classe `CObject`.  Ciò invierà informazioni aggiuntive MFC associati agli oggetti e il server non si capirà, come se fosse un'applicazione MFC.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)  
  
-   [Windows Sockets: Socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: Socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)