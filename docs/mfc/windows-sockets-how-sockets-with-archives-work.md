---
title: 'Windows Sockets: funzionamento dei socket con archivi'
ms.date: 11/19/2018
helpviewer_keywords:
- Windows Sockets [MFC], synchronous
- sockets [MFC], synchronous operation
- sockets [MFC], with archives
- synchronous state socket
- Windows Sockets [MFC], with archives
- two-state socket object
ms.assetid: d8ae4039-391d-44f0-a19b-558817affcbb
ms.openlocfilehash: f6101193c85e41fbf82681b0b2ae1e09e4162f87
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52174912"
---
# <a name="windows-sockets-how-sockets-with-archives-work"></a>Windows Sockets: funzionamento dei socket con archivi

Questo articolo illustra come un [CSocket](../mfc/reference/csocket-class.md) oggetto, un [CSocketFile](../mfc/reference/csocketfile-class.md) oggetto e un [CArchive](../mfc/reference/carchive-class.md) oggetto vengono combinate per semplificare l'invio e ricezione di dati tramite un Windows Socket.

L'articolo [Windows Sockets: esempio di socket con gli archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md) presenta le `PacketSerialize` (funzione). L'oggetto di archiviazione nel `PacketSerialize` esempio funziona in modo analogo a un oggetto di archiviazione passato a un MFC [Serialize](../mfc/reference/cobject-class.md#serialize) (funzione). La differenza fondamentale è che per i socket, l'archivio non è collegato a uno standard [CFile](../mfc/reference/cfile-class.md) oggetto (in genere associata a un file su disco) ma a un `CSocketFile` oggetto. Invece di connettersi a un file su disco, il `CSocketFile` si connette l'oggetto un `CSocket` oggetto.

Oggetto `CArchive` oggetto gestisce un buffer. Quando il buffer di un archivio (trasmissione) l'archiviazione è pieno, un oggetto associato `CFile` oggetto scrive i contenuti del buffer. Svuotamento del buffer di un archivio collegato a un socket è equivalente all'invio di un messaggio. Quando il buffer di un archivio di caricare (ricezione) è pieno, il `CFile` oggetto interrompe la lettura fino a quando il buffer è nuovamente disponibile.

Classe `CSocketFile` deriva da `CFile`, ma non supporta [CFile](../mfc/reference/cfile-class.md) funzioni di membro, ad esempio le funzioni di posizionamento (`Seek`, `GetLength`, `SetLength`e così via), il blocco di funzioni ( `LockRange`, `UnlockRange`), o `GetPosition` (funzione). Tutti il [CSocketFile](../mfc/reference/csocketfile-class.md) oggetto deve eseguire la scrittura o lettura di sequenze di byte da o verso associato `CSocket` oggetto. Poiché non è coinvolto un file, operazioni, ad esempio `Seek` e `GetPosition` non ha senso. `CSocketFile` è derivato da `CFile`, in modo che normalmente verrebbe ereditato tutte queste funzioni membro. Per evitare questo problema, il non supportata `CFile` funzioni membro vengono sottoposte a override nel `CSocketFile` per generare un [CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md).

Il `CSocketFile` oggetto chiama le funzioni di membro relative `CSocket` oggetto per inviare o ricevere dati.

La figura seguente mostra le relazioni tra questi oggetti su entrambi i lati della comunicazione.

![CArchive, CSocketFile e CSocket](../mfc/media/vc38ia1.gif "CArchive, CSocketFile e CSocket") <br/>
CArchive, CSocketFile e CSocket

Lo scopo di questa complessità evidente è per proteggersi dalla necessità di gestire in prima persona i dettagli del socket. Creare il socket, il file e l'archivio e quindi iniziare l'invio o ricezione dati inserendola nell'archivio o estraendolo dall'archivio. [CArchive](../mfc/reference/carchive-class.md), [CSocketFile](../mfc/reference/csocketfile-class.md), e [CSocket](../mfc/reference/csocket-class.md) gestisce i dettagli in background.

A `CSocket` è effettivamente un oggetto di due stati: in alcuni casi asincroni (lo stato normale) e talvolta sincrona. Nello stato asincrono, un socket può ricevere notifiche asincrone da framework. Tuttavia, durante un'operazione, ad esempio ricevendo o inviando dati al socket diventa sincrono. Ciò significa che il socket riceverà notifiche alcuna ulteriore in modo asincrono fino a quando non è stata completata l'operazione sincrona. Poiché passa da una modalità, è possibile, ad esempio, eseguire quanto segue:

[!code-cpp[NVC_MFCSimpleSocket#2](../mfc/codesnippet/cpp/windows-sockets-how-sockets-with-archives-work_1.cpp)]

Se `CSocket` non sono stati implementati come un oggetto di due stati, è possibile ricevere ulteriori notifiche per lo stesso tipo di evento, mentre si elabora una notifica precedente. Ad esempio, si potrebbe ottenere un' `OnReceive` notifica durante l'elaborazione di un `OnReceive`. Nel frammento di codice precedente, l'estrazione `str` dall'archivio potrebbe causare una ricorsione. Passando gli stati, `CSocket` impedisce la ricorsione per impedire ulteriori notifiche. La regola generale non è alcuna notifica all'interno delle notifiche.

> [!NOTE]
> Oggetto `CSocketFile` può essere utilizzato anche come un file (limitato) senza una `CArchive` oggetto. Per impostazione predefinita, il `CSocketFile` del costruttore *bArchiveCompatible* parametro **TRUE**. Specifica che l'oggetto file sia per l'uso con un archivio. Per usare l'oggetto file senza un archivio, passare **FALSE** nel *bArchiveCompatible* parametro.

In modalità "compatible archivio", un `CSocketFile` oggetto offre prestazioni migliori e riduce il rischio di "deadlock". Un deadlock si verifica quando entrambi i socket di invio e ricezione sono in attesa tra loro, o in attesa di una risorsa comune. Questa situazione può verificarsi se il `CArchive` oggetto ha collaborato con i `CSocketFile` esattamente come è visualizzato con un `CFile` oggetto. Con `CFile`, l'archivio può supporre che, se riceve un numero di byte quello richiesto, la fine del file è stato raggiunto. Con `CSocketFile`, tuttavia, dei dati sono basato su messaggi; il buffer può contenere più messaggi, pertanto la ricezione di un valore più basso rispetto al numero di byte richiesto non implica fine del file. L'applicazione non vengono bloccati in questo caso come potrebbe accadere con `CFile`, e può continuare a leggere i messaggi dal buffer fino a quando il buffer è vuoto. Il [IsBufferEmpty](../mfc/reference/carchive-class.md#isbufferempty) funzionare in `CArchive` è utile per monitorare lo stato del buffer dell'archivio in questo caso.

Per altre informazioni, vedere [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[CObject:: Serialize](../mfc/reference/cobject-class.md#serialize)
