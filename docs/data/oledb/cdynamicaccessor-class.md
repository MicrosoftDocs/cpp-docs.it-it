---
title: Classe CDynamicAccessor | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CDynamicAccessor
- ATL::CDynamicAccessor
- CDynamicAccessor
- ATL::CDynamicAccessor::AddBindEntry
- AddBindEntry
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
- GetColumnFlags
- GetColumnInfo
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c1934c7857e8c7813f653b6f12be0ba523ec63fb
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42573054"
---
# <a name="cdynamicaccessor-class"></a>Classe CDynamicAccessor
Consente di accedere a un'origine dati quando non si conosce lo schema del database (la struttura sottostante del database).  
  
## <a name="syntax"></a>Sintassi

```cpp
class CDynamicAccessor : public CAccessorBase  
```  

## <a name="requirements"></a>Requisiti  
 **Intestazione**: atldbcli.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddBindEntry](#addbindentry)|Aggiunge una voce binding alle colonne di output quando si sostituisce la funzione di accesso predefinito.|  
|[CDynamicAccessor](#cdynamicaccessor)|Crea e inizializza il `CDynamicAccessor` oggetto.|  
|[Chiudi](#close)|Separa tutte le colonne, libera la memoria allocata e rilascia il [IAccessor](/previous-versions/windows/desktop/ms719672\(v=vs.85\)) puntatore a interfaccia nella classe.|  
|[GetBlobHandling](#getblobhandling)|Recupera il BLOB di gestione di valore per la riga corrente.|  
|[GetBlobSizeLimit](#getblobsizelimit)|Recupera le dimensioni BLOB massime in byte.|  
|[GetBookmark](#getbookmark)|Recupera il segnalibro per la riga corrente.|  
|[GetColumnCount](#getcolumncount)|Recupera il numero di colonne nel set di righe.|  
|[GetColumnFlags](#getcolumnflags)|Recupera le caratteristiche di colonna.|  
|[GetColumnInfo](#getcolumninfo)|Recupera i metadati della colonna.|  
|[GetColumnName](#getcolumnname)|Recupera il nome di una colonna specificata.|  
|[GetColumnType](#getcolumntype)|Recupera il tipo di dati di una colonna specificata.|  
|[GetLength](#getlength)|Recupera la lunghezza massima possibile di una colonna in byte.|  
|[GetOrdinal](#getordinal)|Recupera l'indice di colonna assegnato un nome di colonna.|  
|[GetStatus](#getstatus)|Recupera lo stato di una colonna specificata.|  
|[GetValue](#getvalue)|Recupera i dati dal buffer.|  
|[SetBlobHandling](#setblobhandling)|Imposta il BLOB di gestione di valore per la riga corrente.|  
|[SetBlobSizeLimit](#setblobsizelimit)|Imposta le dimensioni BLOB massime in byte.|  
|[SetLength](#setlength)|Imposta la lunghezza della colonna in byte.|  
|[SetStatus](#setstatus)|Imposta lo stato di una colonna specificata.|  
|[SetValue](#setvalue)|Archivia i dati nel buffer.|  
  
## <a name="remarks"></a>Note  
 Usare `CDynamicAccessor` metodi per ottenere informazioni sulle colonne, ad esempio i nomi delle colonne, numero di colonne, tipo di dati e così via. È quindi possibile utilizzare queste informazioni di colonna per creare una funzione di accesso in modo dinamico in fase di esecuzione.  
  
 Le informazioni di colonna vengono archiviate in un buffer che viene creato e gestito da questa classe. Ottenere dati dal buffer, utilizzare [GetValue](../../data/oledb/cdynamicaccessor-getvalue.md).  
  
 Per informazioni ed esempi di utilizzo delle classi della funzione di accesso dinamico, vedere [usando le funzioni di accesso dinamico](../../data/oledb/using-dynamic-accessors.md).  

## <a name="addbindentry"></a> CDynamicAccessor:: AddBindEntry
Aggiunge una voce binding alle colonne di output.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT AddBindEntry(const DBCOLUMNINFO& info) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *Informazioni*  
 [in] Oggetto `DBCOLUMNINFO` struttura che contiene informazioni sulla colonna. Vedere "Strutture DBCOLUMNINFO" nella [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo quando si esegue l'override della funzione di accesso predefinito creato con `CDynamicAccessor` (vedere [How Do I dati di recuperare?](../../data/oledb/fetching-data.md)). 
  
## <a name="cdynamicaccessor"></a> CDynamicAccessor:: CDynamicAccessor
Crea e inizializza il `CDynamicAccessor` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
CDynamicAccessor(DBBLOBHANDLINGENUM eBlobHandling = DBBLOBHANDLING_DEFAULT,   
   DBLENGTH nBlobSize = 8000);  
```  
  
#### <a name="parameters"></a>Parametri  
 *eBlobHandling*  
 Specifica come devono essere gestiti i dati oggetto binario di grandi dimensioni (BLOB). Il valore predefinito è DBBLOBHANDLING_DEFAULT. Visualizzare [SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md) per una descrizione dei valori DBBLOBHANDLINGENUM.  
  
 *nBlobSize*  
 Le dimensioni BLOB massime in byte. dati della colonna su questo valore viene trattati come un BLOB. Il valore predefinito è 8.000. Visualizzare [SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md) per informazioni dettagliate.  
  
### <a name="remarks"></a>Note  
 Se si utilizza il costruttore per inizializzare il `CDynamicAccessor` dell'oggetto, è possibile specificare come assocerà i BLOB. I BLOB possono contenere dati binari quali immagini, audio e codice compilato. Il comportamento predefinito consiste nel considerare le colonne più di 8.000 byte come i BLOB e provare a associarle a un `ISequentialStream` oggetto. Tuttavia, è possibile specificare un valore diverso per le dimensioni del BLOB.  
  
 È inoltre possibile specificare come `CDynamicAccessor` gestisce i dati di colonna che può fregiarsi come dati BLOB: può gestire i dati BLOB in modo predefinito, è possibile ignorare (associare) i dati BLOB; o è possibile associare i dati BLOB nella memoria allocata al provider.  

## <a name="close"></a> CDynamicAccessor:: Close
Separa tutte le colonne, libera la memoria allocata e rilascia il [IAccessor](/previous-versions/windows/desktop/ms719672\(v=vs.85\)) puntatore a interfaccia nella classe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
void Close() throw();  
```  

## <a name="getblobhandling"></a> CDynamicAccessor:: Getblobhandling
Recupera il BLOB di gestione di valore per la riga corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
const DBBLOBHANDLINGENUM GetBlobHandling() const;  
```  
  
### <a name="remarks"></a>Note  
 Restituisce il BLOB di gestione di valore *eBlobHandling* secondo l'impostazione [SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md). 

## <a name="getblobsizelimit"></a> CDynamicAccessor:: Getblobsizelimit
Recupera le dimensioni BLOB massime in byte.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
const DBLENGTH GetBlobSizeLimit() const;  
```  
  
### <a name="remarks"></a>Note  
 Restituisce il BLOB di gestione di valore *nBlobSize* secondo l'impostazione [SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md).  

## <a name="getbookmark"></a> CDynamicAccessor:: GetBookmark
Recupera il segnalibro per la riga corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetBookmark(CBookmark< >* pBookmark) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *pBookmark*  
 [out] Un puntatore per il [CBookmark](../../data/oledb/cbookmark-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 È necessario impostare `DBPROP_IRowsetLocate` su VARIANT_TRUE per recuperare un segnalibro. 

## <a name="getcolumncount"></a> CDynamicAccessor:: GetColumnCount
Recupera il numero di colonne.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
DBORDINAL GetColumnCount() const throw();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di colonne recuperate.  

## <a name="getcolumnflags"></a> CDynamicAccessor:: Getcolumnflags
Recupera le caratteristiche di colonna.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
bool GetColumnFlags(DBORDINAL nColumn,   
   DBCOLUMNFLAGS* pFlags) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *nColumn*  
 [in] Numero di colonna. Numeri di colonna partono da 1. Un valore pari a 0 fa riferimento per la colonna del segnalibro, se presente.  
  
 *pFlags*  
 [out] Puntatore a una maschera di bit che descrive le caratteristiche della colonna. Vedere "Tipo enumerato DBCOLUMNFLAGS" nella [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se le caratteristiche di colonna vengono recuperate correttamente. Negli altri casi, viene restituito **false**.  
  
### <a name="remarks"></a>Note  
 Il numero di colonna ha uno scarto rispetto a uno. La colonna zero è un caso speciale: è il segnalibro se disponibile.

## <a name="getcolumninfo"></a> CDynamicAccessor:: GetColumnInfo
Restituisce i metadati della colonna necessari per la maggior parte dei consumatori.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetColumnInfo(IRowset* pRowset,   
   DBORDINAL* pColumns,   
   DBCOLUMNINFO** ppColumnInfo,   
   OLECHAR** ppStringsBuffer) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *pRowset*  
 [in] Un puntatore per il [IRowset](/previous-versions/windows/desktop/ms720986\(v=vs.85\)) interfaccia.  
  
 *pColumns*  
 [out] Puntatore alla memoria in cui restituire il numero di colonne nel set di righe; Questo numero include la colonna del segnalibro, se presente.  
  
 *ppColumnInfo*  
 [out] Puntatore alla memoria in cui restituire una matrice di `DBCOLUMNINFO` strutture. Vedere "Strutture DBCOLUMNINFO" nella [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
 *ppStringsBuffer*  
 [out] Un puntatore alla memoria in cui si desidera restituire un puntatore alla risorsa di archiviazione per tutti i valori stringa (nomi utilizzati all'interno *columnid* o per *pwszName*) all'interno di un singolo blocco di allocazione.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per informazioni sui tipi di dati `DBORDINAL`, `DBCOLUMNINFO`, e `OLECHAR`.  

## <a name="getcolumnname"></a> CDynamicAccessor:: Getcolumnname
Recupera il nome della colonna specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
LPOLESTR GetColumnName(DBORDINAL nColumn) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *nColumn*  
 [in] Numero di colonna. Numeri di colonna partono da 1. Un valore pari a 0 fa riferimento per la colonna del segnalibro, se presente.  
  
### <a name="return-value"></a>Valore restituito  
 Nome della colonna specificata.  

## <a name="getcolumntype"></a> CDynamicAccessor:: Getcolumntype
Recupera il tipo di dati di una colonna specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
bool GetColumnType(DBORDINAL nColumn,   
   DBTYPE* pType) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *nColumn*  
 [in] Numero di colonna. Numeri di colonna partono da 1. Un valore pari a 0 fa riferimento per la colonna del segnalibro, se presente.  
  
 *PDigitare*  
 [out] Puntatore al tipo di dati della colonna specificata.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** esito è positivo oppure **false** in caso di errore.  

## <a name="getlength"></a> CDynamicAccessor:: GetLength
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
 *nColumn*  
 [in] Numero di colonna. Numeri di colonna partono da 1. Un valore pari a 0 fa riferimento per la colonna del segnalibro, se presente.  
  
 *pColumnName*  
 [in] Puntatore a una stringa di caratteri che contiene il nome della colonna.  
  
 *pLength*  
 [out] Puntatore al numero intero contenente la lunghezza della colonna in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se la colonna specificata viene trovata. In caso contrario, questa funzione restituisce **false**.  
  
### <a name="remarks"></a>Note  
 Il primo override prende il numero di colonna e le sostituzioni di seconda e terza richiedere il nome della colonna in formato ANSI o Unicode, rispettivamente. 

## <a name="getordinal"></a> CDynamicAccessor:: GetOrdinal
Recupera il numero di colonna dato il nome di una colonna.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
bool GetOrdinal(const CHAR* pColumnName,  
   DBORDINAL* pOrdinal) const throw();  

bool GetOrdinal(const WCHAR* pColumnName,  
   DBORDINAL* pOrdinal) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *pColumnName*  
 [in] Puntatore a una stringa di caratteri che contiene il nome della colonna.  
  
 *pOrdinal*  
 [out] Puntatore al numero di colonna.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se viene trovata una colonna con il nome specificato. In caso contrario, questa funzione restituisce **false**.

## <a name="getstatus"></a> CDynamicAccessor:: GetStatus
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
 *nColumn*  
 [in] Numero di colonna. Numeri di colonna partono da 1. Un valore pari a 0 fa riferimento per la colonna del segnalibro, se presente.  
  
 *pColumnName*  
 [in] Puntatore a una stringa di caratteri che contiene il nome della colonna.  
  
 *pStatus*  
 [out] Puntatore alla variabile che contiene lo stato della colonna. Visualizzare [DBSTATUS](/previous-versions/windows/desktop/ms722617\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per altre informazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se la colonna specificata viene trovata. In caso contrario, questa funzione restituisce **false**.  

## <a name="getvalue"></a> CDynamicAccessor:: GetValue
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
 *ctype*  
 [in] Un parametro basato su modelli che gestisce qualsiasi tipo di dati, ad eccezione di tipo stringa (`CHAR*`, `WCHAR*`), che richiedono una gestione speciale. `GetValue` Usa il tipo di dati appropriato basato ciò che si specifica qui.  
  
 *nColumn*  
 [in] Numero di colonna. Numeri di colonna partono da 1. Un valore pari a 0 fa riferimento per la colonna del segnalibro, se presente.  
  
 *pColumnName*  
 [in] Il nome della colonna.  
  
 *pData*  
 [out] Il puntatore per il contenuto della colonna specificata.  
  
### <a name="return-value"></a>Valore restituito  
 Se si desidera passare dati di tipo stringa, usare le versioni non basata su modelli di `GetValue`. Le versioni esplicita del metodo restituiscono `void*`, che punta alla parte del buffer che contiene i dati della colonna specificata. Restituisce NULL se la colonna non viene trovata.  
  
 Per tutti gli altri tipi di dati, è più semplice usare le versioni basate su modelli di `GetValue`. Le versioni basate su modelli restituiscono **true** esito è positivo oppure **false** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Usare le versioni non basata su modelli per restituire le colonne che contengono le stringhe e le versioni basate su modelli per le colonne che contengono altri tipi di dati.  
  
 In modalità debug, si otterrà un'asserzione se il valore pari *pData* non è uguale alla dimensione della colonna a cui punta.  

## <a name="setblobhandling"></a> CDynamicAccessor:: Setblobhandling
Imposta il BLOB di gestione di valore per la riga corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
bool SetBlobHandling(DBBLOBHANDLINGENUM eBlobHandling);  
```  
  
#### <a name="parameters"></a>Parametri  
 *eBlobHandling*  
 Specifica la modalità con cui i dati BLOB diventano essere gestito. È possibile accettare i valori seguenti:  
  
-   DBBLOBHANDLING_DEFAULT: Gestire i dati di colonna più grandi *nBlobSize* (come impostato da `SetBlobSizeLimit`) come i dati BLOB e recuperare tramite una `ISequentialStream` o `IStream` oggetto. Questa opzione tenterà di associare ogni colonna che contiene i dati più grandi *nBlobSize* o elencato come DBTYPE_IUNKNOWN come dati del BLOB.  
  
-   DBBLOBHANDLING_NOSTREAMS: Gestire i dati di colonna più grandi *nBlobSize* (come impostato da `SetBlobSizeLimit`) come i dati BLOB e recuperarlo tramite riferimento nella memoria allocata al provider, proprietà del consumer. Questa opzione è utile per le tabelle con più di una colonna BLOB e il provider supporta solo un `ISequentialStream` oggetto per ogni funzione di accesso.  
  
-   DBBLOBHANDLING_SKIP: Ignorare (non deve essere associato) le colonne risultanti come contenenti i BLOB (funzione di accesso non associare o recuperare il valore della colonna, ma consente comunque di recuperare lo stato di colonna e una lunghezza).  
  
### <a name="remarks"></a>Note  
 È consigliabile chiamare `SetBlobHandling` prima di chiamare `Open`.  
  
 Il metodo del costruttore [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) imposta BLOB gestisce valore DBBLOBHANDLING_DEFAULT.

## <a name="setblobsizelimit"></a> CDynamicAccessor:: Setblobsizelimit
Imposta le dimensioni BLOB massime in byte.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
void SetBlobSizeLimit(DBLENGTH nBlobSize);  
```  
  
#### <a name="parameters"></a>Parametri  
 *nBlobSize*  
 Specifica il limite delle dimensioni BLOB.  
  
### <a name="remarks"></a>Note  
 Imposta le dimensioni BLOB massime in byte. dati della colonna superiori a questo valore viene trattati come un BLOB. Alcuni provider offrono estremamente grandi dimensioni per le colonne (ad esempio, 2 GB). Piuttosto che tentare di allocare memoria per una colonna di questa dimensione, si sarebbe in genere tenta di associare queste colonne come BLOB. In questo modo non è necessario allocare tutta la memoria, ma è comunque possibile leggere tutti i dati senza timore di troncamento. Tuttavia, esistono alcuni casi in cui è possibile eseguire forzare `CDynamicAccessor` per associare le colonne di grandi dimensioni in tipi di dati nativi. A tale scopo, chiamare `SetBlobSizeLimit` prima di chiamare `Open`.  
  
 Il metodo del costruttore [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) imposta le dimensioni BLOB massime per un valore predefinito di 8.000 byte.  

## <a name="setlength"></a> CDynamicAccessor:: SetLength
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
 *nColumn*  
 [in] Numero di colonna. Numeri di colonna partono da 1. Un valore pari a 0 fa riferimento per la colonna del segnalibro, se presente.  
  
 *nLength*  
 [in] La lunghezza della colonna in byte.  
  
 *pColumnName*  
 [in] Puntatore a una stringa di caratteri che contiene il nome della colonna.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se la lunghezza della colonna specificata è impostata correttamente. In caso contrario, questa funzione restituisce **false**.  

## <a name="setstatus"></a> CDynamicAccessor:: SetStatus
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
 *nColumn*  
 [in] Numero di colonna. Numeri di colonna partono da 1. Un valore pari a 0 fa riferimento per la colonna del segnalibro, se presente.  
  
 *status*  
 [in] Stato della colonna. Visualizzare [DBSTATUS](/previous-versions/windows/desktop/ms722617\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per altre informazioni.  
  
 *pColumnName*  
 [in] Puntatore a una stringa di caratteri che contiene il nome della colonna.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se lo stato della colonna specificata è impostato correttamente. In caso contrario, questa funzione restituisce **false**. 

## <a name="setvalue"></a> CDynamicAccessor:: SetValue
Archivia i dati a una colonna specificata.  
  
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
 *ctype*  
 [in] Un parametro basato su modelli che gestisce qualsiasi tipo di dati, ad eccezione di tipo stringa (`CHAR*`, `WCHAR*`), che richiedono una gestione speciale. `GetValue` Usa il tipo di dati appropriato basato ciò che si specifica qui.  
  
 *pColumnName*  
 [in] Puntatore a una stringa di caratteri che contiene il nome della colonna.  
  
 *data*  
 [in] Puntatore alla memoria contenente i dati.  
  
 *nColumn*  
 [in] Numero di colonna. Numeri di colonna partono da 1. Un valore pari a 0 fa riferimento per la colonna del segnalibro, se presente.  
  
### <a name="return-value"></a>Valore restituito  
 Se si desidera impostare dati di tipo stringa, usare le versioni non basata su modelli di `GetValue`. Le versioni esplicita del metodo restituiscono `void*`, che punta alla parte del buffer che contiene i dati della colonna specificata. Restituisce NULL se la colonna non viene trovata.  
  
 Per tutti gli altri tipi di dati, è più semplice usare le versioni basate su modelli di `GetValue`. Le versioni basate su modelli restituiscono **true** esito è positivo oppure **false** in caso di errore.  

## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Classe CAccessor](../../data/oledb/caccessor-class.md)   
 [CDynamicParameterAccessor (classe)](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)