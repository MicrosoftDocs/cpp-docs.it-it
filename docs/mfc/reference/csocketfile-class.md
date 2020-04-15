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
ms.openlocfilehash: 83810a05925e5c8302240b61d95c131fdd78b426
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318166"
---
# <a name="csocketfile-class"></a>Classe CSocketFile

Oggetto `CFile` utilizzato per l'invio e la ricezione di dati su una rete mediante Windows Sockets.

## <a name="syntax"></a>Sintassi

```
class CSocketFile : public CFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[FileCSocket::CSocketFile](#csocketfile)|Costruisce un oggetto `CSocketFile`.|

## <a name="remarks"></a>Osservazioni

A tale `CSocketFile` scopo, `CSocket` è possibile associare l'oggetto a un oggetto. È inoltre possibile, e in `CSocketFile` genere, `CArchive` collegare l'oggetto a un oggetto per semplificare l'invio e la ricezione di dati utilizzando la serializzazione MFC.

Per serializzare (inviare) i dati, è `CSocketFile` necessario inserirlo `CSocket` nell'archivio, che chiama le funzioni membro per scrivere i dati nell'oggetto. Per deserializzare (ricevere) i dati, estrarre dall'archivio. In questo modo `CSocketFile` l'archivio chiamare `CSocket` le funzioni membro per leggere i dati dall'oggetto.

> [!TIP]
> Oltre a `CSocketFile` utilizzare come descritto di seguito, è possibile utilizzarlo come `CFile`oggetto file autonomo, proprio come è possibile con , la relativa classe base. È inoltre `CSocketFile` possibile utilizzare con qualsiasi funzione di serializzazione MFC basata su archivio. Poiché `CSocketFile` non supporta `CFile`tutte le funzionalità di MFC, alcune `CSocketFile`funzioni di serializzazione MFC predefinite non sono compatibili con . Questo è particolarmente `CEditView` vero per la classe. Non tentare di `CEditView` serializzare `CArchive` i dati `CSocketFile` tramite `CEditView::SerializeRaw`un oggetto associato a un oggetto utilizzando ; utilizzare `CEditView::Serialize` invece. La `SerializeRaw` funzione prevede che l'oggetto file `Seek`abbia `CSocketFile` funzioni, ad esempio , che non dispongono.

Quando si `CArchive` `CSocketFile` utilizza `CSocket`with e , `CSocket::Receive` è possibile che `PumpMessages(FD_READ)`si verifichi una situazione in cui entra in un ciclo (da ) in attesa della quantità di byte richiesta. Ciò è dovuto al fatto che i socket `CSocketFile` di `CSocket` Windows consentono una sola chiamata recv per notifica di FD_READ, ma e consentono più chiamate recv per FD_READ. Se si ottiene un FD_READ quando non sono presenti dati da leggere, l'applicazione si blocca. Se non si ottiene mai un altro FD_READ, l'applicazione smette di comunicare tramite il socket.

È possibile risolvere questo problema come indicato di seguito. Nel `OnReceive` metodo della classe socket, chiamare `CAsyncSocket::IOCtl(FIONREAD, ...)` `Serialize` prima di chiamare il metodo della classe messaggio quando i dati previsti da leggere dal socket superano la dimensione di un pacchetto TCP (unità di trasmissione massima del supporto di rete, in genere almeno 1096 byte). Se le dimensioni dei dati disponibili sono inferiori a quelle necessarie, attendere che tutti i dati vengano ricevuti e quindi avviare l'operazione di lettura.

Nell'esempio seguente, `m_dwExpected` è il numero approssimativo di byte che l'utente prevede di ricevere. Si presuppone che venga dichiarato in un altro punto del codice.

[!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocketfile-class_1.cpp)]

Per ulteriori informazioni, vedere [Windows Sockets in MFC](../../mfc/windows-sockets-in-mfc.md), Windows [Sockets: Using Sockets with Archives](../../mfc/windows-sockets-using-sockets-with-archives.md), nonché API di [Windows Sockets 2](/windows/win32/WinSock/windows-sockets-start-page-2).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CSocketFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsock.h

## <a name="csocketfilecsocketfile"></a><a name="csocketfile"></a>FileCSocket::CSocketFile

Costruisce un oggetto `CSocketFile`.

```
explicit CSocketFile(
    CSocket* pSocket,
    BOOL bArchiveCompatible = TRUE);
```

### <a name="parameters"></a>Parametri

*pSocket*<br/>
Socket da collegare `CSocketFile` all'oggetto.

*bArchiveCompatible*<br/>
Specifica se l'oggetto file deve `CArchive` essere utilizzato con un oggetto. Passare FALSE solo se si `CSocketFile` desidera utilizzare l'oggetto in modo autonomo `CFile` come si farebbe con un oggetto autonomo, con alcune limitazioni. Questo flag modifica `CArchive` il modo `CSocketFile` in cui l'oggetto associato all'oggetto gestisce il buffer per la lettura.

### <a name="remarks"></a>Osservazioni

Il distruttore dell'oggetto si dissocia dall'oggetto socket quando l'oggetto esce dall'ambito o viene eliminato.

> [!NOTE]
> Un `CSocketFile` oggetto può essere utilizzato anche come `CArchive` file (limitato) senza un oggetto. Per impostazione `CSocketFile` predefinita, il parametro *bArchiveCompatible* del costruttore è TRUE. Specifica che l'oggetto file deve essere utilizzato con un archivio. Per utilizzare l'oggetto file senza un archivio, passare FALSE nel parametro *bArchiveCompatible.*

Nella sua modalità "compatibile `CSocketFile` con l'archivio", un oggetto fornisce prestazioni migliori e riduce il pericolo di un "deadlock". Un deadlock si verifica quando entrambi i socket di invio e ricezione sono in attesa l'uno sull'altro o per una risorsa comune. Questa situazione può `CArchive` verificarsi se `CSocketFile` l'oggetto ha `CFile` lavorato con il modo in cui avviene con un oggetto. Con `CFile`, l'archivio può presupporre che se riceve un numero di byte inferiore a quello richiesto, è stata raggiunta la fine del file.

Con `CSocketFile`, tuttavia, i dati sono basati su messaggi; il buffer può contenere più messaggi, pertanto la ricezione di un numero inferiore al numero di byte richiesti non implica la fine del file. L'applicazione non si blocca in `CFile`questo caso come potrebbe con , e può continuare a leggere i messaggi dal buffer fino a quando il buffer non è vuoto. La funzione [CArchive::IsBufferEmpty](../../mfc/reference/carchive-class.md#isbufferempty) è utile per monitorare lo stato del buffer dell'archivio in questo caso.

Per ulteriori informazioni sull'utilizzo di `CSocketFile`, vedere gli articoli Windows [Sockets: Using Sockets with Archives](../../mfc/windows-sockets-using-sockets-with-archives.md) and Windows [Sockets: Example of Sockets Using Archives](../../mfc/windows-sockets-example-of-sockets-using-archives.md).

## <a name="see-also"></a>Vedere anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncSocket](../../mfc/reference/casyncsocket-class.md)<br/>
[Classe CSocket](../../mfc/reference/csocket-class.md)
