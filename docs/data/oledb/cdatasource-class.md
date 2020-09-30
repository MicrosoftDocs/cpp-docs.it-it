---
title: Classe CDataSource
ms.date: 11/04/2016
f1_keywords:
- ATL.CDataSource
- ATL::CDataSource
- CDataSource
- ATL::CDataSource::Close
- ATL.CDataSource.Close
- CDataSource::Close
- CDataSource.Close
- ATL::CDataSource::GetInitializationString
- CDataSource.GetInitializationString
- GetInitializationString
- CDataSource::GetInitializationString
- ATL.CDataSource.GetInitializationString
- CDataSource::GetProperties
- ATL.CDataSource.GetProperties
- CDataSource.GetProperties
- ATL::CDataSource::GetProperties
- ATL::CDataSource::GetProperty
- ATL.CDataSource.GetProperty
- CDataSource.GetProperty
- CDataSource::GetProperty
- ATL::CDataSource::Open
- ATL.CDataSource.Open
- CDataSource::Open
- CDataSource.Open
- CDataSource::OpenFromFileName
- ATL::CDataSource::OpenFromFileName
- OpenFromFileName
- CDataSource.OpenFromFileName
- ATL.CDataSource.OpenFromFileName
- CDataSource.OpenFromInitializationString
- OpenFromInitializationString
- CDataSource::OpenFromInitializationString
- ATL::CDataSource::OpenFromInitializationString
- ATL.CDataSource.OpenFromInitializationString
- CDataSource.OpenWithPromptFileName
- OpenWithPromptFileName
- ATL::CDataSource::OpenWithPromptFileName
- ATL.CDataSource.OpenWithPromptFileName
- CDataSource::OpenWithPromptFileName
- CDataSource::OpenWithServiceComponents
- OpenWithServiceComponents
- CDataSource.OpenWithServiceComponents
helpviewer_keywords:
- CDataSource class
- Close method
- GetInitializationString method
- GetProperties method
- GetProperty method
- Open method
- OpenFromFileName method
- OpenFromInitializationString method
- OpenWithPromptFileName method
- OpenWithServiceComponents method
ms.assetid: 99bf862c-9d5c-4117-9501-aa0e2672085c
ms.openlocfilehash: f94cd631f1c6febdc07d53f84803b1203f4116bc
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91502543"
---
# <a name="cdatasource-class"></a>Classe CDataSource

Corrisponde a un oggetto origine dati OLE DB, che rappresenta una connessione tramite un provider a un'origine dati.

## <a name="syntax"></a>Sintassi

```cpp
class CDataSource
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Descrizione |
|-|-|
|[Close](#close)|Chiude la connessione.|
|[GetInitializationString](#getinitializationstring)|Recupera la stringa di inizializzazione dell'origine dati attualmente aperta.|
|[GetProperties](#getproperties)|Ottiene i valori delle proprietà attualmente impostate per l'origine dati connessa.|
|[GetProperty](#getproperty)|Ottiene il valore di una singola proprietà attualmente impostata per l'origine dati connessa.|
|[Apri](#open)|Crea una connessione a un provider (origine dati) utilizzando `CLSID` , `ProgID` o un `CEnumerator` moniker fornito dal chiamante.|
|[OpenFromFileName](#openfromfilename)|Apre un'origine dati da un file specificato dal nome file fornito dall'utente.|
|[OpenFromInitializationString](#openfrominitializationstring)|Apre l'origine dati specificata da una stringa di inizializzazione.|
|[OpenWithPromptFileName](#openwithpromptfilename)|Consente all'utente di selezionare un file di collegamento dati creato in precedenza per aprire l'origine dati corrispondente.|
|[OpenWithServiceComponents](#openwithservicecomponents)|Apre un oggetto origine dati utilizzando la finestra di dialogo Data link.|

## <a name="remarks"></a>Osservazioni

Per una singola connessione è possibile creare una o più sessioni di database. Queste sessioni sono rappresentate da `CSession` . È necessario chiamare [CDataSource:: Open](#open) per aprire la connessione prima di creare una sessione con `CSession::Open` .

Per un esempio di come usare `CDataSource` , vedere l'esempio [catdb](../../overview/visual-cpp-samples.md) .

## <a name="cdatasourceclose"></a><a name="close"></a> CDataSource:: Close

Chiude la connessione rilasciando il `m_spInit` puntatore.

### <a name="syntax"></a>Sintassi

```cpp
void Close() throw();
```

## <a name="cdatasourcegetinitializationstring"></a><a name="getinitializationstring"></a> CDataSource:: GetInitializationString

Recupera la stringa di inizializzazione di un'origine dati attualmente aperta.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetInitializationString(BSTR* pInitializationString,
   bool bIncludePassword = false) throw();
```

