---
title: CDynamicParameterAccessor (classe)
ms.date: 02/14/2018
f1_keywords:
- ATL.CDynamicParameterAccessor
- ATL::CDynamicParameterAccessor
- CDynamicParameterAccessor
- CDynamicParameterAccessor::CDynamicParameterAccessor
- CDynamicParameterAccessor.CDynamicParameterAccessor
- CDynamicParameterAccessor::GetParam
- ATL.CDynamicParameterAccessor.GetParam
- CDynamicParameterAccessor::GetParam<ctype>
- CDynamicParameterAccessor.GetParam
- GetParam
- ATL::CDynamicParameterAccessor::GetParam<ctype>
- ATL::CDynamicParameterAccessor::GetParam
- ATL::CDynamicParameterAccessor::GetParamCount
- CDynamicParameterAccessor::GetParamCount
- CDynamicParameterAccessor.GetParamCount
- GetParamCount
- ATL.CDynamicParameterAccessor.GetParamCount
- GetParamIO
- CDynamicParameterAccessor::GetParamIO
- ATL.CDynamicParameterAccessor.GetParamIO
- CDynamicParameterAccessor.GetParamIO
- ATL::CDynamicParameterAccessor::GetParamIO
- ATL::CDynamicParameterAccessor::GetParamLength
- ATL.CDynamicParameterAccessor.GetParamLength
- CDynamicParameterAccessor.GetParamLength
- CDynamicParameterAccessor::GetParamLength
- GetParamLength
- CDynamicParameterAccessor::GetParamName
- ATL.CDynamicParameterAccessor.GetParamName
- GetParamName
- CDynamicParameterAccessor.GetParamName
- ATL::CDynamicParameterAccessor::GetParamName
- CDynamicParameterAccessor::GetParamStatus
- CDynamicParameterAccessor.GetParamStatus
- ATL.CDynamicParameterAccessor.GetParamStatus
- ATL::CDynamicParameterAccessor::GetParamStatus
- GetParamStatus
- CDynamicParameterAccessor.GetParamString
- GetParamString
- CDynamicParameterAccessor::GetParamString
- ATL.CDynamicParameterAccessor.GetParamString
- ATL::CDynamicParameterAccessor::GetParamString
- CDynamicParameterAccessor.GetParamType
- CDynamicParameterAccessor:GetParamType
- CDynamicParameterAccessor::GetParamType
- ATL.CDynamicParameterAccessor.GetParamType
- GetParamType
- ATL::CDynamicParameterAccessor::GetParamType
- ATL::CDynamicParameterAccessor::SetParam
- ATL::CDynamicParameterAccessor::SetParam<ctype>
- CDynamicParameterAccessor.SetParam
- ATL.CDynamicParameterAccessor.SetParam
- SetParam
- CDynamicParameterAccessor:SetParam
- CDynamicParameterAccessor::SetParam<ctype>
- CDynamicParameterAccessor::SetParam
- ATL::CDynamicParameterAccessor::SetParamLength
- CDynamicParameterAccessor.SetParamLength
- ATL.CDynamicParameterAccessor.SetParamLength
- CDynamicParameterAccessor::SetParamLength
- SetParamLength
- CDynamicParameterAccessor::SetParamStatus
- ATL.CDynamicParameterAccessor.SetParamStatus
- ATL::CDynamicParameterAccessor::SetParamStatus
- CDynamicParameterAccessor.SetParamStatus
- SetParamStatus
- ATL.CDynamicParameterAccessor.SetParamString
- ATL::CDynamicParameterAccessor::SetParamString
- SetParamString
- CDynamicParameterAccessor::SetParamString
- CDynamicParameterAccessor.SetParamString
helpviewer_keywords:
- CDynamicParameterAccessor class
- CDynamicParameterAccessor class, constructor
- CDynamicParameterAccessor method
- GetParam method
- GetParamCount method
- GetParamIO method
- GetParamLength method
- GetParamName method
- GetParamStatus method
- GetParamString method
- GetParamType method
- SetParam method
- SetParamLength method
- SetParamStatus method
- SetParamString method
ms.assetid: 5f22626e-e80d-491f-8b3b-cedc50331960
ms.openlocfilehash: 4596f5181dd197b16786ee4d4d16cf06721b13b6
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91498651"
---
# <a name="cdynamicparameteraccessor-class"></a>CDynamicParameterAccessor (classe)

