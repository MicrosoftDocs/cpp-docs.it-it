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
ms.openlocfilehash: f3fa73320ae34283b0cdac559111a53a879c031c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62324051"
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
|[CSocketFile::CSocketFile](#csocketfile)|Costruisce un oggetto `CSocketFile`.|

## <a name="remarks"></a>Note

È possibile collegare il `CSocketFile` dell'oggetto a un `CSocket` oggetto per questo scopo. È anche possibile e in genere, collegare il `CSocketFile` dell'oggetto a un `CArchive` oggetto per semplificare l'invio e ricezione di dati usando la serializzazione di MFC.

Per serializzare i dati (trasmissione), viene inserito nell'archivio, che chiama `CSocketFile` alle funzioni membro di scrivere i dati di `CSocket` oggetto. Per deserializzare (ricezione), dati estrarre dall'archivio. In questo modo, l'archivio di chiamare `CSocketFile` funzioni membro per leggere i dati di `CSocket` oggetto.

> [!TIP]
>  Oltre a utilizzare `CSocketFile` come descritto in questo caso, è possibile usare, come un oggetto file autonomo, proprio come con `CFile`, la relativa classe di base. È anche possibile usare `CSocketFile` con eventuali funzioni di serializzazione MFC basate su archivio. Poiché `CSocketFile` non supporta tutte `CFile`di serializzare la funzionalità, alcune predefinite MFC non sono compatibili con le funzioni `CSocketFile`. Ciò vale in particolare il `CEditView` classe. Non è consigliabile provare a serializzare `CEditView` i dati tramite un `CArchive` oggetto connesso a un `CSocketFile` dell'oggetto usando `CEditView::SerializeRaw`; usare `CEditView::Serialize` invece. Il `SerializeRaw` funzione prevede che l'oggetto file di funzioni, ad esempio `Seek`, che `CSocketFile` non dispone.

Quando si usa `CArchive` con `CSocketFile` e `CSocket`, è possibile che si verifichi una situazione in cui `CSocket::Receive` entra in un ciclo (da `PumpMessages(FD_READ)`) in attesa per il numero di byte. Infatti, socket di Windows consentono solo una chiamata di ricezione per ricevere una notifica FD_READ, ma `CSocketFile` e `CSocket` consentono più chiamate di ricezione per ogni FD_READ. Se si verifica un FD_READ quando non sono presenti dati da leggere, si blocca l'applicazione. Se non si verifica mai FD_READ un'altra, l'applicazione interrompe la comunicazione tramite socket.

È possibile risolvere questo problema, come indicato di seguito. Nel `OnReceive` metodo della classe socket, chiamata `CAsyncSocket::IOCtl(FIONREAD, ...)` prima di chiamare il `Serialize` metodo della classe messaggio quando i dati previsti per essere letti dal socket superano le dimensioni di un pacchetto TCP (unità massima di trasmissione del supporto di rete in genere 1096 almeno byte). Se la dimensione dei dati disponibili è inferiore al necessario, attendere che tutti i dati da ricevere e solo a questo punto avviare l'operazione di lettura.

Nell'esempio seguente, `m_dwExpected` è il numero approssimativo di byte che l'utente si aspetta di ricevere. Si presuppone che si dichiararla altrove nel codice.

[!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocketfile-class_1.cpp)]

Per altre informazioni, vedere [socket di Windows in MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md), nonché [API Windows Sockets versione 2](/windows/desktop/WinSock/windows-sockets-start-page-2).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CSocketFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** AfxSock

##  <a name="csocketfile"></a>  CSocketFile::CSocketFile

Costruisce un oggetto `CSocketFile`.

```
explicit CSocketFile(
    CSocket* pSocket,
    BOOL bArchiveCompatible = TRUE);
```

### <a name="parameters"></a>Parametri

*pSocket*<br/>
Il socket a cui connettersi il `CSocketFile` oggetto.

*bArchiveCompatible*<br/>
Specifica se l'oggetto file è per l'uso con un `CArchive` oggetto. Passare FALSE solo se si desidera utilizzare il `CSocketFile` dell'oggetto in modo autonomo come si farebbe autonoma `CFile` oggetto, con alcune limitazioni. Questo flag viene modificato il `CArchive` oggetto associato ai `CSocketFile` oggetto gestisce il buffer per la lettura.

### <a name="remarks"></a>Note

Il distruttore dell'oggetto viene annullata l'associazione dall'oggetto socket quando l'oggetto esce dall'ambito o viene eliminato.

> [!NOTE]
>  Oggetto `CSocketFile` può essere utilizzato anche come un file (limitato) senza una `CArchive` oggetto. Per impostazione predefinita, il `CSocketFile` del costruttore *bArchiveCompatible* parametro è TRUE. Specifica che l'oggetto file sia per l'uso con un archivio. Per usare l'oggetto file senza un archivio, passare FALSE nel *bArchiveCompatible* parametro.

In modalità "compatible archivio", un `CSocketFile` oggetto offre prestazioni migliori e riduce il rischio di "deadlock". Quando entrambi i socket di invio e ricezione sono in attesa tra loro o per una risorsa comune si verifica un deadlock. Questa situazione può verificarsi se il `CArchive` oggetto ha collaborato con i `CSocketFile` esattamente come è visualizzato con un `CFile` oggetto. Con `CFile`, l'archivio può supporre che, se riceve un numero di byte quello richiesto, la fine del file è stato raggiunto.

Con `CSocketFile`, tuttavia, dei dati sono basato su messaggi; il buffer può contenere più messaggi, pertanto la ricezione di un valore più basso rispetto al numero di byte richiesto non implica fine del file. L'applicazione non vengono bloccati in questo caso come potrebbe accadere con `CFile`, e può continuare a leggere i messaggi dal buffer fino a quando il buffer è vuoto. Il [CArchive::IsBufferEmpty](../../mfc/reference/carchive-class.md#isbufferempty) funzione è utile per monitorare lo stato del buffer dell'archivio in questo caso.

Per altre informazioni sull'uso delle `CSocketFile`, vedere gli articoli [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md) e [Windows Sockets: Esempio di socket che utilizzano archivi](../../mfc/windows-sockets-example-of-sockets-using-archives.md).

## <a name="see-also"></a>Vedere anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncSocket](../../mfc/reference/casyncsocket-class.md)<br/>
[Classe CSocket](../../mfc/reference/csocket-class.md)
