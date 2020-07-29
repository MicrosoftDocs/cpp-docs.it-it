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
ms.openlocfilehash: f428ec597e0e4a56788fae2455eff80b286fda39
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87183084"
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
|[CConnectionPoint:: CConnectionPoint](#cconnectionpoint)|Costruisce un oggetto `CConnectionPoint`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CConnectionPoint:: getconnects](#getconnections)|Recupera tutti i punti di connessione in una mappa di connessione.|
|[CConnectionPoint:: GetContainer](#getcontainer)|Recupera il contenitore del controllo proprietario della mappa di connessione.|
|[CConnectionPoint:: GetIID](#getiid)|Recupera l'ID di interfaccia di un punto di connessione.|
|[CConnectionPoint:: GetMaxConnections](#getmaxconnections)|Recupera il numero massimo di punti di connessione supportati da un controllo.|
|[CConnectionPoint:: GetNextConnection](#getnextconnection)|Recupera un puntatore all'elemento Connection in corrispondenza di *pos*.|
|[CConnectionPoint:: GetStartPosition](#getstartposition)|Avvia un'iterazione della mappa restituendo un valore di posizione che può essere passato a una `GetNextConnection` chiamata.|
|[CConnectionPoint:: onadvise](#onadvise)|Chiamata eseguita dal Framework per stabilire o suddividere le connessioni.|
|[CConnectionPoint:: QuerySinkInterface](#querysinkinterface)|Recupera un puntatore all'interfaccia di sink richiesta.|

## <a name="remarks"></a>Osservazioni

Diversamente dalle normali interfacce OLE, che vengono utilizzate per implementare ed esporre la funzionalità di un controllo OLE, un punto di connessione implementa un'interfaccia in uscita che è in grado di avviare azioni su altri oggetti, ad esempio la generazione di eventi e le notifiche di modifica.

Una connessione è costituita da due parti: l'oggetto che chiama l'interfaccia, denominato "origine" e l'oggetto che implementa l'interfaccia, denominato "sink". Esponendo un punto di connessione, un'origine consente ai sink di stabilire connessioni a se stessa. Tramite il meccanismo del punto di connessione, un oggetto di origine ottiene un puntatore all'implementazione del sink di un set di funzioni membro. Ad esempio, per generare un evento implementato dal sink, l'origine può chiamare il metodo appropriato dell'implementazione del sink.

Per impostazione predefinita, una `COleControl` classe derivata da implementa due punti di connessione: uno per gli eventi e uno per le notifiche di modifica delle proprietà. Queste connessioni vengono utilizzate rispettivamente per la generazione di eventi e per la notifica di un sink (ad esempio, il contenitore del controllo) quando viene modificato un valore della proprietà. Viene inoltre fornito supporto per i controlli OLE per implementare punti di connessione aggiuntivi. Per ogni punto di connessione aggiuntivo implementato nella classe del controllo, è necessario dichiarare una "parte della connessione" che implementi il punto di connessione. Se si implementano uno o più punti di connessione, è necessario dichiarare anche una singola "mappa di connessione" nella classe del controllo.

Nell'esempio seguente viene illustrata una semplice mappa di connessione e un punto di connessione per il `Sample` controllo OLE, costituito da due frammenti di codice: la prima parte dichiara la mappa e il punto di connessione, il secondo implementa la mappa e il punto. Il primo frammento viene inserito nella dichiarazione della classe del controllo, nella **`protected`** sezione:

[!code-cpp[NVC_MFCConnectionPoints#7](../../mfc/codesnippet/cpp/cconnectionpoint-class_1.h)]

Le macro BEGIN_CONNECTION_PART e END_CONNECTION_PART dichiarano una classe incorporata, `XSampleConnPt` derivata da, `CConnectionPoint` che implementa questo particolare punto di connessione. Se si vuole eseguire l'override `CConnectionPoint` di qualsiasi funzione membro o aggiungere funzioni membro personalizzate, dichiararle tra queste due macro. Ad esempio, la macro CONNECTION_IID esegue l'override della `CConnectionPoint::GetIID` funzione membro quando viene inserita tra queste due macro.

Il secondo frammento di codice viene inserito nel file di implementazione (. CPP) della classe del controllo. Questo codice implementa la mappa di connessione, che include il punto di connessione aggiuntivo `SampleConnPt` :

[!code-cpp[NVC_MFCConnectionPoints#2](../../mfc/codesnippet/cpp/cconnectionpoint-class_2.cpp)]

Una volta inseriti questi frammenti di codice, il controllo OLE di esempio espone un punto di connessione per l' `ISampleSink` interfaccia.

In genere, i punti di connessione supportano il "multicast", ovvero la possibilità di trasmettere a più sink connessi alla stessa interfaccia. Nel frammento di codice seguente viene illustrato come eseguire il multicast eseguendo l'iterazione di ogni sink in un punto di connessione:

[!code-cpp[NVC_MFCConnectionPoints#4](../../mfc/codesnippet/cpp/cconnectionpoint-class_3.cpp)]

In questo esempio viene recuperato il set corrente di connessioni nel `SampleConnPt` punto di connessione con una chiamata a `CConnectionPoint::GetConnections` . Scorre quindi le connessioni e chiama `ISampleSink::SinkFunc` su ogni connessione attiva.

Per ulteriori informazioni sull'utilizzo di `CConnectionPoint` , vedere l'articolo [punti di connessione](../../mfc/connection-points.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CConnectionPoint`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="cconnectionpointcconnectionpoint"></a><a name="cconnectionpoint"></a>CConnectionPoint:: CConnectionPoint

Costruisce un oggetto `CConnectionPoint`.

```
CConnectionPoint();
```

## <a name="cconnectionpointgetconnections"></a><a name="getconnections"></a>CConnectionPoint:: getconnects

Chiamare questa funzione per recuperare tutte le connessioni attive per un punto di connessione.

```
const CPtrArray* GetConnections();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una matrice di connessioni attive (sink). Alcuni puntatori della matrice possono essere NULL. Ogni puntatore non NULL in questa matrice può essere convertito in modo sicuro in un puntatore all'interfaccia di sink utilizzando un operatore cast.

## <a name="cconnectionpointgetcontainer"></a><a name="getcontainer"></a>CConnectionPoint:: GetContainer

Chiamata eseguita dal Framework per recuperare l'oggetto `IConnectionPointContainer` per il punto di connessione.

```
virtual LPCONNECTIONPOINTCONTAINER GetContainer();
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un puntatore al contenitore; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere implementata dalla macro BEGIN_CONNECTION_PART.

## <a name="cconnectionpointgetiid"></a><a name="getiid"></a>CConnectionPoint:: GetIID

Chiamata eseguita dal Framework per recuperare l'ID di interfaccia di un punto di connessione.

```
virtual REFIID GetIID() = 0;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'ID di interfaccia del punto di connessione.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per restituire l'ID di interfaccia per questo punto di connessione.

## <a name="cconnectionpointgetmaxconnections"></a><a name="getmaxconnections"></a>CConnectionPoint:: GetMaxConnections

Chiamata eseguita dal Framework per recuperare il numero massimo di connessioni supportate dal punto di connessione.

```
virtual int GetMaxConnections();
```

### <a name="return-value"></a>Valore restituito

Numero massimo di connessioni supportate dal controllo oppure-1 se non è presente alcun limite.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita restituisce-1, che indica nessun limite.

Eseguire l'override di questa funzione se si vuole limitare il numero di sink che possono connettersi al controllo.

## <a name="cconnectionpointgetnextconnection"></a><a name="getnextconnection"></a>CConnectionPoint:: GetNextConnection

Recupera un puntatore all'elemento Connection in corrispondenza di *pos*.

```
LPUNKNOWN GetNextConnection(POSITION& pos) const;
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Specifica un riferimento a un valore di posizione restituito da una `GetNextConnection` chiamata precedente o [GetStartPosition](#getstartposition) .

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento Connection specificato da *pos*o null.

### <a name="remarks"></a>Osservazioni

Questa funzione è particolarmente utile per scorrere tutti gli elementi nella mappa di connessione. Quando si esegue l'iterazione, ignorare tutti i valori NULL restituiti da questa funzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCConnectionPoints#4](../../mfc/codesnippet/cpp/cconnectionpoint-class_3.cpp)]

## <a name="cconnectionpointgetstartposition"></a><a name="getstartposition"></a>CConnectionPoint:: GetStartPosition

Avvia un'iterazione della mappa restituendo un valore di posizione che può essere passato a una chiamata [GetNextConnection](#getnextconnection) .

```
POSITION GetStartPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore di posizione che indica una posizione iniziale per l'iterazione della mappa; o NULL se la mappa è vuota.

### <a name="remarks"></a>Osservazioni

La sequenza di iterazione non è stimabile. Pertanto, il "primo elemento della mappa" non ha un significato speciale.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CConnectionPoint:: GetNextConnection](#getnextconnection).

## <a name="cconnectionpointonadvise"></a><a name="onadvise"></a>CConnectionPoint:: onadvise

Chiamata eseguita dal framework quando viene stabilita o interruppe una connessione.

```
virtual void OnAdvise(BOOL bAdvise);
```

### <a name="parameters"></a>Parametri

*bAdvise*<br/>
TRUE se viene stabilita una connessione. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione.

Eseguire l'override di questa funzione se si desidera una notifica quando i sink si connettono o si disconnettono dal punto di connessione.

## <a name="cconnectionpointquerysinkinterface"></a><a name="querysinkinterface"></a>CConnectionPoint:: QuerySinkInterface

Recupera un puntatore all'interfaccia di sink richiesta.

```
virtual HRESULT QuerySinkInterface(
    LPUNKNOWN pUnkSink,
    void** ppInterface);
```

### <a name="parameters"></a>Parametri

*pUnkSink*<br/>
Identificatore dell'interfaccia di sink richiesta.

*ppInterface*<br/>
Puntatore al puntatore a interfaccia identificato da *pUnkSink*. Se l'oggetto non supporta questa interfaccia, \* *ppInterface* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="see-also"></a>Vedere anche

[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
