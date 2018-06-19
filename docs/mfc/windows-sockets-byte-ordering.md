---
title: 'Windows Sockets: Ordinamento dei Byte | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- byte order issues in sockets programming
- sockets [MFC], byte order issues
- Windows Sockets [MFC], byte order issues
ms.assetid: 8a787a65-f9f4-4002-a02f-ac25a5dace5d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 18fc3f586c7fc8861bfc29dade7b62e741bb0ffc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33385157"
---
# <a name="windows-sockets-byte-ordering"></a>Windows Sockets: ordinamento dei byte
In questo articolo e nei due articoli correlati vengono illustrati diversi problemi che si presentano nella programmazione Windows Sockets. Questo articolo descrive l'ordine dei byte. Gli altri problemi vengono analizzati negli articoli: [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md) e [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md).  
  
 Se si utilizza o si deriva dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi autonomamente. Se si utilizza o si deriva dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC gestiti.  
  
## <a name="byte-ordering"></a>L'ordine dei byte  
 Architetture diverse archiviano talvolta i dati utilizzando diversi ordini dei byte. I computer basati su Intel, ad esempio, archiviano i dati in ordine inverso dei computer Macintosh (Motorola). L'ordine dei byte Intel, denominato "little-Endian", è anche il contrario dell'ordine di rete standard "big-Endian". Questi termini sono descritti nella tabella seguente.  
  
### <a name="big--and-little-endian-byte-ordering"></a>L'ordine dei Byte big - e Little-Endian  
  
|L'ordine dei byte|Significato|  
|-------------------|-------------|  
|Big-Endian|Il byte più significativo è sul lato sinistro di una parola.|  
|Little-Endian|Il byte più significativo si trova all'estremità destra di una parola.|  
  
 In genere, non è necessario preoccuparsi di conversione dell'ordine di byte per i dati inviati e ricevuti in rete, ma ci sono situazioni in cui è necessario convertire gli ordini dei byte.  
  
## <a name="when-you-must-convert-byte-orders"></a>Quando è necessario convertire gli ordini dei Byte  
 È necessario convertire gli ordini dei byte nelle situazioni seguenti:  
  
-   Si siano passando le informazioni che devono essere interpretato dalla rete, anziché i dati da inviare a un altro computer. Ad esempio, è possibile passare le porte e indirizzi, che è necessario conoscere la rete.  
  
-   L'applicazione server a cui si sta comunicando non è un'applicazione MFC e che non è il codice sorgente. Viene chiamato per le conversioni di ordine byte se i due computer non condividono la stessa l'ordine dei byte.  
  
## <a name="when-you-do-not-have-to-convert-byte-orders"></a>Quando non è necessario convertire gli ordini dei Byte  
 È possibile evitare la conversione di ordini dei byte nelle situazioni seguenti:  
  
-   Le macchine in entrambe le estremità è possono accettare non scambiare i byte ed entrambi i computer utilizzano lo stesso ordine di byte.  
  
-   Il server che si sta comunicando con è un'applicazione MFC.  
  
-   Si dispone di codice sorgente per il server che si sta comunicando, cui è possibile indicare in modo esplicito se è necessario convertire gli ordini dei byte o non.  
  
-   È possibile trasferire al server di MFC. Questo è abbastanza semplice eseguire e il risultato è in genere più veloci di codice.  
  
 Utilizzo di [CAsyncSocket](../mfc/reference/casyncsocket-class.md), è necessario gestire manualmente le conversioni necessarie l'ordine dei byte. Windows Sockets standardizza il modello "big-Endian" ordine dei byte e fornisce funzioni di conversione tra questo e altri ordini. [CArchive](../mfc/reference/carchive-class.md), tuttavia, utilizzabile con [CSocket](../mfc/reference/csocket-class.md), viene utilizzato l'opposto ("ordine little-Endian"), ma `CArchive` si occupa dei dettagli delle conversioni ordine dei byte. Utilizzando questo ordinamento standard nelle applicazioni o tramite le funzioni di conversione Windows Sockets l'ordine dei byte, si può rendere il codice più portabile.  
  
 La soluzione ideale per l'utilizzo di socket MFC è durante la scrittura di entrambe le estremità della comunicazione: utilizzo di MFC in entrambe le estremità. Se si sta scrivendo un'applicazione che comunicherà con applicazioni non MFC, ad esempio un server FTP, sarà probabilmente necessario gestire lo scambio di byte manualmente prima di passare dati all'oggetto di archiviazione, mediante le routine di conversione Windows Sockets **ntohs**, **ntohl**, **htons**, e **htonl**. Più avanti in questo articolo viene visualizzato un esempio di queste funzioni utilizzate nelle comunicazioni con un'applicazione non MFC.  
  
