---
title: Mappe di connessione
ms.date: 11/04/2016
helpviewer_keywords:
- connection maps
ms.assetid: 1f25a9bc-6d09-4614-99cf-dc38e8ddfa73
ms.openlocfilehash: 947cd09023ef4028a32db8e2e4e8b33f7e04e0dd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374798"
---
# <a name="connection-maps"></a>Mappe di connessione

I controlli OLE sono in grado di esporre interfacce ad altre applicazioni. Queste interfacce consentono solo l'accesso da un contenitore in tale controllo. Se un controllo OLE desidera accedere alle interfacce esterne di altri oggetti OLE, è necessario stabilire un punto di connessione. Questo punto di connessione consente a un controllo l'accesso in uscita a mappe di invio esterne, ad esempio mappe eventi o funzioni di notifica.

La libreria Microsoft Foundation Class offre un modello di programmazione che supporta i punti di connessione. In questo modello, le "mappe di connessione" vengono utilizzate per designare interfacce o punti di connessione per il controllo OLE. Le mappe di connessione contengono una macro per ogni punto di connessione. Per altre informazioni sulle mappe di connessione, vedere la classe [CConnectionPoint.For](../../mfc/reference/cconnectionpoint-class.md) more information on connection maps, see the CConnectionPoint class.

In genere, un controllo supporterà solo due punti di connessione: uno per gli eventi e uno per le notifiche delle proprietà. Questi vengono implementati dalla `COleControl` classe base e non richiedono alcun lavoro aggiuntivo da parte del writer del controllo. Eventuali punti di connessione aggiuntivi che si desidera implementare nella classe devono essere aggiunti manualmente. Per supportare le mappe di connessione e punti, MFC fornisce le macro seguenti:

### <a name="connection-map-declaration-and-demarcation"></a>Dichiarazione e demarcazione della mappa di connessioneConnection Map Declaration and Demarcation

