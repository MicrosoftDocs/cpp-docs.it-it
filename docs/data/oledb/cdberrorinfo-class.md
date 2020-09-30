---
title: Classe CDBErrorInfo
ms.date: 11/04/2016
f1_keywords:
- CDBErrorInfo
- ATL::CDBErrorInfo
- ATL.CDBErrorInfo
- ATL.CDBErrorInfo.GetAllErrorInfo
- CDBErrorInfo::GetAllErrorInfo
- ATL::CDBErrorInfo::GetAllErrorInfo
- CDBErrorInfo.GetAllErrorInfo
- CDBErrorInfo::GetBasicErrorInfo
- ATL.CDBErrorInfo.GetBasicErrorInfo
- CDBErrorInfo.GetBasicErrorInfo
- ATL::CDBErrorInfo::GetBasicErrorInfo
- CDBErrorInfo::GetCustomErrorObject
- ATL.CDBErrorInfo.GetCustomErrorObject
- CDBErrorInfo.GetCustomErrorObject
- ATL::CDBErrorInfo::GetCustomErrorObject
- ATL.CDBErrorInfo.GetErrorInfo
- CDBErrorInfo.GetErrorInfo
- ATL::CDBErrorInfo::GetErrorInfo
- CDBErrorInfo::GetErrorInfo
- ATL.CDBErrorInfo.GetErrorParameters
- CDBErrorInfo::GetErrorParameters
- ATL::CDBErrorInfo::GetErrorParameters
- CDBErrorInfo.GetErrorParameters
- CDBErrorInfo.GetErrorRecords
- ATL.CDBErrorInfo.GetErrorRecords
- ATL::CDBErrorInfo::GetErrorRecords
- CDBErrorInfo::GetErrorRecords
helpviewer_keywords:
- CDBErrorInfo class
- GetAllErrorInfo method
- GetBasicErrorInfo method
- GetCustomErrorObject method
- GetErrorInfo method
- GetErrorParameters method
- GetErrorRecords method
ms.assetid: 9a5c18a2-ee3e-40f5-ab4c-581288d7f737
ms.openlocfilehash: d8fa41b3a06acb8f28334658f2494295593b99be
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91502519"
---
# <a name="cdberrorinfo-class"></a>Classe CDBErrorInfo

