---
title: Classe IErrorRecordsImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
- GetCustomErrorObject
- GetErrorInfo
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a4f12bd935e7dedf46e531d46e2ec91084059e9d
ms.sourcegitcommit: b0d6777cf4b580d093eaf6104d80a888706e7578
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/26/2018
ms.locfileid: "39269686"
---
# <a name="ierrorrecordsimpl-class"></a>Classe IErrorRecordsImpl
Implementa OLE DB [IErrorRecords](https://msdn.microsoft.com/library/ms718112.aspx) interfaccia, l'aggiunta di record a e il recupero dei record da un membro dati ([m_rgErrors](../../data/oledb/ierrorrecordsimpl-m-rgerrors.md)) di tipo **CAtlArray <** `RecordClass`**>**.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class RecordClass = ATLERRORINFO>  
class IErrorRecordsImpl : public IErrorRecords  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Una classe derivata da `IErrorRecordsImpl`.  
  
 *RecordClass*  
 Una classe che rappresenta un oggetto di errore OLE DB.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[GetErrorDescriptionString](#geterrordescriptionstring)|Ottiene la stringa di descrizione di errore da un record di errore.|  
|[GetErrorGUID](#geterrorguid)|Ottiene l'errore GUID da un record di errore.|  
|[GetErrorHelpContext](#geterrorhelpcontext)|Ottiene l'ID del contesto della Guida da un record di errore.|  
|[GetErrorHelpFile](#geterrorhelpfile)|Ottiene il percorso completo del file della Guida da un record di errore.|  
|[GetErrorSource](#geterrorsource)|Ottiene il codice sorgente di errore da un record di errore.|  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[AddErrorRecord](#adderrorrecord)|Aggiunge un record per l'oggetto di errore OLE DB.|  
|[GetBasicErrorInfo](#getbasicerrorinfo)|Restituisce le informazioni di base sull'errore, ad esempio il codice restituito e il numero di errore specifico del provider.|  
|[GetCustomErrorObject](#getcustomerrorobject)|Restituisce un puntatore a un'interfaccia su un oggetto di errore personalizzato.|  
|[GetErrorInfo](#geterrorinfo)|Restituisce un [IErrorInfo](https://msdn.microsoft.com/library/ms718112.aspx) puntatore a interfaccia per il record specificato.|  
|[GetErrorParameters](#geterrorparameters)|Restituisce i parametri di errore.|  
|[GetRecordCount](#getrecordcount)|Restituisce il numero di record nell'oggetto di record OLE DB.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_rgErrors](#rgerrors)|Matrice di record degli errori.|  

## <a name="geterrordescriptionstring"></a> IErrorRecordsImpl:: Geterrordescriptionstring
Ottiene la stringa di descrizione di errore da un record di errore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      LPOLESTR GetErrorDescriptionString(ERRORINFO& rCurError);  
```  
  
#### <a name="parameters"></a>Parametri  
 *rCurError*  
 Un' `ERRORINFO` record in un `IErrorInfo` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una stringa che descrive l'errore.  
  
## <a name="geterrorguid"></a> IErrorRecordsImpl:: Geterrorguid
Ottiene l'errore GUID da un record di errore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      REFGUID GetErrorGUID(ERRORINFO& rCurError);  
```  
  
#### <a name="parameters"></a>Parametri  
 *rCurError*  
 Un' `ERRORINFO` record in un `IErrorInfo` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a un GUID per l'errore.  

## <a name="geterrorhelpcontext"></a> IErrorRecordsImpl:: Geterrorhelpcontext
Ottiene l'ID del contesto della Guida da un record di errore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      DWORD GetErrorHelpContext(ERRORINFO& rCurError);  
```  
  
#### <a name="parameters"></a>Parametri  
 *rCurError*  
 Un' `ERRORINFO` record in un `IErrorInfo` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID del contesto della Guida per l'errore.  

## <a name="geterrorhelpfile"></a> IErrorRecordsImpl:: Geterrorhelpfile
Ottiene il nome del percorso del file della Guida da un record di errore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      LPOLESTR GetErrorHelpFile(ERRORINFO& rCurError);  
```  
  
#### <a name="parameters"></a>Parametri  
 *rCurError*  
 Un' `ERRORINFO` record in un `IErrorInfo` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a una stringa che contiene il nome del percorso del file della Guida per l'errore.

## <a name="geterrorsource"></a> IErrorRecordsImpl:: Geterrorsource
Ottiene il codice sorgente che ha causato l'errore da un record di errore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      LPOLESTR GetErrorSource(ERRORINFO& rCurError);  
```  
  
#### <a name="parameters"></a>Parametri  
 *rCurError*  
 Un' `ERRORINFO` record in un `IErrorInfo` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a una stringa contenente il codice sorgente per l'errore. 

## <a name="adderrorrecord"></a> IErrorRecordsImpl:: Adderrorrecord
Aggiunge un record per l'oggetto di errore OLE DB.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(AddErrorRecord )(ERRORINFO *pErrorInfo,  
   DWORD dwLookupID,  
   DISPPARAMS *pdispparams,  
   IUnknown *punkCustomError,  
   DWORD dwDynamicErrorID);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IErrorRecords::AddErrorRecord](https://msdn.microsoft.com/library/ms725362.aspx) nel *riferimento per programmatori OLE DB*.  

## <a name="getbasicerrorinfo"></a> IErrorRecordsImpl:: Getbasicerrorinfo
Restituisce le informazioni di base sull'errore, ad esempio il codice restituito e il numero di errore specifico del provider.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(GetBasicErrorInfo )(ULONG ulRecordNum,  
   ERRORINFO *pErrorInfo);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IErrorRecords::GetBasicErrorInfo](https://msdn.microsoft.com/library/ms723907.aspx) nel *riferimento per programmatori OLE DB*. 

## <a name="getcustomerrorobject"></a> IErrorRecordsImpl:: Getcustomerrorobject
Restituisce un puntatore a un'interfaccia su un oggetto di errore personalizzato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(GetCustomErrorObject )(ULONG ulRecordNum,  
   REFIID riid,  
   IUnknown **ppObject);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IErrorRecords::GetCustomErrorObject](https://msdn.microsoft.com/library/ms725417.aspx) nel *riferimento per programmatori OLE DB*.  

## <a name="geterrorinfo"></a> IErrorRecordsImpl:: GetErrorInfo
Restituisce un [IErrorInfo](https://msdn.microsoft.com/library/ms718112.aspx) puntatore a interfaccia per il record specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(GetErrorInfo )(ULONG ulRecordNum,  
   LCID lcid,  
   IErrorInfo **ppErrorInfo);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IErrorRecords::GetErrorInfo](https://msdn.microsoft.com/library/ms711230.aspx) nel *riferimento per programmatori OLE DB*.

## <a name="geterrorparameters"></a> IErrorRecordsImpl:: Geterrorparameters
Restituisce i parametri di errore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(GetErrorParameters )(ULONG ulRecordNum,  
   DISPPARAMS *pdispparams);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IErrorRecords::GetErrorParameters](https://msdn.microsoft.com/library/ms715793.aspx) nel *riferimento per programmatori OLE DB*.  

## <a name="getrecordcount"></a> IErrorRecordsImpl:: GetRecordCount
Restituisce il numero di record nell'oggetto di record OLE DB.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(GetRecordCount )(ULONG *pcRecords);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IErrorRecords::GetRecordCount](https://msdn.microsoft.com/library/ms722724.aspx) nel *riferimento per programmatori OLE DB*.  

## <a name="rgerrors"></a> IErrorRecordsImpl:: M_rgerrors
Matrice di record degli errori.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
CAtlArray<  
RecordClass  
> m_rgErrors;  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
