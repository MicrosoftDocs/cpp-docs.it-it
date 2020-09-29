---
title: Classe CDynamicAccessor
ms.date: 11/04/2016
f1_keywords:
- ATL.CDynamicAccessor
- ATL::CDynamicAccessor
- CDynamicAccessor
- ATL::CDynamicAccessor::AddBindEntry
- CDynamicAccessor.AddBindEntry
- CDynamicAccessor::AddBindEntry
- ATL.CDynamicAccessor.AddBindEntry
- CDynamicAccessor::CDynamicAccessor
- ATL::CDynamicAccessor::CDynamicAccessor
- ATL.CDynamicAccessor.CDynamicAccessor
- CDynamicAccessor.CDynamicAccessor
- ATL::CDynamicAccessor::Close
- ATL.CDynamicAccessor.Close
- CDynamicAccessor.Close
- CDynamicAccessor::Close
- ATL.CDynamicAccessor.GetBlobHandling
- CDynamicAccessor::GetBlobHandling
- ATL::CDynamicAccessor::GetBlobHandling
- GetBlobHandling
- CDynamicAccessor.GetBlobHandling
- ATL::CDynamicAccessor::GetBlobSizeLimit
- CDynamicAccessor.GetBlobSizeLimit
- CDynamicAccessor::GetBlobSizeLimit
- GetBlobSizeLimit
- ATL.CDynamicAccessor.GetBlobSizeLimit
- CDynamicAccessor.GetBookmark
- GetBookmark
- CDynamicAccessor::GetBookmark
- ATL.CDynamicAccessor.GetBookmark
- ATL::CDynamicAccessor::GetBookmark
- ATL.CDynamicAccessor.GetColumnCount
- ATL::CDynamicAccessor::GetColumnCount
- CDynamicAccessor::GetColumnCount
- CDynamicAccessor.GetColumnCount
- GetColumnCount
- CDynamicAccessor.GetColumnFlags
- ATL::CDynamicAccessor::GetColumnFlags
- ATL.CDynamicAccessor.GetColumnFlags
- CDynamicAccessor::GetColumnFlags
- ATL.CDynamicAccessor.GetColumnInfo
- ATL::CDynamicAccessor::GetColumnInfo
- CDynamicAccessor.GetColumnInfo
- CDynamicAccessor::GetColumnInfo
- ATL::CDynamicAccessor::GetColumnName
- GetColumnName
- ATL.CDynamicAccessor.GetColumnName
- CDynamicAccessor::GetColumnName
- CDynamicAccessor.GetColumnName
- ATL.CDynamicAccessor.GetColumnType
- CDynamicAccessor::GetColumnType
- GetColumnType
- CDynamicAccessor.GetColumnType
- ATL::CDynamicAccessor::GetColumnType
- CDynamicAccessor.GetLength
- ATL.CDynamicAccessor.GetLength
- CDynamicAccessor::GetLength
- ATL::CDynamicAccessor::GetLength
- CDynamicAccessor.GetOrdinal
- ATL::CDynamicAccessor::GetOrdinal
- CDynamicAccessor::GetOrdinal
- ATL.CDynamicAccessor.GetOrdinal
- GetOrdinal
- ATL::CDynamicAccessor::GetStatus
- CDynamicAccessor.GetStatus
- ATL.CDynamicAccessor.GetStatus
- CDynamicAccessor::GetStatus
- GetValue
- CDynamicAccessor::GetValue<ctype>
- ATL.CDynamicAccessor.GetValue<ctype>
- CDynamicAccessor.GetValue
- CDynamicAccessor::GetValue
- ATL.CDynamicAccessor.GetValue
- ATL::CDynamicAccessor::GetValue
- ATL::CDynamicAccessor::GetValue<ctype>
- CDynamicAccessor::SetBlobHandling
- CDynamicAccessor.SetBlobHandling
- ATL::CDynamicAccessor::SetBlobHandling
- SetBlobHandling
- ATL.CDynamicAccessor.SetBlobHandling
- CDynamicAccessor::SetBlobSizeLimit
- SetBlobSizeLimit
- CDynamicAccessor.SetBlobSizeLimit
- ATL.CDynamicAccessor.SetBlobSizeLimit
- ATL::CDynamicAccessor::SetBlobSizeLimit
- ATL::CDynamicAccessor::SetLength
- CDynamicAccessor.SetLength
- CDynamicAccessor::SetLength
- ATL.CDynamicAccessor.SetLength
- CDynamicAccessor::SetStatus
- ATL::CDynamicAccessor::SetStatus
- CDynamicAccessor.SetStatus
- ATL.CDynamicAccessor.SetStatus
- ATL.CDynamicAccessor.SetValue
- ATL::CDynamicAccessor::SetValue
- ATL::CDynamicAccessor::SetValue<ctype>
- CDynamicAccessor.SetValue
- ATL.CDynamicAccessor.SetValue<ctype>
- CDynamicAccessor::SetValue
- CDynamicAccessor::SetValue<ctype>
helpviewer_keywords:
- CDynamicAccessor class
- AddBindEntry method
- CDynamicAccessor class, constructor
- Close method
- GetBlobHandling method
- GetBlobSizeLimit method
- GetBookmark method
- GetColumnCount method
- GetColumnFlags method
- GetColumnInfo method
- GetColumnName method
- GetColumnType method
- GetLength method
- GetOrdinal method
- GetStatus method
- GetValue method
- SetBlobHandling method
- SetBlobSizeLimit method
- SetLength method
- SetStatus method
- SetValue method
ms.assetid: 374b13b7-1f09-457d-9e6b-df260ff4d178
ms.openlocfilehash: 31cc996b8beedadf9cba5a46b3b4da20e19268b0
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91498676"
---
# <a name="cdynamicaccessor-class"></a>Classe CDynamicAccessor

