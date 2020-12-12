---
description: 'Altre informazioni su: Windows Sockets: funzionamento dei socket con archivi'
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
ms.openlocfilehash: 19b24a9942b7405304c9037091266b4535bffbc3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263543"
---
# <a name="windows-sockets-how-sockets-with-archives-work"></a>Windows Sockets: funzionamento dei socket con archivi

Questo articolo illustra come vengono combinati un oggetto [CSocket](../mfc/reference/csocket-class.md) , un oggetto [CSocketFile](../mfc/reference/csocketfile-class.md) e un oggetto [CArchive](../mfc/reference/carchive-class.md) per semplificare l'invio e la ricezione di dati tramite un socket di Windows.

L'articolo [Windows Sockets: esempio di socket che utilizzano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md) presenta la `PacketSerialize` funzione. L'oggetto Archive nell' `PacketSerialize` esempio funziona in modo molto simile a un oggetto Archive passato a una funzione MFC [Serialize](../mfc/reference/cobject-class.md#serialize) . La differenza essenziale riguarda il fatto che, per i socket, l'archivio è associato a un oggetto [CFile](../mfc/reference/cfile-class.md) standard, in genere associato a un file su disco, ma a un `CSocketFile` oggetto. Anziché connettersi a un file su disco, l' `CSocketFile` oggetto si connette a un `CSocket` oggetto.

Un `CArchive` oggetto gestisce un buffer. Quando il buffer di un archivio (mittente) di archiviazione è pieno, un `CFile` oggetto associato scrive il contenuto del buffer. Lo scaricamento del buffer di un archivio collegato a un socket equivale all'invio di un messaggio. Quando il buffer di un archivio di caricamento (ricezione) è pieno, l' `CFile` oggetto interrompe la lettura fino a quando il buffer non è nuovamente disponibile.

`CSocketFile`La classe deriva da `CFile` , ma non supporta le funzioni membro [CFile](../mfc/reference/cfile-class.md) quali le funzioni di posizionamento ( `Seek` ,, `GetLength` `SetLength` e così via), le funzioni di blocco ( `LockRange` , `UnlockRange` ) o la `GetPosition` funzione. Tutti gli oggetti [CSocketFile](../mfc/reference/csocketfile-class.md) devono eseguire operazioni di scrittura o lettura di byte da o verso l'oggetto associato `CSocket` . Poiché non è necessario un file, le operazioni come `Seek` e non hanno `GetPosition` senso. `CSocketFile` deriva da `CFile` , quindi eredita in genere tutte le funzioni membro. Per evitare questo problema, le `CFile` funzioni membro non supportate vengono sottoposte a override in `CSocketFile` per generare un [CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md).

L' `CSocketFile` oggetto chiama le funzioni membro dell' `CSocket` oggetto per inviare o ricevere dati.

Nella figura seguente sono illustrate le relazioni tra questi oggetti su entrambi i lati della comunicazione.

![CArchive, CSocketFile e CSocket](../mfc/media/vc38ia1.gif "CArchive, CSocketFile e CSocket") <br/>
CArchive, CSocketFile e CSocket

Lo scopo di questa evidente complessità è di proteggersi dalla necessità di gestire i dettagli del socket. Si crea il socket, il file e l'archivio, quindi si inizia a inviare o ricevere dati inserendoli nell'archivio o estraendoli dall'archivio. [CArchive](../mfc/reference/carchive-class.md), [CSocketFile](../mfc/reference/csocketfile-class.md)e [CSocket](../mfc/reference/csocket-class.md) gestiscono i dettagli dietro le quinte.

Un `CSocket` oggetto è in realtà un oggetto a due Stati, a volte asincrono (lo stato usuale) e talvolta sincrono. Nello stato asincrono, un socket può ricevere notifiche asincrone dal Framework. Tuttavia, durante un'operazione, ad esempio la ricezione o l'invio di dati, il socket diventa sincrono. Ciò significa che il socket non riceverà ulteriori notifiche asincrone fino al completamento dell'operazione sincrona. Poiché consente di passare da una modalità all'altra, è possibile, ad esempio, eseguire una procedura simile alla seguente:

[!code-cpp[NVC_MFCSimpleSocket#2](../mfc/codesnippet/cpp/windows-sockets-how-sockets-with-archives-work_1.cpp)]

Se `CSocket` non è stato implementato come oggetto a due Stati, potrebbe essere possibile ricevere notifiche aggiuntive per lo stesso tipo di evento durante l'elaborazione di una notifica precedente. Ad esempio, è possibile ricevere una `OnReceive` notifica durante l'elaborazione di un oggetto `OnReceive` . Nel frammento di codice precedente, `str` l'estrazione dall'archivio potrebbe causare la ricorsione. Cambiando gli Stati, `CSocket` impedisce la ricorsione impedendo notifiche aggiuntive. La regola generale non è presente nelle notifiche.

> [!NOTE]
> Un `CSocketFile` oggetto può essere usato anche come file (limitato) senza un `CArchive` oggetto. Per impostazione predefinita, il `CSocketFile` parametro *bArchiveCompatible* del costruttore è **true**. Specifica che l'oggetto file deve essere utilizzato con un archivio. Per usare l'oggetto file senza un archivio, passare **false** nel parametro *bArchiveCompatible* .

Nella modalità "archivio compatibile", un `CSocketFile` oggetto fornisce prestazioni migliori e riduce il rischio di un "deadlock". Un deadlock si verifica quando i socket di invio e di ricezione sono in attesa reciprocamente o in attesa di una risorsa comune. Questa situazione può verificarsi se l' `CArchive` oggetto ha funzionato con la `CSocketFile` modalità di esecuzione di un `CFile` oggetto. Con `CFile` , l'archivio può presumere che se riceve un numero di byte minore di quello richiesto, è stata raggiunta la fine del file. Con `CSocketFile` , tuttavia, i dati sono basati su messaggi. il buffer può contenere più messaggi, quindi la ricezione di un numero inferiore al numero di byte richiesti non implica la fine del file. In questo caso l'applicazione non viene bloccata come potrebbe con `CFile` e può continuare a leggere i messaggi dal buffer fino a quando il buffer non è vuoto. La funzione [IsBufferEmpty](../mfc/reference/carchive-class.md#isbufferempty) in `CArchive` è utile per il monitoraggio dello stato del buffer dell'archivio in questo caso.

Per ulteriori informazioni, vedere [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[CObject:: Serialize](../mfc/reference/cobject-class.md#serialize)
