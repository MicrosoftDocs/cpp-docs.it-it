---
description: 'Altre informazioni su: classe CSocketFile'
title: Classe CSocketFile
ms.date: 11/04/2016
f1_keywords:
- CSocketFile
- AFXSOCK/CSocketFile
- AFXSOCK/CSocketFile::CSocketFile
helpviewer_keywords:
- CSocketFile [MFC], CSocketFile
ms.assetid: 7924c098-5f72-40d6-989d-42800a47958f
ms.openlocfilehash: 4ca484545e11502a11acf5f27b00ee2df49fc9d6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318650"
---
# <a name="csocketfile-class"></a>Classe CSocketFile

Oggetto `CFile` utilizzato per l'invio e la ricezione di dati su una rete mediante Windows Sockets.

## <a name="syntax"></a>Sintassi

```
class CSocketFile : public CFile
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSocketFile:: CSocketFile](#csocketfile)|Costruisce un oggetto `CSocketFile`.|

## <a name="remarks"></a>Commenti

`CSocketFile`A questo scopo, è possibile aggiungere l'oggetto a un `CSocket` oggetto. È anche possibile, e in genere, alleghi l' `CSocketFile` oggetto a un `CArchive` oggetto per semplificare l'invio e la ricezione di dati tramite la serializzazione MFC.

Per serializzare (inviare) i dati, è necessario inserirli nell'archivio, che chiama `CSocketFile` le funzioni membro per scrivere i dati nell' `CSocket` oggetto. Per deserializzare (ricevere) i dati, estrarre dall'archivio. In questo modo, l'archivio chiama le `CSocketFile` funzioni membro per leggere i dati dall' `CSocket` oggetto.

> [!TIP]
> Oltre a usare `CSocketFile` come descritto in questo articolo, è possibile usarlo come oggetto file autonomo, esattamente come è possibile con `CFile` , la relativa classe di base. È inoltre possibile utilizzare `CSocketFile` con qualsiasi funzione di serializzazione MFC basata sull'archivio. Poiché non `CSocketFile` supporta tutte le `CFile` funzionalità di, alcune funzioni di serializzazione MFC predefinite non sono compatibili con `CSocketFile` . Questa operazione è particolarmente valida per la `CEditView` classe. Non tentare di serializzare `CEditView` i dati tramite un `CArchive` oggetto collegato a un `CSocketFile` oggetto utilizzando `CEditView::SerializeRaw` . in `CEditView::Serialize` alternativa, utilizzare. La `SerializeRaw` funzione prevede che l'oggetto file disponga di funzioni, ad esempio `Seek` , che non `CSocketFile` hanno.

Quando si usa `CArchive` con `CSocketFile` e `CSocket` , è possibile che si verifichi una situazione `CSocket::Receive` in cui immette un ciclo (per `PumpMessages(FD_READ)` ) in attesa della quantità di byte richiesta. Il motivo è che Windows Sockets consente solo una chiamata ricezione per ogni FD_READ notifica, ma `CSocketFile` e `CSocket` consentire più chiamate ricezione per ogni FD_READ. Se si ottiene un FD_READ quando non sono presenti dati da leggere, l'applicazione si blocca. Se non si ottiene mai un'altra FD_READ, l'applicazione smette di comunicare tramite il socket.

È possibile risolvere questo problema come indicato di seguito. Nel `OnReceive` metodo della classe Socket, chiamare prima di `CAsyncSocket::IOCtl(FIONREAD, ...)` chiamare il `Serialize` metodo della classe Message quando i dati previsti da leggere dal socket superano le dimensioni di un pacchetto TCP (unità di trasmissione massima del supporto di rete, in genere almeno 1096 byte). Se la dimensione dei dati disponibili è inferiore al necessario, attendere la ricezione di tutti i dati e avviare l'operazione di lettura.

Nell'esempio seguente `m_dwExpected` è il numero approssimativo di byte che l'utente prevede di ricevere. Si presuppone che venga dichiarata in un'altra posizione nel codice.

[!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocketfile-class_1.cpp)]

Per ulteriori informazioni, vedere [Windows Sockets in MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md), nonché [API di Windows Sockets 2](/windows/win32/WinSock/windows-sockets-start-page-2).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CSocketFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsock. h

## <a name="csocketfilecsocketfile"></a><a name="csocketfile"></a> CSocketFile:: CSocketFile

Costruisce un oggetto `CSocketFile`.

```
explicit CSocketFile(
    CSocket* pSocket,
    BOOL bArchiveCompatible = TRUE);
```

### <a name="parameters"></a>Parametri

*pSocket*<br/>
Socket da connettersi all' `CSocketFile` oggetto.

*bArchiveCompatible*<br/>
Specifica se l'oggetto file è da usare con un `CArchive` oggetto. Passare FALSE solo se si vuole usare l' `CSocketFile` oggetto in modo autonomo, come si farebbe con un oggetto autonomo `CFile` , con determinate limitazioni. Questo flag modifica il modo `CArchive` in cui l'oggetto associato all' `CSocketFile` oggetto gestisce il buffer per la lettura.

### <a name="remarks"></a>Commenti

Il distruttore dell'oggetto si dissocia dall'oggetto socket quando l'oggetto esce dall'ambito o viene eliminato.

> [!NOTE]
> Un `CSocketFile` oggetto può essere usato anche come file (limitato) senza un `CArchive` oggetto. Per impostazione predefinita, il `CSocketFile` parametro *bArchiveCompatible* del costruttore è true. Specifica che l'oggetto file deve essere utilizzato con un archivio. Per usare l'oggetto file senza un archivio, passare FALSE nel parametro *bArchiveCompatible* .

Nella modalità "archivio compatibile", un `CSocketFile` oggetto fornisce prestazioni migliori e riduce il rischio di un "deadlock". Un deadlock si verifica quando i socket di invio e di ricezione sono in attesa l'uno sull'altro o per una risorsa comune. Questa situazione può verificarsi se l' `CArchive` oggetto ha funzionato con la `CSocketFile` modalità di esecuzione di un `CFile` oggetto. Con `CFile` , l'archivio può presumere che se riceve un numero di byte minore di quello richiesto, è stata raggiunta la fine del file.

Con `CSocketFile` , tuttavia, i dati sono basati su messaggi. il buffer può contenere più messaggi, quindi la ricezione di un numero inferiore al numero di byte richiesti non implica la fine del file. In questo caso l'applicazione non viene bloccata come potrebbe con `CFile` e può continuare a leggere i messaggi dal buffer fino a quando il buffer non è vuoto. La funzione [CArchive:: IsBufferEmpty](../../mfc/reference/carchive-class.md#isbufferempty) è utile per il monitoraggio dello stato del buffer dell'archivio in questo caso.

Per ulteriori informazioni sull'utilizzo di `CSocketFile` , vedere gli articoli [Windows Sockets: utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md) e [Windows Sockets: esempio di socket che utilizzano archivi](../../mfc/windows-sockets-example-of-sockets-using-archives.md).

## <a name="see-also"></a>Vedi anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncSocket](../../mfc/reference/casyncsocket-class.md)<br/>
[Classe CSocket](../../mfc/reference/csocket-class.md)
