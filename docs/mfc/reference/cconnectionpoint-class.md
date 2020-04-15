---
title: Classe CConnectionPoint
ms.date: 11/04/2016
f1_keywords:
- CConnectionPoint
- AFXDISP/CConnectionPoint
- AFXDISP/CConnectionPoint::CConnectionPoint
- AFXDISP/CConnectionPoint::GetConnections
- AFXDISP/CConnectionPoint::GetContainer
- AFXDISP/CConnectionPoint::GetIID
- AFXDISP/CConnectionPoint::GetMaxConnections
- AFXDISP/CConnectionPoint::GetNextConnection
- AFXDISP/CConnectionPoint::GetStartPosition
- AFXDISP/CConnectionPoint::OnAdvise
- AFXDISP/CConnectionPoint::QuerySinkInterface
helpviewer_keywords:
- CConnectionPoint [MFC], CConnectionPoint
- CConnectionPoint [MFC], GetConnections
- CConnectionPoint [MFC], GetContainer
- CConnectionPoint [MFC], GetIID
- CConnectionPoint [MFC], GetMaxConnections
- CConnectionPoint [MFC], GetNextConnection
- CConnectionPoint [MFC], GetStartPosition
- CConnectionPoint [MFC], OnAdvise
- CConnectionPoint [MFC], QuerySinkInterface
ms.assetid: f0f23a1e-5e8c-41a9-aa6c-1a4793b28e8f
ms.openlocfilehash: ce72c156ab31b742a42d2960923fc56afff656c0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369438"
---
# <a name="cconnectionpoint-class"></a>Classe CConnectionPoint

Definisce un tipo speciale di interfaccia utilizzata per comunicare con altri oggetti OLE, denominata "punto di connessione".

## <a name="syntax"></a>Sintassi

