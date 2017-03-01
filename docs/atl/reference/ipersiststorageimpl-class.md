---
title: Classe IPersistStorageImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::IPersistStorageImpl
- ATL::IPersistStorageImpl<T>
- ATL.IPersistStorageImpl<T>
- IPersistStorageImpl
- ATL.IPersistStorageImpl
dev_langs:
- C++
helpviewer_keywords:
- storage, ATL
- IPersistStorageImpl class
ms.assetid: d652f02c-239c-47c7-9a50-3e9fc3014fff
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: a5a855f81072316510efb47c3f9650a5feafa39b
ms.lasthandoff: 02/24/2017

---
# <a name="ipersiststorageimpl-class"></a>Classe IPersistStorageImpl
Questa classe implementa il [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731) interfaccia.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE IPersistStorageImpl : public IPersistStorage
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IPersistStorageImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPersistStorageImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|  
|[IPersistStorageImpl::HandsOffStorage](#handsoffstorage)|Indica all'oggetto per rilasciare tutti gli oggetti di archiviazione e attivare la modalità di HandsOff. L'implementazione ATL restituisce `S_OK`.|  
|[IPersistStorageImpl::InitNew](#initnew)|Inizializza una nuova risorsa di archiviazione.|  
|[IPersistStorageImpl::IsDirty](#isdirty)|Controlla se i dati dell'oggetto è sono modificato dopo l'ultimo salvataggio.|  
|[IPersistStorageImpl::Load](#load)|Carica le proprietà dell'oggetto dal percorso di archiviazione specificato.|  
|[IPersistStorageImpl::Save](#save)|Salva le proprietà dell'oggetto di archiviazione specificato.|  
|[IPersistStorageImpl::SaveCompleted](#savecompleted)|Notifica a un oggetto che è possibile tornare alla modalità normale in cui scrivere l'oggetto di archiviazione. L'implementazione ATL restituisce `S_OK`.|  
  
## <a name="remarks"></a>Note  
 `IPersistStorageImpl`implementa il [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731) interfaccia, che consente a un client di richiedere che il carico di oggetto e salvare i dati persistenti tramite una risorsa di archiviazione.  
  
 L'implementazione di questa classe è necessaria la classe `T` per rendere un'implementazione di `IPersistStreamInit` interfaccia disponibile tramite `QueryInterface`. In genere ciò significa che tale classe `T` deve derivare da [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), fornire una voce per `IPersistStreamInit` nel [mappa COM](http://msdn.microsoft.com/library/ead2a1e3-334d-44ad-bb1f-b94bb14c2333)e utilizzare un [mapping di proprietà](http://msdn.microsoft.com/library/bfe30be6-62c3-4dc2-bd49-21ef96f15427) per descrivere i dati persistenti della classe.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPersistStorage`  
  
 `IPersistStorageImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-namegetclassida--ipersiststorageimplgetclassid"></a><a name="getclassid"></a>IPersistStorageImpl::GetClassID  
 Recupera il CLSID dell'oggetto.  
  
```
STDMETHOD(GetClassID)(CLSID* pClassID);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPersist:: GetClassID](http://msdn.microsoft.com/library/windows/desktop/ms688664) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namehandsoffstoragea--ipersiststorageimplhandsoffstorage"></a><a name="handsoffstorage"></a>IPersistStorageImpl::HandsOffStorage  
 Indica all'oggetto per rilasciare tutti gli oggetti di archiviazione e attivare la modalità di HandsOff.  
  
```
STDMETHOD(HandsOffStorage)(void);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IPersistStorage::HandsOffStorage](http://msdn.microsoft.com/library/windows/desktop/ms679742) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameinitnewa--ipersiststorageimplinitnew"></a><a name="initnew"></a>IPersistStorageImpl::InitNew  
 Inizializza una nuova risorsa di archiviazione.  
  
```
STDMETHOD(InitNew)(IStorage*);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione ATL delega per il [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia.  
  
 Vedere [IPersistStorage:InitNew](http://msdn.microsoft.com/library/windows/desktop/ms687194) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameisdirtya--ipersiststorageimplisdirty"></a><a name="isdirty"></a>IPersistStorageImpl::IsDirty  
 Controlla se i dati dell'oggetto è sono modificato dopo l'ultimo salvataggio.  
  
```
STDMETHOD(IsDirty)(void);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione ATL delega per il [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia.  
  
 Vedere [IPersistStorage:IsDirty](http://msdn.microsoft.com/library/windows/desktop/ms683910) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameloada--ipersiststorageimplload"></a><a name="load"></a>IPersistStorageImpl::Load  
 Carica le proprietà dell'oggetto dal percorso di archiviazione specificato.  
  
```
STDMETHOD(Load)(IStorage* pStorage);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione ATL delega per il [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia. **Carico** utilizza un flusso denominato "Contenuto" per recuperare i dati dell'oggetto. Il [salvare](#save) metodo originariamente creato questo flusso.  
  
 Vedere [IPersistStorage:Load](http://msdn.microsoft.com/library/windows/desktop/ms680557) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesavea--ipersiststorageimplsave"></a><a name="save"></a>IPersistStorageImpl::Save  
 Salva le proprietà dell'oggetto di archiviazione specificato.  
  
```
STDMETHOD(Save)(IStorage* pStorage, BOOL fSameAsLoad);
```  
  
### <a name="remarks"></a>Note  
 L'implementazione ATL delega per il [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interfaccia. Quando **salvare** viene chiamato, viene creato un flusso denominato "Contenuto" nello spazio di archiviazione specificato. Questo flusso viene quindi utilizzato in chiamate successive a **salvare** e nelle chiamate a [carico](#load).  
  
 Vedere [IPersistStorage:Save](http://msdn.microsoft.com/library/windows/desktop/ms680680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesavecompleteda--ipersiststorageimplsavecompleted"></a><a name="savecompleted"></a>IPersistStorageImpl::SaveCompleted  
 Notifica a un oggetto che è possibile tornare alla modalità normale in cui scrivere l'oggetto di archiviazione.  
  
```
STDMETHOD(SaveCompleted)(IStorage*);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IPersistStorage:SaveCompleted](http://msdn.microsoft.com/library/windows/desktop/ms679713) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Flussi e archivi](http://msdn.microsoft.com/library/windows/desktop/aa380352)   
 [Classe IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)   
 [Classe IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