Simile a [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) ma ottiene le informazioni sui parametri da impostare chiamando l'interfaccia [ICommandWithParameters](/sql/relational-databases/native-client-ole-db-interfaces/icommandwithparameters) .

## <a name="syntax"></a>Sintassi

```cpp
class CDynamicParameterAccessor : public CDynamicAccessor
```

## <a name="requirements"></a>Requisiti

**Intestazione**: atldbcli. h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Descrizione |
|-|-|
|[CDynamicParameterAccessor](#cdynamicparameteraccessor)|Costruttore.|
|[GetParam](#getparam)|Recupera i dati del parametro dal buffer.|
|[GetParamCount](#getparamcount)|Recupera il numero di parametri nella funzione di accesso.|
|[GetParamIO](#getparamio)|Determina se il parametro specificato è un parametro di input o output.|
|[GetParamLength](#getparamlength)|Recupera la lunghezza del parametro specificato archiviato nel buffer.|
|[GetParamName](#getparamname)|Recupera il nome di un parametro specificato.|
|[GetParamStatus](#getparamstatus)|Recupera lo stato del parametro specificato archiviato nel buffer.|
|[GetParamString](#getparamstring)|Recupera i dati string del parametro specificato archiviato nel buffer.|
|[GetParamType](#getparamtype)|Recupera il tipo di dati di un parametro specificato.|
|[SetParam](#setparam)|Imposta il buffer usando i dati del parametro.|
|[SetParamLength](#setparamlength)|Imposta la lunghezza del parametro specificato archiviato nel buffer.|
|[SetParamStatus](#setparamstatus)|Imposta lo stato del parametro specificato archiviato nel buffer.|
|[SetParamString](#setparamstring)|Imposta i dati string del parametro specificato archiviato nel buffer.|

## <a name="remarks"></a>Osservazioni

Il provider deve supportare `ICommandWithParameters` in modo che il consumer usi questa classe.

Le informazioni di parametro vengono archiviate in un buffer creato e gestito da questa classe. Per ottenere i dati dei parametri dal buffer, usare [GetParam](#getparam) e [GetParamType](#getparamtype).

Per un esempio che illustra come usare questa classe per eseguire un SQL Server stored procedure e ottenere i valori dei parametri di output, vedere il codice di esempio [DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer) nel repository [Microsoft VCSamples](https://github.com/Microsoft/VCSamples) su GitHub.

## <a name="cdynamicparameteraccessorcdynamicparameteraccessor"></a><a name="cdynamicparameteraccessor"></a> CDynamicParameterAccessor:: CDynamicParameterAccessor

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
typedef CDynamicParameterAccessor _ParamClass;
CDynamicParameterAccessor(
   DBBLOBHANDLINGENUM eBlobHandling = DBBLOBHANDLING_DEFAULT,
   DBLENGTH nBlobSize = 8000 )
   : CDynamicAccessor(eBlobHandling, nBlobSize )
```

#### <a name="parameters"></a>Parametri

*eBlobHandling*<br/>
Specifica il modo in cui devono essere gestiti i dati BLOB. Il valore predefinito è DBBLOBHANDLING_DEFAULT. Per una descrizione dei valori di DBBLOBHANDLINGENUM, vedere [CDynamicAccessor:: SetBlobHandling](./cdynamicaccessor-class.md#setblobhandling) .

*nBlobSize*<br/>
Dimensioni massime del BLOB in byte; i dati della colonna su questo valore vengono considerati come un BLOB. Il valore predefinito è 8.000. Per informazioni dettagliate, vedere [CDynamicAccessor:: SetBlobSizeLimit](./cdynamicaccessor-class.md#setblobsizelimit) .

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla gestione dei BLOB, vedere il costruttore [CDynamicAccessor:: CDynamicAccessor](./cdynamicaccessor-class.md#cdynamicaccessor) .

## <a name="cdynamicparameteraccessorgetparam"></a><a name="getparam"></a> CDynamicParameterAccessor:: GetParam

Recupera i dati non stringa per un parametro specificato dal buffer dei parametri.

### <a name="syntax"></a>Sintassi

```cpp
template <class ctype>bool GetParam(DBORDINAL nParam,
   ctype* pData) const throw();

template <class ctype> bool GetParam(TCHAR* pParamName,
   ctype* pData) const throw();

void* GetParam(DBORDINAL nParam) const throw();

void* GetParam(TCHAR* pParamName) const throw();
```

#### <a name="parameters"></a>Parametri

*ctype*<br/>
Parametro basato su modelli che rappresenta il tipo di dati.

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Per un esempio, vedere [separar](#setparam) .

*pParamName*<br/>
in Nome del parametro.

*pData*<br/>
out Puntatore alla memoria contenente i dati recuperati dal buffer.

### <a name="return-value"></a>Valore restituito

Per le versioni non basate su modelli, punta alla memoria contenente i dati recuperati dal buffer. Per le versioni basate su modelli, restituisce in caso di **`true`** esito positivo o **`false`** negativo.

Utilizzare `GetParam` per recuperare i dati dei parametri non stringa dal buffer. Usare [GetParamString](#getparamstring) per recuperare i dati dei parametri di stringa dal buffer.

## <a name="cdynamicparameteraccessorgetparamcount"></a><a name="getparamcount"></a> CDynamicParameterAccessor:: GetParamCount

Recupera il numero di parametri archiviati nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
DB_UPARAMS GetParamCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero di parametri.

## <a name="cdynamicparameteraccessorgetparamio"></a><a name="getparamio"></a> CDynamicParameterAccessor:: GetParamIO

Determina se il parametro specificato è un parametro di input o output.

### <a name="syntax"></a>Sintassi

```cpp
bool GetParamIO(DBORDINAL nParam,
   DBPARAMIO* pParamIO) const throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Per un esempio, vedere [separar](#setparam) .

*pParamIO*<br/>
Puntatore alla variabile che contiene il `DBPARAMIO` tipo (input o output) del parametro specificato. Viene definita come segue:

```cpp
typedef DWORD DBPARAMIO;

enum DBPARAMIOENUM {
    DBPARAMIO_NOTPARAM   = 0,
    DBPARAMIO_INPUT      = 0x1,
    DBPARAMIO_OUTPUT     = 0x2
};
```

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** in caso di esito positivo o **`false`** negativo.

## <a name="cdynamicparameteraccessorgetparamlength"></a><a name="getparamlength"></a> CDynamicParameterAccessor:: GetParamLength

Recupera la lunghezza del parametro specificato archiviato nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
bool GetParamLength(DBORDINAL nParam,
   DBLENGTH* pLength);

DBLENGTH* GetParamLength(DBORDINAL nParam) const throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Per un esempio, vedere [separar](#setparam) .

*pLength*<br/>
[out] Puntatore alla variabile contenente la lunghezza in byte del parametro specificato.

### <a name="remarks"></a>Osservazioni

Il primo override restituisce **`true`** in caso di esito positivo o **`false`** negativo. Il secondo override punta alla memoria che contiene la lunghezza del parametro.

## <a name="cdynamicparameteraccessorgetparamname"></a><a name="getparamname"></a> CDynamicParameterAccessor:: getparamname

Recupera il nome del parametro specificato.

### <a name="syntax"></a>Sintassi

```cpp
LPOLESTR GetParamName(DBORDINAL nParam) const throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Per un esempio, vedere [separar](#setparam) .

### <a name="return-value"></a>Valore restituito

Nome del parametro specificato.

## <a name="cdynamicparameteraccessorgetparamstatus"></a><a name="getparamstatus"></a> CDynamicParameterAccessor:: GetParamStatus

Recupera lo stato del parametro specificato archiviato nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
bool GetParamStatus(DBORDINAL nParam,
   DBSTATUS* pStatus);

DBSTATUS* GetParamStatus(DBORDINAL nParam) const throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Per un esempio, vedere [separar](#setparam) .

*pStatus*<br/>
out Puntatore alla variabile che contiene lo stato DBSTATUS del parametro specificato. Per informazioni sui valori DBSTATUS, vedere [lo stato](/previous-versions/windows/desktop/ms722617(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*o cercare DBSTATUS in OLEDB. h.

### <a name="remarks"></a>Osservazioni

Il primo override restituisce **`true`** in caso di esito positivo o **`false`** negativo. Il secondo override punta alla memoria che contiene lo stato del parametro specificato.

## <a name="cdynamicparameteraccessorgetparamstring"></a><a name="getparamstring"></a> CDynamicParameterAccessor:: GetParamString

Recupera i dati string del parametro specificato archiviato nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
bool GetParamString(DBORDINAL nParam,
   CSimpleStringA& strOutput) throw();

bool GetParamString(DBORDINAL nParam,
   CSimpleStringW& strOutput) throw();

bool GetParamString(DBORDINAL nParam,
   CHAR* pBuffer,
   size_t* pMaxLen) throw();

bool GetParamString(DBORDINAL nParam,
   WCHAR* pBuffer,
   size_t* pMaxLen) throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Per un esempio, vedere [separar](#setparam) .

*strOutput*<br/>
out `CSimpleStringA`Dati di tipo stringa ANSI () o Unicode ( `CSimpleStringW` ) del parametro specificato. È necessario passare un parametro di tipo `CString` , ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#9](../../data/oledb/codesnippet/cpp/cdynamicparameteraccessor-getparamstring_1.cpp)]

*pBuffer*<br/>
out Puntatore ai dati stringa ANSI (**char**) o Unicode (**WCHAR**) del parametro specificato.

*pMaxLen*<br/>
out Puntatore alla dimensione del buffer a cui punta *pbuffer* (in caratteri, incluso il carattere null di terminazione).

### <a name="remarks"></a>Osservazioni

Restituisce **`true`** in caso di esito positivo o **`false`** negativo.

Se *pbuffer* è null, questo metodo imposterà la dimensione del buffer richiesta nella memoria a cui punta *pMaxLen* e restituirà **`true`** senza copiare i dati.

Questo metodo avrà esito negativo se il buffer *pbuffer* non è sufficientemente grande da contenere l'intera stringa.

Utilizzare `GetParamString` per recuperare i dati dei parametri di stringa dal buffer. Utilizzare [GetParam](#getparam) per recuperare i dati dei parametri non stringa dal buffer.

## <a name="cdynamicparameteraccessorgetparamtype"></a><a name="getparamtype"></a> CDynamicParameterAccessor:: GetParamType

Recupera il tipo di dati di un parametro specificato.

### <a name="syntax"></a>Sintassi

```cpp
bool GetParamType(DBORDINAL nParam,
   DBTYPE* pType) const throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Per un esempio, vedere [separar](#setparam) .

*pType*<br/>
out Puntatore alla variabile che contiene il tipo di dati del parametro specificato.

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** in caso di esito positivo o **`false`** negativo.

## <a name="cdynamicparameteraccessorsetparam"></a><a name="setparam"></a> CDynamicParameterAccessor:: separat

Imposta il buffer del parametro usando i dati (non di stringa) specificati.

### <a name="syntax"></a>Sintassi

```cpp
template <class ctype>
bool SetParam(DBORDINAL nParam,
   constctype* pData,
   DBSTATUS status = DBSTATUS_S_OK) throw();

template <class ctype>
bool SetParam(TCHAR* pParamName,
   const ctype* pData,
   DBSTATUS status = DBSTATUS_S_OK) throw();
```

#### <a name="parameters"></a>Parametri

*ctype*<br/>
Parametro basato su modelli che rappresenta il tipo di dati.

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#8](../../data/oledb/codesnippet/cpp/cdynamicparameteraccessor-setparam_1.cpp)]

*pParamName*<br/>
in Nome del parametro.

*pData*<br/>
in Puntatore alla memoria contenente i dati da scrivere nel buffer.

*Stato*<br/>
in Stato della colonna DBSTATUS. Per informazioni sui valori DBSTATUS, vedere [lo stato](/previous-versions/windows/desktop/ms722617(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*o cercare DBSTATUS in OLEDB. h.

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** in caso di esito positivo o **`false`** negativo.

Utilizzare `SetParam` per impostare dati di parametri non stringa nel buffer. Usare [SetParamString](#setparamstring) per impostare i dati dei parametri di stringa nel buffer.

## <a name="cdynamicparameteraccessorsetparamlength"></a><a name="setparamlength"></a> CDynamicParameterAccessor:: SetParamLength

Imposta la lunghezza del parametro specificato archiviato nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
bool SetParamLength(DBORDINAL nParam,
   DBLENGTH length);
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Per un esempio, vedere [separar](#setparam) .

*length*<br/>
in Lunghezza in byte del parametro specificato.

### <a name="remarks"></a>Osservazioni

Restituisce **`true`** in caso di esito positivo o **`false`** negativo.

## <a name="cdynamicparameteraccessorsetparamstatus"></a><a name="setparamstatus"></a> CDynamicParameterAccessor:: SetParamStatus

Imposta lo stato del parametro specificato archiviato nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
bool SetParamStatus(DBORDINAL nParam,
   DBSTATUS status);
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Per un esempio, vedere [separar](#setparam) .

*Stato*<br/>
in Stato DBSTATUS del parametro specificato. Per informazioni sui valori DBSTATUS, vedere [lo stato](/previous-versions/windows/desktop/ms722617(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*o cercare DBSTATUS in OLEDB. h.

### <a name="remarks"></a>Osservazioni

Restituisce **`true`** in caso di esito positivo o **`false`** negativo.

## <a name="cdynamicparameteraccessorsetparamstring"></a><a name="setparamstring"></a> CDynamicParameterAccessor:: SetParamString

Imposta i dati string del parametro specificato archiviato nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
bool SetParamString(DBORDINAL nParam,
   constCHAR* pString,
   DBSTATUS status = DBSTATUS_S_OK) throw();bool SetParamString(DBORDINAL nParam,
   constWCHAR* pString,
   DBSTATUS status = DBSTATUS_S_OK) throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Per un esempio, vedere [separar](#setparam) .

*pString*<br/>
in Puntatore ai dati stringa ANSI (**char**) o Unicode (**WCHAR**) del parametro specificato. Vedere DBSTATUS in OLEDB. h.

*Stato*<br/>
in Stato DBSTATUS del parametro specificato. Per informazioni sui valori DBSTATUS, vedere [lo stato](/previous-versions/windows/desktop/ms722617(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*o cercare DBSTATUS in OLEDB. h.

### <a name="remarks"></a>Osservazioni

Restituisce **`true`** in caso di esito positivo o **`false`** negativo.

`SetParamString` avrà esito negativo se si tenta di impostare una stringa maggiore della dimensione massima specificata per *pString*.

Utilizzare `SetParamString` per impostare i dati dei parametri di stringa nel buffer. Utilizzare [separator](#setparam) per impostare dati di parametri non stringa nel buffer.

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)