#### <a name="parameters"></a>Parametri

*pInitializationString*<br/>
out Puntatore alla stringa di inizializzazione.

*bIncludePassword*<br/>
[in] **`true`** Se la stringa include una password; in caso contrario **`false`** ,.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

La stringa di inizializzazione risultante può essere utilizzata per riaprire successivamente questa connessione all'origine dati.

## <a name="cdatasourcegetproperties"></a><a name="getproperties"></a> CDataSource:: GetProperties

Restituisce le informazioni sulle proprietà richieste per l'oggetto origine dati connessa.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetProperties(ULONG ulPropIDSets,
   constDBPROPIDSET* pPropIDSet,
   ULONG* pulPropertySets,
   DBPROPSET** ppPropsets) const throw();
```

#### <a name="parameters"></a>Parametri

Vedere [IDBProperties:: GetProperties](/previous-versions/windows/desktop/ms714344(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Per ottenere una singola proprietà, utilizzare [GetProperty](#getproperty).

## <a name="cdatasourcegetproperty"></a><a name="getproperty"></a> CDataSource:: GetProperty

Restituisce il valore di una proprietà specificata per l'oggetto origine dati connessa.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetProperty(const GUID& guid,
   DBPROPID propid,
   VARIANT* pVariant) const throw();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
in GUID che identifica il set di proprietà per il quale restituire la proprietà.

*propid*<br/>
in ID della proprietà da restituire.

*pVariant*<br/>
out Puntatore alla variante dove `GetProperty` restituisce il valore della proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Per ottenere più proprietà, utilizzare [GetProperties](#getproperties).

## <a name="cdatasourceopen"></a><a name="open"></a> CDataSource:: Open

Apre una connessione a un'origine dati utilizzando un `CLSID` `ProgID` moniker, o `CEnumerator` o richiede all'utente una finestra di dialogo del localizzatore.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Open(const CLSID& clsid,
   DBPROPSET* pPropSet = NULL,
   ULONG nPropertySets = 1) throw();

HRESULT Open(const CLSID& clsid,
   LPCTSTR pName,
   LPCTSTR pUserName = NULL,
   LPCTSTR pPassword = NULL,
   long nInitMode = 0) throw();HRESULT Open(LPCTSTR szProgID,
   DBPROPSET* pPropSet = NULL,
   ULONG nPropertySets = 1) throw();HRESULT Open(LPCTSTR szProgID,
   LPCTSTR pName,  LPCTSTR pUserName = NULL,
   LPCTSTR pPassword = NULL,
   long nInitMode = 0) throw();

HRESULT Open(const CEnumerator& enumerator,
   DBPROPSET* pPropSet = NULL,
   ULONG nPropertySets = 1) throw();

HRESULT Open(const CEnumerator& enumerator,
   LPCTSTR pName,
   LPCTSTR pUserName = NULL,
   LPCTSTR pPassword = NULL,
   long nInitMode = 0) throw();

HRESULT Open(HWND hWnd = GetActiveWindow(),
   DBPROMPTOPTIONS dwPromptOptions = DBPROMPTOPTIONS_WIZARDSHEET) throw();

HRESULT Open(LPCWSTR szProgID,
   DBPROPSET* pPropSet = NULL,
   ULONG nPropertySets = 1) throw();

HRESULT Open(LPCSTR szProgID,
   LPCTSTR pName,LPCTSTR pUserName = NULL,
   LPCTSTR pPassword = NULL,
   long nInitMode = 0) throw();
```

