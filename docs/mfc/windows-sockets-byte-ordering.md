---
title: 'Windows Sockets: ordinamento dei byte'
ms.date: 11/04/2016
helpviewer_keywords:
- byte order issues in sockets programming
- sockets [MFC], byte order issues
- Windows Sockets [MFC], byte order issues
ms.assetid: 8a787a65-f9f4-4002-a02f-ac25a5dace5d
ms.openlocfilehash: 74d3b53ae3ab476ef1224caed91f31929fcce1ff
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50453951"
---
# <a name="windows-sockets-byte-ordering"></a>Windows Sockets: ordinamento dei byte

In questo articolo e nei due articoli correlati vengono illustrati diversi problemi che si presentano nella programmazione Windows Sockets. Questo articolo illustra l'ordine dei byte. Gli altri argomenti sono trattati negli articoli: [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md) e [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md).

Se si usano o si deriva dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi autonomamente. Se si usano o si deriva dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC li gestisce automaticamente.

## <a name="byte-ordering"></a>L'ordine dei byte

Diverse architetture di computer talvolta archiviano i dati usando gli ordini dei byte diverso. Computer basati su Intel, ad esempio, archiviare i dati in ordine inverso del computer Macintosh (Motorola). L'ordine dei byte Intel, chiamato "little-Endian", è anche il contrario dell'ordine "big-Endian" standard della rete. La tabella seguente illustra questi termini.

### <a name="big--and-little-endian-byte-ordering"></a>L'ordine dei Byte big - e Little-Endian

|L'ordine dei byte|Significato|
|-------------------|-------------|
|Big-Endian|Il byte più significativo è sul lato sinistro di una parola.|
|Little-Endian|Il byte più significativo è sul lato destro di una parola.|

In genere, non è necessario preoccuparsi della conversione di ordine dei byte per i dati che inviano e ricevono in rete, ma esistono situazioni in cui è necessario convertire gli ordini dei byte.

## <a name="when-you-must-convert-byte-orders"></a>Quando è necessario convertire gli ordini dei Byte

È necessario convertire gli ordini dei byte nelle situazioni seguenti:

- Si siano passando le informazioni necessarie per essere interpretato dalla rete, anziché i dati da inviare a un altro computer. Ad esempio, è possibile passare le porte e indirizzi, che è necessario conoscere la rete.

- L'applicazione del server con cui sta comunicando non è un'applicazione MFC (e non è il codice sorgente per tale). Chiama per le conversioni di ordine byte se i due computer non condividono la stessa l'ordine dei byte.

## <a name="when-you-do-not-have-to-convert-byte-orders"></a>Quando non è necessario convertire gli ordini dei Byte

È possibile evitare l'operazione di conversione gli ordini dei byte nelle situazioni seguenti:

- Le macchine in entrambe le estremità possono accettare non scambia byte ed entrambi i computer utilizzano lo stesso ordine di byte.

- Il server che si sta comunicando è un'applicazione MFC.

- È necessario il codice sorgente per il server che si sta comunicando, cui è possibile indicare in modo esplicito se è necessario convertire gli ordini dei byte o No.

- È possibile trasferire al server di MFC. Si tratta piuttosto semplice e il risultato è in genere codice più veloce e più piccolo.

Lavora [CAsyncSocket](../mfc/reference/casyncsocket-class.md), è necessario gestire manualmente tutte le conversioni necessarie dall'ordine dei byte. Windows Sockets standardizza il modello "big-Endian" ordine dei byte e fornisce funzioni per la conversione tra questo e altri ordini. [CArchive](../mfc/reference/carchive-class.md), tuttavia, utilizzabile con [CSocket](../mfc/reference/csocket-class.md), viene utilizzato l'ordine opposto ("little-Endian"), ma `CArchive` si occupa dei dettagli delle conversioni di ordine dei byte per l'utente. Usando questo ordinamento standard nelle applicazioni o usando funzioni di conversione di Windows Sockets ordine dei byte, è possibile rendere il codice più portabile.