|||
|-|-|
|[BEGIN_CONNECTION_PART](#begin_connection_part)|Dichiara una classe incorporata che implementa un punto di connessione aggiuntivo (deve essere utilizzato nella dichiarazione di classe).|
|[END_CONNECTION_PART](#end_connection_part)|Termina la dichiarazione di un punto di connessione (deve essere utilizzato nella dichiarazione di classe).|
|[CONNECTION_IID](#connection_iid)|Specifica l'ID di interfaccia del punto di connessione del controllo.|
|[DECLARE_CONNECTION_MAP](#declare_connection_map)|Dichiara che una mappa di connessione verrà utilizzata in una classe (deve essere utilizzata nella dichiarazione di classe).|
|[BEGIN_CONNECTION_MAP](#begin_connection_map)|Avvia la definizione di una mappa delle connessioni (deve essere utilizzata nell'implementazione della classe).|
|[END_CONNECTION_MAP](#end_connection_map)|Termina la definizione di una mappa di connessione (deve essere utilizzata nell'implementazione della classe).|
|[CONNECTION_PART](#connection_part)|Specifica un punto di connessione nella mappa di connessione del controllo.|

Le funzioni seguenti consentono a un sink di stabilire e disconnettere una connessione utilizzando i punti di connessione:

### <a name="initializationtermination-of-connection-points"></a>Inizializzazione/Terminazione dei punti di connessione

|||
|-|-|
|[AfxConnectionAdvise](#afxconnectionadvise)|Stabilisce una connessione tra un'origine e un sink.|
|[AfxConnectionUnadvise](#afxconnectionunadvise)|Interrompe una connessione tra un'origine e un sink.|

## <a name="begin_connection_part"></a><a name="begin_connection_part"></a>BEGIN_CONNECTION_PART

Utilizzare la macro BEGIN_CONNECTION_PART per iniziare la definizione di punti di connessione aggiuntivi oltre i punti di connessione di eventi e proprietà.

```
BEGIN_CONNECTION_PART(theClass, localClass)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Specifica il nome della classe del controllo di cui si trova il punto di connessione.

*localClass*<br/>
Specifica il nome della classe locale che implementa il punto di connessione.

### <a name="remarks"></a>Osservazioni

Nel file di dichiarazione (h) che definisce le funzioni membro per la classe, avviare il punto di connessione con la macro BEGIN_CONNECTION_PART, quindi aggiungere la macro CONNECTION_IID e tutte le altre funzioni membro che si desidera implementare e completare la mappa dei punti di connessione con la macro END_CONNECTION_PART.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="end_connection_part"></a><a name="end_connection_part"></a>END_CONNECTION_PART

Termina la dichiarazione del punto di connessione.

```
END_CONNECTION_PART(localClass)
```

### <a name="parameters"></a>Parametri

*localClass*<br/>
Specifica il nome della classe locale che implementa il punto di connessione.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="connection_iid"></a><a name="connection_iid"></a>CONNECTION_IID

Utilizzare tra le macro BEGIN_CONNECTION_PART e END_CONNECTION_PART per definire un ID di interfaccia per un punto di connessione supportato dal controllo OLE.

```
CONNECTION_IID(iid)
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
ID dell'interfaccia chiamata dal punto di connessione.

### <a name="remarks"></a>Osservazioni

L'argomento *iid* è un ID di interfaccia utilizzato per identificare l'interfaccia che il punto di connessione chiamerà sui sink connessi. Ad esempio:

[!code-cpp[NVC_MFCConnectionPoints#10](../../mfc/codesnippet/cpp/connection-maps_1.h)]

specifica un punto di `ISinkInterface` connessione che chiama l'interfaccia.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="declare_connection_map"></a><a name="declare_connection_map"></a>DECLARE_CONNECTION_MAP

Ogni `COleControl`classe derivata dal codice nel programma può fornire una mappa delle connessioni per specificare punti di connessione aggiuntivi supportati dal controllo.

```
DECLARE_CONNECTION_MAP()
```

### <a name="remarks"></a>Osservazioni

Se il controllo supporta punti aggiuntivi, utilizzare la macro DECLARE_CONNECTION_MAP alla fine della dichiarazione di classe. Quindi, nel file cpp che definisce le funzioni membro per la classe, utilizzare la macro BEGIN_CONNECTION_MAP, CONNECTION_PART macro per ognuno dei punti di connessione del controllo e la macro END_CONNECTION_MAP per dichiarare la fine della mappa di connessione.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="begin_connection_map"></a><a name="begin_connection_map"></a>BEGIN_CONNECTION_MAP

Ogni classe derivata da `COleControl` nel programma può fornire una mappa di connessioni per specificare i punti di connessione che il controllo supporterà.

```
BEGIN_CONNECTION_MAP(theClass, theBase)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Specifica il nome della classe del controllo a cui appartiene la mappa delle connessioni.

*theBase*<br/>
Specifica il nome della classe base di *theClass*.

### <a name="remarks"></a>Osservazioni

Nell'implementazione (. CPP) che definisce le funzioni membro per la classe, avviare la mappa di connessione con la macro BEGIN_CONNECTION_MAP, quindi aggiungere voci di macro per ogni punto di connessione utilizzando la macro [CONNECTION_PART.](#connection_part) Infine, completare la mappa di connessione con la macro [END_CONNECTION_MAP.](#end_connection_map)

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="end_connection_map"></a><a name="end_connection_map"></a>END_CONNECTION_MAP

Termina la definizione della mappa delle connessioni.

```
END_CONNECTION_MAP()
```

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="connection_part"></a><a name="connection_part"></a>CONNECTION_PART

Esegue il mapping di un punto di connessione per il controllo OLE a un ID di interfaccia specifico.

```
CONNECTION_PART(theClass, iid, localClass)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Specifica il nome della classe del controllo di cui si trova il punto di connessione.

*Iid*<br/>
ID dell'interfaccia chiamata dal punto di connessione.

*localClass*<br/>
Specifica il nome della classe locale che implementa il punto di connessione.

### <a name="remarks"></a>Osservazioni

Ad esempio:

[!code-cpp[NVC_MFCConnectionPoints#2](../../mfc/codesnippet/cpp/connection-maps_2.cpp)]

implementa una mappa di connessione, con `IID_ISinkInterface` un punto di connessione, che chiama l'interfaccia .

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="afxconnectionadvise"></a><a name="afxconnectionadvise"></a>AfxConnectionAdvise

Chiamare questa funzione per stabilire una connessione tra un'origine, specificata da *pUnkSrc*, e un sink , specificato da *pUnkSink*.

```
BOOL AFXAPI AfxConnectionAdvise(
    LPUNKNOWN pUnkSrc,
    REFIID iid,
    LPUNKNOWN pUnkSink,
    BOOL bRefCount,
    DWORD FAR* pdwCookie);
```

### <a name="parameters"></a>Parametri

*pUnkSrc*<br/>
Puntatore all'oggetto che chiama l'interfaccia.

*pUnkSink*<br/>
Puntatore all'oggetto che implementa l'interfaccia.

*Iid*<br/>
ID dell'interfaccia della connessione.

*bConteggioRiferimento*<br/>
TRUE indica che la creazione della connessione deve causare l'incremento del conteggio dei riferimenti di *pUnkSink.* FALSE indica che il conteggio dei riferimenti non deve essere incrementato.

*pdwCookie*<br/>
Puntatore a un DWORD in cui viene restituito un identificatore di connessione. Questo valore deve essere passato come `AfxConnectionUnadvise` parametro *dwCookie* a quando si disconnette la connessione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stata stabilita una connessione; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCConnectionPoints#8](../../mfc/codesnippet/cpp/connection-maps_3.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="afxconnectionunadvise"></a><a name="afxconnectionunadvise"></a>AfxConnectionUnadvise

Chiamare questa funzione per disconnettere una connessione tra un'origine, specificata da *pUnkSrc*, e un sink , specificato da *pUnkSink*.

```
BOOL AFXAPI AfxConnectionUnadvise(
    LPUNKNOWN pUnkSrc,
    REFIID iid,
    LPUNKNOWN pUnkSink,
    BOOL bRefCount,
    DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*pUnkSrc*<br/>
Puntatore all'oggetto che chiama l'interfaccia.

*pUnkSink*<br/>
Puntatore all'oggetto che implementa l'interfaccia.

*Iid*<br/>
ID dell'interfaccia del punto di connessione.

*bConteggioRiferimento*<br/>
TRUE indica che la disconnessione della connessione deve causare la decrementazione del conteggio dei riferimenti di *pUnkSink.* FALSE indica che il conteggio dei riferimenti non deve essere decrementato.

*dwCookie (Cookie)*<br/>
Identificatore di connessione `AfxConnectionAdvise`restituito da .

### <a name="return-value"></a>Valore restituito

Diverso da zero se una connessione è stata disconnessa; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCConnectionPoints#9](../../mfc/codesnippet/cpp/connection-maps_4.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
