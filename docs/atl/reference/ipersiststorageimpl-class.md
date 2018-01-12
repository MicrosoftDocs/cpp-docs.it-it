---
title: Classe IPersistStorageImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
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
dev_langs: C++
helpviewer_keywords:
- storage, ATL
- IPersistStorageImpl class
ms.assetid: d652f02c-239c-47c7-9a50-3e9fc3014fff
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0bb02425c906a9d468d53691469dd7e418afcad3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ipersiststorageimpl-class"></a>Classe IPersistStorageImpl
Questa classe implementa il [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731) interfaccia.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE IPersistStorageImpl : public IPersistStorage
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IPersistStorageImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPersistStorageImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|  
|[IPersistStorageImpl::HandsOffStorage](#handsoffstorage)|Indica l'oggetto per rilasciare tutti gli oggetti di archiviazione e passare alla modalità HandsOff. Restituisce l'implementazione di ATL `S_OK`.|  
|[IPersistStorageImpl::InitNew](#initnew)|Inizializza una nuova risorsa di archiviazione.|  
|[IPersistStorageImpl::IsDirty](#isdirty)|Controlla se i dati dell'oggetto è stato modificato dopo l'ultimo salvataggio.|  
|[IPersistStorageImpl::Load](#load)|Carica le proprietà dell'oggetto dalla risorsa di archiviazione specificato.|  
|[IPersistStorageImpl::Save](#save)|Salva le proprietà dell'oggetto di archiviazione specificato.|  
|[IPersistStorageImpl::SaveCompleted](#savecompleted)|Notifica a un oggetto che è possibile restituire in modalità normale in cui scrivere il relativo oggetto di archiviazione. Restituisce l'implementazione di ATL `S_OK`.|  
  
## <a name="remarks"></a>Note  
 `IPersistStorageImpl`implementa il [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731) interfaccia, che consente a un client di richiedere che il carico di oggetto e salvare i dati persistenti con uno spazio di archiviazione.  
  
 L'implementazione di questa classe richiede classe `T` per un'implementazione di rendere il `IPersistStreamInit` interfaccia disponibile tramite `QueryInterface`. In genere ciò significa che classe `T` deve derivare da [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), fornire una voce per `IPersistStreamInit` nel [mappa COM](http://msdn.microsoft.com/library/ead2a1e3-334d-44ad-bb1f-b94bb14c2333)e utilizzare un [mappingdiproprietà](http://msdn.microsoft.com/library/bfe30be6-62c3-4dc2-bd49-21ef96f15427) per descrivere i dati della classe.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPersistStorage`  
  
 `IPersistStorageImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="getclassid"></a>IPersistStorageImpl::GetClassID  
 Recupera il CLSID dell'oggetto.  
  
```
STDMETHOD(GetClassID)(CLSID* pClassID);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPersist:: GetClassID](http://msdn.microsoft.com/library/windows/desktop/ms688664) in Windows SDK.  
  
##  <a name="handsoffstorage"></a>IPersistStorageImpl::HandsOffStorage  
 Indica l'oggetto per rilasciare tutti gli oggetti di archiviazione e passare alla modalità HandsOff.  
  
```
STDMETHOD(HandsOffStorage)(void);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IPersistStorage::HandsOffStorage](http://msdn.microsoft.com/library/windows/desktop/ms679742) in Windows SDK.  
  
##  <a name="initnew"></a>IPersistStorageImpl::InitNew  
 Inizializza una nuova risorsa di archiviazione.  
  
```
STDMETHOD(InitNew)(IStorage*);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione di ATL delega al [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia.  
  
 Vedere [IPersistStorage:InitNew](http://msdn.microsoft.com/library/windows/desktop/ms687194) in Windows SDK.  
  
##  <a name="isdirty"></a>IPersistStorageImpl::IsDirty  
 Controlla se i dati dell'oggetto è stato modificato dopo l'ultimo salvataggio.  
  
```
STDMETHOD(IsDirty)(void);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione di ATL delega al [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia.  
  
 Vedere [IPersistStorage:IsDirty](http://msdn.microsoft.com/library/windows/desktop/ms683910) in Windows SDK.  
  
##  <a name="load"></a>IPersistStorageImpl::Load  
 Carica le proprietà dell'oggetto dalla risorsa di archiviazione specificato.  
  
```
STDMETHOD(Load)(IStorage* pStorage);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione di ATL delega al [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia. **Carico** utilizza un flusso denominato "Contenuto" per recuperare i dati dell'oggetto. Il [salvare](#save) metodo originariamente creato questo flusso.  
  
 Vedere [IPersistStorage:Load](http://msdn.microsoft.com/library/windows/desktop/ms680557) in Windows SDK.  
  
##  <a name="save"></a>IPersistStorageImpl::Save  
 Salva le proprietà dell'oggetto di archiviazione specificato.  
  
```
STDMETHOD(Save)(IStorage* pStorage, BOOL fSameAsLoad);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione di ATL delega al [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia. Quando **salvare** prima chiamata, viene creato un flusso denominato "Contenuto" nello spazio di archiviazione specificato. Il flusso viene quindi utilizzato in chiamate successive a **salvare** e nelle chiamate a [carico](#load).  
  
 Vedere [IPersistStorage:Save](http://msdn.microsoft.com/library/windows/desktop/ms680680) in Windows SDK.  
  
##  <a name="savecompleted"></a>IPersistStorageImpl::SaveCompleted  
 Notifica a un oggetto che è possibile restituire in modalità normale in cui scrivere il relativo oggetto di archiviazione.  
  
```
STDMETHOD(SaveCompleted)(IStorage*);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IPersistStorage:SaveCompleted](http://msdn.microsoft.com/library/windows/desktop/ms679713) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Flussi e archivi](http://msdn.microsoft.com/library/windows/desktop/aa380352)   
 [Classe IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)   
 [Classe IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
