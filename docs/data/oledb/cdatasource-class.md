---
title: Classe CDataSource | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
- GetProperties
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f5f6224b86d7df7af223c441361832984ff6a85c
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50058674"
---
# <a name="cdatasource-class"></a>Classe CDataSource

Corrisponde a un oggetto di origine dati OLE DB, che rappresenta una connessione tramite un provider a un'origine dati.

## <a name="syntax"></a>Sintassi

```cpp
class CDataSource
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Chiudi](#close)|Chiude la connessione.|
|[GetInitializationString](#getinitializationstring)|Recupera la stringa di inizializzazione dell'origine dati che è attualmente aperto.|
|[GetProperties](#getproperties)|Ottiene i valori delle proprietà attualmente impostata per l'origine dati connessa.|
|[GetProperty](#getproperty)|Ottiene il valore di una singola proprietà attualmente impostata per l'origine dati connessa.|
|[Apri](#open)|Crea una connessione a un provider (origine dati) utilizzando un `CLSID`, `ProgID`, o un `CEnumerator` moniker fornite dal chiamante.|
|[OpenFromFileName](#openfromfilename)|Apre un'origine dati da un file specificato dal nome file fornito dall'utente.|
|[OpenFromInitializationString](#openfrominitializationstring)|Apre l'origine dati specificata da una stringa di inizializzazione.|
|[OpenWithPromptFileName](#openwithpromptfilename)|Consente all'utente di selezionare un file di collegamento dati creata in precedenza per aprire l'origine dati corrispondente.|
|[OpenWithServiceComponents](#openwithservicecomponents)|Apre un oggetto di origine dati usando la finestra di dialogo collegamenti dati.|

## <a name="remarks"></a>Note

È possibile creare una o più sessioni di database per una singola connessione. Queste sessioni vengono rappresentate da `CSession`. È necessario chiamare [CDataSource:: Open](../../data/oledb/cdatasource-open.md) per aprire la connessione prima di creare una sessione con `CSession::Open`.

Per un esempio d'uso `CDataSource`, vedere la [CatDB](../../visual-cpp-samples.md) esempio.

## <a name="close"></a> CDataSource:: Close

Chiude la connessione rilasciando il `m_spInit` puntatore.

### <a name="syntax"></a>Sintassi

```cpp
void Close() throw();
```

## <a name="getinitializationstring"></a> CDataSource:: Getinitializationstring

Recupera la stringa di inizializzazione di un'origine dati che è attualmente aperta.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetInitializationString(BSTR* pInitializationString, 
   bool bIncludePassword = false) throw();
```

#### <a name="parameters"></a>Parametri

*pInitializationString*<br/>
[out] Puntatore alla stringa di inizializzazione.

*bIncludePassword*<br/>
[in] **true** se string è inclusa una password; in caso contrario **false**.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

La stringa di inizializzazione risultante è utilizzabile per in un secondo momento si riapre la connessione all'origine dati.

## <a name="getproperties"></a> CDataSource:: GetProperties

Restituisce le informazioni di proprietà richieste per l'oggetto origine dati connessa.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetProperties(ULONG ulPropIDSets, 
   constDBPROPIDSET* pPropIDSet, 
   ULONG* pulPropertySets, 
   DBPROPSET** ppPropsets) const throw();
```

#### <a name="parameters"></a>Parametri

Visualizzare [IDBProperties:: GetProperties](/previous-versions/windows/desktop/ms714344) nel *riferimento per programmatori OLE DB* in Windows SDK.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Per ottenere una singola proprietà, usare [GetProperty](../../data/oledb/cdatasource-getproperty.md).

## <a name="getproperty"></a> CDataSource:: GetProperty

Restituisce il valore di una proprietà specificata per l'oggetto origine dati connessa.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetProperty(const GUID& guid, 
   DBPROPID propid, 
   VARIANT* pVariant) const throw();
```

#### <a name="parameters"></a>Parametri

*guid*<br/>
[in] Un GUID che identifica il set di proprietà per cui restituire la proprietà.

*PropID*<br/>
[in] ID di proprietà per la proprietà da restituire.

*pVariant*<br/>
[out] Un puntatore alla variante in cui `GetProperty` restituisce il valore della proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Per ottenere più proprietà, usare [GetProperties](../../data/oledb/cdatasource-getproperties.md).

## <a name="open"></a> CDataSource:: Open

Apre una connessione a un'origine dati usando un `CLSID`, `ProgID`, o `CEnumerator` moniker o chiede all'utente con una finestra di dialogo del localizzatore.

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

*clsid*<br/>
[in] Il `CLSID` del provider di dati.

*pPropSet*<br/>
[in] Un puntatore a una matrice di [DBPROPSET](/previous-versions/windows/desktop/ms714367) strutture contenenti le proprietà e valori da impostare. Visualizzare [set di proprietà e i gruppi di proprietà](/previous-versions/windows/desktop/ms713696) nel *riferimento per programmatori OLE DB* in Windows SDK.

*nPropertySets*<br/>
[in] Il numero di [DBPROPSET](/previous-versions/windows/desktop/ms714367) strutture passato il *pPropSet* argomento.

*pName*<br/>
[in] Nome del database a cui connettersi.

*pUserName*<br/>
[in] Nome dell'utente.

*pPassword*<br/>
[in] Password dell'utente.

*nInitMode*<br/>
[in] Modalità di inizializzazione del database. Visualizzare [le proprietà di inizializzazione](/previous-versions/windows/desktop/ms723127)nel *riferimento per programmatori OLE DB* nel SDK di Windows per un elenco delle modalità di inizializzazione valido. Se *nInitMode* è l'inizializzazione zero, nessuna modalità è inclusa nel set di proprietà usato per aprire la connessione.

