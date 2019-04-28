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
ms.openlocfilehash: a655d95cf165ab2c5cba3a391b81d6f420f8322f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62230866"
---
# <a name="cdynamicparameteraccessor-class"></a>CDynamicParameterAccessor (classe)

Simile a [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) ma ottiene le informazioni sui parametri da impostare chiamando l'interfaccia [ICommandWithParameters](/sql/relational-databases/native-client-ole-db-interfaces/icommandwithparameters) .

## <a name="syntax"></a>Sintassi

```cpp
class CDynamicParameterAccessor : public CDynamicAccessor
```

## <a name="requirements"></a>Requisiti

**Intestazione**: atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
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

## <a name="remarks"></a>Note

Il provider deve supportare `ICommandWithParameters` in modo che il consumer usi questa classe.

Le informazioni di parametro vengono archiviate in un buffer creato e gestito da questa classe. Per ottenere i dati dei parametri dal buffer, usare [GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) e [GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md).

Per un esempio che illustra come usare questa classe per eseguire una stored procedure SQL Server e ottenere i valori dei parametri output, vedere la [DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer) esempi di codice nelle [VCSamples Microsoft](https://github.com/Microsoft/VCSamples) repository in GitHub.

## <a name="cdynamicparameteraccessor"></a> CDynamicParameterAccessor:: CDynamicParameterAccessor

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
Specifica la modalità con cui i dati BLOB diventano essere gestito. Il valore predefinito è DBBLOBHANDLING_DEFAULT. Visualizzare [CDynamicAccessor:: Setblobhandling](../../data/oledb/cdynamicaccessor-setblobhandling.md) per una descrizione dei valori DBBLOBHANDLINGENUM.

*nBlobSize*<br/>
Le dimensioni BLOB massime in byte. dati della colonna su questo valore viene trattati come un BLOB. Il valore predefinito è 8.000. Visualizzare [CDynamicAccessor:: Setblobsizelimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md) per informazioni dettagliate.

### <a name="remarks"></a>Note

Vedere le [CDynamicAccessor:: CDynamicAccessor](../../data/oledb/cdynamicaccessor-cdynamicaccessor.md) costruttore per altre informazioni sulla gestione di BLOB.

## <a name="getparam"></a> CDynamicParameterAccessor:: GetParam

Recupera i dati non di tipo stringa per un parametro specificato dal buffer del parametro.

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
Un parametro basato su modelli che è il tipo di dati.

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Visualizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.

*pParamName*<br/>
[in] Il nome del parametro.

*pData*<br/>
[out] Puntatore alla memoria contenente i dati recuperati dal buffer.

### <a name="return-value"></a>Valore restituito

Per le versioni non basata su modelli, punta alla memoria contenente i dati recuperati dal buffer. Per le versioni basate su modelli, restituisce **true** esito è positivo oppure **false** in caso di errore.

Usare `GetParam` per recuperare i dati dei parametri non di tipo stringa dal buffer. Uso [GetParamString](../../data/oledb/cdynamicparameteraccessor-getparamstring.md) per recuperare i dati di parametro stringa dal buffer.

## <a name="getparamcount"></a> CDynamicParameterAccessor::GetParamCount

Recupera il numero di parametri archiviati nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
DB_UPARAMS GetParamCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Numero di parametri.

## <a name="getparamio"></a> CDynamicParameterAccessor::GetParamIO

Determina se il parametro specificato è un parametro di input o output.

### <a name="syntax"></a>Sintassi

```cpp
bool GetParamIO(DBORDINAL nParam,
   DBPARAMIO* pParamIO) const throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Visualizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.

*pParamIO*<br/>
Un puntatore per la variabile contenente il `DBPARAMIO` tipo (input o output) del parametro specificato. Viene definito come segue:

```cpp
typedef DWORD DBPARAMIO;

enum DBPARAMIOENUM {
    DBPARAMIO_NOTPARAM   = 0,
    DBPARAMIO_INPUT      = 0x1,
    DBPARAMIO_OUTPUT     = 0x2
};
```

### <a name="return-value"></a>Valore restituito

Restituisce **true** esito è positivo oppure **false** in caso di errore.

## <a name="getparamlength"></a> CDynamicParameterAccessor:: Getparamlength

Recupera la lunghezza del parametro specificato archiviato nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
bool GetParamLength(DBORDINAL nParam,
   DBLENGTH* pLength);

DBLENGTH* GetParamLength(DBORDINAL nParam) const throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Visualizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.

*pLength*<br/>
[out] Puntatore alla variabile contenente la lunghezza in byte del parametro specificato.

### <a name="remarks"></a>Note

Il primo override restituisce **true** esito è positivo oppure **false** in caso di errore. Il secondo override punta alla memoria che contiene la lunghezza del parametro.

## <a name="getparamname"></a> CDynamicParameterAccessor::GetParamName

Recupera il nome del parametro specificato.

### <a name="syntax"></a>Sintassi

```cpp
LPOLESTR GetParamName(DBORDINAL nParam) const throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Visualizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.

### <a name="return-value"></a>Valore restituito

Il nome del parametro specificato.

## <a name="getparamstatus"></a> CDynamicParameterAccessor::GetParamStatus

Recupera lo stato del parametro specificato archiviato nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
bool GetParamStatus(DBORDINAL nParam,
   DBSTATUS* pStatus);

DBSTATUS* GetParamStatus(DBORDINAL nParam) const throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Visualizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.

*pStatus*<br/>
[out] Puntatore alla variabile che contiene lo stato DBSTATUS del parametro specificato. Per informazioni sui valori DBSTATUS, vedere [lo stato](/previous-versions/windows/desktop/ms722617(v=vs.85)) nel *riferimento per programmatori OLE DB*, o cercare DBSTATUS in OleDb.

### <a name="remarks"></a>Note

Il primo override restituisce **true** esito è positivo oppure **false** in caso di errore. Il secondo override punta alla memoria che contiene lo stato del parametro specificato.

## <a name="getparamstring"></a> CDynamicParameterAccessor::GetParamString

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
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Visualizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.

*strOutput*<br/>
[out] La versione ANSI (`CSimpleStringA`) o Unicode (`CSimpleStringW`) stringa dei dati del parametro specificato. È necessario passare un parametro di tipo `CString`, ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#9](../../data/oledb/codesnippet/cpp/cdynamicparameteraccessor-getparamstring_1.cpp)]

*pBuffer*<br/>
[out] Un puntatore a ANSI (**CHAR**) o Unicode (**WCHAR**) stringa dei dati del parametro specificato.

*pMaxLen*<br/>
[out] Un puntatore alla dimensione del buffer a cui punta *pBuffer* (in caratteri, incluso il carattere di terminazione NULL).

### <a name="remarks"></a>Note

Restituisce **true** esito è positivo oppure **false** in caso di errore.

Se *pBuffer* è NULL, questo metodo imposterà la dimensione richiesta del buffer in memoria a cui punta *pMaxLen* e restituiti **true** senza copiare i dati.

Questo metodo avrà esito negativo se il buffer *pBuffer* non è sufficientemente grande da contenere l'intera stringa.

Usare `GetParamString` per recuperare i dati di parametro stringa dal buffer. Uso [GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) per recuperare i dati dei parametri non di tipo stringa dal buffer.

## <a name="getparamtype"></a> CDynamicParameterAccessor:: GetParamType

Recupera il tipo di dati di un parametro specificato.

### <a name="syntax"></a>Sintassi

```cpp
bool GetParamType(DBORDINAL nParam,
   DBTYPE* pType) const throw();
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Visualizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.

*pType*<br/>
[out] Puntatore alla variabile che contiene il tipo di dati del parametro specificato.

### <a name="return-value"></a>Valore restituito

Restituisce **true** esito è positivo oppure **false** in caso di errore.

## <a name="setparam"></a> CDynamicParameterAccessor::SetParam

Imposta il buffer del parametro con i dati specificati (non di tipo stringa).

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
Un parametro basato su modelli che è il tipo di dati.

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#8](../../data/oledb/codesnippet/cpp/cdynamicparameteraccessor-setparam_1.cpp)]

*pParamName*<br/>
[in] Il nome del parametro.

*pData*<br/>
[in] Puntatore alla memoria contenente i dati da scrivere nel buffer.

*status*<br/>
[in] Stato della colonna DBSTATUS. Per informazioni sui valori DBSTATUS, vedere [lo stato](/previous-versions/windows/desktop/ms722617(v=vs.85)) nel *riferimento per programmatori OLE DB*, o cercare DBSTATUS in OleDb.

### <a name="return-value"></a>Valore restituito

Restituisce **true** esito è positivo oppure **false** in caso di errore.

Usare `SetParam` per impostare i dati dei parametri non di tipo stringa nel buffer. Uso [SetParamString](../../data/oledb/cdynamicparameteraccessor-setparamstring.md) per impostare i dati di parametro di stringa nel buffer.

## <a name="setparamlength"></a> CDynamicParameterAccessor:: Setparamlength

Imposta la lunghezza del parametro specificato archiviato nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
bool SetParamLength(DBORDINAL nParam,
   DBLENGTH length);
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Visualizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.

*length*<br/>
[in] La lunghezza in byte del parametro specificato.

### <a name="remarks"></a>Note

Restituisce **true** esito è positivo oppure **false** in caso di errore.

## <a name="setparamstatus"></a> CDynamicParameterAccessor::SetParamStatus

Imposta lo stato del parametro specificato archiviato nel buffer.

### <a name="syntax"></a>Sintassi

```cpp
bool SetParamStatus(DBORDINAL nParam,
   DBSTATUS status);
```

#### <a name="parameters"></a>Parametri

*nParam*<br/>
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Visualizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.

*status*<br/>
[in] Lo stato DBSTATUS del parametro specificato. Per informazioni sui valori DBSTATUS, vedere [lo stato](/previous-versions/windows/desktop/ms722617(v=vs.85)) nel *riferimento per programmatori OLE DB*, o cercare DBSTATUS in OleDb.

### <a name="remarks"></a>Note

Restituisce **true** esito è positivo oppure **false** in caso di errore.

## <a name="setparamstring"></a> CDynamicParameterAccessor::SetParamString

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
[in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Visualizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.

*pString*<br/>
[in] Un puntatore a ANSI (**CHAR**) o Unicode (**WCHAR**) stringa dei dati del parametro specificato. Vedere DBSTATUS in OleDb.

*status*<br/>
[in] Lo stato DBSTATUS del parametro specificato. Per informazioni sui valori DBSTATUS, vedere [lo stato](/previous-versions/windows/desktop/ms722617(v=vs.85)) nel *riferimento per programmatori OLE DB*, o cercare DBSTATUS in OleDb.

### <a name="remarks"></a>Note

Restituisce **true** esito è positivo oppure **false** in caso di errore.

`SetParamString` avrà esito negativo se si prova a impostare una stringa di dimensioni superiori rispetto alla dimensione massima specificata per *pString*.

Usare `SetParamString` per impostare i dati di parametro di stringa nel buffer. Uso [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per impostare i dati dei parametri non di tipo stringa nel buffer.

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)