```
class CConnectionPoint : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CConnectionPoint::CConnectionPoint](#cconnectionpoint)|Costruisce un oggetto `CConnectionPoint`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CConnectionPoint::GetConnections](#getconnections)|Recupera tutti i punti di connessione in una mappa delle connessioni.|
|[CConnectionPoint::GetContainer](#getcontainer)|Recupera il contenitore del controllo proprietario della mappa delle connessioni.|
|[CConnectionPoint::GetIID](#getiid)|Recupera l'ID di interfaccia di un punto di connessione.|
|[CConnectionPoint::GetMaxConnections](#getmaxconnections)|Recupera il numero massimo di punti di connessione supportati da un controllo.|
|[CConnectionPoint::GetNextConnection](#getnextconnection)|Recupera un puntatore all'elemento di connessione in *pos*.|
|[CConnectionPoint::GetStartPosition](#getstartposition)|Avvia un'iterazione della mappa restituendo un `GetNextConnection` valore POSITION che può essere passato a una chiamata.|
|[CConnectionPoint::OnAdvise](#onadvise)|Chiamato dal framework durante la creazione o l'interruzione delle connessioni.|
|[CConnectionPoint::QuerySinkInterface](#querysinkinterface)|Recupera un puntatore all'interfaccia sink richiesta.|

## <a name="remarks"></a>Osservazioni

A differenza delle normali interfacce OLE, utilizzate per implementare ed esporre la funzionalità di un controllo OLE, un punto di connessione implementa un'interfaccia in uscita in grado di avviare azioni su altri oggetti, ad esempio eventi di generazione e notifiche di modifica.

Una connessione è costituita da due parti: l'oggetto che chiama l'interfaccia, denominato "origine" e l'oggetto che implementa l'interfaccia, denominato "sink". Esponendo un punto di connessione, un'origine consente ai sink di stabilire connessioni a se stessa. Tramite il meccanismo del punto di connessione, un oggetto di origine ottiene un puntatore all'implementazione del sink di un set di funzioni membro. Ad esempio, per generare un evento implementato dal sink, l'origine può chiamare il metodo appropriato dell'implementazione del sink.

Per impostazione `COleControl`predefinita, una classe derivata da un oggetto derivato implementa due punti di connessione: uno per gli eventi e uno per le notifiche di modifica delle proprietà. Queste connessioni vengono utilizzate, rispettivamente, per la generazione di eventi e per la notifica di un sink (ad esempio, il contenitore del controllo) quando un valore della proprietà è stato modificato. Viene inoltre fornito supporto per i controlli OLE per implementare punti di connessione aggiuntivi. Per ogni punto di connessione aggiuntivo implementato nella classe del controllo, è necessario dichiarare una "parte di connessione" che implementa il punto di connessione. Se si implementano uno o più punti di connessione, è inoltre necessario dichiarare una singola "mappa di connessione" nella classe del controllo.

Nell'esempio seguente viene illustrata una mappa `Sample` delle connessioni semplice e un punto di connessione per il controllo OLE, costituito da due frammenti di codice: la prima parte dichiara la mappa delle connessioni e il punto; il secondo implementa questa mappa e il punto. Il primo frammento viene inserito nella dichiarazione della classe del controllo, nella sezione **protected:**

[!code-cpp[NVC_MFCConnectionPoints#7](../../mfc/codesnippet/cpp/cconnectionpoint-class_1.h)]

Le macro BEGIN_CONNECTION_PART e END_CONNECTION_PART dichiarano una classe incorporata, `XSampleConnPt` (derivata da `CConnectionPoint`) che implementa questo particolare punto di connessione. Se si desidera `CConnectionPoint` eseguire l'override di qualsiasi funzione membro o aggiungere funzioni membro personalizzate, dichiararle tra queste due macro. Ad esempio, la macro `CConnectionPoint::GetIID` CONNECTION_IID esegue l'override della funzione membro quando viene inserita tra queste due macro.

Il secondo frammento di codice viene inserito nel file di implementazione (. CPP) della classe di controllo. Questo codice implementa la mappa delle connessioni, `SampleConnPt`che include il punto di connessione aggiuntivo, :

[!code-cpp[NVC_MFCConnectionPoints#2](../../mfc/codesnippet/cpp/cconnectionpoint-class_2.cpp)]

Una volta inseriti questi frammenti di codice, il controllo `ISampleSink` OLE di esempio espone un punto di connessione per l'interfaccia.

In genere, i punti di connessione supportano il "multicasting", ovvero la possibilità di trasmettere a più sink connessi alla stessa interfaccia. Nel frammento di codice seguente viene illustrato come eseguire il multicasting scorrendo ogni sink in un punto di connessione:The following code fragment demonstrates how to accomplish multicasting by iterating through each sink on a connection point:

[!code-cpp[NVC_MFCConnectionPoints#4](../../mfc/codesnippet/cpp/cconnectionpoint-class_3.cpp)]

In questo esempio viene recuperato `SampleConnPt` il set corrente `CConnectionPoint::GetConnections`di connessioni sul punto di connessione con una chiamata a . Scorre quindi le connessioni e `ISampleSink::SinkFunc` le chiamate su ogni connessione attiva.

Per ulteriori informazioni `CConnectionPoint`sull'utilizzo di , vedere l'articolo [Punti di connessione](../../mfc/connection-points.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CConnectionPoint`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="cconnectionpointcconnectionpoint"></a><a name="cconnectionpoint"></a>CConnectionPoint::CConnectionPoint

Costruisce un oggetto `CConnectionPoint`.

```
CConnectionPoint();
```

## <a name="cconnectionpointgetconnections"></a><a name="getconnections"></a>CConnectionPoint::GetConnections

Chiamare questa funzione per recuperare tutte le connessioni attive per un punto di connessione.

