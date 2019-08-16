---
title: Classe CSocketFile
ms.date: 11/04/2016
f1_keywords:
- CSocketFile
- AFXSOCK/CSocketFile
- AFXSOCK/CSocketFile::CSocketFile
helpviewer_keywords:
- CSocketFile [MFC], CSocketFile
ms.assetid: 7924c098-5f72-40d6-989d-42800a47958f
ms.openlocfilehash: 3b969f81c0c6e1868a66aeaa1c4d9339792062df
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69502456"
---
# <a name="csocketfile-class"></a>Classe CSocketFile

Oggetto `CFile` utilizzato per l'invio e la ricezione di dati su una rete mediante Windows Sockets.

## <a name="syntax"></a>Sintassi

```
class CSocketFile : public CFile
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSocketFile:: CSocketFile](#csocketfile)|Costruisce un oggetto `CSocketFile`.|

## <a name="remarks"></a>Note

A questo scopo, `CSocketFile` è possibile aggiungere `CSocket` l'oggetto a un oggetto. È anche possibile, e in genere, alleghi `CSocketFile` l'oggetto a `CArchive` un oggetto per semplificare l'invio e la ricezione di dati tramite la serializzazione MFC.

Per serializzare (inviare) i dati, è necessario inserirli nell'archivio `CSocketFile` , che chiama le `CSocket` funzioni membro per scrivere i dati nell'oggetto. Per deserializzare (ricevere) i dati, estrarre dall'archivio. In questo modo, l'archivio `CSocketFile` chiama le funzioni membro per leggere i `CSocket` dati dall'oggetto.

> [!TIP]
>  Oltre a `CSocketFile` usare come descritto in questo articolo, è possibile usarlo come oggetto file autonomo, esattamente come è possibile `CFile`con, la relativa classe di base. È inoltre possibile utilizzare `CSocketFile` con qualsiasi funzione di serializzazione MFC basata sull'archivio. Poiché `CSocketFile` non supporta tutte le funzionalità `CFile`di, alcune funzioni di serializzazione MFC predefinite non sono compatibili `CSocketFile`con. Questa operazione è particolarmente valida per `CEditView` la classe. Non tentare di serializzare `CEditView` i dati tramite un `CArchive` oggetto collegato a un `CSocketFile` oggetto utilizzando `CEditView::SerializeRaw`. in alternativa, utilizzare. `CEditView::Serialize` La `SerializeRaw` funzione prevede che l'oggetto file disponga di funzioni, `Seek`ad esempio, che `CSocketFile` non hanno.

Quando si usa `CArchive` con `CSocketFile` e `CSocket`, è possibile che si verifichi una `CSocket::Receive` situazione in cui immette un `PumpMessages(FD_READ)`ciclo (per) in attesa della quantità di byte richiesta. Il motivo è che Windows Sockets consente solo una chiamata ricezione per ogni notifica `CSocketFile` FD_READ `CSocket` , ma e consentire più chiamate ricezione per FD_READ. Se si ottiene un FD_READ quando non sono presenti dati da leggere, l'applicazione si blocca. Se non si ottiene mai un altro FD_READ, l'applicazione interrompe la comunicazione attraverso il socket.

È possibile risolvere questo problema come indicato di seguito. Nel metodo della classe Socket, chiamare `CAsyncSocket::IOCtl(FIONREAD, ...)` prima di chiamare il `Serialize` metodo della classe Message quando i dati previsti da leggere dal socket superano le dimensioni di un pacchetto TCP (unità di trasmissione massima del supporto di rete `OnReceive` , in genere almeno 1096 byte). Se la dimensione dei dati disponibili è inferiore al necessario, attendere la ricezione di tutti i dati e avviare l'operazione di lettura.

Nell'esempio `m_dwExpected` seguente è il numero approssimativo di byte che l'utente prevede di ricevere. Si presuppone che venga dichiarata in un'altra posizione nel codice.

[!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocketfile-class_1.cpp)]

Per ulteriori informazioni, vedere [Windows Sockets in MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: Uso di socket con](../../mfc/windows-sockets-using-sockets-with-archives.md)archivi, nonché dell' [API di Windows Sockets 2](/windows/win32/WinSock/windows-sockets-start-page-2).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CSocketFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsock. h

##  <a name="csocketfile"></a>CSocketFile:: CSocketFile

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
Specifica se l'oggetto file è da usare con un `CArchive` oggetto. Passare false solo se si vuole usare l' `CSocketFile` oggetto in modo autonomo, come si farebbe con un `CFile` oggetto autonomo, con determinate limitazioni. Questo flag modifica il modo `CArchive` `CSocketFile` in cui l'oggetto associato all'oggetto gestisce il buffer per la lettura.

### <a name="remarks"></a>Note

Il distruttore dell'oggetto si dissocia dall'oggetto socket quando l'oggetto esce dall'ambito o viene eliminato.

> [!NOTE]
>  Un `CSocketFile` oggetto può essere usato anche come file (limitato) senza un `CArchive` oggetto. Per impostazione predefinita, `CSocketFile` il parametro *bArchiveCompatible* del costruttore è true. Specifica che l'oggetto file deve essere utilizzato con un archivio. Per usare l'oggetto file senza un archivio, passare FALSE nel parametro *bArchiveCompatible* .

Nella modalità "archivio compatibile", un `CSocketFile` oggetto fornisce prestazioni migliori e riduce il rischio di un "deadlock". Un deadlock si verifica quando i socket di invio e di ricezione sono in attesa l'uno sull'altro o per una risorsa comune. Questa situazione può verificarsi se l' `CArchive` oggetto ha funzionato `CSocketFile` con la modalità di esecuzione di un `CFile` oggetto. Con `CFile`, l'archivio può presumere che se riceve un numero di byte minore di quello richiesto, è stata raggiunta la fine del file.

Con `CSocketFile`, tuttavia, i dati sono basati su messaggi. il buffer può contenere più messaggi, quindi la ricezione di un numero inferiore al numero di byte richiesti non implica la fine del file. In questo caso l'applicazione non viene bloccata come potrebbe con `CFile`e può continuare a leggere i messaggi dal buffer fino a quando il buffer non è vuoto. La funzione [CArchive:: IsBufferEmpty](../../mfc/reference/carchive-class.md#isbufferempty) è utile per il monitoraggio dello stato del buffer dell'archivio in questo caso.

Per ulteriori informazioni sull'utilizzo di `CSocketFile`, vedere gli articoli [Windows Sockets: Uso di socket con](../../mfc/windows-sockets-using-sockets-with-archives.md) archivi [e Windows Sockets: Esempio di socket che utilizzano](../../mfc/windows-sockets-example-of-sockets-using-archives.md)archivi.

## <a name="see-also"></a>Vedere anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncSocket](../../mfc/reference/casyncsocket-class.md)<br/>
[Classe CSocket](../../mfc/reference/csocket-class.md)
