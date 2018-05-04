---
title: Classe IPersistPropertyBagImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IPersistPropertyBagImpl
- ATLCOM/ATL::IPersistPropertyBagImpl
- ATLCOM/ATL::IPersistPropertyBagImpl::GetClassID
- ATLCOM/ATL::IPersistPropertyBagImpl::InitNew
- ATLCOM/ATL::IPersistPropertyBagImpl::Load
- ATLCOM/ATL::IPersistPropertyBagImpl::Save
dev_langs:
- C++
helpviewer_keywords:
- IPersistPropertyBagImpl class
ms.assetid: 712af24d-99f8-40f2-9811-53b3ff6e5b19
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 41d26b84fd4c113120afefd572caed8ab27214c8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ipersistpropertybagimpl-class"></a>Classe IPersistPropertyBagImpl
Questa classe implementa **IUnknown** e consente a un oggetto salvare le proprietà in un contenitore di proprietà specificato dal client.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE IPersistPropertyBagImpl : public IPersistPropertyBag
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IPersistPropertyBagImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPersistPropertyBagImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|  
|[IPersistPropertyBagImpl::InitNew](#initnew)|Inizializza un oggetto appena creato. Restituisce l'implementazione di ATL `S_OK`.|  
|[IPersistPropertyBagImpl::Load](#load)|Carica le proprietà dell'oggetto da un contenitore di proprietà specificato dal client.|  
|[IPersistPropertyBagImpl::Save](#save)|Salva le proprietà dell'oggetto in un contenitore di proprietà specificato dal client.|  
  
## <a name="remarks"></a>Note  
 Il [IPersistPropertyBag](https://msdn.microsoft.com/library/aa768205.aspx) interfaccia consente a un oggetto salvare le proprietà in un contenitore di proprietà specificato dal client. Classe `IPersistPropertyBagImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **IPersistPropertyBag** funziona in combinazione con [IPropertyBag](https://msdn.microsoft.com/library/aa768196.aspx) e [IErrorLog](https://msdn.microsoft.com/library/aa768231.aspx). Queste due interfacce di quest'ultime devono essere implementate dal client. Tramite `IPropertyBag`, il client Salva e carica le proprietà dell'oggetto singoli. Tramite **IErrorLog**, l'oggetto sia il client può segnalare gli eventuali errori rilevati.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPersistPropertyBag`  
  
 `IPersistPropertyBagImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="getclassid"></a>  IPersistPropertyBagImpl::GetClassID  
 Recupera il CLSID dell'oggetto.  
  
```
STDMETHOD(GetClassID)(CLSID* pClassID);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPersist:: GetClassID](http://msdn.microsoft.com/library/windows/desktop/ms688664) in Windows SDK.  
  
##  <a name="initnew"></a>  IPersistPropertyBagImpl::InitNew  
 Inizializza un oggetto appena creato.  
  
```
STDMETHOD(InitNew)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IPersistPropertyBag::InitNew](https://msdn.microsoft.com/library/aa768204.aspx) in Windows SDK.  
  
##  <a name="load"></a>  IPersistPropertyBagImpl::Load  
 Carica le proprietà dell'oggetto da un contenitore di proprietà specificato dal client.  
  
```
STDMETHOD(Load)(LPPROPERTYBAG pPropBag, LPERRORLOG pErrorLog);
```  
  
### <a name="remarks"></a>Note  
 ATL utilizza il mapping di proprietà dell'oggetto per recuperare queste informazioni.  
  
 Vedere [IPersistPropertyBag:: Load](https://msdn.microsoft.com/library/aa768206.aspx) in Windows SDK.  
  
##  <a name="save"></a>  IPersistPropertyBagImpl::Save  
 Salva le proprietà dell'oggetto in un contenitore di proprietà specificato dal client.  
  
```
STDMETHOD(Save)(
    LPPROPERTYBAG pPropBag,
    BOOL fClearDirty,
    BOOL fSaveAllProperties);
```  
  
### <a name="remarks"></a>Note  
 ATL Usa il mapping di proprietà dell'oggetto per archiviare queste informazioni. Per impostazione predefinita, questo metodo consente di salvare tutte le proprietà, indipendentemente dal valore di *fSaveAllProperties*.  
  
 Vedere [IPersistPropertyBag::Save](https://msdn.microsoft.com/library/aa768207.aspx) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [BEGIN_PROP_MAP](property-map-macros.md#begin_prop_map)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