*szProgID*<br/>
[in] Identificatore di un programma.

*enumerator*<br/>
[in] Oggetto [CEnumerator](../../data/oledb/cenumerator-class.md) usato per ottenere un moniker per l'apertura della connessione quando il chiamante non specifica un `CLSID`.

*hWnd*<br/>
[in] Handle per la finestra che deve essere l'elemento padre della finestra di dialogo. Usando l'overload della funzione che usa il *hWnd* parametro richiamerà automaticamente i componenti del servizio, vedere la sezione Osservazioni per informazioni dettagliate.

*dwPromptOptions*<br/>
[in] Determina lo stile della finestra di dialogo del localizzatore da visualizzare. Per i possibili valori, vedere Msdasc.h.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'overload del metodo che usa il *hWnd* parametro consente di aprire un oggetto origine dati con i componenti del servizio in oledb32.dll; questa DLL contiene l'implementazione delle funzionalità di componenti del servizio, ad esempio il pool di risorse, automatico L'inserimento delle transazioni e così via. Per altre informazioni, vedere "Servizi OLE DB" in riferimento all'OLE DB Programmer indirizzo [ https://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true ](https://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).

Gli overload del metodo che non usano i *hWnd* parametro aprire un oggetto origine dati senza usare i componenti del servizio in oledb32.dll. Oggetto [CDataSource](../../data/oledb/cdatasource-class.md) oggetto aperto con questi overload della funzione sarà in grado di usare tutte le funzionalità dei componenti del servizio.

### <a name="example"></a>Esempio

Il codice seguente mostra come aprire un'origine dati Jet 4.0 con modelli OLE DB. L'origine dati Jet deve essere considerata un'origine dati OLE DB. Tuttavia, la chiamata a `Open` necessita di due set di proprietà: uno per DBPROPSET_DBINIT e l'altro per DBPROPSET_JETOLEDB_DBINIT, in modo che sia possibile impostare DBPROP_JETOLEDB_DATABASEPASSWORD.

[!code-cpp[NVC_OLEDB_Consumer#7](../../data/oledb/codesnippet/cpp/cdatasource-open_1.cpp)]

## <a name="openfromfilename"></a> CDataSource:: Openfromfilename

Apre un'origine dati da un file specificato dal nome file fornito dall'utente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT OpenFromFileName(LPCOLESTR szFileName) throw();
```

#### <a name="parameters"></a>Parametri

*szFileName*<br/>
[in] Nome di un file, in genere un file di connessione all'origine dati (UDL).

Per altre informazioni sui file di collegamento dati (file con estensione udl), vedere [Introduzione all'API di collegamento dati](/previous-versions/windows/desktop/ms718102) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via. Per altre informazioni, vedere "Servizi OLE DB" in riferimento all'OLE DB Programmer indirizzo [ https://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true ](https://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).

## <a name="openfrominitializationstring"></a> CDataSource:: OpenFromInitializationString

Apre un'origine dati specificata dalla stringa di inizializzazione specificati dall'utente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT OpenFromInitializationString(LPCOLESTR szInitializationString, 
   bool fPromptForInfo= false) throw();
```

#### <a name="parameters"></a>Parametri

*szInitializationString*<br/>
[in] La stringa di inizializzazione.

*fPromptForInfo*<br/>
[in] Se questo argomento è impostato su **true**, quindi `OpenFromInitializationString` imposterà la proprietà DBPROP_INIT_PROMPT su DBPROMPT_COMPLETEREQUIRED, che specifica che l'utente richiesto solo se sono necessarie maggiori informazioni. Ciò è utile nelle situazioni in cui la stringa di inizializzazione consente di specificare un database che richiede una password, ma la stringa non contiene la password. L'utente verrà chiesta una password (o qualsiasi altra informazione mancante) quando si tenta di connettersi al database.

Il valore predefinito è **false**, che consente di specificare che l'utente non sia mai fornite dall'utente (set di DBPROP_INIT_PROMPT su DBPROMPT_NOPROMPT).

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via.

## <a name="openwithpromptfilename"></a> CDataSource:: Openwithpromptfilename

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

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via. Per altre informazioni, vedere "Servizi OLE DB" in riferimento all'OLE DB Programmer indirizzo [ https://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true ](https://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).

## <a name="openwithservicecomponents"></a> CDataSource:: Openwithservicecomponents

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

*clsid*<br/>
[in] Il `CLSID` di un provider di dati.

*szProgID*<br/>
[in] ID programma di un provider di dati.

*pPropset*<br/>
[in] Un puntatore a una matrice di [DBPROPSET](/previous-versions/windows/desktop/ms714367) strutture contenenti le proprietà e valori da impostare. Visualizzare [set di proprietà e i gruppi di proprietà](/previous-versions/windows/desktop/ms713696) nel *riferimento per programmatori OLE DB* in Windows SDK. Se l'oggetto origine dati viene inizializzato, le proprietà devono appartenere al gruppo di proprietà Data Source. Se viene specificata più volte la stessa proprietà in *pPropset*, quindi viene usato il valore è specifico del provider. Se *ulPropSets* è uguale a zero, questo parametro viene ignorato.

*ulPropSets*<br/>
[in] Il numero di [DBPROPSET](/previous-versions/windows/desktop/ms714367) strutture passato il *pPropSet* argomento. Se è zero, il provider ignora *pPropset*.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via. Per altre informazioni, vedere "Servizi OLE DB" in riferimento all'OLE DB Programmer indirizzo [ https://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true ](https://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)