Consente di accedere a un'origine dati quando non si conosce lo schema del database (la struttura sottostante del database).

## <a name="syntax"></a>Sintassi

```cpp
class CDynamicAccessor : public CAccessorBase
```

## <a name="requirements"></a>Requisiti

**Intestazione**: atldbcli. h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Descrizione |
|-|-|
|[AddBindEntry](#addbindentry)|Aggiunge una voce di binding alle colonne di output quando si esegue l'override della funzione di accesso predefinita.|
|[CDynamicAccessor](#cdynamicaccessor)|Crea un'istanza dell'oggetto e lo inizializza `CDynamicAccessor` .|
|[Close](#close)|Annulla l'associazione di tutte le colonne, rilascia la memoria allocata e rilascia il puntatore all'interfaccia [IAccessor](/previous-versions/windows/desktop/ms719672(v=vs.85)) nella classe.|
|[GetBlobHandling](#getblobhandling)|Recupera il valore di gestione BLOB per la riga corrente.|
|[GetBlobSizeLimit](#getblobsizelimit)|Recupera la dimensione massima in byte del BLOB.|
|[GetBookmark](#getbookmark)|Recupera il segnalibro per la riga corrente.|
|[GetColumnCount](#getcolumncount)|Recupera il numero di colonne nel set di righe.|
|[GetColumnFlags](#getcolumnflags)|Recupera le caratteristiche della colonna.|
|[GetColumnInfo](#getcolumninfo)|Recupera i metadati della colonna.|
|[GetColumnName](#getcolumnname)|Recupera il nome di una colonna specificata.|
|[GetColumnType](#getcolumntype)|Recupera il tipo di dati di una colonna specificata.|
|[GetLength](#getlength)|Recupera la lunghezza massima possibile di una colonna in byte.|
|[GetOrdinal](#getordinal)|Recupera l'indice di colonna in base a un nome di colonna.|
|[GetStatus](#getstatus)|Recupera lo stato di una colonna specificata.|
|[GetValue](#getvalue)|Recupera i dati dal buffer.|
|[SetBlobHandling](#setblobhandling)|Imposta il valore di gestione BLOB per la riga corrente.|
|[SetBlobSizeLimit](#setblobsizelimit)|Imposta la dimensione massima in byte del BLOB.|
|[SetLength](#setlength)|Imposta la lunghezza della colonna in byte.|
|[SetStatus](#setstatus)|Imposta lo stato di una colonna specificata.|
|[SetValue](#setvalue)|Archivia i dati nel buffer.|

## <a name="remarks"></a>Osservazioni

Usare `CDynamicAccessor` i metodi per ottenere informazioni sulle colonne, ad esempio i nomi delle colonne, il numero di colonne, il tipo di dati e così via. Queste informazioni sulla colonna vengono quindi usate per creare una funzione di accesso dinamicamente in fase di esecuzione.

Le informazioni sulla colonna vengono archiviate in un buffer creato e gestito da questa classe. Ottenere i dati dal buffer usando [GetValue](#getvalue).

Per una discussione ed esempi sull'uso delle classi di funzioni di accesso dinamiche, vedere [uso delle funzioni di accesso dinamiche](../../data/oledb/using-dynamic-accessors.md).

## <a name="cdynamicaccessoraddbindentry"></a><a name="addbindentry"></a> CDynamicAccessor:: AddBindEntry

Aggiunge una voce di associazione alle colonne di output.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT AddBindEntry(const DBCOLUMNINFO& info) throw();
```

#### <a name="parameters"></a>Parametri

*informazioni*<br/>
in `DBCOLUMNINFO` Struttura che contiene le informazioni sulle colonne. Vedere "strutture DBCOLUMNINFO" in [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Usare questo metodo quando si esegue l'override della funzione di accesso predefinita creata con `CDynamicAccessor` (vedere [come si recuperano i dati?](../../data/oledb/fetching-data.md)).

## <a name="cdynamicaccessorcdynamicaccessor"></a><a name="cdynamicaccessor"></a> CDynamicAccessor:: CDynamicAccessor

Crea un'istanza dell'oggetto e lo inizializza `CDynamicAccessor` .

### <a name="syntax"></a>Sintassi

```cpp
CDynamicAccessor(DBBLOBHANDLINGENUM eBlobHandling = DBBLOBHANDLING_DEFAULT,
   DBLENGTH nBlobSize = 8000);
```

#### <a name="parameters"></a>Parametri

*eBlobHandling*<br/>
Specifica il modo in cui devono essere gestiti i dati BLOB (Binary Large Object). Il valore predefinito è DBBLOBHANDLING_DEFAULT. Per una descrizione dei valori di DBBLOBHANDLINGENUM, vedere [SetBlobHandling](#setblobhandling) .

*nBlobSize*<br/>
Dimensioni massime del BLOB in byte; i dati della colonna su questo valore vengono considerati come un BLOB. Il valore predefinito è 8.000. Per informazioni dettagliate, vedere [SetBlobSizeLimit](#setblobsizelimit) .

### <a name="remarks"></a>Osservazioni

Se si usa il costruttore per inizializzare l' `CDynamicAccessor` oggetto, è possibile specificare come verrà associato il BLOB. I BLOB possono contenere dati binari, ad esempio grafica, audio o codice compilato. Il comportamento predefinito consiste nel considerare le colonne più di 8.000 byte come BLOB e provare a associarle a un `ISequentialStream` oggetto. È tuttavia possibile specificare un valore diverso per la dimensione del BLOB.

È inoltre possibile specificare `CDynamicAccessor` il modo in cui gestisce i dati delle colonne che si qualificano come dati BLOB: è in grado di gestire i dati BLOB in modo predefinito; può ignorare (non associare) i dati BLOB oppure può associare dati BLOB nella memoria allocata dal provider.

## <a name="cdynamicaccessorclose"></a><a name="close"></a> CDynamicAccessor:: Close

Annulla l'associazione di tutte le colonne, rilascia la memoria allocata e rilascia il puntatore all'interfaccia [IAccessor](/previous-versions/windows/desktop/ms719672(v=vs.85)) nella classe.

### <a name="syntax"></a>Sintassi

```cpp
void Close() throw();
```

## <a name="cdynamicaccessorgetblobhandling"></a><a name="getblobhandling"></a> CDynamicAccessor:: GetBlobHandling

Recupera il valore di gestione BLOB per la riga corrente.

### <a name="syntax"></a>Sintassi

```cpp
const DBBLOBHANDLINGENUM GetBlobHandling() const;
```

### <a name="remarks"></a>Osservazioni

Restituisce il valore di gestione BLOB *eBlobHandling* impostato da [SetBlobHandling](#setblobhandling).

## <a name="cdynamicaccessorgetblobsizelimit"></a><a name="getblobsizelimit"></a> CDynamicAccessor:: GetBlobSizeLimit

Recupera la dimensione massima in byte del BLOB.

### <a name="syntax"></a>Sintassi

```cpp
const DBLENGTH GetBlobSizeLimit() const;
```

### <a name="remarks"></a>Osservazioni

Restituisce il valore di gestione BLOB *nBlobSize* impostato da [SetBlobSizeLimit](#setblobsizelimit).

## <a name="cdynamicaccessorgetbookmark"></a><a name="getbookmark"></a> CDynamicAccessor:: GetBookmark

Recupera il segnalibro per la riga corrente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetBookmark(CBookmark< >* pBookmark) const throw();
```

#### <a name="parameters"></a>Parametri

*pBookmark*<br/>
out Puntatore all'oggetto [CBookmark](../../data/oledb/cbookmark-class.md) .

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

È necessario impostare `DBPROP_IRowsetLocate` su VARIANT_TRUE per recuperare un segnalibro.

## <a name="cdynamicaccessorgetcolumncount"></a><a name="getcolumncount"></a> CDynamicAccessor:: GetColumnCount

Recupera il numero di colonne.

### <a name="syntax"></a>Sintassi

```cpp
DBORDINAL GetColumnCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero di colonne recuperate.

## <a name="cdynamicaccessorgetcolumnflags"></a><a name="getcolumnflags"></a> CDynamicAccessor:: GetColumnFlags

Recupera le caratteristiche della colonna.

### <a name="syntax"></a>Sintassi

```cpp
bool GetColumnFlags(DBORDINAL nColumn,
   DBCOLUMNFLAGS* pFlags) const throw();
```

#### <a name="parameters"></a>Parametri

*nColumn*<br/>
[in] Numero di colonna. I numeri di colonna iniziano con 1. Un valore pari a 0 indica la colonna del segnalibro, se presente.

*pFlags*<br/>
out Puntatore a una maschera di maschera che descrive le caratteristiche della colonna. Vedere "tipo enumerato DBCOLUMNFLAGS" in [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** se le caratteristiche della colonna vengono recuperate correttamente. In caso contrario, restituisce **`false`** .

### <a name="remarks"></a>Osservazioni

Il numero di colonna è offset rispetto a uno. La colonna zero è un caso speciale. è il segnalibro, se disponibile.

## <a name="cdynamicaccessorgetcolumninfo"></a><a name="getcolumninfo"></a> CDynamicAccessor:: GetColumnInfo

Restituisce i metadati della colonna necessari per la maggior parte degli utenti.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetColumnInfo(IRowset* pRowset,
   DBORDINAL* pColumns,
   DBCOLUMNINFO** ppColumnInfo,
   OLECHAR** ppStringsBuffer) throw();
```

#### <a name="parameters"></a>Parametri

*pRowset*<br/>
in Puntatore all'interfaccia [IRowset](/previous-versions/windows/desktop/ms720986(v=vs.85)) .

*pColumns*<br/>
out Puntatore alla memoria in cui restituire il numero di colonne nel set di righe; Questo numero include la colonna del segnalibro, se presente.

*ppColumnInfo*<br/>
out Puntatore alla memoria in cui restituire una matrice di `DBCOLUMNINFO` strutture. Vedere "strutture DBCOLUMNINFO" in [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nella Guida *di riferimento per programmatori OLE DB*.

*ppStringsBuffer*<br/>
out Puntatore alla memoria in cui restituire un puntatore alla risorsa di archiviazione per tutti i valori stringa (nomi usati all'interno di *ColumnID* o per *pwszName*) all'interno di un singolo blocco di allocazione.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Per informazioni sui tipi di dati, e, vedere [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nella Guida *di riferimento per i programmatori OLE DB* `DBORDINAL` `DBCOLUMNINFO` `OLECHAR` .

## <a name="cdynamicaccessorgetcolumnname"></a><a name="getcolumnname"></a> CDynamicAccessor:: getColumnName

Recupera il nome della colonna specificata.

### <a name="syntax"></a>Sintassi

```cpp
LPOLESTR GetColumnName(DBORDINAL nColumn) const throw();
```

#### <a name="parameters"></a>Parametri

*nColumn*<br/>
[in] Numero di colonna. I numeri di colonna iniziano con 1. Un valore pari a 0 indica la colonna del segnalibro, se presente.

### <a name="return-value"></a>Valore restituito

Nome della colonna specificata.

## <a name="cdynamicaccessorgetcolumntype"></a><a name="getcolumntype"></a> CDynamicAccessor:: GetColumnType

Recupera il tipo di dati di una colonna specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool GetColumnType(DBORDINAL nColumn,
   DBTYPE* pType) const throw();
```

#### <a name="parameters"></a>Parametri

*nColumn*<br/>
[in] Numero di colonna. I numeri di colonna iniziano con 1. Un valore pari a 0 indica la colonna del segnalibro, se presente.

*pType*<br/>
out Puntatore al tipo di dati della colonna specificata.

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** in caso di esito positivo o **`false`** negativo.

## <a name="cdynamicaccessorgetlength"></a><a name="getlength"></a> CDynamicAccessor:: GetLength

Recupera la lunghezza della colonna specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool GetLength(DBORDINAL nColumn,
   DBLENGTH* pLength) const throw();

bool GetLength(const CHAR* pColumnName,
   DBLENGTH* pLength) const throw();

bool GetLength(const WCHAR* pColumnName,
   DBLENGTH* pLength) const throw();
```

#### <a name="parameters"></a>Parametri

*nColumn*<br/>
[in] Numero di colonna. I numeri di colonna iniziano con 1. Un valore pari a 0 indica la colonna del segnalibro, se presente.

*pColumnName*<br/>
[in] Puntatore a una stringa di caratteri che contiene il nome della colonna.

*pLength*<br/>
out Puntatore al valore integer contenente la lunghezza della colonna in byte.

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** se viene trovata la colonna specificata. In caso contrario, questa funzione restituisce **`false`** .

### <a name="remarks"></a>Osservazioni

Il primo override accetta il numero di colonna e il secondo e il terzo override accettano rispettivamente il nome della colonna nel formato ANSI o Unicode.

## <a name="cdynamicaccessorgetordinal"></a><a name="getordinal"></a> CDynamicAccessor:: GetOrdinal

Recupera il numero di colonna dato il nome di una colonna.

### <a name="syntax"></a>Sintassi

```cpp
bool GetOrdinal(const CHAR* pColumnName,
   DBORDINAL* pOrdinal) const throw();

bool GetOrdinal(const WCHAR* pColumnName,
   DBORDINAL* pOrdinal) const throw();
```

#### <a name="parameters"></a>Parametri

*pColumnName*<br/>
[in] Puntatore a una stringa di caratteri che contiene il nome della colonna.

*pOrdinal*<br/>
[out] Puntatore al numero di colonna.

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** se viene trovata una colonna con il nome specificato. In caso contrario, questa funzione restituisce **`false`** .

## <a name="cdynamicaccessorgetstatus"></a><a name="getstatus"></a> CDynamicAccessor:: GetStatus

Recupera lo stato della colonna specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool GetStatus(DBORDINAL nColumn,
   DBSTATUS* pStatus) const throw();

bool GetStatus(const CHAR* pColumnName,
   DBSTATUS* pStatus) const throw();

bool GetStatus(const WCHAR* pColumnName,
   DBSTATUS* pStatus) const throw();
```

#### <a name="parameters"></a>Parametri

*nColumn*<br/>
[in] Numero di colonna. I numeri di colonna iniziano con 1. Un valore pari a 0 indica la colonna del segnalibro, se presente.

*pColumnName*<br/>
[in] Puntatore a una stringa di caratteri che contiene il nome della colonna.

*pStatus*<br/>
out Puntatore alla variabile che contiene lo stato della colonna. Per ulteriori informazioni, vedere [DBSTATUS](/previous-versions/windows/desktop/ms722617(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** se viene trovata la colonna specificata. In caso contrario, questa funzione restituisce **`false`** .

## <a name="cdynamicaccessorgetvalue"></a><a name="getvalue"></a> CDynamicAccessor:: GetValue

Recupera i dati per una colonna specificata.

### <a name="syntax"></a>Sintassi

```cpp
void* GetValue(DBORDINAL nColumn) const throw();

void* GetValue(const CHAR* pColumnName) const throw();

void* GetValue(const WCHAR* pColumnName) const throw();

template < class ctype >
bool GetValue(DBORDINAL nColumn, ctype* pData) const throw();

template < class ctype >
bool GetValue(const CHAR* pColumnName, ctype* pData) const throw();

template < class ctype >
bool GetValue(const WCHAR* pColumnName, ctype* pData) const throw();
```

#### <a name="parameters"></a>Parametri

*ctype*<br/>
in Parametro basato su modelli che gestisce qualsiasi tipo di dati, ad eccezione dei tipi stringa ( `CHAR*` , `WCHAR*` ), che richiedono una gestione speciale. `GetValue` Usa il tipo di dati appropriato in base a quanto specificato qui.

*nColumn*<br/>
[in] Numero di colonna. I numeri di colonna iniziano con 1. Un valore pari a 0 indica la colonna del segnalibro, se presente.

*pColumnName*<br/>
in Nome della colonna.

*pData*<br/>
out Puntatore al contenuto della colonna specificata.

### <a name="return-value"></a>Valore restituito

Se si desidera passare dati stringa, utilizzare le versioni non basate su modelli di `GetValue` . Le versioni non basate su modelli di questo metodo restituiscono **`void*`** , che fa riferimento alla parte del buffer che contiene i dati della colonna specificati. Restituisce NULL se la colonna non viene trovata.

Per tutti gli altri tipi di dati, è più semplice usare le versioni basate su modelli di `GetValue` . Le versioni basate su modelli restituiscono **`true`** in caso di esito positivo o **`false`** negativo.

### <a name="remarks"></a>Osservazioni

Usare le versioni non basate su modelli per restituire le colonne che contengono stringhe e le versioni basate su modelli per le colonne che contengono altri tipi di dati.

In modalità di debug si otterrà un'asserzione se la dimensione di *pData* è diversa dalla dimensione della colonna a cui fa riferimento.

## <a name="cdynamicaccessorsetblobhandling"></a><a name="setblobhandling"></a> CDynamicAccessor:: SetBlobHandling

Imposta il valore di gestione BLOB per la riga corrente.

### <a name="syntax"></a>Sintassi

```cpp
bool SetBlobHandling(DBBLOBHANDLINGENUM eBlobHandling);
```

#### <a name="parameters"></a>Parametri

*eBlobHandling*<br/>
Specifica il modo in cui devono essere gestiti i dati BLOB. I valori possibili sono i seguenti:

- DBBLOBHANDLING_DEFAULT: gestire i dati delle colonne maggiori di *nBlobSize* (impostati da `SetBlobSizeLimit` ) come dati BLOB e recuperarli tramite `ISequentialStream` un `IStream` oggetto o. Questa opzione tenterà di associare ogni colonna contenente dati più grandi di *nBlobSize* o elencati come DBTYPE_IUNKNOWN dati BLOB.

- DBBLOBHANDLING_NOSTREAMS: è possibile gestire i dati di una colonna di dimensioni maggiori di *nBlobSize* (come impostato da `SetBlobSizeLimit` ) come dati BLOB e recuperarli tramite un riferimento nella memoria di proprietà dell'utente allocata dal provider. Questa opzione è utile per le tabelle con più di una colonna BLOB e il provider supporta un solo `ISequentialStream` oggetto per ogni funzione di accesso.

- DBBLOBHANDLING_SKIP: ignorare (non associare) le colonne che si qualificano come contenenti BLOB (la funzione di accesso non associa o Recupera il valore della colonna, ma recupererà comunque lo stato e la lunghezza della colonna).

### <a name="remarks"></a>Osservazioni

È consigliabile chiamare `SetBlobHandling` prima di chiamare `Open`.

Il metodo del costruttore [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) imposta il valore di gestione BLOB su DBBLOBHANDLING_DEFAULT.

## <a name="cdynamicaccessorsetblobsizelimit"></a><a name="setblobsizelimit"></a> CDynamicAccessor:: SetBlobSizeLimit

Imposta la dimensione massima in byte del BLOB.

### <a name="syntax"></a>Sintassi

```cpp
void SetBlobSizeLimit(DBLENGTH nBlobSize);
```

#### <a name="parameters"></a>Parametri

*nBlobSize*<br/>
Specifica il limite della dimensione del BLOB.

### <a name="remarks"></a>Osservazioni

Imposta la dimensione massima in byte del BLOB. i dati di colonna maggiori di questo valore vengono considerati come un BLOB. Alcuni provider offrono dimensioni estremamente elevate per le colonne (ad esempio 2 GB). Invece di tentare di allocare memoria per una colonna di questa dimensione, in genere si tenterà di associare tali colonne come BLOB. In questo modo non è necessario allocare tutta la memoria, ma è comunque possibile leggere tutti i dati senza temere il troncamento. In alcuni casi, tuttavia, potrebbe essere necessario forzare `CDynamicAccessor` l'associazione di colonne di grandi dimensioni nei tipi di dati nativi. A tale scopo, chiamare `SetBlobSizeLimit` prima di chiamare `Open` .

Il metodo del costruttore [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) imposta la dimensione massima del BLOB su un valore predefinito di 8.000 byte.

## <a name="cdynamicaccessorsetlength"></a><a name="setlength"></a> CDynamicAccessor:: tolength

Imposta la lunghezza della colonna specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool SetLength(DBORDINAL nColumn,
   DBLENGTH nLength)throw();

bool SetLength(const CHAR* pColumnName,
   DBLENGTH nLength) throw();

bool SetLength(const WCHAR* pColumnName,
   DBLENGTH nLength) throw();
```

#### <a name="parameters"></a>Parametri

*nColumn*<br/>
[in] Numero di colonna. I numeri di colonna iniziano con 1. Un valore pari a 0 indica la colonna del segnalibro, se presente.

*nLength*<br/>
in Lunghezza della colonna in byte.

*pColumnName*<br/>
[in] Puntatore a una stringa di caratteri che contiene il nome della colonna.

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** se la lunghezza della colonna specificata è impostata correttamente. In caso contrario, questa funzione restituisce **`false`** .

## <a name="cdynamicaccessorsetstatus"></a><a name="setstatus"></a> CDynamicAccessor:: sestatus

Imposta lo stato della colonna specificata.

### <a name="syntax"></a>Sintassi

```cpp
bool SetStatus(DBORDINAL nColumn,
   DBSTATUS status)throw();

bool SetStatus(const CHAR* pColumnName,
   DBSTATUS status) throw();

bool SetStatus(const WCHAR* pColumnName,
   DBSTATUS status) throw();
```

#### <a name="parameters"></a>Parametri

*nColumn*<br/>
[in] Numero di colonna. I numeri di colonna iniziano con 1. Un valore pari a 0 indica la colonna del segnalibro, se presente.

*Stato*<br/>
in Stato della colonna. Per ulteriori informazioni, vedere [DBSTATUS](/previous-versions/windows/desktop/ms722617(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

*pColumnName*<br/>
[in] Puntatore a una stringa di caratteri che contiene il nome della colonna.

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** se lo stato della colonna specificato è impostato correttamente. In caso contrario, questa funzione restituisce **`false`** .

## <a name="cdynamicaccessorsetvalue"></a><a name="setvalue"></a> CDynamicAccessor:: SetValue

Archivia i dati in una colonna specificata.

### <a name="syntax"></a>Sintassi

```cpp
template <class ctype>
bool SetValue(
   DBORDINAL nColumn,
   constctype& data) throw( );

template <class ctype>
bool SetValue(
   const CHAR * pColumnName,
   const ctype& data) throw( );

template <class ctype>
bool SetValue(
   const WCHAR *pColumnName,
   const ctype& data) throw( );
```

#### <a name="parameters"></a>Parametri

*ctype*<br/>
in Parametro basato su modelli che gestisce qualsiasi tipo di dati, ad eccezione dei tipi stringa ( `CHAR*` , `WCHAR*` ), che richiedono una gestione speciale. `GetValue` Usa il tipo di dati appropriato in base a quanto specificato qui.

*pColumnName*<br/>
[in] Puntatore a una stringa di caratteri che contiene il nome della colonna.

*data*<br/>
in Puntatore alla memoria contenente i dati.

*nColumn*<br/>
[in] Numero di colonna. I numeri di colonna iniziano con 1. Un valore pari a 0 indica la colonna del segnalibro, se presente.

### <a name="return-value"></a>Valore restituito

Se si desidera impostare dati stringa, utilizzare le versioni non basate su modelli di `GetValue` . Le versioni non basate su modelli di questo metodo restituiscono **`void*`** , che fa riferimento alla parte del buffer che contiene i dati della colonna specificati. Restituisce NULL se la colonna non viene trovata.

Per tutti gli altri tipi di dati, è più semplice usare le versioni basate su modelli di `GetValue` . Le versioni basate su modelli restituiscono **`true`** in caso di esito positivo o **`false`** negativo.

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)
