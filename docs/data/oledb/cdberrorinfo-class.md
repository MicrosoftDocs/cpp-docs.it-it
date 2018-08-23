---
title: Classe CDBErrorInfo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDBErrorInfo
- ATL::CDBErrorInfo
- ATL.CDBErrorInfo
- ATL.CDBErrorInfo.GetAllErrorInfo
- CDBErrorInfo::GetAllErrorInfo
- ATL::CDBErrorInfo::GetAllErrorInfo
- GetAllErrorInfo
- CDBErrorInfo.GetAllErrorInfo
- CDBErrorInfo::GetBasicErrorInfo
- ATL.CDBErrorInfo.GetBasicErrorInfo
- CDBErrorInfo.GetBasicErrorInfo
- ATL::CDBErrorInfo::GetBasicErrorInfo
- GetBasicErrorInfo
- CDBErrorInfo::GetCustomErrorObject
- ATL.CDBErrorInfo.GetCustomErrorObject
- CDBErrorInfo.GetCustomErrorObject
- ATL::CDBErrorInfo::GetCustomErrorObject
- GetCustomErrorObject
- GetErrorInfo
- ATL.CDBErrorInfo.GetErrorInfo
- CDBErrorInfo.GetErrorInfo
- ATL::CDBErrorInfo::GetErrorInfo
- CDBErrorInfo::GetErrorInfo
- ATL.CDBErrorInfo.GetErrorParameters
- CDBErrorInfo::GetErrorParameters
- ATL::CDBErrorInfo::GetErrorParameters
- CDBErrorInfo.GetErrorParameters
- GetErrorParameters
- CDBErrorInfo.GetErrorRecords
- ATL.CDBErrorInfo.GetErrorRecords
- ATL::CDBErrorInfo::GetErrorRecords
- GetErrorRecords
- CDBErrorInfo::GetErrorRecords
dev_langs:
- C++
helpviewer_keywords:
- CDBErrorInfo class
- GetAllErrorInfo method
- GetBasicErrorInfo method
- GetCustomErrorObject method
- GetErrorInfo method
- GetErrorParameters method
- GetErrorRecords method
ms.assetid: 9a5c18a2-ee3e-40f5-ab4c-581288d7f737
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b7eaba589e729230c0392ac67eff2389d430f842
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42572271"
---
# <a name="cdberrorinfo-class"></a>Classe CDBErrorInfo
Fornisce il supporto per l'elaborazione di errore OLE DB tramite OLE DB [IErrorRecords](/previous-versions/windows/desktop/ms718112\(v=vs.85\)) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CDBErrorInfo  
``` 

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h 
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[GetAllErrorInfo](#getallerrorinfo)|Restituisce tutte le informazioni sull'errore contenute in un record di errore.|  
|[GetBasicErrorInfo](#getbasicerrorinfo)|Le chiamate [IErrorRecords::GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907\(v=vs.85\)) per restituire le informazioni di base relativi all'errore specificato.|  
|[GetCustomErrorObject](#getcustomerrorobject)|Le chiamate [IErrorRecords::GetCustomErrorObject](/previous-versions/windows/desktop/ms725417\(v=vs.85\)) per restituire un puntatore a un'interfaccia su un oggetto di errore personalizzato.|  
|[GetErrorInfo](#geterrorinfo)|Le chiamate [IErrorRecords::GetErrorInfo](/previous-versions/windows/desktop/ms711230\(v=vs.85\)) per restituire un `IErrorInfo` puntatore a interfaccia per il record specificato.|  
|[GetErrorParameters](#geterrorparameters)|Le chiamate [IErrorRecords::GetErrorParameters](/previous-versions/windows/desktop/ms715793\(v=vs.85\)) per restituire i parametri di errore.|  
|[GetErrorRecords](#geterrorrecords)|Ottiene i record di errore per l'oggetto specificato.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia restituisce uno o più record di errore all'utente. Chiamare [cdberrorinfo:: Geterrorrecords](../../data/oledb/cdberrorinfo-geterrorrecords.md) prima, per ottenere un conteggio dei record degli errori. Quindi chiamare uno dell'accesso funzioni, ad esempio [cdberrorinfo:: Getallerrorinfo](../../data/oledb/cdberrorinfo-getallerrorinfo.md)per recuperare informazioni sull'errore per ogni record.  
  
## <a name="getallerrorinfo"></a> Cdberrorinfo:: Getallerrorinfo
Restituisce tutti i tipi di informazioni sull'errore contenute in un record di errore.  
  
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
 *ulRecordNum*  
 [in] Il numero in base zero del record per il quale restituire le informazioni sull'errore.  
  
 *lcid*  
 [in] L'ID impostazioni locali per le informazioni sull'errore da restituire.  
  
 *pbstrDescription*  
 [out] Puntatore a una descrizione di testo dell'errore o NULL se le impostazioni locali non sono supportata. Vedere la sezione Osservazioni.  
  
 *pbstrSource*  
 [out] Un puntatore a una stringa contenente il nome del componente che ha generato l'errore.  
  
 *pguid*  
 [out] Puntatore al GUID dell'interfaccia che definisce l'errore.  
  
 *pdwHelpContext*  
 [out] Un puntatore all'ID di contesto della Guida per l'errore.  
  
 *pbstrHelpFile*  
 [out] Un puntatore a una stringa contenente il percorso del file della Guida che descrive l'errore.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione riesce. Visualizzare [IErrorRecords::GetErrorInfo](/previous-versions/windows/desktop/ms711230\(v=vs.85\)) nel *riferimento per programmatori OLE DB* per gli altri valori restituiti.  
  
### <a name="remarks"></a>Note  
 Valore di output *pbstrDescription* si ottiene internamente chiamando `IErrorInfo::GetDescription`, che imposta il valore su NULL se le impostazioni locali non sono supportata o se vengono soddisfatte entrambe le condizioni seguenti:  
  
1.  il valore di *lcid* non degli Stati Uniti Inglese e  
  
2.  il valore di *lcid* è diverso da quello restituito da GetUserDefaultLCID. 

## <a name="getbasicerrorinfo"></a> Cdberrorinfo:: Getbasicerrorinfo
Le chiamate [IErrorRecords::GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907\(v=vs.85\)) per restituire le informazioni di base sull'errore, ad esempio il codice restituito e il numero di errore specifico del provider.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetBasicErrorInfo(ULONG ulRecordNum,   
   ERRORINFO* pErrorInfo) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IErrorRecords::GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  

## <a name="getcustomerrorobject"></a> Cdberrorinfo:: Getcustomerrorobject
Le chiamate [IErrorRecords::GetCustomErrorObject](/previous-versions/windows/desktop/ms725417\(v=vs.85\)) per restituire un puntatore a un'interfaccia su un oggetto di errore personalizzato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetCustomErrorObject(ULONG ulRecordNum,   
   REFIID riid,IUnknown** ppObject) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IErrorRecords::GetCustomErrorObject](/previous-versions/windows/desktop/ms725417\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  

## <a name="geterrorinfo"></a> Cdberrorinfo:: GetErrorInfo
Le chiamate [IErrorRecords::GetErrorInfo](/previous-versions/windows/desktop/ms711230\(v=vs.85\)) per restituire una [IErrorInfo](/previous-versions/windows/desktop/ms718112\(v=vs.85\)) puntatore a interfaccia per il record specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetErrorInfo(ULONG ulRecordNum,   
   LCID lcid,IErrorInfo** ppErrorInfo) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IErrorRecords::GetErrorInfo](/previous-versions/windows/desktop/ms711230\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  

## <a name="geterrorparameters"></a> Cdberrorinfo:: Geterrorparameters
Le chiamate [IErrorRecords::GetErrorParameters](/previous-versions/windows/desktop/ms715793\(v=vs.85\)) per restituire i parametri di errore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetErrorParameters(ULONG ulRecordNum,   
   DISPPARAMS* pdispparams) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IErrorRecords::GetErrorParameters](/previous-versions/windows/desktop/ms715793\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  

## <a name="geterrorrecords"></a> Cdberrorinfo:: Geterrorrecords
Ottiene i record di errore per l'oggetto specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetErrorRecords(IUnknown* pUnk,   
   const IID& iid,   
   ULONG* pcRecords) throw();  

HRESULT GetErrorRecords(ULONG* pcRecords) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Interfaccia per l'oggetto per cui ottenere i record di errore.  
  
 *IID*  
 [in] IID dell'interfaccia associato all'errore.  
  
 *pcRecords*  
 [out] Un puntatore al conteggio dei record degli errori (in base uno).  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Usare il primo form della funzione se si desidera controllare l'interfaccia per ottenere le informazioni sull'errore da. In caso contrario, utilizzare la seconda forma.  
  
## <a name="see-also"></a>Vedere anche  
 [DBViewer](../../visual-cpp-samples.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)