> [!NOTE]
>  Quando l'altra estremità della comunicazione non è un'applicazione MFC, è inoltre necessario evitare di streaming oggetti C++ derivati da `CObject` nell'archivio perché il destinatario non sarà in grado di gestirle. Vedere la nota nel [Windows Sockets: utilizzo dei socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md).  
  
 Per ulteriori informazioni sugli ordini dei byte, vedere la specifica Windows Sockets disponibile in Windows SDK.  
  
## <a name="a-byte-order-conversion-example"></a>Un esempio di conversione dell'ordine di Byte  
 Nell'esempio seguente viene illustrata una funzione di serializzazione per un `CSocket` oggetto che utilizza un archivio. Viene inoltre illustrato l'utilizzo delle funzioni di conversione dell'ordine di byte nell'API di Windows Sockets.  
  
 In questo esempio viene presentato uno scenario in cui si sta scrivendo un client che comunica con un'applicazione server non MFC per cui non si dispone di alcun accesso al codice sorgente. In questo scenario, si deve presupporre che il server di MFC non utilizza l'ordine dei byte di rete standard. Al contrario, l'applicazione client MFC utilizza un `CArchive` dell'oggetto con un `CSocket` oggetto, e `CArchive` Usa l'ordine dei byte "little-Endian", l'opposto di rete standard.  
  
 Si consideri il server non MFC con cui si prevede di comunicare con un protocollo stabilito per il pacchetto di un messaggio simile al seguente:  
  
 [!code-cpp[NVC_MFCSimpleSocket#5](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_1.cpp)]  
  
 In termini MFC, questo viene espressa come segue:  
  
 [!code-cpp[NVC_MFCSimpleSocket#6](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_2.cpp)]  
  
 In C++, un `struct` è essenzialmente come una classe. Il `Message` struttura può avere funzioni membro, ad esempio il `Serialize` funzione membro dichiarata in precedenza. Il `Serialize` funzione membro potrebbe essere simile al seguente:  
  
 [!code-cpp[NVC_MFCSimpleSocket#7](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_3.cpp)]  
  
 Questo esempio viene chiamato per le conversioni di ordine dei byte di dati perché è una mancata corrispondenza chiara tra l'ordinamento dei byte dell'applicazione su un lato server non MFC e `CArchive` utilizzato nell'applicazione MFC client su altra estremità. L'esempio illustra alcune delle funzioni di conversione dell'ordine di byte fornite da Windows Sockets. Nella tabella seguente vengono descritte queste funzioni.  
  
### <a name="windows-sockets-byte-order-conversion-functions"></a>Windows Sockets funzioni di conversione dell'ordine di Byte  
  
|Funzione|Scopo|  
|--------------|-------------|  
|**ntohs**|Converte una quantità a 16 bit di ordine byte di rete per l'ordine dei byte host (da big-Endian a little-Endian).|  
|**ntohl**|Convertire una quantità a 32 bit di ordine byte di rete per l'ordine dei byte (da big-Endian a little-Endian) host.|  
|**Htons**|Convertire una quantità a 16 bit dall'ordine dei byte host in ordine di byte di rete (da little-Endian a big-Endian).|  
|**Htonl**|Convertire una quantità a 32 bit di ordine byte host byte di rete (da little-Endian a big-Endian).|  
  
 Un altro punto di questo esempio è che quando l'applicazione di socket a altra estremità della comunicazione è un'applicazione non MFC, è necessario evitare simile al seguente:  
  
 `ar << pMsg;`  
  
 dove `pMsg` è un puntatore a un oggetto C++ derivato dalla classe `CObject`. Verrà inviato informazioni MFC aggiuntive associate agli oggetti che il server non comprendono, come se si trattasse di un'applicazione MFC.  
  
 Per altre informazioni, vedere:  
  
-   [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)  
  
-   [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