Fornisce supporto per OLE DB l'elaborazione degli errori tramite l'interfaccia OLE DB [IErrorRecords](/previous-versions/windows/desktop/ms718112(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
class CDBErrorInfo
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Descrizione |
|-|-|
|[GetAllErrorInfo](#getallerrorinfo)|Restituisce tutte le informazioni sull'errore contenute in un record di errore.|
|[GetBasicErrorInfo](#getbasicerrorinfo)|Chiama [IErrorRecords:: GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907(v=vs.85)) per restituire informazioni di base sull'errore specificato.|
|[GetCustomErrorObject](#getcustomerrorobject)|Chiama [IErrorRecords:: GetCustomErrorObject](/previous-versions/windows/desktop/ms725417(v=vs.85)) per restituire un puntatore a un'interfaccia su un oggetto errore personalizzato.|
|[GetErrorInfo](#geterrorinfo)|Chiama [IErrorRecords:: GetErrorInfo](/previous-versions/windows/desktop/ms711230(v=vs.85)) per restituire un `IErrorInfo` puntatore di interfaccia al record specificato.|
|[GetErrorParameters](#geterrorparameters)|Chiama [IErrorRecords:: GetErrorParameters](/previous-versions/windows/desktop/ms715793(v=vs.85)) per restituire i parametri di errore.|
|[GetErrorRecords](#geterrorrecords)|Ottiene i record di errore per l'oggetto specificato.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia restituisce uno o più record di errore all'utente. Chiamare prima [CDBErrorInfo:: GetErrorRecords](#geterrorrecords) per ottenere un conteggio dei record degli errori. Chiamare quindi una delle funzioni di accesso, ad esempio [CDBErrorInfo:: GetAllErrorInfo](#getallerrorinfo), per recuperare le informazioni sull'errore per ogni record.

## <a name="cdberrorinfogetallerrorinfo"></a><a name="getallerrorinfo"></a> CDBErrorInfo:: GetAllErrorInfo

Restituisce tutti i tipi di informazioni sugli errori contenuti in un record di errore.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetAllErrorInfo(ULONG ulRecordNum,
   LCID lcid,  BSTR* pbstrDescription,
   BSTR* pbstrSource = NULL,
   GUID* pguid = NULL,
   DWORD* pdwHelpContext = NULL,
   BSTR* pbstrHelpFile = NULL) const throw();
```

#### <a name="parameters"></a>Parametri

*ulRecordNum*<br/>
in Numero in base zero del record per il quale restituire le informazioni sull'errore.

*lcid*<br/>
in ID delle impostazioni locali per le informazioni sull'errore da restituire.

*pbstrDescription*<br/>
out Puntatore a una descrizione di testo dell'errore o NULL se le impostazioni locali non sono supportate. Vedere la sezione Osservazioni.

*pbstrSource*<br/>
out Puntatore a una stringa contenente il nome del componente che ha generato l'errore.

*pguid*<br/>
out Puntatore al GUID dell'interfaccia che ha definito l'errore.

*pdwHelpContext*<br/>
out Puntatore all'ID del contesto della Guida per l'errore.

*pbstrHelpFile*<br/>
out Puntatore a una stringa contenente il percorso del file della Guida in cui viene descritto l'errore.

### <a name="return-value"></a>Valore restituito

S_OK, in caso di esito positivo. Per altri valori restituiti, vedere [IErrorRecords:: GetErrorInfo](/previous-versions/windows/desktop/ms711230(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

### <a name="remarks"></a>Osservazioni

Il valore di output di *pbstrDescription* viene ottenuto internamente chiamando `IErrorInfo::GetDescription` , che imposta il valore su null se le impostazioni locali non sono supportate o se si verificano entrambe le condizioni seguenti:

1. il valore di *LCID* non è inglese (Stati Uniti) e

1. il valore di *LCID* non è uguale al valore restituito da GetUserDefaultLCID.

## <a name="cdberrorinfogetbasicerrorinfo"></a><a name="getbasicerrorinfo"></a> CDBErrorInfo:: GetBasicErrorInfo

Chiama [IErrorRecords:: GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907(v=vs.85)) per restituire informazioni di base sull'errore, ad esempio il codice restituito e il numero di errore specifico del provider.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetBasicErrorInfo(ULONG ulRecordNum,
   ERRORINFO* pErrorInfo) const throw();
```

#### <a name="parameters"></a>Parametri

Vedere [IErrorRecords:: GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cdberrorinfogetcustomerrorobject"></a><a name="getcustomerrorobject"></a> CDBErrorInfo:: GetCustomErrorObject

Chiama [IErrorRecords:: GetCustomErrorObject](/previous-versions/windows/desktop/ms725417(v=vs.85)) per restituire un puntatore a un'interfaccia su un oggetto errore personalizzato.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetCustomErrorObject(ULONG ulRecordNum,
   REFIID riid,IUnknown** ppObject) const throw();
```

#### <a name="parameters"></a>Parametri

Vedere [IErrorRecords:: GetCustomErrorObject](/previous-versions/windows/desktop/ms725417(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cdberrorinfogeterrorinfo"></a><a name="geterrorinfo"></a> CDBErrorInfo:: GetErrorInfo

Chiama [IErrorRecords:: GetErrorInfo](/previous-versions/windows/desktop/ms711230(v=vs.85)) per restituire un puntatore all'interfaccia [IErrorInfo](/previous-versions/windows/desktop/ms718112(v=vs.85)) al record specificato.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetErrorInfo(ULONG ulRecordNum,
   LCID lcid,IErrorInfo** ppErrorInfo) const throw();
```

#### <a name="parameters"></a>Parametri

Vedere [IErrorRecords:: GetErrorInfo](/previous-versions/windows/desktop/ms711230(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cdberrorinfogeterrorparameters"></a><a name="geterrorparameters"></a> CDBErrorInfo:: GetErrorParameters

Chiama [IErrorRecords:: GetErrorParameters](/previous-versions/windows/desktop/ms715793(v=vs.85)) per restituire i parametri di errore.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetErrorParameters(ULONG ulRecordNum,
   DISPPARAMS* pdispparams) const throw();
```

#### <a name="parameters"></a>Parametri

Vedere [IErrorRecords:: GetErrorParameters](/previous-versions/windows/desktop/ms715793(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cdberrorinfogeterrorrecords"></a><a name="geterrorrecords"></a> CDBErrorInfo:: GetErrorRecords

Ottiene i record di errore per l'oggetto specificato.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetErrorRecords(IUnknown* pUnk,
   const IID& iid,
   ULONG* pcRecords) throw();

HRESULT GetErrorRecords(ULONG* pcRecords) throw();
```

#### <a name="parameters"></a>Parametri

*pUnk*<br/>
in Interfaccia per l'oggetto per il quale ottenere i record degli errori.

*IID*<br/>
in IID dell'interfaccia associata all'errore.

*pcRecords*<br/>
out Puntatore al numero di record degli errori (in base uno).

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Utilizzare il primo form della funzione se si desidera controllare l'interfaccia da cui ottenere le informazioni sull'errore. In caso contrario, utilizzare il secondo formato.

## <a name="see-also"></a>Vedere anche

[DBViewer](../../overview/visual-cpp-samples.md)<br/>
[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
