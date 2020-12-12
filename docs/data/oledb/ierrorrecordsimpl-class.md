---
description: 'Altre informazioni su: Classe IErrorRecordsImpl'
title: Classe IErrorRecordsImpl
ms.date: 11/04/2016
f1_keywords:
- ATL::IErrorRecordsImpl
- ATL.IErrorRecordsImpl
- IErrorRecordsImpl
- GetErrorDescriptionString
- IErrorRecordsImpl.GetErrorDescriptionString
- IErrorRecordsImpl::GetErrorDescriptionString
- GetErrorGUID
- IErrorRecordsImpl.GetErrorGUID
- IErrorRecordsImpl::GetErrorGUID
- GetErrorHelpContext
- IErrorRecordsImpl::GetErrorHelpContext
- IErrorRecordsImpl.GetErrorHelpContext
- IErrorRecordsImpl::GetErrorHelpFile
- GetErrorHelpFile
- IErrorRecordsImpl.GetErrorHelpFile
- IErrorRecordsImpl.GetErrorSource
- GetErrorSource
- IErrorRecordsImpl::GetErrorSource
- IErrorRecordsImpl.AddErrorRecord
- AddErrorRecord
- IErrorRecordsImpl::AddErrorRecord
- ATL::IErrorRecordsImpl::GetBasicErrorInfo
- IErrorRecordsImpl::GetBasicErrorInfo
- GetBasicErrorInfo
- ATL.IErrorRecordsImpl.GetBasicErrorInfo
- IErrorRecordsImpl.GetBasicErrorInfo
- ATL::IErrorRecordsImpl::GetCustomErrorObject
- IErrorRecordsImpl::GetCustomErrorObject
- ATL.IErrorRecordsImpl.GetCustomErrorObject
- IErrorRecordsImpl.GetCustomErrorObject
- IErrorRecordsImpl.GetErrorInfo
- IErrorRecordsImpl::GetErrorInfo
- IErrorRecordsImpl::GetErrorParameters
- ATL.IErrorRecordsImpl.GetErrorParameters
- IErrorRecordsImpl.GetErrorParameters
- GetErrorParameters
- ATL::IErrorRecordsImpl::GetErrorParameters
- IErrorRecordsImpl::GetRecordCount
- ATL::IErrorRecordsImpl::GetRecordCount
- IErrorRecordsImpl.GetRecordCount
- ATL.IErrorRecordsImpl.GetRecordCount
- IErrorRecordsImpl::m_rgErrors
- IErrorRecordsImpl.m_rgErrors
- ATL.IErrorRecordsImpl.m_rgErrors
- m_rgErrors
- ATL::IErrorRecordsImpl::m_rgErrors
helpviewer_keywords:
- IErrorRecordsImpl class
- GetErrorDescriptionString method
- GetErrorGUID method
- GetErrorHelpContext method
- GetErrorHelpFile method
- GetErrorSource method
- AddErrorRecord method
- GetBasicErrorInfo method
- GetCustomErrorObject method
- GetErrorInfo method
- GetErrorParameters method
- GetRecordCount method
- m_rgErrors
ms.assetid: dea8e938-c5d8-45ab-86de-eb8fbf534ffb
ms.openlocfilehash: 2c4a674a6197178e3418afc6e62cda1894497599
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317454"
---
# <a name="ierrorrecordsimpl-class"></a>Classe IErrorRecordsImpl

