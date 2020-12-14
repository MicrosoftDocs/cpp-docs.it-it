---
description: 'Altre informazioni su: mappe di connessione'
title: Mappe di connessione
ms.date: 11/04/2016
helpviewer_keywords:
- connection maps
ms.assetid: 1f25a9bc-6d09-4614-99cf-dc38e8ddfa73
ms.openlocfilehash: 61d2e7023ab97aa00952aee4786b34e60ba57af7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345251"
---
# <a name="connection-maps"></a>Mappe di connessione

I controlli OLE sono in grado di esporre interfacce ad altre applicazioni. Queste interfacce consentono solo l'accesso da un contenitore a tale controllo. Se un controllo OLE desidera accedere a interfacce esterne di altri oggetti OLE, è necessario stabilire un punto di connessione. Questo punto di connessione consente di controllare l'accesso in uscita a mappe di invio esterne, ad esempio mappe eventi o funzioni di notifica.

Il libreria Microsoft Foundation Class offre un modello di programmazione che supporta i punti di connessione. In questo modello le "mappe di connessione" vengono utilizzate per designare le interfacce o i punti di connessione per il controllo OLE. Le mappe di connessione contengono una macro per ogni punto di connessione. Per ulteriori informazioni sulle mappe di connessione, vedere la classe [CConnectionPoint](../../mfc/reference/cconnectionpoint-class.md) .

In genere, un controllo supporta solo due punti di connessione: uno per gli eventi e uno per le notifiche delle proprietà. Sono implementati dalla `COleControl` classe di base e non richiedono alcun lavoro aggiuntivo da parte del writer del controllo. Eventuali punti di connessione aggiuntivi che si desidera implementare nella classe devono essere aggiunti manualmente. Per supportare le mappe e i punti di connessione, MFC fornisce le macro seguenti:

### <a name="connection-map-declaration-and-demarcation"></a>Dichiarazione e delimitazione della mappa di connessione

