---
title: 'Windows Sockets: ordinamento dei byte'
ms.date: 11/04/2016
helpviewer_keywords:
- byte order issues in sockets programming
- sockets [MFC], byte order issues
- Windows Sockets [MFC], byte order issues
ms.assetid: 8a787a65-f9f4-4002-a02f-ac25a5dace5d
ms.openlocfilehash: f00936f3de07df8c1e4d9df1c678b2cfd5f3e3ad
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226802"
---
# <a name="windows-sockets-byte-ordering"></a>Windows Sockets: ordinamento dei byte

In questo articolo e nei due articoli correlati vengono illustrati diversi problemi che si presentano nella programmazione Windows Sockets. Questo articolo illustra l'ordine di byte. Gli altri problemi sono trattati negli articoli: [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md) e [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md).

Se si utilizza o si deriva dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi manualmente. Se si utilizza o si deriva dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC li gestisce automaticamente.

## <a name="byte-ordering"></a>ordine dei byte

Diverse architetture di computer a volte archiviano i dati usando ordini di byte diversi. Ad esempio, i computer basati su Intel archiviano i dati in ordine inverso rispetto ai computer Macintosh (Motorola). L'ordine dei byte Intel, denominato "Little-Endian", è anche il contrario dell'ordine "big-endian" standard di rete. Nella tabella seguente vengono illustrate queste condizioni.

### <a name="big--and-little-endian-byte-ordering"></a>Ordinamento di byte big-endian

|ordinamento dei byte|Significato|
|-------------------|-------------|
|Big endian|Il byte più significativo si trova all'estremità sinistra di una parola.|
|Little-Endian|Il byte più significativo si trova all'estremità destra di una parola.|

In genere, non è necessario preoccuparsi della conversione dell'ordine dei byte per i dati inviati e ricevuti in rete, ma in alcuni casi è necessario convertire gli ordini di byte.

## <a name="when-you-must-convert-byte-orders"></a>Quando è necessario convertire gli ordini byte

È necessario convertire gli ordini di byte nelle situazioni seguenti:

- Si passano le informazioni che devono essere interpretate dalla rete, anziché i dati da inviare a un altro computer. Ad esempio, è possibile passare porte e indirizzi, che la rete deve comprendere.

- L'applicazione server con cui si comunica non è un'applicazione MFC e non è disponibile codice sorgente. In questo modo vengono chiamate le conversioni degli ordini di byte se i due computer non condividono lo stesso ordine dei byte.

## <a name="when-you-do-not-have-to-convert-byte-orders"></a>Quando non è necessario convertire gli ordini byte

È possibile evitare il lavoro di conversione degli ordini di byte nelle situazioni seguenti:

- I computer su entrambe le estremità possono accettare di non scambiare byte ed entrambi i computer utilizzano lo stesso ordine dei byte.

- Il server con cui si comunica è un'applicazione MFC.

- Si dispone di codice sorgente per il server con cui si comunica, quindi è possibile stabilire in modo esplicito se è necessario convertire o meno gli ordini di byte.

- È possibile trasferire il server a MFC. Questa operazione è piuttosto semplice e il risultato è in genere un codice più piccolo e più rapido.

Utilizzando [CAsyncSocket](../mfc/reference/casyncsocket-class.md), è necessario gestire manualmente le conversioni necessarie per l'ordine dei byte. Windows Sockets standardizza il modello di ordine dei byte "big-endian" e fornisce funzioni per la conversione tra questo ordine e altri. [CArchive](../mfc/reference/carchive-class.md), tuttavia, usato con [CSocket](../mfc/reference/csocket-class.md), usa l'ordine opposto ("Little-Endian"), ma gestisce automaticamente `CArchive` i dettagli delle conversioni dell'ordine dei byte. Utilizzando questo ordinamento standard nelle applicazioni o utilizzando le funzioni di conversione dell'ordine dei byte di Windows Sockets, è possibile rendere il codice più portabile.