Implementa l'interfaccia OLE DB [IErrorRecords](/previous-versions/windows/desktop/ms718112(v=vs.85)) , aggiungendo record e recuperando record da un membro dati ([m_rgErrors](#rgerrors)) di tipo **CAtlArray<** `RecordClass` **>** .

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class RecordClass = ATLERRORINFO>
class IErrorRecordsImpl : public IErrorRecords
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IErrorRecordsImpl` .

*RecordClass*<br/>
Classe che rappresenta un OLE DB oggetto Error.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[GetErrorDescriptionString](#geterrordescriptionstring)|Ottiene la stringa di descrizione dell'errore da un record di errore.|
|[GetErrorGUID](#geterrorguid)|Ottiene il GUID dell'errore da un record di errore.|
|[GetErrorHelpContext](#geterrorhelpcontext)|Ottiene l'ID del contesto della guida da un record di errore.|
|[GetErrorHelpFile](#geterrorhelpfile)|Ottiene il percorso completo del file della guida da un record di errore.|
|[GetErrorSource](#geterrorsource)|Ottiene il codice sorgente dell'errore da un record di errore.|

### <a name="interface-methods"></a>Metodi di interfaccia

| Nome | Description |
|-|-|
|[AddErrorRecord](#adderrorrecord)|Aggiunge un record all'oggetto errore OLE DB.|
|[GetBasicErrorInfo](#getbasicerrorinfo)|Restituisce informazioni di base sull'errore, ad esempio il codice restituito e il numero di errore specifico del provider.|
|[GetCustomErrorObject](#getcustomerrorobject)|Restituisce un puntatore a un'interfaccia su un oggetto errore personalizzato.|
|[GetErrorInfo](#geterrorinfo)|Restituisce un puntatore a interfaccia [IErrorInfo](/previous-versions/windows/desktop/ms718112(v=vs.85)) sul record specificato.|
|[GetErrorParameters](#geterrorparameters)|Restituisce i parametri degli errori.|
|[GetRecordCount](#getrecordcount)|Restituisce il numero di record nell'oggetto OLE DB record.|

### <a name="data-members"></a>Membri dei dati

| Nome | Description |
|-|-|
|[m_rgErrors](#rgerrors)|Matrice di record degli errori.|

## <a name="ierrorrecordsimplgeterrordescriptionstring"></a><a name="geterrordescriptionstring"></a> IErrorRecordsImpl:: GetErrorDescriptionString

Ottiene la stringa di descrizione dell'errore da un record di errore.

### <a name="syntax"></a>Sintassi

```cpp
LPOLESTR GetErrorDescriptionString(ERRORINFO& rCurError);
```

#### <a name="parameters"></a>Parametri

*rCurError*<br/>
`ERRORINFO`Record in un' `IErrorInfo` interfaccia.

### <a name="return-value"></a>Valore restituito

Puntatore a una stringa che descrive l'errore.

## <a name="ierrorrecordsimplgeterrorguid"></a><a name="geterrorguid"></a> IErrorRecordsImpl:: GetErrorGUID

Ottiene il GUID dell'errore da un record di errore.

### <a name="syntax"></a>Sintassi

```cpp
REFGUID GetErrorGUID(ERRORINFO& rCurError);
```

#### <a name="parameters"></a>Parametri

*rCurError*<br/>
`ERRORINFO`Record in un' `IErrorInfo` interfaccia.

### <a name="return-value"></a>Valore restituito

Riferimento a un GUID per l'errore.

## <a name="ierrorrecordsimplgeterrorhelpcontext"></a><a name="geterrorhelpcontext"></a> IErrorRecordsImpl:: GetErrorHelpContext

Ottiene l'ID del contesto della guida da un record di errore.

### <a name="syntax"></a>Sintassi

```cpp
DWORD GetErrorHelpContext(ERRORINFO& rCurError);
```

#### <a name="parameters"></a>Parametri

*rCurError*<br/>
`ERRORINFO`Record in un' `IErrorInfo` interfaccia.

### <a name="return-value"></a>Valore restituito

ID del contesto della Guida per l'errore.

## <a name="ierrorrecordsimplgeterrorhelpfile"></a><a name="geterrorhelpfile"></a> IErrorRecordsImpl:: GetErrorHelpFile

Ottiene il nome del percorso del file della guida da un record di errore.

### <a name="syntax"></a>Sintassi

```cpp
LPOLESTR GetErrorHelpFile(ERRORINFO& rCurError);
```

#### <a name="parameters"></a>Parametri

*rCurError*<br/>
`ERRORINFO`Record in un' `IErrorInfo` interfaccia.

### <a name="return-value"></a>Valore restituito

Puntatore a una stringa che contiene il nome del percorso del file della Guida per l'errore.

## <a name="ierrorrecordsimplgeterrorsource"></a><a name="geterrorsource"></a> IErrorRecordsImpl:: GetErrorSource

Ottiene il codice sorgente che ha causato l'errore da un record di errore.

### <a name="syntax"></a>Sintassi

```cpp
LPOLESTR GetErrorSource(ERRORINFO& rCurError);
```

#### <a name="parameters"></a>Parametri

*rCurError*<br/>
`ERRORINFO`Record in un' `IErrorInfo` interfaccia.

### <a name="return-value"></a>Valore restituito

Puntatore a una stringa che contiene il codice sorgente per l'errore.

## <a name="ierrorrecordsimpladderrorrecord"></a><a name="adderrorrecord"></a> IErrorRecordsImpl:: AddErrorRecord

Aggiunge un record all'oggetto errore OLE DB.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(AddErrorRecord )(ERRORINFO *pErrorInfo,
   DWORD dwLookupID,
   DISPPARAMS *pdispparams,
   IUnknown *punkCustomError,
   DWORD dwDynamicErrorID);
```

