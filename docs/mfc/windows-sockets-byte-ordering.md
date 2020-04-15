---
title: 'Windows Sockets: ordinamento dei byte'
ms.date: 11/04/2016
helpviewer_keywords:
- byte order issues in sockets programming
- sockets [MFC], byte order issues
- Windows Sockets [MFC], byte order issues
ms.assetid: 8a787a65-f9f4-4002-a02f-ac25a5dace5d
ms.openlocfilehash: 50548202483c4d9d4471ad2c600270c4df4503e7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371054"
---
# <a name="windows-sockets-byte-ordering"></a>Windows Sockets: ordinamento dei byte

In questo articolo e nei due articoli correlati vengono illustrati diversi problemi che si presentano nella programmazione Windows Sockets. In questo articolo viene illustrato l'ordine dei byte. Gli altri problemi sono trattati negli articoli: [Windows Sockets: Blocking](../mfc/windows-sockets-blocking.md) and [Windows Sockets: Converting Strings](../mfc/windows-sockets-converting-strings.md).

Se si utilizza o deriva dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi manualmente. Se si utilizza o deriva dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC li gestisce per l'utente.

## <a name="byte-ordering"></a>ordine dei byte

Architetture di computer diverse talvolta archiviano i dati utilizzando ordini di byte diversi. Ad esempio, i computer basati su Intel memorizzano i dati in ordine inverso dei computer Macintosh (Motorola). L'ordine dei byte Intel, chiamato "little-Endian", è anche il contrario dell'ordine "big-Endian" standard di rete. Nella tabella seguente vengono illustrati questi termini.

### <a name="big--and-little-endian-byte-ordering"></a>Ordinamento dei byte big e Little-Endian

|ordinamento dei byte|Significato|
|-------------------|-------------|
|Big-Endian|Il byte più significativo si trova all'estremità sinistra di una parola.|
|Little-Endian|Il byte più significativo si trova all'estremità destra di una parola.|

In genere, non è necessario preoccuparsi della conversione dell'ordine dei byte per i dati inviati e ricevuti in rete, ma esistono situazioni in cui è necessario convertire gli ordini dei byte.

## <a name="when-you-must-convert-byte-orders"></a>Quando è necessario convertire gli ordini di byteWhen You Must Convert Byte Orders

È necessario convertire gli ordini dei byte nelle seguenti situazioni:

- Si stanno passando informazioni che devono essere interpretate dalla rete, a differenza dei dati che si stanno inviando a un'altra macchina. Ad esempio, è possibile passare porte e indirizzi, che la rete deve comprendere.

- L'applicazione server con cui si comunica non è un'applicazione MFC (e non si dispone di codice sorgente per esso). Ciò richiede conversioni dell'ordine dei byte se i due computer non condividono lo stesso ordine dei byte.

## <a name="when-you-do-not-have-to-convert-byte-orders"></a>Quando non è necessario convertire gli ordini di byteWhen You do Non have to Convert Byte Orders

È possibile evitare il lavoro di conversione degli ordini di byte nelle seguenti situazioni:

- Le macchine su entrambe le estremità possono accettare di non scambiare byte ed entrambe le macchine utilizzano lo stesso ordine dei byte.

- Il server con cui si comunica è un'applicazione MFC.

- Si dispone del codice sorgente per il server con cui si sta comunicando, in modo da poter indicare in modo esplicito se è necessario convertire gli ordini di byte o meno.

- È possibile eseguire il porting del server a MFC. Questo è abbastanza facile da fare, e il risultato è in genere più piccolo, codice più veloce.

Utilizzo di [CAsyncSocket](../mfc/reference/casyncsocket-class.md), è necessario gestire manualmente tutte le conversioni necessarie per l'ordine dei byte. Windows Sockets standardizza il modello di ordine dei byte "big-Endian" e fornisce funzioni per la conversione tra questo ordine e altri. [CArchive](../mfc/reference/carchive-class.md), tuttavia, utilizzato con [CSocket](../mfc/reference/csocket-class.md), utilizza l'ordine opposto ("little-Endian"), ma `CArchive` si occupa automaticamente dei dettagli delle conversioni dell'ordine dei byte. Utilizzando questo ordinamento standard nelle applicazioni o utilizzando le funzioni di conversione dell'ordine dei byte di Windows Sockets, è possibile rendere il codice più portabile.