La situazione ideale per l'uso di socket MFC è durante la scrittura di entrambe le estremità della comunicazione: utilizzo di MFC in entrambe le estremità. Se si sta scrivendo un'applicazione che comunicherà con le applicazioni non MFC, ad esempio un server FTP, sarà probabilmente necessario gestire lo scambio di byte manualmente prima di passare dati all'oggetto di archiviazione, usando le routine di conversione di Windows Sockets **ntohs**, **ntohl**, **htons**, e **htonl**. Più avanti in questo articolo viene visualizzato un esempio di queste funzioni utilizzate nelle comunicazioni con un'applicazione non MFC.

> [!NOTE]
>  Quando l'altra estremità della comunicazione non è un'applicazione MFC, è inoltre necessario evitare lo streaming di oggetti C++ derivati da `CObject` nell'archivio perché il destinatario non sarà in grado di gestirle. Vedere la nota nella [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md).

Per altre informazioni sugli ordini dei byte, vedere la specifica di Windows Sockets, disponibile nel SDK Windows.

## <a name="a-byte-order-conversion-example"></a>Un esempio di conversione dell'ordine di Byte

Nell'esempio seguente viene illustrata una funzione di serializzazione per un `CSocket` oggetto che usa un archivio. Viene inoltre illustrato come tramite le funzioni di conversione dell'ordine di byte nell'API Windows Sockets.

In questo esempio presenta uno scenario in cui si sta scrivendo un client che comunica con un'applicazione server non MFC per cui non si dispone di alcun accesso al codice sorgente. In questo scenario, si deve presupporre che il server non MFC Usa ordine byte di rete standard. Al contrario, l'applicazione client MFC Usa una `CArchive` dell'oggetto con un `CSocket` oggetti, e `CArchive` Usa l'ordine dei byte "little-Endian", l'opposto della rete standard.

Si supponga che il server non MFC con cui si prevede di comunicare con un protocollo definito per un pacchetto del messaggio simile al seguente:

[!code-cpp[NVC_MFCSimpleSocket#5](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_1.cpp)]

In termini di MFC, ciò potrebbe essere espresso come segue:

[!code-cpp[NVC_MFCSimpleSocket#6](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_2.cpp)]

In C++, un **struct** è essenzialmente la stessa operazione come una classe. Il `Message` struttura può avere funzioni membro, ad esempio il `Serialize` funzione membro dichiarata in precedenza. Il `Serialize` funzione membro simile alla seguente:

[!code-cpp[NVC_MFCSimpleSocket#7](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_3.cpp)]

Questo esempio viene chiamato per le conversioni di ordine dei byte di dati perché non c'è una mancata corrispondenza chiara tra l'ordine dei byte dell'applicazione su un lato server non MFC e `CArchive` utilizzato nell'applicazione MFC client su altra estremità. L'esempio illustra alcune delle funzioni di conversione dell'ordine di byte che Windows Sockets fornisce. Nella tabella seguente vengono descritte queste funzioni.

### <a name="windows-sockets-byte-order-conversion-functions"></a>Windows Sockets funzioni di conversione dell'ordine di Byte

|Funzione|Scopo|
|--------------|-------------|
|**ntohs**|Convertire una quantità a 16 bit dall'ordine dei byte della rete in ordine dei byte dell'host (bigEndian a little-Endian).|
|**ntohl**|Convertire una quantità a 32 bit di ordine byte di rete in ordine dei byte dell'host (bigEndian a little-Endian).|
|**Htons**|Convertire una quantità a 16 bit dall'ordine dei byte dell'host in ordine di byte di rete (little Endian per big-Endian).|
|**Htonl**|Convertire una quantità a 32 bit dall'ordine dei byte dell'host in ordine di byte di rete (little Endian per big-Endian).|

Un altro punto di questo esempio è che quando l'applicazione di socket a altra estremità della comunicazione è un'applicazione non MFC, è necessario evitare quanto segue:

`ar << pMsg;`

in cui `pMsg` è un puntatore a un oggetto C++ derivato dalla classe `CObject`. Invia informazioni aggiuntive di MFC associate con gli oggetti e il server non comprendono, come se si trattasse di un'applicazione MFC.

Per altre informazioni, vedere:

- [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