#### <a name="parameters"></a>Parametri

*CLSID*<br/>
in Oggetto `CLSID` del provider di dati.

*pPropSet*<br/>
in Puntatore a una matrice di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) che contiene le proprietà e i valori da impostare. Vedere [set di proprietà e gruppi di proprietà](/previous-versions/windows/desktop/ms713696(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* nel Windows SDK.

*nPropertySets*<br/>
in Numero di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) passate nell'argomento *pPropSet* .

*pName*<br/>
[in] Nome del database a cui connettersi.

*pUserName*<br/>
[in] Nome dell'utente.

*pPassword*<br/>
[in] Password dell'utente.

*nInitMode*<br/>
[in] Modalità di inizializzazione del database. Per un elenco delle modalità di inizializzazione valide, vedere [proprietà di inizializzazione](/previous-versions/windows/desktop/ms723127(v=vs.85))nella Guida di *riferimento per programmatori OLE DB* nel Windows SDK. Se *nInitMode* è zero, nessuna modalità di inizializzazione viene inclusa nel set di proprietà utilizzato per aprire la connessione.

*szProgID*<br/>
[in] Identificatore di un programma.

*enumeratore*<br/>
in Oggetto [CEnumerator](../../data/oledb/cenumerator-class.md) utilizzato per ottenere un moniker per l'apertura della connessione quando il chiamante non specifica un oggetto `CLSID` .

*hWnd*<br/>
[in] Handle per la finestra che deve essere l'elemento padre della finestra di dialogo. Se si utilizza l'overload della funzione che utilizza il parametro *HWND* , verranno automaticamente richiamati i componenti del servizio. per informazioni dettagliate, vedere la sezione Osservazioni.

*dwPromptOptions*<br/>
[in] Determina lo stile della finestra di dialogo del localizzatore da visualizzare. Per i possibili valori, vedere Msdasc.h.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'overload del metodo che utilizza il parametro *HWND* apre un oggetto origine dati con i componenti del servizio in oledb32.dll; Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, ad esempio il pool di risorse, l'inserimento automatico delle transazioni e così via. Per ulteriori informazioni, vedere il riferimento OLE DB nella [Guida per programmatori OLE DB](/previous-versions/windows/desktop/ms713643(v=vs.85)).

Gli overload del metodo che non utilizzano il parametro *HWND* aprono un oggetto origine dati senza utilizzare i componenti del servizio in oledb32.dll. Un oggetto [CDataSource](../../data/oledb/cdatasource-class.md) aperto con questi overload della funzione non sarà in grado di utilizzare le funzionalità dei componenti del servizio.

### <a name="example"></a>Esempio

Il codice seguente mostra come aprire un'origine dati Jet 4.0 con modelli OLE DB. L'origine dati Jet deve essere considerata un'origine dati OLE DB. Tuttavia, la chiamata a `Open` richiede due set di proprietà: uno per DBPROPSET_DBINIT e l'altro per DBPROPSET_JETOLEDB_DBINIT, in modo che sia possibile impostare DBPROP_JETOLEDB_DATABASEPASSWORD.

[!code-cpp[NVC_OLEDB_Consumer#7](../../data/oledb/codesnippet/cpp/cdatasource-open_1.cpp)]

## <a name="cdatasourceopenfromfilename"></a><a name="openfromfilename"></a> CDataSource:: OpenFromFileName

Apre un'origine dati da un file specificato dal nome file fornito dall'utente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT OpenFromFileName(LPCOLESTR szFileName) throw();
```

#### <a name="parameters"></a>Parametri

*szFileName*<br/>
[in] Nome di un file, in genere un file di connessione all'origine dati (UDL).

Per ulteriori informazioni sui file di collegamento dati (file UDL), vedere [Cenni preliminari sull'API di data link](/previous-versions/windows/desktop/ms718102(v=vs.85)) nell'Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via. Per ulteriori informazioni, vedere il riferimento OLE DB nella [Guida per programmatori OLE DB](/previous-versions/windows/desktop/ms713643(v=vs.85)).

## <a name="cdatasourceopenfrominitializationstring"></a><a name="openfrominitializationstring"></a> CDataSource:: OpenFromInitializationString

Apre un'origine dati specificata dalla stringa di inizializzazione fornita dall'utente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT OpenFromInitializationString(LPCOLESTR szInitializationString,
   bool fPromptForInfo= false) throw();
```

#### <a name="parameters"></a>Parametri

*szInitializationString*<br/>
in Stringa di inizializzazione.

*fPromptForInfo*<br/>
in Se questo argomento è impostato su **`true`** , `OpenFromInitializationString` la proprietà DBPROP_INIT_PROMPT verrà impostata su DBPROMPT_COMPLETEREQUIRED, che specifica che l'utente deve essere richiesto solo se sono necessarie altre informazioni. Questa operazione è utile nelle situazioni in cui la stringa di inizializzazione specifica un database che richiede una password, ma la stringa non contiene la password. Quando si tenta di connettersi al database, all'utente verrà richiesta una password (o altre informazioni mancanti).

Il valore predefinito è **`false`** , che specifica che l'utente non deve mai essere richiesto (imposta DBPROP_INIT_PROMPT su DBPROMPT_NOPROMPT).

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via.

## <a name="cdatasourceopenwithpromptfilename"></a><a name="openwithpromptfilename"></a> CDataSource:: OpenWithPromptFileName

Questo metodo visualizza all'utente una richiesta con una finestra di dialogo, quindi apre un'origine dati usando il file specificato dall'utente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT OpenWithPromptFileName(HWND hWnd = GetActiveWindow(   ),
   DBPROMPTOPTIONS dwPromptOptions = DBPROMPTOPTIONS_NONE,
   LPCOLESTR szInitialDirectory = NULL) throw();
```

#### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Handle per la finestra che deve essere l'elemento padre della finestra di dialogo.

*dwPromptOptions*<br/>
[in] Determina lo stile della finestra di dialogo del localizzatore da visualizzare. Per i possibili valori, vedere Msdasc.h.

*szInitialDirectory*<br/>
[in] Directory iniziale per la visualizzazione della finestra di dialogo del localizzatore.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via. Per ulteriori informazioni, vedere il riferimento OLE DB nella [Guida per programmatori OLE DB](/previous-versions/windows/desktop/ms713643(v=vs.85)).

## <a name="cdatasourceopenwithservicecomponents"></a><a name="openwithservicecomponents"></a> CDataSource:: OpenWithServiceComponents

Apre un oggetto origine dati usando i componenti del servizio in oledb32.dll.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT OpenWithServiceComponents (const CLSID clsid,
   DBPROPSET* pPropset = NULL,
   ULONG ulPropSets = 1);

HRESULT OpenWithServiceComponents (LPCSTR szProgID,
   DBPROPSET* pPropset = NULL,
   ULONG ulPropSets = 1);
```

#### <a name="parameters"></a>Parametri

*CLSID*<br/>
in Oggetto `CLSID` di un provider di dati.

*szProgID*<br/>
[in] ID programma di un provider di dati.

*pPropset*<br/>
in Puntatore a una matrice di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) che contiene le proprietà e i valori da impostare. Vedere [set di proprietà e gruppi di proprietà](/previous-versions/windows/desktop/ms713696(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* nel Windows SDK. Se l'oggetto origine dati viene inizializzato, le proprietà devono appartenere al gruppo di proprietà Data Source. Se la stessa proprietà viene specificata più di una volta in *pPropset*, il valore usato è specifico del provider. Se *ulPropSets* è zero, questo parametro viene ignorato.

*ulPropSets*<br/>
in Numero di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) passate nell'argomento *pPropSet* . Se è zero, il provider ignora *pPropset*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via. Per ulteriori informazioni, vedere il riferimento OLE DB nella [Guida per programmatori OLE DB](/previous-versions/windows/desktop/ms713643(v=vs.85)).

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