Il caso ideale per l'utilizzo di socket MFC è quando si scrivono entrambe le estremità della comunicazione: utilizzando MFC a entrambe le estremità. Se si scrive un'applicazione che comunicherà con applicazioni non MFC, ad esempio un server FTP, sarà probabilmente necessario gestire manualmente lo scambio di byte prima di passare i dati all'oggetto archivio, utilizzando le routine di conversione di Windows Sockets **ntohs**, **ntohl**, **htons**e **htonl**. Un esempio di queste funzioni utilizzate nella comunicazione con un'applicazione non MFC viene visualizzato più avanti in questo articolo.

> [!NOTE]
> Quando l'altra estremità della comunicazione non è un'applicazione MFC, `CObject` è inoltre necessario evitare il flusso di oggetti C , derivati dall'archivio, perché il ricevitore non sarà in grado di gestirli. Vedere la nota in [Windows Sockets: Utilizzo di Sockets con archivi](../mfc/windows-sockets-using-sockets-with-archives.md).

Per ulteriori informazioni sugli ordini dei byte, vedere la specifica Windows Sockets, disponibile in Windows SDK.

## <a name="a-byte-order-conversion-example"></a>Esempio di conversione dell'ordine dei byte

Nell'esempio seguente viene illustrata una funzione di serializzazione per un `CSocket` oggetto che utilizza un archivio. Viene inoltre illustrato l'utilizzo delle funzioni di conversione dell'ordine dei byte nell'API di Windows Sockets.

In questo esempio viene illustrato uno scenario in cui si scrive un client che comunica con un'applicazione server non MFC per la quale non si ha accesso al codice sorgente. In questo scenario, è necessario presupporre che il server non MFC utilizza l'ordine dei byte di rete standard. Al contrario, l'applicazione `CArchive` client `CSocket` MFC utilizza `CArchive` un oggetto con un oggetto e utilizza l'ordine dei byte "little-Endian", l'opposto dello standard di rete.

Si supponga che il server non MFC con cui si prevede di comunicare disponga di un protocollo stabilito per un pacchetto di messaggi simile al seguente:

[!code-cpp[NVC_MFCSimpleSocket#5](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_1.cpp)]

In termini MFC, questo sarebbe espresso come segue:

[!code-cpp[NVC_MFCSimpleSocket#6](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_2.cpp)]

Uno **struct** è essenzialmente la stessa cosa di una classe. La `Message` struttura può avere funzioni `Serialize` membro, ad esempio la funzione membro dichiarata in precedenza. La `Serialize` funzione membro potrebbe essere simile alla seguente:The member function might look like this:

[!code-cpp[NVC_MFCSimpleSocket#7](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_3.cpp)]

In questo esempio viene eseguita una conversione dei dati nell'ordine dei byte perché esiste una chiara `CArchive` mancata corrispondenza tra l'ordine dei byte dell'applicazione server non MFC su un'estremità e quella utilizzata nell'applicazione client MFC dall'altra parte. Nell'esempio vengono illustrate diverse funzioni di conversione nell'ordine dei byte fornite da Windows Sockets. Nella tabella seguente vengono descritte queste funzioni.

### <a name="windows-sockets-byte-order-conversion-functions"></a>Funzioni di conversione dell'ordine dei byte di Windows Sockets

|Funzione|Scopo|
|--------------|-------------|
|**ntohs**|Convertire una quantità a 16 bit dall'ordine dei byte di rete all'ordine dei byte dell'host (da big-Endian a little-Endian).|
|**ntohl**|Convertire una quantità a 32 bit dall'ordine dei byte di rete all'ordine dei byte dell'host (da big-Endian a little-Endian).|
|**Htoni**|Convertire una quantità a 16 bit dall'ordine dei byte dell'host all'ordine dei byte di rete (da little-Endian a big-Endian).|
|**Htonl**|Convertire una quantità a 32 bit dall'ordine dei byte dell'host all'ordine dei byte di rete (da little-Endian a big-Endian).|

Un altro punto di questo esempio è che quando l'applicazione socket all'altro lato della comunicazione è un'applicazione non MFC, è necessario evitare di eseguire un'operazione simile alla seguente:

`ar << pMsg;`

dove `pMsg` è un puntatore a un `CObject`oggetto c'è derivato dalla classe . In questo modo verranno inviate informazioni MFC aggiuntive associate agli oggetti e il server non lo comprenderà, come se si trattasse di un'applicazione MFC.

Per altre informazioni, vedere:

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
