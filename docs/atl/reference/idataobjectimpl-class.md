---
title: Classe IDataObjectImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IDataObjectImpl
- ATLCTL/ATL::IDataObjectImpl
- ATLCTL/ATL::IDataObjectImpl::DAdvise
- ATLCTL/ATL::IDataObjectImpl::DUnadvise
- ATLCTL/ATL::IDataObjectImpl::EnumDAdvise
- ATLCTL/ATL::IDataObjectImpl::EnumFormatEtc
- ATLCTL/ATL::IDataObjectImpl::FireDataChange
- ATLCTL/ATL::IDataObjectImpl::GetCanonicalFormatEtc
- ATLCTL/ATL::IDataObjectImpl::GetData
- ATLCTL/ATL::IDataObjectImpl::GetDataHere
- ATLCTL/ATL::IDataObjectImpl::QueryGetData
- ATLCTL/ATL::IDataObjectImpl::SetData
dev_langs:
- C++
helpviewer_keywords:
- data transfer [C++]
- data transfer [C++], Uniform Data Transfer
- IDataObjectImpl class
- IDataObject, ATL implementation
ms.assetid: b680f0f7-7795-40a1-a0f6-f48768201c89
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a3ffcdd8cc8320b2534d928171fe75619062b300
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="idataobjectimpl-class"></a>Classe IDataObjectImpl
Questa classe fornisce metodi per il supporto Uniform Data Transfer e la gestione delle connessioni.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class IDataObjectImpl
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IDataObjectImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDataObjectImpl::DAdvise](#dadvise)|Stabilisce una connessione tra l'oggetto dati e un sink di notifica. In questo modo il sink di notifica ricevere le notifiche delle modifiche nell'oggetto.|  
|[IDataObjectImpl::DUnadvise](#dunadvise)|Termina una connessione precedentemente stabilita tramite `DAdvise`.|  
|[IDataObjectImpl::EnumDAdvise](#enumdadvise)|Crea un enumeratore per scorrere le connessioni consultive correnti.|  
|[IDataObjectImpl::EnumFormatEtc](#enumformatetc)|Crea un enumeratore per scorrere il **FORMATETC** strutture supportate dall'oggetto dati. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IDataObjectImpl::FireDataChange](#firedatachange)|Invia una notifica di modifica al ogni sink di notifica.|  
|[IDataObjectImpl::GetCanonicalFormatEtc](#getcanonicalformatetc)|Recupera un logicamente equivalente **FORMATETC** struttura che è più complesso. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IDataObjectImpl::GetData](#getdata)|Trasferisce i dati dall'oggetto dati al client. I dati sono descritti un **FORMATETC** struttura e viene trasferito tramite un **STGMEDIUM** struttura.|  
|[IDataObjectImpl::GetDataHere](#getdatahere)|Simile a `GetData`, ma il client deve allocare il **STGMEDIUM** struttura. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IDataObjectImpl::QueryGetData](#querygetdata)|Determina se l'oggetto dati supporta una particolare **FORMATETC** struttura per il trasferimento dei dati. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IDataObjectImpl::SetData](#setdata)|Trasferisce i dati dal client per l'oggetto dati. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
  
## <a name="remarks"></a>Note  
 Il [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) interfaccia fornisce i metodi per supportare Uniform Data Transfer. `IDataObject` utilizza le strutture di formato standard [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) e [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) per recuperare e archiviare i dati.  
  
 `IDataObject` gestisce inoltre le connessioni per sink per gestire le notifiche di modifica dei dati di notifica. Affinché il client di ricevere le notifiche di modifica di dati dall'oggetto dati, il client deve implementare il [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513) interfaccia in un oggetto denominato un sink di notifica. Quando il client chiama quindi **IDataObject::DAdvise**, viene stabilita una connessione tra l'oggetto dati e il sink di notifica.  
  
 Classe `IDataObjectImpl` fornisce un'implementazione predefinita di `IDataObject` e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IDataObject`  
  
 `IDataObjectImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="dadvise"></a>  IDataObjectImpl::DAdvise  
 Stabilisce una connessione tra l'oggetto dati e un sink di notifica.  
  
```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```  
  
### <a name="remarks"></a>Note  
 In questo modo il sink di notifica ricevere le notifiche delle modifiche nell'oggetto.  
  
 Per terminare la connessione, chiamare [DUnadvise](#dunadvise).  
  
 Vedere [IDataObject::DAdvise](http://msdn.microsoft.com/library/windows/desktop/ms692579) in Windows SDK.  
  
##  <a name="dunadvise"></a>  IDataObjectImpl::DUnadvise  
 Termina una connessione precedentemente stabilita tramite [DAdvise](#dadvise).  
  
```
HRESULT DUnadvise(DWORD dwConnection);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDataObject::DUnadvise](http://msdn.microsoft.com/library/windows/desktop/ms692448) in Windows SDK.  
  
##  <a name="enumdadvise"></a>  IDataObjectImpl::EnumDAdvise  
 Crea un enumeratore per scorrere le connessioni consultive correnti.  
  
```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDataObject::EnumDAdvise](http://msdn.microsoft.com/library/windows/desktop/ms680127) in Windows SDK.  
  
##  <a name="enumformatetc"></a>  IDataObjectImpl::EnumFormatEtc  
 Crea un enumeratore per scorrere il **FORMATETC** strutture supportate dall'oggetto dati.  
  
```
HRESULT EnumFormatEtc(  
    DWORD dwDirection,
    IEnumFORMATETC** ppenumFormatEtc);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDataObject::EnumFormatEtc](http://msdn.microsoft.com/library/windows/desktop/ms683979) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
##  <a name="firedatachange"></a>  IDataObjectImpl::FireDataChange  
 Invia una notifica di modifica al ogni sink di notifica che è attualmente gestito.  
  
```
HRESULT FireDataChange();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="getcanonicalformatetc"></a>  IDataObjectImpl::GetCanonicalFormatEtc  
 Recupera un logicamente equivalente **FORMATETC** struttura che è più complesso.  
  
```
HRESULT GetCanonicalFormatEtc(FORMATETC* pformatetcIn, FORMATETC* pformatetcOut);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IDataObject::GetCanonicalFormatEtc](http://msdn.microsoft.com/library/windows/desktop/ms680685) in Windows SDK.  
  
##  <a name="getdata"></a>  IDataObjectImpl::GetData  
 Trasferisce i dati dall'oggetto dati al client.  
  
```
HRESULT GetData(
    FORMATETC* pformatetcIn,
    STGMEDIUM* pmedium);
```  
  
### <a name="remarks"></a>Note  
 Il *pformatetcIn* parametro deve specificare un tipo di supporto di archiviazione di **TYMED_MFPICT**.  
  
 Vedere [IDataObject:: GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) in Windows SDK.  
  
##  <a name="getdatahere"></a>  IDataObjectImpl::GetDataHere  
 Simile a `GetData`, ma il client deve allocare il **STGMEDIUM** struttura.  
  
```
HRESULT GetDataHere(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IDataObject::GetDataHere](http://msdn.microsoft.com/library/windows/desktop/ms687266) in Windows SDK.  
  
##  <a name="querygetdata"></a>  IDataObjectImpl::QueryGetData  
 Determina se l'oggetto dati supporta una particolare **FORMATETC** struttura per il trasferimento dei dati.  
  
```
HRESULT QueryGetData(FORMATETC* pformatetc);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IDataObject::QueryGetData](http://msdn.microsoft.com/library/windows/desktop/ms680637) in Windows SDK.  
  
##  <a name="setdata"></a>  IDataObjectImpl::SetData  
 Trasferisce i dati dal client per l'oggetto dati.  
  
```
HRESULT SetData(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium,
    BOOL fRelease);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IDataObject::SetData](http://msdn.microsoft.com/library/windows/desktop/ms686626) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