#### <a name="parameters"></a>Parametri

Vedere [IErrorRecords:: AddErrorRecord](/previous-versions/windows/desktop/ms725362(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="ierrorrecordsimplgetbasicerrorinfo"></a><a name="getbasicerrorinfo"></a> IErrorRecordsImpl:: GetBasicErrorInfo

Restituisce informazioni di base sull'errore, ad esempio il codice restituito e il numero di errore specifico del provider.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetBasicErrorInfo )(ULONG ulRecordNum,
   ERRORINFO *pErrorInfo);
```

#### <a name="parameters"></a>Parametri

Vedere [IErrorRecords:: GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="ierrorrecordsimplgetcustomerrorobject"></a><a name="getcustomerrorobject"></a> IErrorRecordsImpl:: GetCustomErrorObject

Restituisce un puntatore a un'interfaccia su un oggetto errore personalizzato.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetCustomErrorObject )(ULONG ulRecordNum,
   REFIID riid,
   IUnknown **ppObject);
```

#### <a name="parameters"></a>Parametri

Vedere [IErrorRecords:: GetCustomErrorObject](/previous-versions/windows/desktop/ms725417(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="ierrorrecordsimplgeterrorinfo"></a><a name="geterrorinfo"></a> IErrorRecordsImpl:: GetErrorInfo

Restituisce un puntatore a interfaccia [IErrorInfo](/previous-versions/windows/desktop/ms718112(v=vs.85)) sul record specificato.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetErrorInfo )(ULONG ulRecordNum,
   LCID lcid,
   IErrorInfo **ppErrorInfo);
```

#### <a name="parameters"></a>Parametri

Vedere [IErrorRecords:: GetErrorInfo](/previous-versions/windows/desktop/ms711230(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="ierrorrecordsimplgeterrorparameters"></a><a name="geterrorparameters"></a> IErrorRecordsImpl:: GetErrorParameters

Restituisce i parametri degli errori.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetErrorParameters )(ULONG ulRecordNum,
   DISPPARAMS *pdispparams);
```

#### <a name="parameters"></a>Parametri

Vedere [IErrorRecords:: GetErrorParameters](/previous-versions/windows/desktop/ms715793(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="ierrorrecordsimplgetrecordcount"></a><a name="getrecordcount"></a> IErrorRecordsImpl:: GetRecordCount

Restituisce il numero di record nell'oggetto OLE DB record.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetRecordCount )(ULONG *pcRecords);
```

#### <a name="parameters"></a>Parametri

Vedere [IErrorRecords:: GetRecordCount](/previous-versions/windows/desktop/ms722724(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="ierrorrecordsimplm_rgerrors"></a><a name="rgerrors"></a> IErrorRecordsImpl:: m_rgErrors

Matrice di record degli errori.

### <a name="syntax"></a>Sintassi

```cpp
CAtlArray< RecordClass > m_rgErrors;
```

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