Il caso ideale per l'utilizzo dei socket MFC è quando si scrivono entrambe le estremità della comunicazione: utilizzando MFC a entrambe le estremità. Se si sta scrivendo un'applicazione che comunicherà con le applicazioni non MFC, ad esempio un server FTP, sarà probabilmente necessario gestire manualmente lo scambio di byte prima di passare i dati all'oggetto Archive, usando le routine di conversione Windows Sockets **ntohs**, **ntohl**, **htons**e **htonl**. Un esempio di queste funzioni usate per la comunicazione con un'applicazione non MFC viene visualizzato più avanti in questo articolo.

> [!NOTE]
> Quando l'altra estremità della comunicazione non è un'applicazione MFC, è necessario evitare di trasmettere gli oggetti C++ derivati da `CObject` nell'archivio, perché il ricevitore non sarà in grado di gestirli. Vedere la nota in [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md).

Per ulteriori informazioni sugli ordini di byte, vedere la specifica di Windows Sockets, disponibile nel Windows SDK.

## <a name="a-byte-order-conversion-example"></a>Esempio di conversione dell'ordine di byte

Nell'esempio seguente viene illustrata una funzione di serializzazione per un `CSocket` oggetto che utilizza un archivio. Viene inoltre illustrato l'utilizzo delle funzioni di conversione degli ordini di byte nell'API Windows Sockets.

Questo esempio presenta uno scenario in cui si scrive un client che comunica con un'applicazione server non MFC per cui non si ha accesso al codice sorgente. In questo scenario, è necessario presupporre che il server non MFC usi l'ordine dei byte di rete standard. Al contrario, l'applicazione client MFC utilizza un `CArchive` oggetto con un `CSocket` oggetto e `CArchive` utilizza l'ordine dei byte "Little-Endian", l'opposto dello standard di rete.

Si supponga che il server non MFC con cui si intende comunicare disponga di un protocollo stabilito per un pacchetto di messaggi analogo al seguente:

[!code-cpp[NVC_MFCSimpleSocket#5](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_1.cpp)]

In termini di MFC, questo verrebbe espresso come segue:

[!code-cpp[NVC_MFCSimpleSocket#6](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_2.cpp)]

In C++, un **`struct`** è essenzialmente la stessa cosa di una classe. La `Message` struttura può includere funzioni membro, ad esempio la `Serialize` funzione membro dichiarata in precedenza. La `Serialize` funzione membro potrebbe essere simile alla seguente:

[!code-cpp[NVC_MFCSimpleSocket#7](../mfc/codesnippet/cpp/windows-sockets-byte-ordering_3.cpp)]

In questo esempio vengono chiamate le conversioni degli ordini di byte dei dati a causa di una mancata corrispondenza netta tra l'ordine dei byte dell'applicazione server non MFC in un'unica estremità e l'oggetto `CArchive` utilizzato nell'applicazione client MFC sull'altra estremità. Nell'esempio vengono illustrate diverse funzioni di conversione degli ordini di byte fornite da Windows Sockets. Nella tabella seguente vengono descritte queste funzioni.

### <a name="windows-sockets-byte-order-conversion-functions"></a>Funzioni di conversione degli ordini di byte di Windows Sockets

|Funzione|Scopo|
|--------------|-------------|
|**ntohs**|Converte una quantità a 16 bit dall'ordine dei byte della rete a quello dell'host (big-endian a little-endian).|
|**ntohl**|Converte una quantità a 32 bit dall'ordine dei byte della rete a quello dell'host (big-endian a little-endian).|
|**Htons**|Converte una quantità a 16 bit dall'ordine dei byte dell'host in ordine byte di rete (Little-endian a big-endian).|
|**Htonl**|Converte una quantità a 32 bit dall'ordine dei byte dell'host all'ordine dei byte di rete (Little-endian a big-endian).|

Un altro punto di questo esempio è che, quando l'applicazione socket sull'altra estremità della comunicazione è un'applicazione non MFC, è necessario evitare di eseguire un'operazione simile alla seguente:

`ar << pMsg;`

dove `pMsg` è un puntatore a un oggetto C++ derivato dalla classe `CObject` . Verranno inviate informazioni aggiuntive MFC associate agli oggetti e il server non lo comprenderà, come se si trattasse di un'applicazione MFC.

Per altre informazioni, vedere:

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