|Nome|Description|
|-|-|
|[BEGIN_CONNECTION_PART](#begin_connection_part)|Dichiara una classe incorporata che implementa un punto di connessione aggiuntivo (deve essere utilizzato nella dichiarazione di classe).|
|[END_CONNECTION_PART](#end_connection_part)|Termina la dichiarazione di un punto di connessione (deve essere utilizzato nella dichiarazione di classe).|
|[CONNECTION_IID](#connection_iid)|Specifica l'ID di interfaccia del punto di connessione del controllo.|
|[DECLARE_CONNECTION_MAP](#declare_connection_map)|Dichiara che una mappa di connessione verrà utilizzata in una classe (deve essere utilizzata nella dichiarazione di classe).|
|[BEGIN_CONNECTION_MAP](#begin_connection_map)|Inizia la definizione di una mappa di connessione (deve essere utilizzata nell'implementazione della classe).|
|[END_CONNECTION_MAP](#end_connection_map)|Termina la definizione di una mappa di connessione (deve essere utilizzata nell'implementazione della classe).|
|[CONNECTION_PART](#connection_part)|Specifica un punto di connessione nella mappa di connessione del controllo.|

Le funzioni seguenti consentono a un sink di stabilire e disconnettere una connessione utilizzando punti di connessione:

### <a name="initializationtermination-of-connection-points"></a>Inizializzazione/terminazione dei punti di connessione

|Nome|Description|
|-|-|
|[AfxConnectionAdvise](#afxconnectionadvise)|Stabilisce una connessione tra un'origine e un sink.|
|[AfxConnectionUnadvise](#afxconnectionunadvise)|Interrompe una connessione tra un'origine e un sink.|

## <a name="begin_connection_part"></a><a name="begin_connection_part"></a> BEGIN_CONNECTION_PART

Utilizzare la macro BEGIN_CONNECTION_PART per iniziare la definizione di punti di connessione aggiuntivi oltre i punti di connessione di notifica di eventi e proprietà.

```
BEGIN_CONNECTION_PART(theClass, localClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Specifica il nome della classe del controllo il cui punto di connessione è.

*localClass*<br/>
Specifica il nome della classe locale che implementa il punto di connessione.

### <a name="remarks"></a>Commenti

Nel file di dichiarazione (. h) che definisce le funzioni membro per la classe, avviare il punto di connessione con la macro BEGIN_CONNECTION_PART, quindi aggiungere la macro CONNECTION_IID e qualsiasi altra funzione membro che si desidera implementare e completare la mappa del punto di connessione con la macro END_CONNECTION_PART.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="end_connection_part"></a><a name="end_connection_part"></a> END_CONNECTION_PART

Termina la dichiarazione del punto di connessione.

```
END_CONNECTION_PART(localClass)
```

### <a name="parameters"></a>Parametri

*localClass*<br/>
Specifica il nome della classe locale che implementa il punto di connessione.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="connection_iid"></a><a name="connection_iid"></a> CONNECTION_IID

Utilizzare tra le macro BEGIN_CONNECTION_PART e END_CONNECTION_PART per definire un ID di interfaccia per un punto di connessione supportato dal controllo OLE.

```
CONNECTION_IID(iid)
```

### <a name="parameters"></a>Parametri

*IID*<br/>
ID di interfaccia dell'interfaccia chiamata dal punto di connessione.

### <a name="remarks"></a>Commenti

L'argomento *IID* è un ID di interfaccia utilizzato per identificare l'interfaccia che verrà chiamata dal punto di connessione sui sink connessi. Ad esempio:

[!code-cpp[NVC_MFCConnectionPoints#10](../../mfc/codesnippet/cpp/connection-maps_1.h)]

Specifica un punto di connessione che chiama l' `ISinkInterface` interfaccia.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="declare_connection_map"></a><a name="declare_connection_map"></a> DECLARE_CONNECTION_MAP

Ogni `COleControl` classe derivata da nel programma può fornire una mappa di connessione per specificare punti di connessione aggiuntivi supportati dal controllo.

```
DECLARE_CONNECTION_MAP()
```

### <a name="remarks"></a>Commenti

Se il controllo supporta punti aggiuntivi, usare la macro DECLARE_CONNECTION_MAP alla fine della dichiarazione di classe. Quindi, nel file cpp che definisce le funzioni membro per la classe, utilizzare la macro BEGIN_CONNECTION_MAP, CONNECTION_PART macro per ogni punto di connessione del controllo e la macro END_CONNECTION_MAP per dichiarare la fine della mappa di connessione.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="begin_connection_map"></a><a name="begin_connection_map"></a> BEGIN_CONNECTION_MAP

Ogni classe derivata da `COleControl` nel programma può fornire una mappa di connessioni per specificare i punti di connessione che il controllo supporterà.

```
BEGIN_CONNECTION_MAP(theClass, theBase)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Specifica il nome della classe del controllo a cui appartiene la mappa delle connessioni.

*theBase*<br/>
Specifica il nome della classe di base di *theClass*.

### <a name="remarks"></a>Commenti

Nell'implementazione di (. CPP) che definisce le funzioni membro per la classe, avviare la mappa di connessione con la macro BEGIN_CONNECTION_MAP, quindi aggiungere le voci della macro per ogni punto di connessione usando la macro [CONNECTION_PART](#connection_part) . Infine, completare la mappa delle connessioni con la macro [END_CONNECTION_MAP](#end_connection_map) .

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="end_connection_map"></a><a name="end_connection_map"></a> END_CONNECTION_MAP

Termina la definizione della mappa delle connessioni.

```
END_CONNECTION_MAP()
```

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="connection_part"></a><a name="connection_part"></a> CONNECTION_PART

Esegue il mapping di un punto di connessione per il controllo OLE a un ID di interfaccia specifico.

```
CONNECTION_PART(theClass, iid, localClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Specifica il nome della classe del controllo il cui punto di connessione è.

*IID*<br/>
ID di interfaccia dell'interfaccia chiamata dal punto di connessione.

*localClass*<br/>
Specifica il nome della classe locale che implementa il punto di connessione.

### <a name="remarks"></a>Commenti

Ad esempio:

[!code-cpp[NVC_MFCConnectionPoints#2](../../mfc/codesnippet/cpp/connection-maps_2.cpp)]

implementa una mappa di connessione, con un punto di connessione, che chiama l' `IID_ISinkInterface` interfaccia.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="afxconnectionadvise"></a><a name="afxconnectionadvise"></a> AfxConnectionAdvise

Chiamare questa funzione per stabilire una connessione tra un'origine, specificata da *pUnkSrc*, e un sink, specificato da *pUnkSink*.

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

*IID*<br/>
ID di interfaccia della connessione.

*bRefCount*<br/>
TRUE indica che la creazione della connessione deve causare l'incremento del conteggio dei riferimenti di *pUnkSink* . FALSE indica che il conteggio dei riferimenti non deve essere incrementato.

*pdwCookie*<br/>
Puntatore a un valore DWORD in cui viene restituito un identificatore di connessione. Questo valore deve essere passato come parametro *dwCookie* a `AfxConnectionUnadvise` quando si disconnette la connessione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stata stabilita una connessione. in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCConnectionPoints#8](../../mfc/codesnippet/cpp/connection-maps_3.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="afxconnectionunadvise"></a><a name="afxconnectionunadvise"></a> AfxConnectionUnadvise

Chiamare questa funzione per disconnettere una connessione tra un'origine, specificata da *pUnkSrc*, e un sink, specificato da *pUnkSink*.

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

*IID*<br/>
ID di interfaccia dell'interfaccia del punto di connessione.

*bRefCount*<br/>
TRUE indica che la disconnessione della connessione deve causare il decremento del conteggio dei riferimenti di *pUnkSink* . FALSE indica che il conteggio dei riferimenti non deve essere decrementato.

*dwCookie*<br/>
Identificatore di connessione restituito da `AfxConnectionAdvise` .

### <a name="return-value"></a>Valore restituito

Diverso da zero se una connessione è stata disconnessa; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCConnectionPoints#9](../../mfc/codesnippet/cpp/connection-maps_4.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
