---
title: Classe IPersistStorageImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IPersistStorageImpl
- ATLCOM/ATL::IPersistStorageImpl
- ATLCOM/ATL::IPersistStorageImpl::GetClassID
- ATLCOM/ATL::IPersistStorageImpl::HandsOffStorage
- ATLCOM/ATL::IPersistStorageImpl::InitNew
- ATLCOM/ATL::IPersistStorageImpl::IsDirty
- ATLCOM/ATL::IPersistStorageImpl::Load
- ATLCOM/ATL::IPersistStorageImpl::Save
- ATLCOM/ATL::IPersistStorageImpl::SaveCompleted
dev_langs:
- C++
helpviewer_keywords:
- storage, ATL
- IPersistStorageImpl class
ms.assetid: d652f02c-239c-47c7-9a50-3e9fc3014fff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 634a7a7373f6686ad36b645a73613a4ae350bbab
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884701"
---
# <a name="ipersiststorageimpl-class"></a>Classe IPersistStorageImpl
Questa classe implementa il [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731) interfaccia.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE IPersistStorageImpl : public IPersistStorage
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `IPersistStorageImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPersistStorageImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|  
|[IPersistStorageImpl::HandsOffStorage](#handsoffstorage)|Indica all'oggetto per rilasciare tutti gli oggetti di archiviazione e passare alla modalità HandsOff. L'implementazione di ATL restituisce S_OK.|  
|[IPersistStorageImpl::InitNew](#initnew)|Inizializza una nuova risorsa di archiviazione.|  
|[IPersistStorageImpl::IsDirty](#isdirty)|Controlla se i dati dell'oggetto sono stato modificato dall'ultimo salvataggio.|  
|[IPersistStorageImpl::Load](#load)|Carica le proprietà dell'oggetto dalla risorsa di archiviazione specificato.|  
|[IPersistStorageImpl::Save](#save)|Salva le proprietà dell'oggetto nella risorsa di archiviazione specificato.|  
|[IPersistStorageImpl::SaveCompleted](#savecompleted)|Notifica a un oggetto che può restituire in modalità normale in cui scrivere il relativo oggetto di archiviazione. L'implementazione di ATL restituisce S_OK.|  
  
## <a name="remarks"></a>Note  
 `IPersistStorageImpl` implementa il [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731) interfaccia, che consente a un client di richiedere che il carico di oggetto e salvare i dati persistenti mediante una risorsa di archiviazione.  
  
 L'implementazione di questa classe è necessaria la classe `T` per rendere un'implementazione del `IPersistStreamInit` disponibile tramite interfaccia `QueryInterface`. In genere ciò significa che tale classe `T` deve derivare da [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), immettere un valore per `IPersistStreamInit` nel [mappa COM](http://msdn.microsoft.com/library/ead2a1e3-334d-44ad-bb1f-b94bb14c2333)e usare un [mappa proprietà](http://msdn.microsoft.com/library/bfe30be6-62c3-4dc2-bd49-21ef96f15427) per descrivere i dati persistenti della classe.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPersistStorage`  
  
 `IPersistStorageImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="getclassid"></a>  IPersistStorageImpl::GetClassID  
 Recupera il CLSID dell'oggetto.  
  
```
STDMETHOD(GetClassID)(CLSID* pClassID);
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPersist:: GetClassID](http://msdn.microsoft.com/library/windows/desktop/ms688664) in Windows SDK.  
  
##  <a name="handsoffstorage"></a>  IPersistStorageImpl::HandsOffStorage  
 Indica all'oggetto per rilasciare tutti gli oggetti di archiviazione e passare alla modalità HandsOff.  
  
```
STDMETHOD(HandsOffStorage)(void);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPersistStorage::HandsOffStorage](http://msdn.microsoft.com/library/windows/desktop/ms679742) in Windows SDK.  
  
##  <a name="initnew"></a>  IPersistStorageImpl::InitNew  
 Inizializza una nuova risorsa di archiviazione.  
  
```
STDMETHOD(InitNew)(IStorage*);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione di ATL viene delegata per i [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia.  
  
 Visualizzare [IPersistStorage:InitNew](http://msdn.microsoft.com/library/windows/desktop/ms687194) in Windows SDK.  
  
##  <a name="isdirty"></a>  IPersistStorageImpl::IsDirty  
 Controlla se i dati dell'oggetto sono stato modificato dall'ultimo salvataggio.  
  
```
STDMETHOD(IsDirty)(void);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione di ATL viene delegata per i [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia.  
  
 Visualizzare [IPersistStorage:IsDirty](http://msdn.microsoft.com/library/windows/desktop/ms683910) in Windows SDK.  
  
##  <a name="load"></a>  IPersistStorageImpl::Load  
 Carica le proprietà dell'oggetto dalla risorsa di archiviazione specificato.  
  
```
STDMETHOD(Load)(IStorage* pStorage);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione di ATL viene delegata per i [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia. `Load` Usa un flusso denominato "Contenuto" per recuperare i dati dell'oggetto. Il [salvare](#save) metodo originariamente crea questo flusso.  
  
 Visualizzare [IPersistStorage:Load](http://msdn.microsoft.com/library/windows/desktop/ms680557) in Windows SDK.  
  
##  <a name="save"></a>  IPersistStorageImpl::Save  
 Salva le proprietà dell'oggetto nella risorsa di archiviazione specificato.  
  
```
STDMETHOD(Save)(IStorage* pStorage, BOOL fSameAsLoad);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione di ATL viene delegata per i [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia. Quando si `Save` è la prima chiamata, viene creato un flusso denominato "Contenuto" nella risorsa di archiviazione specificato. Questo flusso viene quindi usato nelle chiamate successive a `Save` e alle chiamate al [carico](#load).  
  
 Visualizzare [IPersistStorage:Save](http://msdn.microsoft.com/library/windows/desktop/ms680680) in Windows SDK.  
  
##  <a name="savecompleted"></a>  IPersistStorageImpl::SaveCompleted  
 Notifica a un oggetto che può restituire in modalità normale in cui scrivere il relativo oggetto di archiviazione.  
  
```
STDMETHOD(SaveCompleted)(IStorage*);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPersistStorage:SaveCompleted](http://msdn.microsoft.com/library/windows/desktop/ms679713) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Flussi e archivi](http://msdn.microsoft.com/library/windows/desktop/aa380352)   
 [Classe IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)   
 [Classe IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
