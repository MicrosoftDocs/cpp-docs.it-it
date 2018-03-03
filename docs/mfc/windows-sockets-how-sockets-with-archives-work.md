---
title: 'Windows Sockets: Funzionamento dei socket con archivi | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Windows Sockets [MFC], synchronous
- sockets [MFC], synchronous operation
- sockets [MFC], with archives
- synchronous state socket
- Windows Sockets [MFC], with archives
- two-state socket object
ms.assetid: d8ae4039-391d-44f0-a19b-558817affcbb
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1b6ff5f07e3662e61a7ba6260bb90459f3aebd7d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="windows-sockets-how-sockets-with-archives-work"></a>Windows Sockets: funzionamento dei socket con archivi
Questo articolo viene illustrato come un [CSocket](../mfc/reference/csocket-class.md) oggetto, un [CSocketFile](../mfc/reference/csocketfile-class.md) , oggetto e un [CArchive](../mfc/reference/carchive-class.md) oggetto vengono combinate per semplificare l'invio e ricezione di dati tramite Windows Socket.  
  
 L'articolo [Windows Sockets: esempio di socket con gli archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md) presenta il **PacketSerialize** (funzione). L'oggetto di archiviazione nel **PacketSerialize** esempio funziona come un oggetto archivio passato a un MFC [Serialize](../mfc/reference/cobject-class.md#serialize) (funzione). La differenza fondamentale è che per i socket, l'archivio non è collegato a uno standard [CFile](../mfc/reference/cfile-class.md) oggetto (in genere associata a un file su disco) ma a un `CSocketFile` oggetto. Invece di connettersi a un file su disco, il `CSocketFile` oggetto si connette a un `CSocket` oggetto.  
  
 Oggetto `CArchive` oggetto gestisce un buffer. Quando il buffer di un archivio di memorizzazione (invio) è pieno, un oggetto associato `CFile` oggetto scrive il contenuto del buffer. Svuotamento del buffer di un archivio collegato a un socket è equivalente all'invio di un messaggio. Quando il buffer di un archivio di caricamento (ricezione) è pieno, il `CFile` oggetto termina la lettura fino a quando il buffer sarà nuovamente disponibile.  
  
 Classe `CSocketFile` deriva da `CFile`, ma non supporta [CFile](../mfc/reference/cfile-class.md) funzioni membro, ad esempio le funzioni di posizionamento (`Seek`, `GetLength`, `SetLength`e così via), il blocco di funzioni ( `LockRange`, `UnlockRange`), o `GetPosition` (funzione). Tutti i [CSocketFile](../mfc/reference/csocketfile-class.md) oggetto è necessario eseguire la scrittura o la lettura delle sequenze di byte da o verso l'oggetto associato `CSocket` oggetto. Poiché non è coinvolto un file, operazioni, ad esempio `Seek` e `GetPosition` non ha senso. `CSocketFile`derivato da `CFile`, pertanto sarebbe normalmente ereditare tutte le funzioni membro. Per evitare questo problema, il non supportato `CFile` funzioni membro sottoposto a override in `CSocketFile` per generare un [eccezione CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md).  
  
 Il `CSocketFile` oggetto chiama le funzioni di membro relativo `CSocket` oggetto per inviare o ricevere dati.  
  
 Nella figura seguente mostra le relazioni tra questi oggetti su entrambi i lati della comunicazione.  
  
 ![CArchive, CSocketFile e CSocket](../mfc/media/vc38ia1.gif "vc38ia1")  
CArchive, CSocketFile e CSocket  
  
 Lo scopo di questa complessità evidente consiste nel non richiedono la necessità di gestire manualmente i dettagli del socket. Creare il socket, il file e l'archivio e quindi iniziare l'invio o ricezione dati inserirlo nell'archivio o estraendolo dall'archivio. [CArchive](../mfc/reference/carchive-class.md), [CSocketFile](../mfc/reference/csocketfile-class.md), e [CSocket](../mfc/reference/csocket-class.md) gestisce i dettagli in background.  
  
 A `CSocket` è effettivamente un oggetto di due stati: in alcuni casi asincrona (lo stato normale) e talvolta sincrona. Nello stato asincrono, un socket può ricevere notifiche asincrone dal framework. Tuttavia, durante un'operazione, ad esempio ricevendo o inviando dati socket diventa sincrono. Ciò significa che il socket riceverà senza ulteriori notifiche asincrone fino al completamento dell'operazione sincrona. Il passaggio da modalità, è possibile, ad esempio, eseguire simile al seguente:  
  
 [!code-cpp[NVC_MFCSimpleSocket#2](../mfc/codesnippet/cpp/windows-sockets-how-sockets-with-archives-work_1.cpp)]  
  
 Se `CSocket` non sono stati implementati come un oggetto di due stati, potrebbe essere possibile ricevere altre notifiche per lo stesso tipo di evento, mentre si elabora una notifica precedente. Ad esempio, si potrebbe ottenere un `OnReceive` notifica durante l'elaborazione di un `OnReceive`. Nel frammento di codice precedente, l'estrazione `str` dall'archivio potrebbe causare una ricorsione. Passando stati, `CSocket` impedisce la ricorsione impedendo ulteriori notifiche. La regola generale non è nessuna notifica all'interno delle notifiche.  
  
> [!NOTE]
>  Oggetto `CSocketFile` può anche essere utilizzato come un file (limitato) senza un `CArchive` oggetto. Per impostazione predefinita, il `CSocketFile` del costruttore `bArchiveCompatible` parametro **TRUE**. Specifica che l'oggetto file sia per l'utilizzo con un archivio. Per utilizzare l'oggetto file senza un archivio, passare **FALSE** nel `bArchiveCompatible` parametro.  
  
 In modalità "archivio compatible" un `CSocketFile` oggetto garantisce prestazioni migliori e riduce il rischio di un blocco "critico". Si verifica un deadlock quando entrambi i socket di invio e ricezione sono in attesa di loro, o in attesa di una risorsa comune. Questa situazione può verificarsi se il `CArchive` oggetto collaborato con il `CSocketFile` esattamente come è visualizzato con un `CFile` oggetto. Con `CFile`, l'archivio può supporre che se riceve un numero di byte quello richiesto, è stata raggiunta la fine del file. Con `CSocketFile`, tuttavia, dati sono basato su messaggi; il buffer può contenere più messaggi, pertanto la ricezione inferiore al numero di byte richiesti non implica la fine del file. L'applicazione non è bloccata in questo caso come farebbe con `CFile`, e può continuare a leggere i messaggi dal buffer fino a quando il buffer è vuoto. Il [IsBufferEmpty](../mfc/reference/carchive-class.md#isbufferempty) funzionare in `CArchive` è utile per monitorare lo stato del buffer dell'archivio in questo caso.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets di MFC](../mfc/windows-sockets-in-mfc.md)   
 [CObject:: Serialize](../mfc/reference/cobject-class.md#serialize)

