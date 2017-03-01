---
title: Classe IPersistPropertyBagImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IPersistPropertyBagImpl
- ATL.IPersistPropertyBagImpl<T>
- ATL::IPersistPropertyBagImpl
- ATL::IPersistPropertyBagImpl<T>
- ATL.IPersistPropertyBagImpl
dev_langs:
- C++
helpviewer_keywords:
- IPersistPropertyBagImpl class
ms.assetid: 712af24d-99f8-40f2-9811-53b3ff6e5b19
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 901a6a6bf4097b6aa78a898254766f122bb2f959
ms.lasthandoff: 02/24/2017

---
# <a name="ipersistpropertybagimpl-class"></a>Classe IPersistPropertyBagImpl
Questa classe implementa **IUnknown** e consente a un oggetto salvare le proprietà in un contenitore di proprietà specificato dal client.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE IPersistPropertyBagImpl : public IPersistPropertyBag
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IPersistPropertyBagImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPersistPropertyBagImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|  
|[IPersistPropertyBagImpl::InitNew](#initnew)|Inizializza un oggetto appena creato. L'implementazione ATL restituisce `S_OK`.|  
|[IPersistPropertyBagImpl::Load](#load)|Carica le proprietà dell'oggetto da un contenitore di proprietà specificato dal client.|  
|[IPersistPropertyBagImpl::Save](#save)|Salva le proprietà dell'oggetto in un contenitore di proprietà specificato dal client.|  
  
## <a name="remarks"></a>Note  
 Il [IPersistPropertyBag](https://msdn.microsoft.com/library/aa768205.aspx) interfaccia consente a un oggetto salvare le proprietà in un contenitore di proprietà specificato dal client. Classe `IPersistPropertyBagImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **IPersistPropertyBag** funziona in combinazione con [IPropertyBag](https://msdn.microsoft.com/library/aa768196.aspx) e [IErrorLog](https://msdn.microsoft.com/library/aa768231.aspx). Queste due interfacce di quest'ultime devono essere implementate dal client. Tramite `IPropertyBag`, il client Salva e carica le singole proprietà dell'oggetto. Tramite **IErrorLog**, l'oggetto sia il client può segnalare gli eventuali errori rilevati.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPersistPropertyBag`  
  
 `IPersistPropertyBagImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-namegetclassida--ipersistpropertybagimplgetclassid"></a><a name="getclassid"></a>IPersistPropertyBagImpl::GetClassID  
 Recupera il CLSID dell'oggetto.  
  
```
STDMETHOD(GetClassID)(CLSID* pClassID);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPersist:: GetClassID](http://msdn.microsoft.com/library/windows/desktop/ms688664) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameinitnewa--ipersistpropertybagimplinitnew"></a><a name="initnew"></a>IPersistPropertyBagImpl::InitNew  
 Inizializza un oggetto appena creato.  
  
```
STDMETHOD(InitNew)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IPersistPropertyBag::InitNew](https://msdn.microsoft.com/library/aa768204.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameloada--ipersistpropertybagimplload"></a><a name="load"></a>IPersistPropertyBagImpl::Load  
 Carica le proprietà dell'oggetto da un contenitore di proprietà specificato dal client.  
  
```
STDMETHOD(Load)(LPPROPERTYBAG pPropBag, LPERRORLOG pErrorLog);
```  
  
### <a name="remarks"></a>Note  
 ATL utilizza il mapping di proprietà dell'oggetto per recuperare queste informazioni.  
  
 Vedere [IPersistPropertyBag:: Load](https://msdn.microsoft.com/library/aa768206.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesavea--ipersistpropertybagimplsave"></a><a name="save"></a>IPersistPropertyBagImpl::Save  
 Salva le proprietà dell'oggetto in un contenitore di proprietà specificato dal client.  
  
```
STDMETHOD(Save)(
    LPPROPERTYBAG pPropBag,
    BOOL fClearDirty,
    BOOL fSaveAllProperties);
```  
  
### <a name="remarks"></a>Note  
 ATL utilizza il mapping di proprietà dell'oggetto per archiviare queste informazioni. Per impostazione predefinita, questo metodo salva tutte le proprietà, indipendentemente dal valore di *fSaveAllProperties*.  
  
 Vedere [IPersistPropertyBag::Save](https://msdn.microsoft.com/library/aa768207.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [BEGIN_PROP_MAP](http://msdn.microsoft.com/library/bfe30be6-62c3-4dc2-bd49-21ef96f15427)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