```
const CPtrArray* GetConnections();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una matrice di connessioni attive (sinks). Alcuni dei puntatori nella matrice possono essere NULL. Ogni puntatore non NULL in questa matrice può essere convertito in modo sicuro in un puntatore all'interfaccia sink utilizzando un operatore cast.

## <a name="cconnectionpointgetcontainer"></a><a name="getcontainer"></a>CConnectionPoint::GetContainer

Chiamato dal framework per `IConnectionPointContainer` recuperare l'oggetto per il punto di connessione.

```
virtual LPCONNECTIONPOINTCONTAINER GetContainer();
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un puntatore al contenitore; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere implementata dalla macro BEGIN_CONNECTION_PART.

## <a name="cconnectionpointgetiid"></a><a name="getiid"></a>CConnectionPoint::GetIID

Chiamato dal framework per recuperare l'ID di interfaccia di un punto di connessione.

```
virtual REFIID GetIID() = 0;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'ID di interfaccia del punto di connessione.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per restituire l'ID di interfaccia per questo punto di connessione.

## <a name="cconnectionpointgetmaxconnections"></a><a name="getmaxconnections"></a>CConnectionPoint::GetMaxConnections

Chiamato dal framework per recuperare il numero massimo di connessioni supportate dal punto di connessione.

```
virtual int GetMaxConnections();
```

### <a name="return-value"></a>Valore restituito

Il numero massimo di connessioni supportate dal controllo oppure -1 se non è previsto alcun limite.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita restituisce -1, che non indica alcun limite.

Eseguire l'override di questa funzione se si desidera limitare il numero di sink che possono connettersi al controllo.

## <a name="cconnectionpointgetnextconnection"></a><a name="getnextconnection"></a>CConnectionPoint::GetNextConnection

Recupera un puntatore all'elemento di connessione in *pos*.

```
LPUNKNOWN GetNextConnection(POSITION& pos) const;
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Specifica un riferimento a un valore POSITION `GetNextConnection` restituito da una chiamata precedente o [GetStartPosition.](#getstartposition)

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento di connessione specificato da *pos*o NULL.

### <a name="remarks"></a>Osservazioni

Questa funzione è particolarmente utile per scorrere tutti gli elementi nella mappa delle connessioni. Durante l'iterazione, ignorare i valori NUL restituiti da questa funzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCConnectionPoints#4](../../mfc/codesnippet/cpp/cconnectionpoint-class_3.cpp)]

## <a name="cconnectionpointgetstartposition"></a><a name="getstartposition"></a>CConnectionPoint::GetStartPosition

Avvia un'iterazione della mappa restituendo un valore POSITION che può essere passato a una chiamata [GetNextConnection.](#getnextconnection)

```
POSITION GetStartPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che indica una posizione iniziale per l'iterazione della mappa; o NULL se la mappa è vuota.

### <a name="remarks"></a>Osservazioni

La sequenza di iterazione non è prevedibile. pertanto, il "primo elemento nella mappa" non ha un significato speciale.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CConnectionPoint::GetNextConnection](#getnextconnection).

## <a name="cconnectionpointonadvise"></a><a name="onadvise"></a>CConnectionPoint::OnAdvise

Chiamato dal framework quando una connessione viene stabilita o interrotta.

```
virtual void OnAdvise(BOOL bAdvise);
```

### <a name="parameters"></a>Parametri

*bConsigli*<br/>
TRUE, se viene stabilita una connessione; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione.

Eseguire l'override di questa funzione se si desidera ricevere una notifica quando i sink si connettono o si disconnettono dal punto di connessione.

## <a name="cconnectionpointquerysinkinterface"></a><a name="querysinkinterface"></a>CConnectionPoint::QuerySinkInterface

Recupera un puntatore all'interfaccia sink richiesta.

```
virtual HRESULT QuerySinkInterface(
    LPUNKNOWN pUnkSink,
    void** ppInterface);
```

### <a name="parameters"></a>Parametri

*pUnkSink*<br/>
Identificatore dell'interfaccia sink richiesta.

*ppInterface (interfaccia utente)*<br/>
Puntatore al puntatore a interfaccia identificato da *pUnkSink*. Se l'oggetto non supporta \* questa interfaccia, *ppInterface* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
